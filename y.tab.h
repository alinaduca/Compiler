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
    RETURN = 262,
    BFCT = 263,
    EFCT = 264,
    AND = 265,
    OR = 266,
    ID = 267,
    STRING = 268,
    TIP = 269,
    ASSIGN = 270,
    BGIN = 271,
    END = 272,
    CLASS = 273,
    ECLASS = 274,
    IF = 275,
    EIF = 276,
    ELSE = 277,
    FOR = 278,
    EFOR = 279,
    CONSTANT = 280,
    WHILE = 281,
    EWHILE = 282,
    DO = 283,
    EVAL = 284,
    TYPEOF = 285,
    CHAR = 286,
    NR = 287,
    NR_FLOAT = 288
  };
#endif
/* Tokens.  */
#define LEQ 258
#define GEQ 259
#define NEQ 260
#define EQ 261
#define RETURN 262
#define BFCT 263
#define EFCT 264
#define AND 265
#define OR 266
#define ID 267
#define STRING 268
#define TIP 269
#define ASSIGN 270
#define BGIN 271
#define END 272
#define CLASS 273
#define ECLASS 274
#define IF 275
#define EIF 276
#define ELSE 277
#define FOR 278
#define EFOR 279
#define CONSTANT 280
#define WHILE 281
#define EWHILE 282
#define DO 283
#define EVAL 284
#define TYPEOF 285
#define CHAR 286
#define NR 287
#define NR_FLOAT 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 7 "compilator.y"

    float floatval;
    int intval;
    char* strval;
    struct AST* tree;

#line 130 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
