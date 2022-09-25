/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     _TOK___u0 = 258,
     _TOK___u1 = 259,
     _TOK___u10 = 260,
     _TOK___u11 = 261,
     _TOK___u12 = 262,
     _TOK___u13 = 263,
     _TOK___u14 = 264,
     _TOK___u15 = 265,
     _TOK___u16 = 266,
     _TOK___u17 = 267,
     _TOK___u18 = 268,
     _TOK___u19 = 269,
     _TOK___u2 = 270,
     _TOK___u20 = 271,
     _TOK___u21 = 272,
     _TOK___u22 = 273,
     _TOK___u23 = 274,
     _TOK___u24 = 275,
     _TOK___u25 = 276,
     _TOK___u26 = 277,
     _TOK___u3 = 278,
     _TOK___u4 = 279,
     _TOK___u5 = 280,
     _TOK___u6 = 281,
     _TOK___u7 = 282,
     _TOK___u8 = 283,
     _TOK___u9 = 284,
     _TOK_boolconst = 285,
     _TOK_equals = 286,
     _TOK_genop = 287,
     _TOK_identifier = 288,
     _TOK_integer = 289,
     _TOK_level02 = 290,
     _TOK_level03 = 291,
     _TOK_level05 = 292,
     _TOK_level06 = 293,
     _TOK_level07 = 294,
     _TOK_level08 = 295,
     _TOK_level09 = 296,
     _TOK_level10 = 297,
     _TOK_level11 = 298,
     _TOK_nil = 299,
     _TOK_quotetick = 300,
     _TOK_string = 301
   };
#endif
/* Tokens.  */
#define _TOK___u0 258
#define _TOK___u1 259
#define _TOK___u10 260
#define _TOK___u11 261
#define _TOK___u12 262
#define _TOK___u13 263
#define _TOK___u14 264
#define _TOK___u15 265
#define _TOK___u16 266
#define _TOK___u17 267
#define _TOK___u18 268
#define _TOK___u19 269
#define _TOK___u2 270
#define _TOK___u20 271
#define _TOK___u21 272
#define _TOK___u22 273
#define _TOK___u23 274
#define _TOK___u24 275
#define _TOK___u25 276
#define _TOK___u26 277
#define _TOK___u3 278
#define _TOK___u4 279
#define _TOK___u5 280
#define _TOK___u6 281
#define _TOK___u7 282
#define _TOK___u8 283
#define _TOK___u9 284
#define _TOK_boolconst 285
#define _TOK_equals 286
#define _TOK_genop 287
#define _TOK_identifier 288
#define _TOK_integer 289
#define _TOK_level02 290
#define _TOK_level03 291
#define _TOK_level05 292
#define _TOK_level06 293
#define _TOK_level07 294
#define _TOK_level08 295
#define _TOK_level09 296
#define _TOK_level10 297
#define _TOK_level11 298
#define _TOK_nil 299
#define _TOK_quotetick 300
#define _TOK_string 301




/* Copy the first part of user declarations.  */
#line 2 "kp.y"

#include <stdio.h>
#include <string.h>
#include "mem.h"
#include "sexp.h"
#define YYDEBUG 1
void yyerror( char *s );
extern FILE *yyin;
extern char *yytext;
char *__kp_filename;
extern int __kp_token_start_line, __kp_token_end_line;
extern int __kp_token_start_char, __kp_token_end_char;
extern int __kp_token_start_gchar, __kp_token_end_gchar;
extern sexp __kp_where_stamp( void );
extern char *__kp_strdoop_no_quotes( char *string );
sexp _ccc_top=0;
int yylex();


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 21 "kp.y"
{
  char *c;
  sexp s;
}
/* Line 193 of yacc.c.  */
#line 212 "kp.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 225 "kp.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  71
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   524

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  137
/* YYNRULES -- Number of states.  */
#define YYNSTATES  221

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,    10,    12,    14,    17,    23,    25,
      27,    30,    34,    37,    39,    41,    45,    47,    49,    52,
      56,    58,    60,    62,    64,    68,    72,    75,    83,    89,
      93,    97,   101,   103,   106,   108,   110,   114,   118,   120,
     122,   126,   132,   140,   142,   144,   154,   164,   169,   172,
     176,   180,   184,   188,   192,   196,   200,   204,   208,   212,
     214,   218,   220,   224,   226,   229,   232,   234,   236,   238,
     240,   242,   244,   247,   250,   252,   255,   257,   258,   262,
     264,   267,   268,   270,   271,   275,   277,   279,   280,   284,
     286,   289,   290,   293,   294,   296,   298,   300,   302,   304,
     306,   308,   310,   312,   314,   316,   318,   320,   322,   324,
     326,   328,   330,   332,   334,   336,   338,   340,   342,   344,
     346,   348,   350,   352,   354,   356,   358,   360,   362,   364,
     366,   368,   370,   372,   374,   376,   378,   380
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      48,     0,    -1,    68,    -1,    86,   116,    61,    69,    -1,
      67,    -1,    79,    -1,    87,    72,    -1,    98,   116,   106,
      51,   107,    -1,    69,    -1,    70,    -1,    76,   108,    -1,
     109,    76,   108,    -1,   109,   108,    -1,    70,    -1,    69,
      -1,    87,    72,   108,    -1,    49,    -1,    74,    -1,   116,
     110,    -1,   111,   116,   108,    -1,    58,    -1,    73,    -1,
      57,    -1,    53,    -1,   112,    62,   108,    -1,    88,   129,
     108,    -1,    89,    76,    -1,    90,    69,    91,    92,    76,
      93,   108,    -1,    91,    92,    76,    93,    69,    -1,    92,
      77,    93,    -1,   116,    95,   116,    -1,    92,    80,    93,
      -1,   116,    -1,    71,    55,    -1,    55,    -1,   116,    -1,
      96,    61,    69,    -1,   116,   114,    76,    -1,    84,    -1,
      50,    -1,   106,    85,   107,    -1,    97,    92,    76,    93,
      69,    -1,    97,    92,    76,    93,    69,    99,    54,    -1,
     100,    -1,    82,    -1,   101,    92,    76,   108,    76,   108,
      76,    93,    69,    -1,   101,    92,    52,   108,    76,   108,
      76,    93,    69,    -1,   102,    87,    72,   108,    -1,   102,
      49,    -1,    76,   118,    76,    -1,    76,   119,    76,    -1,
      76,   120,    76,    -1,    76,   121,    76,    -1,    76,   122,
      76,    -1,    76,   123,    76,    -1,    76,   124,    76,    -1,
      76,   125,    76,    -1,    76,   126,    76,    -1,    76,   115,
      76,    -1,    64,    -1,    76,   114,    76,    -1,    75,    -1,
      92,    76,    93,    -1,    65,    -1,   103,    76,    -1,   104,
      76,    -1,   117,    -1,   113,    -1,   127,    -1,   129,    -1,
      69,    -1,    56,    -1,    76,    59,    -1,   128,   116,    -1,
      60,    -1,   105,   116,    -1,    78,    -1,    -1,    76,    94,
      78,    -1,    76,    -1,    63,    79,    -1,    -1,    81,    -1,
      -1,   116,    94,    81,    -1,   116,    -1,    83,    -1,    -1,
      66,    94,    83,    -1,    66,    -1,    55,    84,    -1,    -1,
      55,    85,    -1,    -1,     3,    -1,     4,    -1,     5,    -1,
       6,    -1,     7,    -1,     8,    -1,     9,    -1,    10,    -1,
      11,    -1,    12,    -1,    13,    -1,    14,    -1,    15,    -1,
      16,    -1,    17,    -1,    18,    -1,    19,    -1,    20,    -1,
      21,    -1,    22,    -1,    23,    -1,    24,    -1,    25,    -1,
      26,    -1,    27,    -1,    28,    -1,    29,    -1,    30,    -1,
      31,    -1,    32,    -1,    33,    -1,    34,    -1,    35,    -1,
      36,    -1,    37,    -1,    38,    -1,    39,    -1,    40,    -1,
      41,    -1,    42,    -1,    43,    -1,    44,    -1,    45,    -1,
      46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    42,    42,    47,    59,    68,    77,    86,    96,   102,
     111,   117,   124,   130,   136,   142,   149,   155,   161,   167,
     173,   179,   185,   191,   197,   203,   212,   221,   231,   241,
     250,   260,   269,   278,   285,   294,   303,   314,   324,   333,
     342,   351,   359,   372,   381,   390,   399,   411,   417,   426,
     434,   442,   450,   458,   466,   474,   482,   490,   498,   509,
     515,   522,   528,   534,   540,   547,   554,   560,   566,   572,
     578,   584,   590,   597,   603,   609,   620,   623,   627,   630,
     635,   638,   643,   646,   650,   653,   658,   661,   665,   668,
     673,   676,   681,   684,   690,   696,   702,   708,   714,   720,
     726,   732,   738,   744,   750,   756,   762,   768,   774,   780,
     786,   792,   798,   804,   810,   816,   822,   828,   834,   840,
     846,   852,   858,   864,   870,   876,   882,   888,   894,   900,
     906,   912,   918,   924,   930,   936,   942,   948
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_TOK___u0", "_TOK___u1", "_TOK___u10",
  "_TOK___u11", "_TOK___u12", "_TOK___u13", "_TOK___u14", "_TOK___u15",
  "_TOK___u16", "_TOK___u17", "_TOK___u18", "_TOK___u19", "_TOK___u2",
  "_TOK___u20", "_TOK___u21", "_TOK___u22", "_TOK___u23", "_TOK___u24",
  "_TOK___u25", "_TOK___u26", "_TOK___u3", "_TOK___u4", "_TOK___u5",
  "_TOK___u6", "_TOK___u7", "_TOK___u8", "_TOK___u9", "_TOK_boolconst",
  "_TOK_equals", "_TOK_genop", "_TOK_identifier", "_TOK_integer",
  "_TOK_level02", "_TOK_level03", "_TOK_level05", "_TOK_level06",
  "_TOK_level07", "_TOK_level08", "_TOK_level09", "_TOK_level10",
  "_TOK_level11", "_TOK_nil", "_TOK_quotetick", "_TOK_string", "$accept",
  "_top", "function", "program", "class_statement_list", "fordecls",
  "class", "elsepart", "statement", "callcc", "do", "while", "paramlist",
  "objectaccess", "arglist", "importspec", "class_statement", "variable",
  "lambda", "adecl", "statement_list", "top", "block", "if",
  "class_access_modifier", "decllist", "for", "export", "opexpr",
  "expression", "__u28", "__u29", "__u27", "__u30", "__u31", "__u34",
  "__u35", "__u32", "__u33", "__u0", "__u1", "__u10", "__u11", "__u12",
  "__u13", "__u14", "__u15", "__u16", "__u17", "__u18", "__u19", "__u2",
  "__u20", "__u21", "__u22", "__u23", "__u24", "__u25", "__u26", "__u3",
  "__u4", "__u5", "__u6", "__u7", "__u8", "__u9", "boolconst", "equals",
  "genop", "identifier", "integer", "level02", "level03", "level05",
  "level06", "level07", "level08", "level09", "level10", "level11", "nil",
  "quotetick", "string", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    50,    51,    52,    53,    54,    54,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    63,    64,    65,    66,    67,    68,
      69,    70,    70,    71,    72,    73,    73,    74,    74,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    77,    77,    78,    78,
      79,    79,    80,    80,    81,    81,    82,    82,    83,    83,
      84,    84,    85,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     4,     1,     1,     2,     5,     1,     1,
       2,     3,     2,     1,     1,     3,     1,     1,     2,     3,
       1,     1,     1,     1,     3,     3,     2,     7,     5,     3,
       3,     3,     1,     2,     1,     1,     3,     3,     1,     1,
       3,     5,     7,     1,     1,     9,     9,     4,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     1,     3,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     2,     1,     0,     3,     1,
       2,     0,     1,     0,     3,     1,     1,     0,     3,     1,
       2,     0,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      91,    94,    95,    96,    97,    98,    99,   100,   104,   105,
     106,   109,   110,   111,   112,   113,   114,   117,   119,   120,
     121,   124,   125,   135,   136,   137,     0,    16,    39,    23,
      91,    71,    22,    20,    74,    59,    63,     4,     2,    14,
      13,    21,    17,    61,     0,    38,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,    67,    35,    66,    68,     0,
      69,     1,    90,   116,   122,   123,   126,   127,   128,   129,
     130,   131,   132,   133,   134,    72,    77,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      89,     0,    44,    86,     0,     0,    70,    26,    35,     0,
       0,     0,     0,    83,     0,     0,     0,    48,    87,    64,
      65,    75,    93,     0,     0,    12,     0,     0,    32,   103,
     118,     0,    18,    73,    79,     0,    76,    60,    58,    49,
      50,    51,    52,    53,    54,    55,    56,    57,     0,   102,
       0,    15,     0,    25,     0,     0,   101,    62,    36,     0,
      82,    85,     0,    81,     0,     0,    87,     0,    92,   115,
      40,    11,    19,    24,    30,     0,    29,     3,    88,    37,
       0,     0,    31,     0,     0,   108,     0,    34,    81,     0,
       5,    43,     0,     0,     6,    47,    78,     0,    28,    84,
      41,     7,    80,    33,     0,     0,     0,   107,     0,     0,
       0,    27,    42,     8,     9,     0,     0,     0,     0,    46,
      45
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    26,    27,    28,   186,   164,    29,   212,    30,    31,
      32,    33,    85,    34,   112,   127,   188,    35,    36,   100,
      37,    38,   106,    40,   189,   101,    41,    42,    43,    44,
     135,   136,   190,   159,   160,   102,   103,    45,   123,    46,
      47,    48,    49,    50,    51,    52,   157,   150,   131,    53,
      54,    55,   208,   191,    56,    57,    58,    59,    60,    61,
     170,    87,    62,   132,    63,    64,    65,    88,    89,   108,
      67,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      68,    69,    70
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -155
static const yytype_int16 yypact[] =
{
     411,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,    12,  -155,  -155,  -155,
     411,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,   481,
    -155,  -155,  -155,  -155,    58,  -155,   -18,   -18,   -29,   429,
      -5,    11,   429,    11,    11,   -18,    11,     6,   429,   429,
     -18,   411,   362,   -18,   -18,  -155,    -8,  -155,  -155,   -18,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,   429,  -155,   429,   429,
     429,   429,   429,   429,   429,   429,   429,   429,   429,    11,
      10,    -3,  -155,  -155,    -7,    -3,  -155,   462,    13,    15,
     429,   135,    -5,   -18,   429,    -5,   241,  -155,   -18,   462,
     462,  -155,   411,     3,    58,  -155,    -3,    -3,  -155,  -155,
    -155,   -18,  -155,  -155,   449,    18,  -155,   462,    17,    11,
      -1,    78,   160,    70,   118,   365,   285,     4,    -5,  -155,
     -18,  -155,   429,  -155,    11,   135,  -155,  -155,  -155,    18,
    -155,    10,   135,   332,    -3,    58,   -18,    -3,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,   429,  -155,  -155,  -155,   462,
     429,    -5,  -155,   -18,    -5,  -155,     3,  -155,   332,   411,
    -155,  -155,   429,   429,  -155,  -155,  -155,   135,  -155,  -155,
      21,  -155,  -155,  -155,    58,    58,    -3,  -155,    -9,   429,
     429,  -155,  -155,  -155,  -155,   135,   135,    -5,    -5,  -155,
    -155
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -155,  -155,   -28,  -155,  -155,  -155,  -155,  -155,   -54,  -155,
    -155,  -155,  -155,  -155,   -52,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,     0,  -154,  -155,  -115,  -155,  -155,  -155,   218,
    -155,  -119,  -130,  -155,  -114,  -155,   -86,    40,   -50,  -155,
     -56,  -155,  -155,  -155,   -35,    87,  -124,  -128,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,   -40,
    -110,   -46,  -155,  -155,  -155,  -155,  -155,   -27,  -155,     2,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,    34
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -71
static const yytype_int16 yytable[] =
{
      39,   118,    66,   167,   129,     9,   175,   122,     7,     1,
       2,   176,    71,     7,    16,    21,   125,    25,    16,   130,
       7,   149,    73,     6,    74,   129,     7,   169,   156,   117,
      39,   181,    66,   183,    76,   182,    75,   207,   184,    76,
      77,    78,    79,    80,    81,    82,    83,   148,    99,   104,
     109,   194,    76,    77,   214,   151,   196,   115,   202,   153,
     166,    39,   121,    66,   178,   126,   128,     7,   122,   199,
      72,   133,   168,   206,   154,   163,   201,   152,   171,     7,
     172,   173,   105,    73,     0,     0,     0,     7,     0,    74,
      75,   217,   218,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    75,     0,     0,    76,    77,    78,    79,   187,
      75,     0,   158,    76,    77,   161,     0,     0,   192,   193,
     104,   195,    39,     0,    66,     0,     0,     7,     0,     0,
       0,    86,     0,   174,   187,   203,     0,     0,   110,     0,
     113,   114,     0,   116,     7,   156,     0,     0,   177,     0,
      75,     0,   104,    76,    77,    78,    79,    80,   209,   210,
     211,     0,     0,    39,     0,    66,    74,    75,   104,     7,
      76,    77,    78,    79,    80,    81,    82,    83,    84,     0,
       0,   198,     0,     0,   200,   161,   113,     0,    39,    39,
      66,    66,    75,     0,    86,    76,    77,    78,    86,     0,
       0,     0,     0,     0,     0,     0,    86,    86,   213,     0,
       0,    86,     0,     0,     0,     0,     0,   219,   220,     0,
       0,    86,     0,     0,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,     0,     0,     0,     0,     0,
       0,   180,    86,     0,     0,     2,     0,     4,     0,    86,
       7,     0,    86,     0,     8,     0,     0,     0,     0,     0,
       0,    13,    14,    15,    16,     0,    86,   107,     0,     0,
     111,    20,     0,     0,    21,    22,   119,   120,     0,     0,
     124,     0,     0,     0,    86,    23,    24,    25,     0,     0,
       0,    86,    86,     0,     7,     0,     0,     0,     0,     0,
       0,     0,    86,    86,   134,     0,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,    75,     0,     0,
      76,    77,    78,    79,    80,    81,    82,     0,   155,     0,
       0,     0,   162,     0,   165,     1,     2,     3,     4,     5,
       6,     7,     0,     0,     0,     8,     9,    10,     0,   185,
      11,    12,    13,    14,    15,    16,     0,     0,    17,     0,
      18,    19,    20,     0,     0,    21,    22,     0,     4,     0,
     179,     7,     0,     0,     7,     8,    23,    24,    25,     0,
       0,     0,    13,    14,    15,    16,     0,    73,     0,     0,
       0,     0,    20,   134,     0,    21,    22,    75,   197,     0,
      76,    77,    78,    79,    80,    81,    23,    24,    25,     0,
     204,   205,     0,     0,     1,     2,     3,     4,     5,     6,
       7,     0,     0,     0,     8,     9,    10,   215,   216,    11,
      12,    13,    14,    15,    16,     4,     0,    17,     7,    18,
      19,    20,     8,     0,    21,    22,     0,     0,     0,    13,
      14,    15,    16,     0,     0,    23,    24,    25,     7,    20,
     149,     0,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     7,     0,    23,    24,    25,     0,     0,     0,     0,
      74,    75,     0,     0,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    74,    75,     0,     0,    76,    77,    78,
      79,    80,    81,    82,    83,    84,   -70,     0,     0,     0,
       0,     0,   -70,   -70,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70
};

static const yytype_int16 yycheck[] =
{
       0,    57,     0,   118,    12,    14,   134,    61,     9,     3,
       4,   135,     0,     9,    23,    33,    62,    46,    23,    27,
       9,    11,    25,     8,    31,    12,     9,    24,    10,    57,
      30,   155,    30,   161,    35,   159,    32,    16,   162,    35,
      36,    37,    38,    39,    40,    41,    42,    99,    46,    47,
      50,   166,    35,    36,   208,   101,   175,    55,   188,   105,
     116,    61,    60,    61,   150,    63,    64,     9,   122,   183,
      30,    69,   122,   197,   109,   115,   186,   104,   124,     9,
     126,   127,    48,    25,    -1,    -1,    -1,     9,    -1,    31,
      32,   215,   216,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    32,    -1,    -1,    35,    36,    37,    38,   163,
      32,    -1,   112,    35,    36,   113,    -1,    -1,   164,   165,
     118,   167,   122,    -1,   122,    -1,    -1,     9,    -1,    -1,
      -1,    44,    -1,   131,   188,   189,    -1,    -1,    51,    -1,
      53,    54,    -1,    56,     9,    10,    -1,    -1,   148,    -1,
      32,    -1,   150,    35,    36,    37,    38,    39,   204,   205,
     206,    -1,    -1,   163,    -1,   163,    31,    32,   166,     9,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,   181,    -1,    -1,   184,   183,    99,    -1,   188,   189,
     188,   189,    32,    -1,   107,    35,    36,    37,   111,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   119,   120,   208,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,
      -1,   134,    -1,    -1,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,   154,   155,    -1,    -1,     4,    -1,     6,    -1,   162,
       9,    -1,   165,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    -1,   179,    49,    -1,    -1,
      52,    30,    -1,    -1,    33,    34,    58,    59,    -1,    -1,
      62,    -1,    -1,    -1,   197,    44,    45,    46,    -1,    -1,
      -1,   204,   205,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   215,   216,    86,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    32,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    -1,   110,    -1,
      -1,    -1,   114,    -1,   116,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      28,    29,    30,    -1,    -1,    33,    34,    -1,     6,    -1,
     152,     9,    -1,    -1,     9,    13,    44,    45,    46,    -1,
      -1,    -1,    20,    21,    22,    23,    -1,    25,    -1,    -1,
      -1,    -1,    30,   175,    -1,    33,    34,    32,   180,    -1,
      35,    36,    37,    38,    39,    40,    44,    45,    46,    -1,
     192,   193,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    13,    14,    15,   209,   210,    18,
      19,    20,    21,    22,    23,     6,    -1,    26,     9,    28,
      29,    30,    13,    -1,    33,    34,    -1,    -1,    -1,    20,
      21,    22,    23,    -1,    -1,    44,    45,    46,     9,    30,
      11,    -1,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    44,    45,    46,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    13,    14,
      15,    18,    19,    20,    21,    22,    23,    26,    28,    29,
      30,    33,    34,    44,    45,    46,    48,    49,    50,    53,
      55,    56,    57,    58,    60,    64,    65,    67,    68,    69,
      70,    73,    74,    75,    76,    84,    86,    87,    88,    89,
      90,    91,    92,    96,    97,    98,   101,   102,   103,   104,
     105,   106,   109,   111,   112,   113,   116,   117,   127,   128,
     129,     0,    84,    25,    31,    32,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    59,    92,   108,   114,   115,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   116,
      66,    72,    82,    83,   116,   129,    69,    76,   116,    69,
      92,    76,    61,    92,    92,   116,    92,    49,    87,    76,
      76,   116,    55,    85,    76,   108,   116,    62,   116,    12,
      27,    95,   110,   116,    76,    77,    78,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    61,    11,
      94,   108,   114,   108,    91,    76,    10,    93,    69,    80,
      81,   116,    76,   106,    52,    76,    87,    72,    85,    24,
     107,   108,   108,   108,   116,    94,    93,    69,    83,    76,
      92,    93,    93,    94,    93,    17,    51,    55,    63,    71,
      79,   100,   108,   108,    72,   108,    78,    76,    69,    81,
      69,   107,    79,    55,    76,    76,    93,    16,    99,   108,
     108,   108,    54,    69,    70,    76,    76,    93,    93,    69,
      69
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

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
#line 42 "kp.y"
    { (yyval.s) = (yyvsp[(1) - (1)].s);  _ccc_top = (yyvsp[(1) - (1)].s); ;}
    break;

  case 3:
#line 47 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(4) - (4)].s), s );
      s = cons( (yyvsp[(3) - (4)].s), s );
      s = cons( (yyvsp[(2) - (4)].s), s );
      s = cons( (yyvsp[(1) - (4)].s), s );
      s = cons( S(function), cons( S(default), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 4:
#line 59 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(program), cons( S(default), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 5:
#line 68 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(class_statement_list), cons( S(default), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 6:
#line 77 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(2) - (2)].s), s );
      s = cons( S(fordecls), cons( S(default), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 7:
#line 86 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(4) - (5)].s), s );
      s = cons( (yyvsp[(2) - (5)].s), s );
      s = cons( S(class), cons( S(default), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 8:
#line 96 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(elsepart), cons( S(block), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 9:
#line 102 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(elsepart), cons( S(if), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 10:
#line 111 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (2)].s), s );
      s = cons( S(statement), cons( S(expressionstatement), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 11:
#line 117 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(2) - (3)].s), s );
      s = cons( (yyvsp[(1) - (3)].s), s );
      s = cons( S(statement), cons( S(returnargs), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 12:
#line 124 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (2)].s), s );
      s = cons( S(statement), cons( S(returnnoargs), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 13:
#line 130 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(statement), cons( S(if), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 14:
#line 136 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(statement), cons( S(block), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 15:
#line 142 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(2) - (3)].s), s );
      s = cons( (yyvsp[(1) - (3)].s), s );
      s = cons( S(statement), cons( S(decls), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 16:
#line 149 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(statement), cons( S(function), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 17:
#line 155 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(statement), cons( S(export), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 18:
#line 161 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (2)].s), s );
      s = cons( S(statement), cons( S(label), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 19:
#line 167 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(2) - (3)].s), s );
      s = cons( S(statement), cons( S(goto), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 20:
#line 173 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(statement), cons( S(while), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 21:
#line 179 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(statement), cons( S(for), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 22:
#line 185 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(statement), cons( S(do), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 23:
#line 191 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(statement), cons( S(class), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 24:
#line 197 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(2) - (3)].s), s );
      s = cons( S(statement), cons( S(import), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 25:
#line 203 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(2) - (3)].s), s );
      s = cons( S(statement), cons( S(include), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 26:
#line 212 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(2) - (2)].s), s );
      s = cons( S(callcc), cons( S(default), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 27:
#line 221 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(5) - (7)].s), s );
      s = cons( (yyvsp[(2) - (7)].s), s );
      s = cons( S(do), cons( S(do), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 28:
#line 231 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(5) - (5)].s), s );
      s = cons( (yyvsp[(3) - (5)].s), s );
      s = cons( S(while), cons( S(while), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 29:
#line 241 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(2) - (3)].s), s );
      s = cons( S(paramlist), cons( S(default), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 30:
#line 250 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(3) - (3)].s), s );
      s = cons( (yyvsp[(1) - (3)].s), s );
      s = cons( S(objectaccess), cons( S(default), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 31:
#line 260 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(2) - (3)].s), s );
      s = cons( S(arglist), cons( S(default), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 32:
#line 269 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(importspec), cons( S(default), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 33:
#line 278 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(2) - (2)].s), s );
      s = cons( (yyvsp[(1) - (2)].s), s );
      s = cons( S(class_statement), cons( S(modified), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 34:
#line 285 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(class_statement), cons( S(unmodified), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 35:
#line 294 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(variable), cons( S(default), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 36:
#line 303 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(3) - (3)].s), s );
      s = cons( (yyvsp[(2) - (3)].s), s );
      s = cons( (yyvsp[(1) - (3)].s), s );
      s = cons( S(lambda), cons( S(default), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 37:
#line 314 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(3) - (3)].s), s );
      s = cons( (yyvsp[(1) - (3)].s), s );
      s = cons( S(adecl), cons( S(default), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 38:
#line 324 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(statement_list), cons( S(default), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 39:
#line 333 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(top), cons( S(default), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 40:
#line 342 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(2) - (3)].s), s );
      s = cons( S(block), cons( S(default), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 41:
#line 351 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(5) - (5)].s), s );
      s = cons( (yyvsp[(3) - (5)].s), s );
      s = cons( (yyvsp[(1) - (5)].s), s );
      s = cons( S(if), cons( S(if), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 42:
#line 359 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(7) - (7)].s), s );
      s = cons( (yyvsp[(6) - (7)].s), s );
      s = cons( (yyvsp[(5) - (7)].s), s );
      s = cons( (yyvsp[(3) - (7)].s), s );
      s = cons( (yyvsp[(1) - (7)].s), s );
      s = cons( S(if), cons( S(ifelse), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 43:
#line 372 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(class_access_modifier), cons( S(public), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 44:
#line 381 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(decllist), cons( S(default), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 45:
#line 390 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(9) - (9)].s), s );
      s = cons( (yyvsp[(7) - (9)].s), s );
      s = cons( (yyvsp[(5) - (9)].s), s );
      s = cons( (yyvsp[(3) - (9)].s), s );
      s = cons( S(for), cons( S(for), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 46:
#line 399 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(9) - (9)].s), s );
      s = cons( (yyvsp[(7) - (9)].s), s );
      s = cons( (yyvsp[(5) - (9)].s), s );
      s = cons( (yyvsp[(3) - (9)].s), s );
      s = cons( S(for), cons( S(forwithdecl), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 47:
#line 411 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(3) - (4)].s), s );
      s = cons( S(export), cons( S(decls), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 48:
#line 417 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(2) - (2)].s), s );
      s = cons( S(export), cons( S(fun), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 49:
#line 426 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(3) - (3)].s), s );
      s = cons( (yyvsp[(2) - (3)].s), s );
      s = cons( (yyvsp[(1) - (3)].s), s );
      s = cons( S(opexpr), cons( S(level02), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 50:
#line 434 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(3) - (3)].s), s );
      s = cons( (yyvsp[(2) - (3)].s), s );
      s = cons( (yyvsp[(1) - (3)].s), s );
      s = cons( S(opexpr), cons( S(level03), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 51:
#line 442 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(3) - (3)].s), s );
      s = cons( (yyvsp[(2) - (3)].s), s );
      s = cons( (yyvsp[(1) - (3)].s), s );
      s = cons( S(opexpr), cons( S(level05), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 52:
#line 450 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(3) - (3)].s), s );
      s = cons( (yyvsp[(2) - (3)].s), s );
      s = cons( (yyvsp[(1) - (3)].s), s );
      s = cons( S(opexpr), cons( S(level06), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 53:
#line 458 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(3) - (3)].s), s );
      s = cons( (yyvsp[(2) - (3)].s), s );
      s = cons( (yyvsp[(1) - (3)].s), s );
      s = cons( S(opexpr), cons( S(level07), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 54:
#line 466 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(3) - (3)].s), s );
      s = cons( (yyvsp[(2) - (3)].s), s );
      s = cons( (yyvsp[(1) - (3)].s), s );
      s = cons( S(opexpr), cons( S(level08), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 55:
#line 474 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(3) - (3)].s), s );
      s = cons( (yyvsp[(2) - (3)].s), s );
      s = cons( (yyvsp[(1) - (3)].s), s );
      s = cons( S(opexpr), cons( S(level09), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 56:
#line 482 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(3) - (3)].s), s );
      s = cons( (yyvsp[(2) - (3)].s), s );
      s = cons( (yyvsp[(1) - (3)].s), s );
      s = cons( S(opexpr), cons( S(level10), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 57:
#line 490 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(3) - (3)].s), s );
      s = cons( (yyvsp[(2) - (3)].s), s );
      s = cons( (yyvsp[(1) - (3)].s), s );
      s = cons( S(opexpr), cons( S(level11), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 58:
#line 498 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(3) - (3)].s), s );
      s = cons( (yyvsp[(2) - (3)].s), s );
      s = cons( (yyvsp[(1) - (3)].s), s );
      s = cons( S(opexpr), cons( S(genop), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 59:
#line 509 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(expression), cons( S(variable), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 60:
#line 515 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(3) - (3)].s), s );
      s = cons( (yyvsp[(1) - (3)].s), s );
      s = cons( S(expression), cons( S(assignment), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 61:
#line 522 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(expression), cons( S(opexpr), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 62:
#line 528 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(2) - (3)].s), s );
      s = cons( S(expression), cons( S(paren), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 63:
#line 534 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(expression), cons( S(lambda), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 64:
#line 540 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(2) - (2)].s), s );
      s = cons( (yyvsp[(1) - (2)].s), s );
      s = cons( S(expression), cons( S(show), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 65:
#line 547 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(2) - (2)].s), s );
      s = cons( (yyvsp[(1) - (2)].s), s );
      s = cons( S(expression), cons( S(yield), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 66:
#line 554 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(expression), cons( S(integer), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 67:
#line 560 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(expression), cons( S(boolconst), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 68:
#line 566 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(expression), cons( S(nil), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 69:
#line 572 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(expression), cons( S(string), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 70:
#line 578 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(expression), cons( S(block), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 71:
#line 584 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(expression), cons( S(callcc), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 72:
#line 590 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(2) - (2)].s), s );
      s = cons( (yyvsp[(1) - (2)].s), s );
      s = cons( S(expression), cons( S(funcall), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 73:
#line 597 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(2) - (2)].s), s );
      s = cons( S(expression), cons( S(quoteatom), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 74:
#line 603 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(1) - (1)].s), s );
      s = cons( S(expression), cons( S(objectaccess), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 75:
#line 609 "kp.y"
    {
      sexp s = nil;
      s = cons( (yyvsp[(2) - (2)].s), s );
      s = cons( S(expression), cons( S(new), s ) );
      (yyval.s) = s;
    ;}
    break;

  case 76:
#line 620 "kp.y"
    {
      (yyval.s) = (yyvsp[(1) - (1)].s);
    ;}
    break;

  case 77:
#line 623 "kp.y"
    {
      (yyval.s) = nil;
    ;}
    break;

  case 78:
#line 627 "kp.y"
    {
    (yyval.s) = cons( (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s) );
    ;}
    break;

  case 79:
#line 630 "kp.y"
    {
      (yyval.s) = cons( (yyvsp[(1) - (1)].s), nil );
    ;}
    break;

  case 80:
#line 635 "kp.y"
    {
      (yyval.s) = cons( (yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s) );;
    ;}
    break;

  case 81:
#line 638 "kp.y"
    {
    (yyval.s) = nil;
    ;}
    break;

  case 82:
#line 643 "kp.y"
    {
      (yyval.s) = (yyvsp[(1) - (1)].s);
    ;}
    break;

  case 83:
#line 646 "kp.y"
    {
      (yyval.s) = nil;
    ;}
    break;

  case 84:
#line 650 "kp.y"
    {
    (yyval.s) = cons( (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s) );
    ;}
    break;

  case 85:
#line 653 "kp.y"
    {
      (yyval.s) = cons( (yyvsp[(1) - (1)].s), nil );
    ;}
    break;

  case 86:
#line 658 "kp.y"
    {
      (yyval.s) = (yyvsp[(1) - (1)].s);
    ;}
    break;

  case 87:
#line 661 "kp.y"
    {
      (yyval.s) = nil;
    ;}
    break;

  case 88:
#line 665 "kp.y"
    {
    (yyval.s) = cons( (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s) );
    ;}
    break;

  case 89:
#line 668 "kp.y"
    {
      (yyval.s) = cons( (yyvsp[(1) - (1)].s), nil );
    ;}
    break;

  case 90:
#line 673 "kp.y"
    {
      (yyval.s) = cons( (yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s) );;
    ;}
    break;

  case 91:
#line 676 "kp.y"
    {
    (yyval.s) = nil;
    ;}
    break;

  case 92:
#line 681 "kp.y"
    {
      (yyval.s) = cons( (yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s) );;
    ;}
    break;

  case 93:
#line 684 "kp.y"
    {
    (yyval.s) = nil;
    ;}
    break;

  case 94:
#line 690 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 95:
#line 696 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 96:
#line 702 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 97:
#line 708 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 98:
#line 714 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 99:
#line 720 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 100:
#line 726 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 101:
#line 732 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 102:
#line 738 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 103:
#line 744 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 104:
#line 750 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 105:
#line 756 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 106:
#line 762 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 107:
#line 768 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 108:
#line 774 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 109:
#line 780 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 110:
#line 786 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 111:
#line 792 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 112:
#line 798 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 113:
#line 804 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 114:
#line 810 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 115:
#line 816 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 116:
#line 822 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 117:
#line 828 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 118:
#line 834 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 119:
#line 840 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 120:
#line 846 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 121:
#line 852 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 122:
#line 858 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 123:
#line 864 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 124:
#line 870 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 125:
#line 876 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 126:
#line 882 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 127:
#line 888 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 128:
#line 894 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 129:
#line 900 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 130:
#line 906 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 131:
#line 912 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 132:
#line 918 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 133:
#line 924 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 134:
#line 930 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 135:
#line 936 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 136:
#line 942 "kp.y"
    {
  sexp s;
  s = mksym( strdoop( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;

  case 137:
#line 948 "kp.y"
    {
  sexp s;
  s = mkstring( __kp_strdoop_no_quotes( yytext ) );
  SEXP_PROPERTIES( s ) = __kp_where_stamp();
  (yyval.s) = s;
 ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3060 "kp.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 955 "kp.y"

sexp __kp_where_stamp()
{
  static char spbuf[2048];
  sexp s;

  s = sexp_build( "((file %)(line % %) (char % %) (gchar % %))",
    SEXP_MKSTRING( __kp_filename ),
    SEXP_MKINT( __kp_token_start_line ), SEXP_MKINT( __kp_token_end_line ),
    SEXP_MKINT( __kp_token_start_char ), SEXP_MKINT( __kp_token_end_char ),
    SEXP_MKINT( __kp_token_start_gchar ), SEXP_MKINT( __kp_token_end_gchar ) );

  return s;
}
char *__kp_strdoop_no_quotes( char *string )
{
  int c, len;
  char *dup;

  len = strlen( string );
  A(len>=2);
  c = string[len-1];
  string[len-1] = 0;

  dup = strdoop( string+1 );

  string[len-1] = c;

  return dup;
}
sexp kp_parse( char *filename, FILE *instream )
{
  yyin = instream;
  __kp_filename = filename == NULL ? "[NULL]" : filename;

  if (yyparse()) {
    return nil;
  } else {
    return _ccc_top;
  }
}
void yyerror( char *s )
{
  fprintf( stderr, "Syntax error at line %d, char %d\n",
    __kp_token_start_line, __kp_token_start_char );
}
int yywrap()
{
  return 1;
}

