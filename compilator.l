%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
%}
%option noyywrap
%%
"int"|"float"|"char"|"string"|"bool" {return TIP;}
"const" {return CONSTANT;}
">"|"<"|"=="|"!="|">="|"<=" {return OPR;}
"if" {return IF;}
"end_if" {return EIF;}
"for" {return FOR;}
"end_for" {return EFOR;}
"begin_clasa" {return CLASS;}
"end_clasa" {return ECLASS;}
"begin_main" {return BGIN;}
"end_main" {return END;}
[_a-zA-Z][_a-zA-Z0-9]* {return ID;}
"=" {return ASSIGN;}
[1-9][0-9]*|0 {return NR;}
[1-9][0-9]*.[0-9]+|0.[0-9]+ {return NRFLOAT;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}
