%{
#include <stdio.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
%}
%token ID TIP BGIN END ASSIGN NR 
%start progr
%left '+' '-'
%left '*' '/'
%%
progr: declaratii bloc {printf("program corect sintactic\n");}
     ;

declaratii : declaratie ';'
	   | declaratii declaratie ';'
	   ;
declaratie : TIP lista_id
           | TIP ID '(' lista_param ')'
           | TIP ID '(' ')'
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
     ;

/* instructiune */
statement: ID ASSIGN e
         | ID '(' lista_apel ')'
         ;

e : e '+' e
  | e '*' e
  | '(' e ')'
  | ID
  | NR
  | ID '(' lista_apel ')'
  ;
lista_apel : e
           | lista_apel ',' e
           ;
%%
int yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
yyin=fopen(argv[1],"r");
yyparse();
} 