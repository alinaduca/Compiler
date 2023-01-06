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
    LEQ = 258,
    GEQ = 259,
    NEQ = 260,
    EQ = 261,
    AND = 262,
    OR = 263,
    ID = 264,
    STRING = 265,
    TIP = 266,
    ASSIGN = 267,
    BGIN = 268,
    END = 269,
    CLASS = 270,
    ECLASS = 271,
    IF = 272,
    EIF = 273,
    OPR = 274,
    FOR = 275,
    EFOR = 276,
    CONSTANT = 277,
    WHILE = 278,
    EWHILE = 279,
    DO = 280,
    EVAL = 281,
    TYPEOF = 282,
    NR = 283,
    NR_FLOAT = 284
  };
#endif
/* Tokens.  */
#define LEQ 258
#define GEQ 259
#define NEQ 260
#define EQ 261
#define AND 262
#define OR 263
#define ID 264
#define STRING 265
#define TIP 266
#define ASSIGN 267
#define BGIN 268
#define END 269
#define CLASS 270
#define ECLASS 271
#define IF 272
#define EIF 273
#define OPR 274
#define FOR 275
#define EFOR 276
#define CONSTANT 277
#define WHILE 278
#define EWHILE 279
#define DO 280
#define EVAL 281
#define TYPEOF 282
#define NR 283
#define NR_FLOAT 284

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 7 "compilator.y"

     float floatval;
     int intval;
     char* strval;
     struct AST* tree;

#line 122 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
