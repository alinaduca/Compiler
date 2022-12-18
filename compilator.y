%{
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
%}
%union {
     int intval;
     char* strval;
}
%token ID TIP BGIN END ASSIGN NR CLASS ECLASS IF EIF OPR FOR EFOR CONSTANT NRFLOAT
%start progr
%left '+' '-'
%left '*' '/'
%%
progr: sectiunea1 rest1 {printf("program corect sintactic\n");}
     ;

rest1 : sectiunea2 rest2;

rest2 : sectiunea3 bloc;

sectiunea1 : declaratieVariabila ';'
           | sectiunea1 declaratieVariabila ';'
           ;

sectiunea2 : declaratieFunctie ';'
           | sectiunea2 declaratieFunctie ';'
           ;

sectiunea3 : clasa
           | sectiunea3 clasa
           ;

declaratieVariabila : TIP lista_id
                    | TIP ID sizes
                    | CONSTANT TIP lista_id;

declaratieFunctie : TIP ID '(' lista_param ')'
                  | TIP ID '(' ')'
                  ;

clasa : CLASS ID interior_clasa ECLASS
      ;

interior_clasa : sectiunea1 sectiunea2
               | sectiunea1
               | sectiunea2
               ;

sizes : '[' NR ']'
      | '[' NR ']' sizes
      ;

lista_id : ID
         | ID ',' lista_id 
         ;

lista_param : param
            | lista_param ','  param 
            ;
            
param : TIP ID
      ; 
      
/* bloc */
bloc : BGIN list END
     ;
     
/* lista instructiuni */
list :  statement ';' 
     | list statement ';'
     | list if
     | list for
     ;

/* instructiune */
statement: ID ASSIGN e
         | ID '(' lista_apel ')'
         | ID '.' ID ASSIGN e
         | ID '.' ID '(' lista_apel ')'
         ;

if : IF '(' e OPR e ')' list EIF
   ;


for : FOR '(' TIP ID ASSIGN e ';' e OPR e ';' statement ')' list EFOR
    | FOR '(' ID ASSIGN e ';' e OPR e ';' statement ')' list EFOR
    ;

e : e '+' e
  | e '-' e
  | e '*' e
  | e '/' e
  | '(' e ')'
  | ID
  | NR
  | NRFLOAT
  | ID '(' lista_apel ')'
  | ID '.' ID '(' lista_apel ')'
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
     yyin=fopen(argv[1],"r");
     yyparse();
} 