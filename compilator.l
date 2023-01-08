%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
%}
%option noyywrap
%%
"int"|"float"|"char"|"string"|"bool" {yylval.strval = strdup(yytext); return TIP;}
"<=" {return LEQ;}
">=" {return GEQ;}
"!=" {return NEQ;}
"==" {return EQ;}
"&&" {return AND;}
"||" {return OR;}
"if" {return IF;}
"else" {return ELSE;}
"end_if" {return EIF;}
"for" {return FOR;}
"begin_function" {return BFCT;}
"end_function" {return EFCT;}
"end_for" {return EFOR;}
"do" {return DO;}
"while" {return WHILE;}
"end_while" {return EWHILE;}
"begin_clasa" {return CLASS;}
"end_clasa" {return ECLASS;}
"begin_main" {return BGIN;}
"end_main" {return END;}
"return" {return RETURN;}
"Eval" {return EVAL;}
"TypeOf" {return TYPEOF;}
[_a-zA-Z][_a-zA-Z0-9]* {yylval.strval=strdup(yytext); return ID;}
\"[_a-zA-Z0-9 ]+\" {yylval.strval = strdup(yytext); yylval.strval++; yylval.strval[strlen(yylval.strval)-1] = 0; return STRING;}
\'[_a-zA-Z0-9 ]\' {yylval.strval = strdup(yytext); yylval.strval++; yylval.strval[strlen(yylval.strval)-1] = 0; return CHAR;}
"=" {yylval.strval=strdup(yytext);return ASSIGN;}
-?[1-9][0-9]*|0 {yylval.intval=atoi(yytext); return NR;}
-?[1-9][0-9]*\.[0-9]+|-?0\.[0-9]+  {yylval.floatval=atof(yytext); return NR_FLOAT;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}
