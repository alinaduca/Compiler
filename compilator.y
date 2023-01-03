%{
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
char buff[100];
int fd, fd1;
struct informatii{
      int int_val;
      char string_val[500];
      float float_val;
      char char_val;
      int type;
};

struct param{
      char nume[100];
      struct informatii info;
}symbolTable[100];

void initialize();
%}
%union {
     int intval;
     char* strval;
}
%token <strval> ID TIP ASSIGN BGIN END CLASS ECLASS IF EIF OPR FOR EFOR CONSTANT WHILE EWHILE DO EVAL TYPEOF
%token <intval> NR
%start progr
%left '+' '-'
%left '*' '/'
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

declaratieVariabila : TIP lista_id { snprintf(buff,100,"(%s)\n", $1); write(fd, buff, strlen(buff));}
                    | TIP ID sizes { snprintf(buff,100,"%s (%s)\n",$2, $1); write(fd, buff, strlen(buff));}
                    | CONSTANT TIP lista_id
                    ;

declaratieFunctie : TIP ID '(' lista_param ')' { snprintf(buff,100,"[FUNCTION] %s (%s) \n",$1, $2); write(fd1, buff, strlen(buff));}
                  | TIP ID '(' ')' { snprintf(buff,100,"[FUNCTION] %s (%s) \n",$1, $2); write(fd1, buff, strlen(buff));}
                  ;

clasa : CLASS ID interior_clasa ECLASS 
      ;

interior_clasa : sectiunea1 sectiunea2
               | sectiunea1
               | sectiunea2
               ;

sizes : '[' NR ']' { snprintf(buff,100,"[%d]",$2); write(fd, buff, strlen(buff));}
      | '[' NR ']' sizes 
      ;

indexes : '[' NR ']' { snprintf(buff,100,"[%d]",$2); write(fd, buff, strlen(buff));}
        | '[' NR ']' indexes
        ;

lista_id : ID { snprintf(buff,100,"%s ",$1); write(fd, buff, strlen(buff));}
         | ID ',' lista_id { snprintf(buff,100,"%s ",$1); write(fd, buff, strlen(buff));}
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
statement: ID ASSIGN e { snprintf(buff,100," = %s\n", $1); write(fd, buff, strlen(buff));}
         | ID '(' lista_apel ')'
         | TYPEOF '(' e ')' { snprintf(buff,100,"TypeOf \n"); write(fd, buff, strlen(buff));}
         | ID '.' ID ASSIGN e { snprintf(buff,100,"= %s.%s\n", $1, $3); write(fd, buff, strlen(buff));}
         | ID '.' ID '(' lista_apel ')'
         | ID indexes ASSIGN { snprintf(buff,100,"%s = ",$1); write(fd, buff, strlen(buff));} e
         ;

if : IF '(' e OPR e ')' list EIF
   ;

for : FOR '(' TIP ID ASSIGN e ';' e OPR e ';' statement ')' list EFOR
    | FOR '(' ID ASSIGN e ';' e OPR e ';' statement ')' list EFOR
    ;

do : DO list WHILE '(' e OPR e ')' ';'

while : WHILE '(' e OPR e ')' list EWHILE
      ;

e : e '+' e { snprintf(buff,100," + "); write(fd, buff, strlen(buff));}
  | e '-' e { snprintf(buff,100," - "); write(fd, buff, strlen(buff));}
  | e '*' e { snprintf(buff,100," * "); write(fd, buff, strlen(buff));}
  | e '/' e { snprintf(buff,100," / "); write(fd, buff, strlen(buff));}
  | '(' e ')'
  | ID { snprintf(buff,100,"%s ",$1); write(fd, buff, strlen(buff));}
  | NR { snprintf(buff,100,"%d ",$1); write(fd, buff, strlen(buff));}
  | ID indexes { snprintf(buff,100,"%s ",$1); write(fd, buff, strlen(buff));}
  | ID '(' lista_apel ')'
  | ID '.' ID
  | ID '.' ID '(' lista_apel ')' { snprintf(buff,100,"%s.%s ", $1, $3); write(fd, buff, strlen(buff));}
  | EVAL '(' e ')' { snprintf(buff,100,"Eval "); write(fd, buff, strlen(buff));}
  ;

lista_apel : { snprintf(buff,100,"( "); write(fd, buff, strlen(buff));} e { snprintf(buff,100,")\n"); write(fd, buff, strlen(buff));}
           | lista_apel ',' e
           ;
%%

/* int findType(char *type)
{
      int tip;
	if(!strcmp("int",type))
            tip = INT;
      else
            if(!strcmp("float",type))
                  tip = FLOAT;
            else
                  if(!strcmp("char",type))
                        tip = CHAR;
                  else
                        if(!strcmp("string",type))
                              tip = STRING;
                        else
                              if(!strcmp("bool",type))
                                    tip = BOOL;
      return tip;
} */

void initialize()
{
      for(int i = 0; i < 100; i++)
      {
            bzero(&symbolTable[i].nume, sizeof(symbolTable[i].nume));
            symbolTable[i].info.type = -1;
            symbolTable[i].info.int_val = 0;
            symbolTable[i].info.float_val = 0;
            strcpy(symbolTable[i].info.string_val, "");
            symbolTable[i].info.char_val = '\0';
      }
}

int calcul(struct informatii *info1, int operator, struct informatii *info2)
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
}

void eval(struct informatii *inf)
{
	printf("Valoarea este: %d\n", inf->int_val);
}

int yyerror(char * s)
{
     printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv)
{
     fd = open ("symbol_table.txt", O_RDWR|O_TRUNC);
     fd1 = open ("symbol_table_functions.txt", O_RDWR|O_TRUNC);
     initialize();
     yyin = fopen(argv[1],"r");
     yyparse();
} 