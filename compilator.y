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

indexes : '[' NR ']'
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
         | TYPEOF '(' e ')'
         | ID '.' ID ASSIGN e
         | ID '.' ID '(' lista_apel ')'
         | ID indexes ASSIGN e
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
  | ID indexes
  | ID '(' lista_apel ')'
  | ID '.' ID '(' lista_apel ')'
  | EVAL '(' e ')'
  ;

lista_apel : e
           | lista_apel ',' e
           ;
%%
int yyerror(char * s)
{
     printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv)
{
     fd = open ("symbol_table.txt", O_RDWR|O_TRUNC);
     fd1 = open ("symbol_table_functions.txt", O_RDWR|O_TRUNC);
     yyin = fopen(argv[1],"r");
     yyparse();
} 