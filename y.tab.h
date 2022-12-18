/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BGIN = 258,
    END = 259,
    NR = 260,
    CLASS = 261,
    ECLASS = 262,
    IF = 263,
    EIF = 264,
    OPR = 265,
    FOR = 266,
    EFOR = 267,
    CONSTANT = 268,
    NRFLOAT = 269,
    WHILE = 270,
    EWHILE = 271,
    DO = 272,
    EVAL = 273,
    TYPEOF = 274,
    ID = 275,
    TIP = 276,
    ASSIGN = 277
  };
#endif
/* Tokens.  */
#define BGIN 258
#define END 259
#define NR 260
#define CLASS 261
#define ECLASS 262
#define IF 263
#define EIF 264
#define OPR 265
#define FOR 266
#define EFOR 267
#define CONSTANT 268
#define NRFLOAT 269
#define WHILE 270
#define EWHILE 271
#define DO 272
#define EVAL 273
#define TYPEOF 274
#define ID 275
#define TIP 276
#define ASSIGN 277

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "compilator.y"

     int intval;
     char* strval;

#line 106 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
