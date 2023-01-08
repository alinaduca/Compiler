%{
#include "compilator.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
%}
%union {
    float floatval;
    int intval;
    char* strval;
    struct AST* tree;
}

%token <strval> LEQ GEQ NEQ EQ RETURN BFCT EFCT
%token <strval> AND OR
%token <strval> ID
%token <strval> STRING
%token <strval> TIP ASSIGN BGIN END CLASS ECLASS IF EIF ELSE
%token <strval> FOR EFOR CONSTANT WHILE EWHILE DO EVAL TYPEOF
%token <strval> CHAR
%token <intval> NR
%token <floatval> NR_FLOAT
%type  <strval> lista_apel
%type  <strval> opr
%type  <intval> cond  
%type  <strval> param
%type  <strval> lista_param
%type  <strval> pseudo_e
%type <tree> e
%start progr
%left OR 
%left AND
%left NEQ EQ
%left LEQ GEQ '<' '>'
%left '-' '+'
%left '/' '*'
%%

progr: sectiunea1 rest1 {printf("program corect sintactic\n");}
     ;

rest1 : sectiunea2 rest2
      ;

rest2 : sectiunea3 bloc
      ;

sectiunea1 : declaratieVariabila ';'
           | sectiunea1 declaratieVariabila ';'
           ;

sectiunea2 : declaratieFunctie 
           | sectiunea2 declaratieFunctie 
           ;

sectiunea3 : clasa
           | sectiunea3 clasa
           ;

declaratieVariabila : TIP lista_id { addInTable(0, 0, $1, "tip", 0, 0, "", "", 0, yylineno); }
                    | CONSTANT TIP lista_id {addInTable(1, 0, $1, "tip", 0, 0, "", "", 0, yylineno);}
                    ;

declaratieVariabilaClasa : TIP lista_id { addInTable(0, 0, $1, "tip", 0, 0, "", "", 1, yylineno); }
                         | CONSTANT TIP lista_id {addInTable(1, 0, $1, "tip", 0, 0, "", "", 1, yylineno);}
                         ;

declaratieFunctie : TIP ID '(' lista_param ')' BFCT list EFCT { addInTableFunctions($1, $2, "tip", yylineno, 0, $4);}
                  | TIP ID '(' ')' BFCT list EFCT { addInTableFunctions($1, $2, "tip", yylineno, 0, "");}
                  | TIP ID '(' lista_param ')' BFCT list RETURN e ';' EFCT { int val = evalAST($9, yylineno); addInTableFunctions($1, $2, "tip", yylineno, 0, $4);}
                  | TIP ID '(' ')' BFCT list RETURN e ';' EFCT { int val = evalAST($8, yylineno); addInTableFunctions($1, $2, "tip", yylineno, 0, "");}
                  ;

declaratieFunctieClasa : TIP ID '(' lista_param ')' { addInTableFunctions($1, $2, "tip", yylineno, 1, $4);}
                       | TIP ID '(' ')' { addInTableFunctions($1, $2, "tip", yylineno, 1, "");}
                       ;

lista_param : param {$$ = $1;} 
            | param ',' lista_param { $$ = ConstruiescRasp($1, $3, ",");}
            ;
            
param : TIP ID {
                $$ = ConstruiescRasp($1, $2, " ");
               }
      ; 

clasa : CLASS ID interior_clasa ECLASS {Clasa($2);}
      ;

sectiuneaclasa1 : declaratieVariabilaClasa ';'
                | sectiuneaclasa1 declaratieVariabilaClasa ';'
                ;

sectiuneaclasa2 : declaratieFunctieClasa ';'
                | sectiuneaclasa2 declaratieFunctieClasa ';'
                ;

interior_clasa : sectiuneaclasa1 sectiuneaclasa2
               | sectiuneaclasa1
               | sectiuneaclasa2
               ;

lista_id : ID {addInTable(0, 0, $1, "variabila", 0, 0, "", "", 0, yylineno);}
         | ID '[' NR ']' { addInTable(0, $3, $1, "variabila", 0, 0, "", "", 0, yylineno);}
         | ID ',' lista_id { addInTable(0, 0, $1, "variabila", 0, 0, "", "", 0, yylineno);}
         | ID '[' NR ']' ',' lista_id { addInTable(0, $3, $1, "variabila", 0, 0, "", "", 0, yylineno);}
         | ID ASSIGN e { int val = Eval($3, yylineno); addInTable(0, 0, $1, "variabila", val, 0, "", "", 0, yylineno);}
         | ID ASSIGN e ',' lista_id { int val = Eval($3, yylineno); addInTable(0, 0, $1, "variabila", 0, 0, "", "", 0, yylineno);}
         | ID ASSIGN NR_FLOAT { addInTable(0, 0, $1, "variabila", 0, $3, "", "", 0, yylineno);}
         | ID ASSIGN NR_FLOAT ',' lista_id { addInTable(0, 0, $1, "variabila", 0, $3, "", "", 0, yylineno);}
         | ID ASSIGN STRING { addInTable(0, 0, $1, "variabila", 0, 0, "", $3, 0, yylineno);}
         | ID ASSIGN STRING ',' lista_id { addInTable(0, 0, $1, "variabila", 0, 0, "", $3, 0, yylineno);}
         | ID ASSIGN CHAR { addInTable(0, 0, $1, "variabila", 0, 0, $3, "", 0, yylineno);}
         | ID ASSIGN CHAR ',' lista_id { addInTable(0, 0, $1, "variabila", 0, 0, $3, "", 0, yylineno);}
         ;
      
/* bloc */
bloc : BGIN list END
     ;
     
/* lista instructiuni */
list : statement ';' 
     | list statement ';'
     | list if 
     | list for
     | list do
     | list while
     ;

/* instructiune */
statement: ID ASSIGN e  { 
                            Verif($1, yylineno, 0);
                            if(strcmp(getIdType($1), "int"))
                            {
                                sprintf(errMsg, "Linia %d, tip de date diferit", yylineno);
                                print_error();
                                exit(0);
                            }
                            int val = Eval($3, yylineno);
                            actualizareTabel($1, "int", val, yylineno, 0, "");
                        }
         | ID '(' lista_apel ')' {VerifFct($1, $3, yylineno);}
         | TYPEOF '(' pseudo_e ')' {printf("%s\n", $3);}
         | EVAL '(' e ')' {printf("%d\n", Eval($3, yylineno));}
         | ID '.' ID ASSIGN e { 
                                snprintf(buff,100,"%s.%s", $1, $3);
                                Verif(buff, yylineno, 0);
                                if(strcmp(getIdType($1), "int"))
                                {
                                    sprintf(errMsg, "Linia %d, tip de date diferit", yylineno);
                                    print_error();
                                    exit(0);
                                }
                                int val = Eval($5, yylineno);
                                actualizareTabel(buff, "int", val, yylineno, 0, "");
                              }
         | ID ASSIGN NR_FLOAT {
                                Verif($1, yylineno, 0);
                                if(strcmp(getIdType($1), "float"))
                                {
                                    sprintf(errMsg, "Linia %d, tip de date diferit", yylineno);
                                    print_error();
                                    exit(0);
                                }
                                actualizareTabel($1, "float", 0, yylineno, $3, "");
                              }
         | ID '.' ID '(' lista_apel ')' {
                                            snprintf(buff,100,"%s.%s", $1, $3);
                                            VerifFct(buff, $5, yylineno);

                                        }
         | ID '[' NR ']' ASSIGN e { Verif($1, yylineno, $3);}
         ;

cond : '(' cond ')' {$$ = $2;}
     | cond AND cond { int rez1=$1; int rez2=$3; 
                       $$=(rez1 && rez2);
                     }
     | cond OR cond { int rez1=$1; int rez2=$3;
                      $$=(rez1 || rez2);
                    }
     | e opr e { 
                int rez1=evalAST($1, yylineno); int rez2=evalAST($3, yylineno);
                if (strcmp($2, "<=")) $$=(rez1 <= rez2);
                if (strcmp($2, ">=")) $$=(rez1 >= rez2);
                if (strcmp($2, "!=")) $$=(rez1 != rez2);
                if (strcmp($2, "==")) $$=(rez1 == rez2);
                if (strcmp($2, ">")) $$=(rez1 > rez2);
                if (strcmp($2, "<")) $$=(rez1 < rez2);
                }
     ; 

opr : LEQ {$$ = $1;}
    | GEQ {$$ = $1;}
    | NEQ {$$ = $1;}
    | EQ  {$$ = $1;}
    | '>' {$$ = ">";}
    | '<' {$$ = "<";}
    ;

if : IF '(' cond ')' list EIF
   | IF '(' cond ')' list ELSE list EIF
   ;

for : FOR '(' TIP ID ASSIGN e ';' cond ';' statement ')' list EFOR
    | FOR '(' ID ASSIGN e ';' cond ';' statement ')' list EFOR
    ;

do : DO list WHILE '(' cond ')' ';'
   ;

while : WHILE '(' cond ')' list EWHILE
      ;

e : e '+' e { $$ = buildAST("+", $1, $3, OPERATOR); }
  | e '-' e { $$ = buildAST("-", $1, $3, OPERATOR); }
  | e '*' e { $$ = buildAST("*", $1, $3, OPERATOR); }
  | e '/' e { $$ = buildAST("/", $1, $3, OPERATOR); }
  | '(' e ')' { $$ = $2; }
  | ID { Verif($1, yylineno, 0); $$ = buildAST($1, NULL, NULL, IDENTIFICATOR);}
  | NR { char nr[100]; bzero(&nr, 100); sprintf(nr, "%d", $1); $$ = buildAST(nr, NULL, NULL, NUMAR); }
  | ID '[' NR ']' {Verif($1, yylineno, 1); int val = getArrVal($1, $3, yylineno); char nr[100]; bzero(&nr, 100); sprintf(nr, "%d", val); $$ = buildAST(nr, NULL, NULL, NUMAR); }
  | ID '(' lista_apel ')' { VerifFct($1, $3, yylineno);
                            $$ = buildAST("0", NULL, NULL, NUMAR);
                          }
  | ID '.' ID { snprintf(buff,100,"%s.%s", $1, $3); Verif(buff, yylineno, 0);  $$ = buildAST($1, NULL, NULL, IDENTIFICATOR);}
  | ID '.' ID '(' lista_apel ')' { snprintf(buff,100,"%s.%s", $1, $3); VerifFct(buff, $3, yylineno); $$ = buildAST("0", NULL, NULL, NUMAR);}
  ;

pseudo_e : pseudo_e '+' pseudo_e {
                                    if(strcmp($1, $3))
                                    {
                                        sprintf(errMsg, "Linia %d, tip de date diferit!", yylineno);
                                        print_error();
                                        exit(0);
                                    }
                                    $$ = $1;
                                 }
         | pseudo_e '-' pseudo_e {
                                    if(strcmp($1, $3))
                                    {
                                        sprintf(errMsg, "Linia %d, tip de date diferit!", yylineno);
                                        print_error();
                                        exit(0);
                                    }
                                    $$ = $1;
                                 }
         | pseudo_e '/' pseudo_e {
                                    if(strcmp($1, $3))
                                    {
                                        sprintf(errMsg, "Linia %d, tip de date diferit!", yylineno);
                                        print_error();
                                        exit(0);
                                    }
                                    $$ = $1;
                                 }
         | pseudo_e '*' pseudo_e {
                                    if(strcmp($1, $3))
                                    {
                                        sprintf(errMsg, "Linia %d, tip de date diferit!", yylineno);
                                        print_error();
                                        exit(0);
                                    }
                                    $$ = $1;
                                 }
         | '(' pseudo_e ')' { $$ = $2; }
         | ID {Verif($1, yylineno, 0); $$ = getIdType($1);}
         | NR {$$ = "int";}
         | NR_FLOAT {$$ = "float";}
         | ID '[' NR ']' {Verif($1, yylineno, 1); $$ = getIdType($1);}
         | ID '(' lista_apel ')' { VerifFct($1, $3, yylineno); $$ = FctRetType($1);}
         | ID '.' ID {snprintf(buff,100,"%s.%s", $1, $3); Verif($1, yylineno, 1); $$ = getIdType(buff);}
         | ID '.' ID '(' lista_apel ')' { snprintf(buff,100,"%s.%s", $1, $3); VerifFct(buff, $5, yylineno); $$ = FctRetType(buff);}
         ;

lista_apel : e {
                struct AST* tree = $1;
                if(tree->st == NULL && tree->dr == NULL)
                {
                    if(tree->nodeType == IDENTIFICATOR)
                        $$ = getIdType(tree->nume);
                    else
                        $$ = "int";
                }
                else
                    $$ = "int";
            }
           | lista_apel ',' e {
                    struct AST* tree = $3;
                    char tip[20];
                        if(tree->st == NULL && tree->dr == NULL)
                        {
                            if(tree->nodeType == IDENTIFICATOR)
                                strcpy(tip, getIdType(tree->nume));
                            else
                                strcpy(tip, "int");
                        }
                        else
                            strcpy(tip, "int");
                        strcpy(buff, $1);
                        strcat(buff, ",");
                        strcat(buff, tip);
                        $$ = buff;
                        // printf("%s.\n", tip);
                }
           | NR_FLOAT {$$ = "float";}
           | lista_apel ',' NR_FLOAT { snprintf(buff,100,"%s,float",$1); $$ = buff;}
           | CHAR {$$ = "char";}
           | lista_apel ',' CHAR {snprintf(buff,100,"%s,char",$1); $$ = buff;}
           | STRING {$$ = "string";}
           | lista_apel ',' STRING {snprintf(buff,100,"%s,string",$1); $$ = buff;}
           ;

%%

int yyerror(char * s)
{
    printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv)
{
    fd = open("symbol_table.txt", O_RDWR|O_TRUNC);
    fd1 = open("symbol_table_functions.txt", O_RDWR|O_TRUNC);
    initialize();
    yyin = fopen(argv[1],"r");
    yyparse();
    printVars(fd);
    printFunctions(fd1);
}