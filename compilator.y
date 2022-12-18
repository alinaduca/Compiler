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
%token ID TIP BGIN END ASSIGN NR CLASS ECLASS IF EIF OPR FOR EFOR
%start progr
%left '+' '-'
%left '*' '/'
%%
progr: declaratii bloc {printf("program corect sintactic\n");}
     ;

declaratii : declaratie ';'
	   | declaratii declaratie ';'
        | declaratii clasa;
	   ;

clasa : CLASS ID interior_clasa ECLASS
      ;

interior_clasa : declaratii;

declaratie : TIP lista_id
           | TIP ID '(' lista_param ')'
           | TIP ID '(' ')'
           | TIP ID sizes
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

if : IF '(' ID OPR ID')' list EIF
   | IF '(' NR OPR ID')' list EIF
   | IF '(' ID OPR NR')' list EIF
   | IF '(' NR OPR NR')' list EIF
   ;

for : FOR '(' TIP ID ASSIGN e ';' ID OPR e ';' statement ')' list EFOR
    ;

e : e '+' e
  | e '-' e
  | e '*' e
  | e '/' e
  | '(' e ')'
  | ID
  | NR
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