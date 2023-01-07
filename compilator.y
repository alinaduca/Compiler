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
%token LEQ GEQ NEQ EQ
%token AND OR
%token <strval> ID
%token <strval> STRING
%token <strval> TIP ASSIGN BGIN END CLASS ECLASS IF EIF
%token <strval> OPR FOR EFOR CONSTANT WHILE EWHILE DO EVAL TYPEOF
%token <strval> CHAR
%token <intval> NR
%token <floatval> NR_FLOAT
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

sectiunea2 : declaratieFunctie ';'
           | sectiunea2 declaratieFunctie ';'
           ;

sectiunea3 : clasa
           | sectiunea3 clasa
           ;

declaratieVariabila : TIP lista_id { snprintf(buff,100,"(%s)\n", $1); write(fd, buff, strlen(buff));addInTable(0, 0, $1, "tip", 0, 0, "", ""); }
                    | CONSTANT TIP lista_id {addInTable(1, 0, $1, "tip", 0, 0, "", "");}
                    ;

declaratieFunctie : TIP ID '(' lista_param ')' { snprintf(buff,100,"[FUNCTION] %s (%s) \n",$1, $2); write(fd1, buff, strlen(buff));}
                  | TIP ID '(' ')' { snprintf(buff,100,"[FUNCTION] %s (%s) \n",$1, $2); write(fd1, buff, strlen(buff));}
                  ;

clasa : CLASS ID interior_clasa ECLASS 
      ;

sectiuneaclasa1 : declaratieVariabila ';'
                | sectiuneaclasa1 declaratieVariabila ';'
                ;

sectiuneaclasa2 : declaratieFunctie ';'
           | sectiuneaclasa2 declaratieFunctie ';'
           ;

interior_clasa : sectiuneaclasa1 sectiuneaclasa2
               | sectiuneaclasa1
               | sectiuneaclasa2
               ;

lista_id : ID { snprintf(buff,100,"%s ",$1); write(fd, buff, strlen(buff)); addInTable(0, 0, $1, "variabila", 0, 0, "", "");}
         | ID '[' NR ']' { snprintf(buff,100,"%s[%d] ",$1, $3); write(fd, buff, strlen(buff)); addInTable(0, $3, $1, "variabila", 0, 0, "", "");}
         | ID ',' lista_id { snprintf(buff,100,"%s ",$1); write(fd, buff, strlen(buff));  addInTable(0, 0, $1, "variabila", 0, 0, "", "");}
         | ID '[' NR ']' ',' lista_id { snprintf(buff,100,"%s[%d] ",$1, $3); write(fd, buff, strlen(buff)); addInTable(0, $3, $1, "variabila", 0, 0, "", "");}
         | ID ASSIGN e { snprintf(buff,100,"%s ",$1); write(fd, buff, strlen(buff)); addInTable(0, 0, $1, "variabila", 0, 0, "", "");}
         | ID ASSIGN e ',' lista_id { snprintf(buff,100,"%s ",$1); write(fd, buff, strlen(buff)); addInTable(0, 0, $1, "variabila", 0, 0, "", "");}
         | ID ASSIGN STRING { snprintf(buff,100,"%s ",$1); write(fd, buff, strlen(buff)); addInTable(0, 0, $1, "variabila", 0, 0, "", $3);}
         | ID ASSIGN STRING ',' lista_id { snprintf(buff,100,"%s ",$1); write(fd, buff, strlen(buff)); addInTable(0, 0, $1, "variabila", 0, 0, "", $3);}
         | ID ASSIGN CHAR { snprintf(buff,100,"%s ",$1); write(fd, buff, strlen(buff)); addInTable(0, 0, $1, "variabila", 0, 0, $3, "");}
         | ID ASSIGN CHAR ',' lista_id { snprintf(buff,100,"%s ",$1); write(fd, buff, strlen(buff)); addInTable(0, 0, $1, "variabila", 0, 0, $3, "");}
         ;

lista_param : param
            | lista_param ','  param
            ;
            
param : TIP ID  { snprintf(buff,100,"%s (%s) ",$1, $2); write(fd1, buff, strlen(buff));}
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
statement: ID ASSIGN e { Verif($1, yylineno);/*snprintf(buff,100," = %s\n", $1); write(fd, buff, strlen(buff));*/}
         | ID '(' lista_apel ')'
         | TYPEOF '(' e ')' {/* snprintf(buff,100,"TypeOf \n"); write(fd, buff, strlen(buff));*/}
         | ID '.' ID ASSIGN e {/* snprintf(buff,100,"= %s.%s\n", $1, $3); write(fd, buff, strlen(buff));*/}
         | ID '.' ID '(' lista_apel ')'
         | ID '[' NR ']' ASSIGN { /*snprintf(buff,100,"%s = ",$1); write(fd, buff, strlen(buff));*/} e
         ;

if : IF '(' cond ')' list EIF
   ;

cond : e opr e
     | e opr e boolopr cond
     ;

boolopr : AND
        | OR
        ;

opr : LEQ
    | GEQ
    | NEQ
    | EQ
    | '<'
    | '>'
    ;

for : FOR '(' TIP ID ASSIGN e ';' cond ';' statement ')' list EFOR
    | FOR '(' ID ASSIGN e ';' e OPR e ';' statement ')' list EFOR
    ;

do : DO list WHILE '(' cond ')' ';'

while : WHILE '(' cond ')' list EWHILE
      ;

e : e '+' e {/* snprintf(buff,100," + "); write(fd, buff, strlen(buff));*/}
  | e '-' e {/* snprintf(buff,100," - "); write(fd, buff, strlen(buff));*/}
  | e '*' e {/* snprintf(buff,100," * "); write(fd, buff, strlen(buff));*/}
  | e '/' e {/* snprintf(buff,100," / "); write(fd, buff, strlen(buff));*/}
  | '(' e ')'
  | ID { Verif($1, yylineno);/* snprintf(buff,100,"%s ",$1); write(fd, buff, strlen(buff));*/}
  | NR {/* snprintf(buff,100,"%d ",$1); write(fd, buff, strlen(buff));*/}
  | NR_FLOAT {/* snprintf(buff,100,"%f ",$1); write(fd, buff, strlen(buff));*/}
  | ID '[' NR ']' {/* snprintf(buff,100,"%s ",$1); write(fd, buff, strlen(buff));*/}
  | ID '(' lista_apel ')'
  | ID '.' ID
  | ID '.' ID '(' lista_apel ')' { /*snprintf(buff,100,"%s.%s ", $1, $3); write(fd, buff, strlen(buff));*/}
  | EVAL '(' e ')' {/* snprintf(buff,100,"Eval "); write(fd, buff, strlen(buff));*/}
  ;

lista_apel : { /*snprintf(buff,100,"( "); write(fd, buff, strlen(buff));*/} e {/* snprintf(buff,100,")\n"); write(fd, buff, strlen(buff));*/}
           | lista_apel ',' e
           ;

%%

/* int calcul(struct informatii *info1, int operator, struct informatii *info2)
{
    switch(operator)
    {
        case 1:
            return info1->int_val + info2->int_val;
			break;
        case 2:
            return info1->int_val + info2->int_val;
            break;
        case 3:
            return info1->int_val + info2->int_val;
            break;
        case 4:
            return info1->int_val + info2->int_val;
            break;
    }
} */

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
}