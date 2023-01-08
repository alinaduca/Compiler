/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "compilator.y"

#include "compilator.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;

#line 77 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 202 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   392

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  255

#define YYUNDEFTOK  2
#define YYMAXUTOK   288


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      41,    42,    39,    37,    43,    36,    46,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    40,
      34,     2,    35,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    39,    39,    42,    45,    48,    49,    52,    53,    56,
      57,    60,    61,    64,    65,    68,    69,    70,    71,    74,
      75,    78,    79,    82,    87,    90,    91,    94,    95,    98,
      99,   100,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   118,   122,   123,   124,   125,   126,
     127,   131,   142,   143,   144,   145,   157,   167,   172,   175,
     176,   179,   182,   193,   194,   195,   196,   197,   198,   201,
     202,   205,   206,   209,   212,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   226,   227,   230,   239,   248,   257,
     266,   267,   268,   269,   270,   271,   272,   273,   276,   288,
     306,   307,   308,   309,   310,   311
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LEQ", "GEQ", "NEQ", "EQ", "RETURN",
  "BFCT", "EFCT", "AND", "OR", "ID", "STRING", "TIP", "ASSIGN", "BGIN",
  "END", "CLASS", "ECLASS", "IF", "EIF", "ELSE", "FOR", "EFOR", "CONSTANT",
  "WHILE", "EWHILE", "DO", "EVAL", "TYPEOF", "CHAR", "NR", "NR_FLOAT",
  "'<'", "'>'", "'-'", "'+'", "'/'", "'*'", "';'", "'('", "')'", "','",
  "'['", "']'", "'.'", "$accept", "progr", "rest1", "rest2", "sectiunea1",
  "sectiunea2", "sectiunea3", "declaratieVariabila",
  "declaratieVariabilaClasa", "declaratieFunctie",
  "declaratieFunctieClasa", "lista_param", "param", "clasa",
  "sectiuneaclasa1", "sectiuneaclasa2", "interior_clasa", "lista_id",
  "bloc", "list", "statement", "cond", "opr", "if", "for", "do", "while",
  "e", "pseudo_e", "lista_apel", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,    60,    62,    45,    43,    47,    42,
      59,    40,    41,    44,    91,    93,    46
};
# endif

#define YYPACT_NINF (-144)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,    -7,    -4,    22,    56,   -15,    78,  -144,    -7,  -144,
      20,  -144,   176,    24,  -144,  -144,    87,    -7,    14,  -144,
      69,    57,    77,  -144,   139,  -144,  -144,  -144,   118,   105,
     122,  -144,   173,    85,   150,  -144,   185,    64,    73,    71,
      -1,  -144,  -144,   112,   187,   209,    -7,    -7,    -7,   301,
      85,    85,    85,    85,    -7,   196,   230,   240,   214,   211,
     248,   258,   234,   235,    71,   263,   259,    21,   242,   246,
     256,   250,  -144,  -144,  -144,    93,    40,   236,   252,  -144,
    -144,  -144,  -144,   101,   101,  -144,  -144,  -144,    -7,  -144,
      -1,   287,   285,   131,  -144,    -7,  -144,  -144,   261,   263,
     290,   267,  -144,    39,   112,   279,   300,    85,    75,  -144,
     273,   274,   283,    -1,   288,  -144,  -144,  -144,  -144,  -144,
    -144,   191,  -144,   112,  -144,   205,    -1,  -144,   109,  -144,
    -144,   284,  -144,  -144,    93,   135,   275,     4,   308,   174,
    -144,  -144,    75,   315,   115,   193,   115,   306,  -144,  -144,
    -144,  -144,    93,   141,    85,  -144,   229,  -144,   289,  -144,
     312,    85,   112,  -144,   112,   298,   321,   322,    75,    75,
      75,    75,  -144,   115,     2,   163,   326,   330,     5,   307,
    -144,   329,    85,  -144,  -144,    85,    93,   167,   184,   304,
     314,  -144,   212,   212,  -144,  -144,     7,    99,   115,   115,
      -1,  -144,  -144,  -144,  -144,  -144,  -144,    85,    85,   341,
      -1,   115,   353,   334,    93,  -144,  -144,  -144,   112,  -144,
    -144,   375,   241,    93,   339,    85,   217,    16,  -144,   354,
     223,  -144,    -1,   115,   344,  -144,   151,  -144,  -144,   268,
      -3,   115,  -144,  -144,    -1,    23,   345,    -1,    -1,   346,
     280,    -1,  -144,   293,  -144
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    32,    11,     0,     1,
       0,     2,     0,     0,     7,     5,     0,     0,     0,    12,
      32,     0,     0,     3,     0,     8,     9,     6,    80,    40,
      42,    81,    38,     0,    36,    34,     0,     0,     0,     0,
       0,    10,     4,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,    21,
       0,     0,     0,     0,    30,    31,     0,     0,     0,     0,
       0,     0,   104,   102,   100,    98,     0,     0,    84,    41,
      43,    39,    79,    76,    75,    78,    77,    37,     0,    23,
       0,     0,     0,    32,    13,     0,    25,    27,     0,    29,
       0,     0,    24,     0,     0,     0,     0,     0,     0,    44,
       0,     0,     0,     0,     0,    47,    48,    49,    50,    45,
      83,     0,    82,     0,    35,     0,     0,    22,     0,    14,
      26,     0,    28,    56,    51,     0,     0,     0,     0,    91,
      92,    93,     0,     0,     0,     0,     0,     0,    46,   105,
     103,   101,    99,     0,     0,    16,     0,    20,     0,    52,
       0,     0,     0,    54,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    15,    19,     0,    55,     0,     0,     0,
      96,    90,    87,    86,    88,    89,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    68,    67,     0,     0,     0,
       0,     0,     0,     0,    58,    57,    95,    94,     0,    59,
      60,    61,     0,    62,     0,     0,     0,     0,    18,     0,
       0,    69,     0,     0,     0,    74,     0,    17,    97,     0,
       0,     0,    73,    70,     0,     0,     0,     0,     0,     0,
       0,     0,    72,     0,    71
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,  -144,  -144,  -144,  -144,  -144,   382,   325,   378,
     -56,   -86,  -144,   367,  -144,   328,  -144,     6,  -144,   -40,
     -68,  -143,  -144,  -144,  -144,  -144,  -144,   -12,   -94,  -103
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    11,    23,     4,    12,    24,     5,    62,    14,
      63,    58,    59,    26,    64,    65,    66,     7,    42,   226,
      71,   174,   207,   115,   116,   117,   118,   175,   143,    76
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      70,   135,   114,   178,    34,     6,   127,   198,   199,   101,
       8,    67,   198,   199,    19,   198,   199,   198,   199,   161,
     153,    49,     9,    35,     1,    15,   198,   199,    68,    69,
     196,    75,    20,   198,   199,     2,   103,   244,    83,    84,
      85,    86,   158,   101,   200,   162,    36,   210,   167,   219,
     125,    28,    79,    80,    81,   220,   221,   114,   236,   187,
      87,   188,   104,   247,    27,   105,    94,   106,   227,    38,
      10,    31,   133,   147,   192,   193,   194,   195,    56,   114,
      33,     2,   120,   121,    16,    60,   156,   139,   114,    39,
     240,   134,    75,    16,   124,   138,    61,    28,   245,    28,
      29,   129,   201,   202,   203,   204,    57,   140,   141,   152,
      37,    75,    17,    18,    37,   230,   142,    31,    30,    31,
      32,    17,    18,    56,    28,    72,    33,    28,    33,    50,
      51,    52,    53,   205,   206,    50,    51,    52,    53,    52,
      53,    82,   181,    73,    31,    74,    16,    31,    46,   186,
      75,   157,    75,    33,   114,    40,   173,    22,   114,    43,
     222,   197,    44,    67,    45,    47,   201,   202,   203,   204,
     213,   114,   128,   214,    17,    18,   246,   159,   121,   249,
      68,    69,   114,   180,   121,   114,    50,    51,    52,    53,
      21,   242,   239,    54,    22,   223,   224,   205,   206,    50,
      51,    52,    53,    28,   149,   176,    75,   177,   250,   215,
     121,   253,   154,   234,   155,   164,    48,    67,   165,    77,
     166,    78,   150,    31,   151,   110,   216,   121,   111,    67,
      55,   112,    33,   113,    68,    69,   182,   110,   183,    88,
     111,    67,    89,   112,   235,   113,    68,    69,    90,   110,
     170,   171,   111,    67,    92,   112,    91,   113,    68,    69,
      93,   110,   231,   232,   111,   238,   121,   112,    67,   113,
      68,    69,    95,   109,    96,    97,   110,   100,   102,   111,
      67,   122,   112,   107,   113,    68,    69,   108,   110,   243,
     119,   111,    67,   123,   112,   126,   113,    68,    69,    56,
     110,   130,   131,   111,   252,    67,   112,   132,   113,    68,
      69,   136,   137,   110,   144,   145,   111,   254,    67,   112,
     160,   113,    68,    69,   146,   128,   110,   185,   148,   111,
     189,   184,   179,   190,   113,    68,    69,    50,    51,    52,
      53,   208,   209,    82,    50,    51,    52,    53,   211,   217,
     163,   168,   169,   170,   171,   218,   225,   172,   168,   169,
     170,   171,   228,   237,   191,    50,    51,    52,    53,   212,
      50,    51,    52,    53,   229,    50,    51,    52,    53,   233,
      50,    51,    52,    53,   241,   198,    13,   248,   251,    98,
      25,    41,    99
};

static const yytype_uint8 yycheck[] =
{
      40,   104,    70,   146,    16,    12,    92,    10,    11,    65,
      14,    12,    10,    11,     8,    10,    11,    10,    11,    15,
     123,    33,     0,    17,    14,    40,    10,    11,    29,    30,
     173,    43,    12,    10,    11,    25,    15,    40,    50,    51,
      52,    53,   128,    99,    42,    41,    32,    42,   142,    42,
      90,    12,    46,    47,    48,   198,   199,   125,    42,   162,
      54,   164,    41,    40,    40,    44,    60,    46,   211,    12,
      14,    32,    33,   113,   168,   169,   170,   171,    14,   147,
      41,    25,    42,    43,    15,    14,   126,    12,   156,    12,
     233,   103,   104,    15,    88,   107,    25,    12,   241,    12,
      13,    95,     3,     4,     5,     6,    42,    32,    33,   121,
      41,   123,    43,    44,    41,   218,    41,    32,    31,    32,
      33,    43,    44,    14,    12,    13,    41,    12,    41,    36,
      37,    38,    39,    34,    35,    36,    37,    38,    39,    38,
      39,    42,   154,    31,    32,    33,    15,    32,    43,   161,
     162,    42,   164,    41,   222,    16,    41,    18,   226,    41,
     200,   173,    44,    12,    46,    43,     3,     4,     5,     6,
     182,   239,    41,   185,    43,    44,   244,    42,    43,   247,
      29,    30,   250,    42,    43,   253,    36,    37,    38,    39,
      14,    40,   232,    43,    18,   207,   208,    34,    35,    36,
      37,    38,    39,    12,    13,    12,   218,    14,   248,    42,
      43,   251,     7,   225,     9,    41,    43,    12,    44,    32,
      46,    12,    31,    32,    33,    20,    42,    43,    23,    12,
      45,    26,    41,    28,    29,    30,     7,    20,     9,    43,
      23,    12,    12,    26,    27,    28,    29,    30,     8,    20,
      38,    39,    23,    12,    43,    26,    42,    28,    29,    30,
      12,    20,    21,    22,    23,    42,    43,    26,    12,    28,
      29,    30,    14,    17,    40,    40,    20,    14,    19,    23,
      12,    45,    26,    41,    28,    29,    30,    41,    20,    21,
      40,    23,    12,    41,    26,     8,    28,    29,    30,    14,
      20,    40,    12,    23,    24,    12,    26,    40,    28,    29,
      30,    32,    12,    20,    41,    41,    23,    24,    12,    26,
      45,    28,    29,    30,    41,    41,    20,    15,    40,    23,
      32,    42,    26,    12,    28,    29,    30,    36,    37,    38,
      39,    15,    12,    42,    36,    37,    38,    39,    41,    45,
      42,    36,    37,    38,    39,    41,    15,    42,    36,    37,
      38,    39,     9,     9,    42,    36,    37,    38,    39,    40,
      36,    37,    38,    39,    40,    36,    37,    38,    39,    40,
      36,    37,    38,    39,    40,    10,     4,    42,    42,    64,
      12,    24,    64
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    14,    25,    48,    51,    54,    12,    64,    14,     0,
      14,    49,    52,    54,    56,    40,    15,    43,    44,    64,
      12,    14,    18,    50,    53,    56,    60,    40,    12,    13,
      31,    32,    33,    41,    74,    64,    32,    41,    12,    12,
      16,    60,    65,    41,    44,    46,    43,    43,    43,    74,
      36,    37,    38,    39,    43,    45,    14,    42,    58,    59,
      14,    25,    55,    57,    61,    62,    63,    12,    29,    30,
      66,    67,    13,    31,    33,    74,    76,    32,    12,    64,
      64,    64,    42,    74,    74,    74,    74,    64,    43,    12,
       8,    42,    43,    12,    64,    14,    40,    40,    55,    62,
      14,    57,    19,    15,    41,    44,    46,    41,    41,    17,
      20,    23,    26,    28,    67,    70,    71,    72,    73,    40,
      42,    43,    45,    41,    64,    66,     8,    58,    41,    64,
      40,    12,    40,    33,    74,    76,    32,    12,    74,    12,
      32,    33,    41,    75,    41,    41,    41,    66,    40,    13,
      31,    33,    74,    76,     7,     9,    66,    42,    58,    42,
      45,    15,    41,    42,    41,    44,    46,    75,    36,    37,
      38,    39,    42,    41,    68,    74,    12,    14,    68,    26,
      42,    74,     7,     9,    42,    15,    74,    76,    76,    32,
      12,    42,    75,    75,    75,    75,    68,    74,    10,    11,
      42,     3,     4,     5,     6,    34,    35,    69,    15,    12,
      42,    41,    40,    74,    74,    42,    42,    45,    41,    42,
      68,    68,    66,    74,    74,    15,    66,    68,     9,    40,
      76,    21,    22,    40,    74,    27,    42,     9,    42,    66,
      68,    40,    40,    21,    40,    68,    67,    40,    42,    67,
      66,    42,    24,    66,    24
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    50,    51,    51,    52,    52,    53,
      53,    54,    54,    55,    55,    56,    56,    56,    56,    57,
      57,    58,    58,    59,    60,    61,    61,    62,    62,    63,
      63,    63,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    65,    66,    66,    66,    66,    66,
      66,    67,    67,    67,    67,    67,    67,    67,    67,    68,
      68,    68,    68,    69,    69,    69,    69,    69,    69,    70,
      70,    71,    71,    72,    73,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    76,    76,
      76,    76,    76,    76,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     3,     1,     2,     1,
       2,     2,     3,     2,     3,     8,     7,    11,    10,     5,
       4,     1,     3,     2,     4,     2,     3,     2,     3,     2,
       1,     1,     1,     4,     3,     6,     3,     5,     3,     5,
       3,     5,     3,     5,     3,     2,     3,     2,     2,     2,
       2,     3,     4,     4,     4,     5,     3,     6,     6,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     6,
       8,    13,    12,     7,     6,     3,     3,     3,     3,     3,
       1,     1,     4,     4,     3,     6,     3,     3,     3,     3,
       3,     1,     1,     1,     4,     4,     3,     6,     1,     3,
       1,     3,     1,     3,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 39 "compilator.y"
                        {printf("program corect sintactic\n");}
#line 1568 "y.tab.c"
    break;

  case 11:
#line 60 "compilator.y"
                                   { addInTable(0, 0, (yyvsp[-1].strval), "tip", 0, 0, "", "", 0, yylineno); }
#line 1574 "y.tab.c"
    break;

  case 12:
#line 61 "compilator.y"
                                            {addInTable(1, 0, (yyvsp[-2].strval), "tip", 0, 0, "", "", 0, yylineno);}
#line 1580 "y.tab.c"
    break;

  case 13:
#line 64 "compilator.y"
                                        { addInTable(0, 0, (yyvsp[-1].strval), "tip", 0, 0, "", "", 1, yylineno); }
#line 1586 "y.tab.c"
    break;

  case 14:
#line 65 "compilator.y"
                                                 {addInTable(1, 0, (yyvsp[-2].strval), "tip", 0, 0, "", "", 1, yylineno);}
#line 1592 "y.tab.c"
    break;

  case 15:
#line 68 "compilator.y"
                                                              { addInTableFunctions((yyvsp[-7].strval), (yyvsp[-6].strval), "tip", yylineno, 0, (yyvsp[-4].strval));}
#line 1598 "y.tab.c"
    break;

  case 16:
#line 69 "compilator.y"
                                                  { addInTableFunctions((yyvsp[-6].strval), (yyvsp[-5].strval), "tip", yylineno, 0, "");}
#line 1604 "y.tab.c"
    break;

  case 17:
#line 70 "compilator.y"
                                                                           { int val = evalAST((yyvsp[-2].tree), yylineno); addInTableFunctions((yyvsp[-10].strval), (yyvsp[-9].strval), "tip", yylineno, 0, (yyvsp[-7].strval));}
#line 1610 "y.tab.c"
    break;

  case 18:
#line 71 "compilator.y"
                                                               { int val = evalAST((yyvsp[-2].tree), yylineno); addInTableFunctions((yyvsp[-9].strval), (yyvsp[-8].strval), "tip", yylineno, 0, "");}
#line 1616 "y.tab.c"
    break;

  case 19:
#line 74 "compilator.y"
                                                    { addInTableFunctions((yyvsp[-4].strval), (yyvsp[-3].strval), "tip", yylineno, 1, (yyvsp[-1].strval));}
#line 1622 "y.tab.c"
    break;

  case 20:
#line 75 "compilator.y"
                                        { addInTableFunctions((yyvsp[-3].strval), (yyvsp[-2].strval), "tip", yylineno, 1, "");}
#line 1628 "y.tab.c"
    break;

  case 21:
#line 78 "compilator.y"
                    {(yyval.strval) = (yyvsp[0].strval);}
#line 1634 "y.tab.c"
    break;

  case 22:
#line 79 "compilator.y"
                                    { (yyval.strval) = ConstruiescRasp((yyvsp[-2].strval), (yyvsp[0].strval), ",");}
#line 1640 "y.tab.c"
    break;

  case 23:
#line 82 "compilator.y"
               {
                (yyval.strval) = ConstruiescRasp((yyvsp[-1].strval), (yyvsp[0].strval), " ");
               }
#line 1648 "y.tab.c"
    break;

  case 24:
#line 87 "compilator.y"
                                       {Clasa((yyvsp[-2].strval));}
#line 1654 "y.tab.c"
    break;

  case 32:
#line 103 "compilator.y"
              {addInTable(0, 0, (yyvsp[0].strval), "variabila", 0, 0, "", "", 0, yylineno);}
#line 1660 "y.tab.c"
    break;

  case 33:
#line 104 "compilator.y"
                         { addInTable(0, (yyvsp[-1].intval), (yyvsp[-3].strval), "variabila", 0, 0, "", "", 0, yylineno);}
#line 1666 "y.tab.c"
    break;

  case 34:
#line 105 "compilator.y"
                           { addInTable(0, 0, (yyvsp[-2].strval), "variabila", 0, 0, "", "", 0, yylineno);}
#line 1672 "y.tab.c"
    break;

  case 35:
#line 106 "compilator.y"
                                      { addInTable(0, (yyvsp[-3].intval), (yyvsp[-5].strval), "variabila", 0, 0, "", "", 0, yylineno);}
#line 1678 "y.tab.c"
    break;

  case 36:
#line 107 "compilator.y"
                       { int val = Eval((yyvsp[0].tree), yylineno); addInTable(0, 0, (yyvsp[-2].strval), "variabila", val, 0, "", "", 0, yylineno);}
#line 1684 "y.tab.c"
    break;

  case 37:
#line 108 "compilator.y"
                                    { int val = Eval((yyvsp[-2].tree), yylineno); addInTable(0, 0, (yyvsp[-4].strval), "variabila", 0, 0, "", "", 0, yylineno);}
#line 1690 "y.tab.c"
    break;

  case 38:
#line 109 "compilator.y"
                              { addInTable(0, 0, (yyvsp[-2].strval), "variabila", 0, (yyvsp[0].floatval), "", "", 0, yylineno);}
#line 1696 "y.tab.c"
    break;

  case 39:
#line 110 "compilator.y"
                                           { addInTable(0, 0, (yyvsp[-4].strval), "variabila", 0, (yyvsp[-2].floatval), "", "", 0, yylineno);}
#line 1702 "y.tab.c"
    break;

  case 40:
#line 111 "compilator.y"
                            { addInTable(0, 0, (yyvsp[-2].strval), "variabila", 0, 0, "", (yyvsp[0].strval), 0, yylineno);}
#line 1708 "y.tab.c"
    break;

  case 41:
#line 112 "compilator.y"
                                         { addInTable(0, 0, (yyvsp[-4].strval), "variabila", 0, 0, "", (yyvsp[-2].strval), 0, yylineno);}
#line 1714 "y.tab.c"
    break;

  case 42:
#line 113 "compilator.y"
                          { addInTable(0, 0, (yyvsp[-2].strval), "variabila", 0, 0, (yyvsp[0].strval), "", 0, yylineno);}
#line 1720 "y.tab.c"
    break;

  case 43:
#line 114 "compilator.y"
                                       { addInTable(0, 0, (yyvsp[-4].strval), "variabila", 0, 0, (yyvsp[-2].strval), "", 0, yylineno);}
#line 1726 "y.tab.c"
    break;

  case 51:
#line 131 "compilator.y"
                        { 
                            Verif((yyvsp[-2].strval), yylineno, 0);
                            if(strcmp(getIdType((yyvsp[-2].strval)), "int"))
                            {
                                sprintf(errMsg, "Linia %d, tip de date diferit", yylineno);
                                print_error();
                                exit(0);
                            }
                            int val = Eval((yyvsp[0].tree), yylineno);
                            actualizareTabel((yyvsp[-2].strval), "int", val, yylineno, 0, "");
                        }
#line 1742 "y.tab.c"
    break;

  case 52:
#line 142 "compilator.y"
                                 {VerifFct((yyvsp[-3].strval), (yyvsp[-1].strval), yylineno);}
#line 1748 "y.tab.c"
    break;

  case 53:
#line 143 "compilator.y"
                                   {printf("%s\n", (yyvsp[-1].strval));}
#line 1754 "y.tab.c"
    break;

  case 54:
#line 144 "compilator.y"
                          {printf("%d\n", Eval((yyvsp[-1].tree), yylineno));}
#line 1760 "y.tab.c"
    break;

  case 55:
#line 145 "compilator.y"
                              { 
                                snprintf(buff,100,"%s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval));
                                Verif(buff, yylineno, 0);
                                if(strcmp(getIdType((yyvsp[-4].strval)), "int"))
                                {
                                    sprintf(errMsg, "Linia %d, tip de date diferit", yylineno);
                                    print_error();
                                    exit(0);
                                }
                                int val = Eval((yyvsp[0].tree), yylineno);
                                actualizareTabel(buff, "int", val, yylineno, 0, "");
                              }
#line 1777 "y.tab.c"
    break;

  case 56:
#line 157 "compilator.y"
                              {
                                Verif((yyvsp[-2].strval), yylineno, 0);
                                if(strcmp(getIdType((yyvsp[-2].strval)), "float"))
                                {
                                    sprintf(errMsg, "Linia %d, tip de date diferit", yylineno);
                                    print_error();
                                    exit(0);
                                }
                                actualizareTabel((yyvsp[-2].strval), "float", 0, yylineno, (yyvsp[0].floatval), "");
                              }
#line 1792 "y.tab.c"
    break;

  case 57:
#line 167 "compilator.y"
                                        {
                                            snprintf(buff,100,"%s.%s", (yyvsp[-5].strval), (yyvsp[-3].strval));
                                            VerifFct(buff, (yyvsp[-1].strval), yylineno);

                                        }
#line 1802 "y.tab.c"
    break;

  case 58:
#line 172 "compilator.y"
                                  { Verif((yyvsp[-5].strval), yylineno, (yyvsp[-3].intval));}
#line 1808 "y.tab.c"
    break;

  case 59:
#line 175 "compilator.y"
                    {(yyval.intval) = (yyvsp[-1].intval);}
#line 1814 "y.tab.c"
    break;

  case 60:
#line 176 "compilator.y"
                     { int rez1=(yyvsp[-2].intval); int rez2=(yyvsp[0].intval); 
                       (yyval.intval)=(rez1 && rez2);
                     }
#line 1822 "y.tab.c"
    break;

  case 61:
#line 179 "compilator.y"
                    { int rez1=(yyvsp[-2].intval); int rez2=(yyvsp[0].intval);
                      (yyval.intval)=(rez1 || rez2);
                    }
#line 1830 "y.tab.c"
    break;

  case 62:
#line 182 "compilator.y"
               { 
                int rez1=evalAST((yyvsp[-2].tree), yylineno); int rez2=evalAST((yyvsp[0].tree), yylineno);
                if (strcmp((yyvsp[-1].strval), "<=")) (yyval.intval)=(rez1 <= rez2);
                if (strcmp((yyvsp[-1].strval), ">=")) (yyval.intval)=(rez1 >= rez2);
                if (strcmp((yyvsp[-1].strval), "!=")) (yyval.intval)=(rez1 != rez2);
                if (strcmp((yyvsp[-1].strval), "==")) (yyval.intval)=(rez1 == rez2);
                if (strcmp((yyvsp[-1].strval), ">")) (yyval.intval)=(rez1 > rez2);
                if (strcmp((yyvsp[-1].strval), "<")) (yyval.intval)=(rez1 < rez2);
                }
#line 1844 "y.tab.c"
    break;

  case 63:
#line 193 "compilator.y"
          {(yyval.strval) = (yyvsp[0].strval);}
#line 1850 "y.tab.c"
    break;

  case 64:
#line 194 "compilator.y"
          {(yyval.strval) = (yyvsp[0].strval);}
#line 1856 "y.tab.c"
    break;

  case 65:
#line 195 "compilator.y"
          {(yyval.strval) = (yyvsp[0].strval);}
#line 1862 "y.tab.c"
    break;

  case 66:
#line 196 "compilator.y"
          {(yyval.strval) = (yyvsp[0].strval);}
#line 1868 "y.tab.c"
    break;

  case 67:
#line 197 "compilator.y"
          {(yyval.strval) = ">";}
#line 1874 "y.tab.c"
    break;

  case 68:
#line 198 "compilator.y"
          {(yyval.strval) = "<";}
#line 1880 "y.tab.c"
    break;

  case 75:
#line 215 "compilator.y"
            { (yyval.tree) = buildAST("+", (yyvsp[-2].tree), (yyvsp[0].tree), OPERATOR); }
#line 1886 "y.tab.c"
    break;

  case 76:
#line 216 "compilator.y"
            { (yyval.tree) = buildAST("-", (yyvsp[-2].tree), (yyvsp[0].tree), OPERATOR); }
#line 1892 "y.tab.c"
    break;

  case 77:
#line 217 "compilator.y"
            { (yyval.tree) = buildAST("*", (yyvsp[-2].tree), (yyvsp[0].tree), OPERATOR); }
#line 1898 "y.tab.c"
    break;

  case 78:
#line 218 "compilator.y"
            { (yyval.tree) = buildAST("/", (yyvsp[-2].tree), (yyvsp[0].tree), OPERATOR); }
#line 1904 "y.tab.c"
    break;

  case 79:
#line 219 "compilator.y"
              { (yyval.tree) = (yyvsp[-1].tree); }
#line 1910 "y.tab.c"
    break;

  case 80:
#line 220 "compilator.y"
       { Verif((yyvsp[0].strval), yylineno, 0); (yyval.tree) = buildAST((yyvsp[0].strval), NULL, NULL, IDENTIFICATOR);}
#line 1916 "y.tab.c"
    break;

  case 81:
#line 221 "compilator.y"
       { char nr[100]; bzero(&nr, 100); sprintf(nr, "%d", (yyvsp[0].intval)); (yyval.tree) = buildAST(nr, NULL, NULL, NUMAR); }
#line 1922 "y.tab.c"
    break;

  case 82:
#line 222 "compilator.y"
                  {Verif((yyvsp[-3].strval), yylineno, 1); int val = getArrVal((yyvsp[-3].strval), (yyvsp[-1].intval), yylineno); char nr[100]; bzero(&nr, 100); sprintf(nr, "%d", val); (yyval.tree) = buildAST(nr, NULL, NULL, NUMAR); }
#line 1928 "y.tab.c"
    break;

  case 83:
#line 223 "compilator.y"
                          { VerifFct((yyvsp[-3].strval), (yyvsp[-1].strval), yylineno);
                            (yyval.tree) = buildAST("0", NULL, NULL, NUMAR);
                          }
#line 1936 "y.tab.c"
    break;

  case 84:
#line 226 "compilator.y"
              { snprintf(buff,100,"%s.%s", (yyvsp[-2].strval), (yyvsp[0].strval)); Verif(buff, yylineno, 0);  (yyval.tree) = buildAST((yyvsp[-2].strval), NULL, NULL, IDENTIFICATOR);}
#line 1942 "y.tab.c"
    break;

  case 85:
#line 227 "compilator.y"
                                 { snprintf(buff,100,"%s.%s", (yyvsp[-5].strval), (yyvsp[-3].strval)); VerifFct(buff, (yyvsp[-3].strval), yylineno); (yyval.tree) = buildAST("0", NULL, NULL, NUMAR);}
#line 1948 "y.tab.c"
    break;

  case 86:
#line 230 "compilator.y"
                                 {
                                    if(strcmp((yyvsp[-2].strval), (yyvsp[0].strval)))
                                    {
                                        sprintf(errMsg, "Linia %d, tip de date diferit!", yylineno);
                                        print_error();
                                        exit(0);
                                    }
                                    (yyval.strval) = (yyvsp[-2].strval);
                                 }
#line 1962 "y.tab.c"
    break;

  case 87:
#line 239 "compilator.y"
                                 {
                                    if(strcmp((yyvsp[-2].strval), (yyvsp[0].strval)))
                                    {
                                        sprintf(errMsg, "Linia %d, tip de date diferit!", yylineno);
                                        print_error();
                                        exit(0);
                                    }
                                    (yyval.strval) = (yyvsp[-2].strval);
                                 }
#line 1976 "y.tab.c"
    break;

  case 88:
#line 248 "compilator.y"
                                 {
                                    if(strcmp((yyvsp[-2].strval), (yyvsp[0].strval)))
                                    {
                                        sprintf(errMsg, "Linia %d, tip de date diferit!", yylineno);
                                        print_error();
                                        exit(0);
                                    }
                                    (yyval.strval) = (yyvsp[-2].strval);
                                 }
#line 1990 "y.tab.c"
    break;

  case 89:
#line 257 "compilator.y"
                                 {
                                    if(strcmp((yyvsp[-2].strval), (yyvsp[0].strval)))
                                    {
                                        sprintf(errMsg, "Linia %d, tip de date diferit!", yylineno);
                                        print_error();
                                        exit(0);
                                    }
                                    (yyval.strval) = (yyvsp[-2].strval);
                                 }
#line 2004 "y.tab.c"
    break;

  case 90:
#line 266 "compilator.y"
                            { (yyval.strval) = (yyvsp[-1].strval); }
#line 2010 "y.tab.c"
    break;

  case 91:
#line 267 "compilator.y"
              {Verif((yyvsp[0].strval), yylineno, 0); (yyval.strval) = getIdType((yyvsp[0].strval));}
#line 2016 "y.tab.c"
    break;

  case 92:
#line 268 "compilator.y"
              {(yyval.strval) = "int";}
#line 2022 "y.tab.c"
    break;

  case 93:
#line 269 "compilator.y"
                    {(yyval.strval) = "float";}
#line 2028 "y.tab.c"
    break;

  case 94:
#line 270 "compilator.y"
                         {Verif((yyvsp[-3].strval), yylineno, 1); (yyval.strval) = getIdType((yyvsp[-3].strval));}
#line 2034 "y.tab.c"
    break;

  case 95:
#line 271 "compilator.y"
                                 { VerifFct((yyvsp[-3].strval), (yyvsp[-1].strval), yylineno); (yyval.strval) = FctRetType((yyvsp[-3].strval));}
#line 2040 "y.tab.c"
    break;

  case 96:
#line 272 "compilator.y"
                     {snprintf(buff,100,"%s.%s", (yyvsp[-2].strval), (yyvsp[0].strval)); Verif((yyvsp[-2].strval), yylineno, 1); (yyval.strval) = getIdType(buff);}
#line 2046 "y.tab.c"
    break;

  case 97:
#line 273 "compilator.y"
                                        { snprintf(buff,100,"%s.%s", (yyvsp[-5].strval), (yyvsp[-3].strval)); VerifFct(buff, (yyvsp[-1].strval), yylineno); (yyval.strval) = FctRetType(buff);}
#line 2052 "y.tab.c"
    break;

  case 98:
#line 276 "compilator.y"
               {
                struct AST* tree = (yyvsp[0].tree);
                if(tree->st == NULL && tree->dr == NULL)
                {
                    if(tree->nodeType == IDENTIFICATOR)
                        (yyval.strval) = getIdType(tree->nume);
                    else
                        (yyval.strval) = "int";
                }
                else
                    (yyval.strval) = "int";
            }
#line 2069 "y.tab.c"
    break;

  case 99:
#line 288 "compilator.y"
                              {
                    struct AST* tree = (yyvsp[0].tree);
                    char tip[20];
                        if(tree->st == NULL && tree->dr == NULL)
                        {
                            if(tree->nodeType == IDENTIFICATOR)
                                strcpy(tip, getIdType(tree->nume));
                            else
                                strcpy(tip, "int");
                        }
                        else
                            strcpy(tip, "int");
                        strcpy(buff, (yyvsp[-2].strval));
                        strcat(buff, ",");
                        strcat(buff, tip);
                        (yyval.strval) = buff;
                        // printf("%s.\n", tip);
                }
#line 2092 "y.tab.c"
    break;

  case 100:
#line 306 "compilator.y"
                      {(yyval.strval) = "float";}
#line 2098 "y.tab.c"
    break;

  case 101:
#line 307 "compilator.y"
                                     { snprintf(buff,100,"%s,float",(yyvsp[-2].strval)); (yyval.strval) = buff;}
#line 2104 "y.tab.c"
    break;

  case 102:
#line 308 "compilator.y"
                  {(yyval.strval) = "char";}
#line 2110 "y.tab.c"
    break;

  case 103:
#line 309 "compilator.y"
                                 {snprintf(buff,100,"%s,char",(yyvsp[-2].strval)); (yyval.strval) = buff;}
#line 2116 "y.tab.c"
    break;

  case 104:
#line 310 "compilator.y"
                    {(yyval.strval) = "string";}
#line 2122 "y.tab.c"
    break;

  case 105:
#line 311 "compilator.y"
                                   {snprintf(buff,100,"%s,string",(yyvsp[-2].strval)); (yyval.strval) = buff;}
#line 2128 "y.tab.c"
    break;


#line 2132 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 314 "compilator.y"


int yyerror(char * s)
{
    printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv)
{
    fd = open("symbol_table.txt", O_RDWR|O_TRUNC);
    fd1 = open("symbol_table_functions.txt", O_RDWR|O_TRUNC);
    initialize();
    yyin = fopen(argv[1],"r");
    yyparse();
    printVars(fd);
    printFunctions(fd1);
}
