%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
%}
%option noyywrap
%%
"int"|"float"|"char"|"string"|"bool" {return TIP;}
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
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}
