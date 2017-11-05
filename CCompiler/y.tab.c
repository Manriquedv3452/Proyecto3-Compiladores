/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "bison.y" /* yacc.c:339  */


/* Taken from http://www.quut.com/c/ANSI-C-grammar-y.html*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "semanticStack.h"
#include "symbolTable.h"
#define FALSE 0
#define TRUE 1
#define CWHT  "\x1B[0m"
#define CWHTN  "\x1B[1m"

void save_type(void);
void process_literal(void);
void process_id(void);
void save_id(void);
void process_op(void);
void process_id(void);
void declaration_end(void);
void addTableContext(void);
void checkForDeclaredError(char *token, SemanticRecord* R);

void yyerror(const char *);
void yynote(char *noteInfo, int line, int column, int writeCode);
extern int getToken(void);
extern char* yytext;
extern int yylineno;
extern int column;
extern int previousColumn;
extern void print(void);

extern char* previousToken;

#define yylex getToken
#define YYERROR_VERBOSE 1

int errorFound = 0;
int inFunction = FALSE;
int inContext = FALSE;
int unDecleared = FALSE;


#line 111 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
    IDENTIFIER = 258,
    I_CONSTANT = 259,
    F_CONSTANT = 260,
    STRING_LITERAL = 261,
    FUNC_NAME = 262,
    SIZEOF = 263,
    PTR_OP = 264,
    INC_OP = 265,
    DEC_OP = 266,
    LEFT_OP = 267,
    RIGHT_OP = 268,
    LE_OP = 269,
    GE_OP = 270,
    EQ_OP = 271,
    NE_OP = 272,
    AND_OP = 273,
    OR_OP = 274,
    MUL_ASSIGN = 275,
    DIV_ASSIGN = 276,
    MOD_ASSIGN = 277,
    ADD_ASSIGN = 278,
    SUB_ASSIGN = 279,
    LEFT_ASSIGN = 280,
    RIGHT_ASSIGN = 281,
    AND_ASSIGN = 282,
    XOR_ASSIGN = 283,
    OR_ASSIGN = 284,
    TYPEDEF_NAME = 285,
    ENUMERATION_CONSTANT = 286,
    TYPEDEF = 287,
    EXTERN = 288,
    STATIC = 289,
    AUTO = 290,
    REGISTER = 291,
    INLINE = 292,
    CONST = 293,
    RESTRICT = 294,
    VOLATILE = 295,
    BOOL = 296,
    CHAR = 297,
    SHORT = 298,
    INT = 299,
    LONG = 300,
    SIGNED = 301,
    UNSIGNED = 302,
    FLOAT = 303,
    DOUBLE = 304,
    VOID = 305,
    COMPLEX = 306,
    IMAGINARY = 307,
    STRUCT = 308,
    UNION = 309,
    ENUM = 310,
    ELLIPSIS = 311,
    CASE = 312,
    DEFAULT = 313,
    IF = 314,
    ELSE = 315,
    SWITCH = 316,
    WHILE = 317,
    DO = 318,
    FOR = 319,
    GOTO = 320,
    CONTINUE = 321,
    BREAK = 322,
    RETURN = 323,
    ALIGNAS = 324,
    ALIGNOF = 325,
    ATOMIC = 326,
    GENERIC = 327,
    NORETURN = 328,
    STATIC_ASSERT = 329,
    THREAD_LOCAL = 330
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define I_CONSTANT 259
#define F_CONSTANT 260
#define STRING_LITERAL 261
#define FUNC_NAME 262
#define SIZEOF 263
#define PTR_OP 264
#define INC_OP 265
#define DEC_OP 266
#define LEFT_OP 267
#define RIGHT_OP 268
#define LE_OP 269
#define GE_OP 270
#define EQ_OP 271
#define NE_OP 272
#define AND_OP 273
#define OR_OP 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define MOD_ASSIGN 277
#define ADD_ASSIGN 278
#define SUB_ASSIGN 279
#define LEFT_ASSIGN 280
#define RIGHT_ASSIGN 281
#define AND_ASSIGN 282
#define XOR_ASSIGN 283
#define OR_ASSIGN 284
#define TYPEDEF_NAME 285
#define ENUMERATION_CONSTANT 286
#define TYPEDEF 287
#define EXTERN 288
#define STATIC 289
#define AUTO 290
#define REGISTER 291
#define INLINE 292
#define CONST 293
#define RESTRICT 294
#define VOLATILE 295
#define BOOL 296
#define CHAR 297
#define SHORT 298
#define INT 299
#define LONG 300
#define SIGNED 301
#define UNSIGNED 302
#define FLOAT 303
#define DOUBLE 304
#define VOID 305
#define COMPLEX 306
#define IMAGINARY 307
#define STRUCT 308
#define UNION 309
#define ENUM 310
#define ELLIPSIS 311
#define CASE 312
#define DEFAULT 313
#define IF 314
#define ELSE 315
#define SWITCH 316
#define WHILE 317
#define DO 318
#define FOR 319
#define GOTO 320
#define CONTINUE 321
#define BREAK 322
#define RETURN 323
#define ALIGNAS 324
#define ALIGNOF 325
#define ATOMIC 326
#define GENERIC 327
#define NORETURN 328
#define STATIC_ASSERT 329
#define THREAD_LOCAL 330

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 312 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  71
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   9328

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  404
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  713

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,     2,     2,     2,    92,    85,     2,
      76,    77,    86,    87,    78,    88,    82,    91,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    79,    99,
      93,    98,    94,    97,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,    95,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    96,    84,    89,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    66,    66,    67,    68,    69,    70,    71,    72,    76,
      77,    78,    82,    86,    87,    91,    92,    93,    97,    98,
     100,   104,   105,   107,   108,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   123,   124,   126,   127,   129,
     130,   132,   133,   134,   141,   142,   145,   146,   150,   151,
     152,   153,   154,   155,   156,   164,   165,   166,   167,   168,
     169,   173,   174,   181,   182,   183,   184,   185,   186,   187,
     188,   192,   193,   194,   196,   197,   199,   203,   204,   205,
     206,   207,   211,   212,   213,   214,   215,   217,   219,   224,
     225,   226,   227,   228,   232,   233,   234,   238,   239,   240,
     244,   245,   246,   250,   251,   252,   256,   257,   258,   262,
     263,   264,   265,   266,   270,   271,   273,   274,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   292,
     293,   295,   296,   300,   304,   305,   306,   308,   309,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     329,   330,   331,   335,   336,   337,   341,   342,   343,   344,
     345,   346,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   369,   370,
     371,   372,   373,   374,   375,   379,   380,   384,   385,   389,
     390,   391,   395,   399,   400,   401,   402,   403,   407,   408,
     409,   410,   414,   415,   416,   424,   425,   426,   427,   428,
     429,   430,   435,   436,   438,   439,   443,   444,   446,   448,
     452,   456,   457,   458,   459,   463,   464,   468,   469,   473,
     474,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   496,   497,   498,   502,   503,
     504,   505,   510,   511,   512,   513,   515,   516,   517,   521,
     522,   527,   528,   530,   534,   535,   536,   541,   542,   543,
     547,   548,   550,   554,   555,   557,   558,   562,   563,   564,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,   587,
     588,   594,   595,   596,   598,   599,   600,   604,   605,   606,
     607,   608,   609,   613,   615,   619,   620,   624,   625,   626,
     627,   631,   632,   636,   637,   638,   639,   640,   641,   645,
     646,   647,   649,   650,   651,   652,   656,   657,   658,   662,
     663,   667,   668,   672,   673,   675,   679,   680,   681,   683,
     684,   685,   686,   687,   688,   689,   690,   691,   695,   696,
     697,   698,   699,   700,   704,   705,   706,   707,   709,   710,
     711,   712,   713,   715,   717,   718,   719,   721,   722,   723,
     724,   725,   726,   727,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,   741,   745,   746,   750,   751,   755,
     755,   756,   756,   769,   770
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "I_CONSTANT", "F_CONSTANT",
  "STRING_LITERAL", "FUNC_NAME", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "TYPEDEF_NAME", "ENUMERATION_CONSTANT", "TYPEDEF", "EXTERN",
  "STATIC", "AUTO", "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE",
  "BOOL", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT",
  "DOUBLE", "VOID", "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM",
  "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO",
  "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "ALIGNAS", "ALIGNOF",
  "ATOMIC", "GENERIC", "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "'('",
  "')'", "','", "':'", "'['", "']'", "'.'", "'{'", "'}'", "'&'", "'*'",
  "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'",
  "'?'", "'='", "';'", "$accept", "primary_expression", "constant",
  "enumeration_constant", "string", "generic_selection",
  "generic_assoc_list", "generic_association", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "$@1", "$@2", "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,    40,    41,    44,    58,
      91,    93,    46,   123,   125,    38,    42,    43,    45,   126,
      33,    47,    37,    60,    62,    94,   124,    63,    61,    59
};
# endif

#define YYPACT_NINF -426

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-426)))

#define YYTABLE_NINF -402

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    8844,  9011,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,    75,   -49,   -32,  -426,
     -24,  -426,  -426,    37,  3751,  3822,  -426,   283,  -426,  -426,
    3893,  3964,  4035,  -426,  8789,  -426,  -426,  -426,    33,   190,
    5401,  9223,  5849,   434,  -426,   222,   311,  -426,    25,  -426,
    4106,     3,   179,  -426,  -426,  9066,   860,  9066,  -426,  -426,
    -426,  -426,  -426,   190,  -426,   107,    23,  -426,  7842,  -426,
    -426,  -426,  -426,  -426,  7737,  7759,  7759,  -426,   125,   128,
    5491,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,   479,  -426,  7847,  -426,  1136,  1524,  1621,  2494,  2882,
     122,   126,   117,   218,  3076,  -426,   167,  4805,   152,  4867,
     183,   232,   172,   217,  -426,  -426,  -426,   455,   455,    13,
     508,  -426,   885,   222,   222,  -426,  5311,  7583,  -426,    37,
     233,  8568,  8623,  7077,     3,  9257,  8348,  -426,    20,  -426,
    9066,  9066,  8403,   201,  7847,  5871,   190,    48,  -426,  9257,
    8018,  7099,  -426,     5,  -426,   261,  5491,  -426,  5491,  -426,
    -426,  9223,  5893,  8238,  1037,  -426,  -426,   185,   229,   321,
    -426,  -426,  5715,  5983,   340,  -426,  7847,  6005,  6027,  6117,
    7847,  6139,  6161,  7847,  7847,  6251,  7847,  7847,  7847,  6273,
    7847,  7847,  7847,  6295,  6385,  6407,  6429,  6519,  7847,  6541,
    6563,  -426,  -426,   455,  -426,  -426,  -426,  -426,   346,   355,
    -426,  -426,  -426,  -426,  -426,  -426,    49,  -426,  5603,  -426,
    -426,  -426,  3263,  -426,  -426,   233,  8678,  -426,  -426,   216,
     234,   267,  -426,   324,   736,  -426,   265,   293,  7187,  -426,
    -426,  7847,  -426,    27,  -426,   288,  8458,  8513,  3609,  -426,
     190,   215,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    8128,  9011,  -426,   299,   302,  7341,  -426,   313,   317,  7209,
     261,  8733,  7231,   245,   318,   328,   331,   342,   348,  7847,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  6653,  7847,  -426,  6675,   350,  7605,  -426,   358,  -426,
     326,  -426,   344,   226,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  1233,  -426,  1330,  -426,  1427,  1718,  1815,  -426,
    1912,  2009,  2106,  2203,  -426,  2300,  2397,  2591,  2688,  -426,
    2785,  -426,  2979,  -426,   122,  -426,   126,  -426,   117,   239,
    -426,   218,   360,   251,   366,   368,  7583,   -25,  6697,   452,
    -426,   219,  7583,   189,  -426,   397,  6787,   398,    12,   403,
     225,  4161,   304,    64,    31,    36,  4923,  -426,  -426,    67,
    -426,  -426,  -426,  -426,  3353,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  7963,  -426,   278,  -426,  -426,  -426,  8899,  8955,
     477,  -426,   480,  7627,   401,  5581,  -426,  -426,  7847,  -426,
     415,   422,  -426,  8073,   191,  -426,  7847,  -426,  3680,  -426,
    -426,  7908,  -426,  -426,   427,  7341,  -426,  -426,  7847,  -426,
     429,  -426,   435,  7341,  -426,   437,   440,  7319,   444,   444,
    -426,  9121,  9155,  7495,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  5625,  -426,  -426,  7847,  -426,  6809,  -426,  7847,  -426,
    7847,  7847,  7847,  7847,  7847,   436,   439,   450,  -426,   463,
     173,  -426,  7495,  7363,  -426,  -426,  -426,  -426,  -426,  4205,
     466,   470,  4295,  7847,  6831,  6921,  7847,  6943,   488,   489,
    8844,  3443,  -426,    55,  -426,  -426,  -426,  -426,  -426,  -426,
      74,  7847,  -426,   947,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,   472,  -426,   473,   475,   476,  -426,  -426,
    -426,   455,  -426,  -426,  -426,   482,   484,  -426,  -426,   485,
    7341,  -426,  -426,  7847,  -426,   486,    19,   118,  -426,   481,
    8293,   286,   242,   103,   250,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  7583,
    -426,  -426,  7583,  -426,  -426,  5109,  4338,  -426,  -426,  3173,
     491,   330,   492,   334,   337,   493,   352,   495,   347,  5199,
    3533,  4954,  4976,  -426,  -426,  7847,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,  -426,   494,   496,  -426,  7847,  6965,  -426,
    9189,  7847,  -426,  -426,  7495,  7451,  -426,   490,  -426,  7473,
    -426,  -426,  -426,  -426,  -426,  -426,  5109,  7847,  4428,  5109,
    4471,  5109,  5109,  5109,  4561,  7847,  7847,  7055,  7847,   499,
    7847,  5737,  7715,  5759,  -426,  -426,  -426,  -426,  -426,  8183,
    -426,  -426,  -426,  -426,  -426,   513,   518,   522,  -426,  -426,
    -426,  -426,  -426,   514,  -426,  -426,  -426,   359,   364,   515,
     371,   374,  5109,   376,   516,  5109,   380,  5109,   385,  5066,
    5109,   409,  5109,  5109,  4604,   501,   503,   504,  5221,    79,
    5109,  -426,  5109,  5109,  -426,  5109,  4694,  -426,  5109,  5109,
    -426,  -426,  4737,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   177,   156,   157,   158,   160,   161,   225,   221,
     222,   223,   171,   163,   164,   165,   166,   169,   170,   167,
     168,   162,   172,   173,   185,   186,     0,     0,   224,   226,
       0,   159,   398,     0,     0,     0,   175,     0,   176,   174,
       0,     0,     0,   136,     0,   395,   397,   149,   209,     0,
       0,     0,     0,   138,   231,     0,     0,   134,     0,   150,
       0,   230,     0,   139,   141,     0,     0,     0,   143,   145,
     147,     1,   396,     0,    12,     0,     0,   212,     0,     2,
       9,    10,    13,    14,     0,     0,     0,    11,     0,     0,
       0,    55,    56,    57,    58,    59,    60,    25,     3,     4,
       6,    48,    61,     0,    63,     0,     0,     0,     0,     0,
      97,   100,   103,   106,     0,   133,     0,     0,     0,     0,
       0,     0,     0,     0,   224,   137,   259,   258,     0,     0,
       0,   254,     0,     0,     0,   135,     0,     0,   403,     0,
       0,     0,     0,     0,   229,     0,     0,   187,     0,   191,
       0,     0,     0,     0,     0,     0,   211,     0,   205,     0,
       0,     0,   197,   278,   275,   279,     0,    52,     0,    49,
      50,     0,     0,     0,     0,   114,   129,     0,     0,     0,
      31,    32,     0,     0,     0,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   228,   193,   276,   273,   195,   227,   220,     0,     0,
     260,   245,   232,   256,   252,   152,     0,   151,     0,   303,
     155,   153,     0,   402,   404,     0,     0,   270,   243,     0,
       0,     0,   264,     0,     0,   233,    56,     0,     0,   181,
     188,     0,   189,     0,   198,   204,     0,     0,     0,   178,
     210,     0,   207,   219,   218,   216,   215,   214,   206,   213,
       0,     0,   297,     0,     0,     0,   281,    56,     0,     0,
     277,     0,     0,     0,     0,     0,     0,     0,     7,     0,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     118,     0,     8,     5,     0,     0,     0,    30,     0,    27,
       0,    44,     0,     0,    29,    70,    67,    64,    68,    65,
      69,    66,     0,    74,     0,    75,     0,     0,     0,    80,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    92,
       0,    96,     0,    99,    98,   102,   101,   105,   104,     0,
     108,   107,     0,     0,     0,     0,     0,     0,     0,     0,
     308,     0,     0,     0,   315,     2,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   336,   343,     0,
     341,   342,   323,   324,     0,   339,   325,   326,   327,   328,
     400,   250,     0,   267,   278,   268,   249,   242,     0,     0,
     251,   244,     0,     0,     0,     0,   234,   241,     0,   240,
      56,     0,   202,     0,     0,   190,     0,   183,     0,   179,
     208,     0,   298,   280,     0,     0,   282,   288,     0,   287,
       0,   299,     0,     0,   289,    56,     0,     0,    53,     0,
      54,     0,     0,     0,   116,   117,   115,   132,   131,   130,
      43,     0,    62,    36,    41,    28,     0,    35,    42,    26,
       0,     0,     0,     0,     0,     0,     0,     0,   304,     0,
       0,   318,   306,     0,   301,   307,   314,   313,   316,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   394,     0,   392,   385,   391,   386,   389,   387,
       0,   345,   344,     0,   337,   340,   263,   266,   261,   265,
     272,   271,   248,     0,   236,     0,     0,     0,   237,   239,
     201,   200,   199,   203,   284,     0,     0,   286,   300,     0,
       0,   290,   296,     0,   295,     0,     0,     0,    18,     0,
       0,     0,     0,     0,     0,    47,    46,    45,   113,   111,
     112,   110,   322,   321,   305,   319,   320,   317,   311,     0,
     302,   310,     0,   332,   329,     0,     0,   335,   331,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   393,   384,   390,   388,   246,   247,   235,
     238,   283,   285,   292,     0,     0,   293,     0,     0,    16,
       0,     0,    17,    15,     0,     0,    37,     0,    38,     0,
      33,   312,   309,   333,   334,   330,     0,   351,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   291,   294,    24,    23,    22,     0,
      19,    21,    39,    40,    34,   354,   355,   347,   356,   357,
     348,   367,   364,   129,   366,   365,   358,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   373,     0,     0,   362,     0,     0,   377,     0,     0,
     379,   360,     0,   349,   352,   353,   346,   368,   372,   369,
     371,   370,   359,   383,   378,   380,   382,   381,   363,   374,
     375,   376,   361
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -426,  -426,  -426,  -426,  -426,  -426,   130,   -11,  -426,  -426,
     512,  -426,   -48,   325,   335,   268,   322,   386,   390,   402,
     400,   404,  -426,   -45,   196,  -426,    56,   -43,   -44,   115,
    -426,   327,  -426,    29,  -426,  -426,    97,   -80,   -59,  -426,
     -58,  -426,   537,  -139,  -426,     1,  -426,  -426,   -30,   -52,
     -56,   -41,  -130,  -426,    71,  -426,    44,  -114,  -152,  -103,
    -412,  -425,  -426,   248,    17,   166,  -426,   -63,  -426,   228,
    -291,  -426,  -426,  -426,  -426,   570,  -426,  -426,  -426,  -426
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    97,    98,    75,    99,   100,   537,   538,   101,   310,
     174,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   175,   176,   301,   379,   116,    32,    47,
      58,    59,    34,   117,    36,    37,   146,   147,   118,   253,
     254,    38,    76,    77,    39,   119,    41,    42,   226,    61,
      62,   127,   273,   241,   242,   243,   539,   164,   165,   360,
     361,   362,   363,   364,    43,   381,   382,   383,   384,   385,
     386,   387,   388,   389,    44,    45,    46,   235,   140,   141
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     131,    40,    40,    60,   214,   115,   148,   115,   148,   123,
     144,   280,   240,   483,   221,   132,   138,   266,   269,   162,
     597,   128,   163,    54,   156,   129,   133,    50,   413,    35,
      35,   542,   494,   230,   231,    40,    40,   496,    53,   544,
      54,    40,    40,    40,    51,    40,   274,   559,   562,   267,
     356,    74,    52,   467,   126,   185,   583,   126,   212,   468,
     215,    40,   163,    35,    35,   492,   250,   493,   501,    35,
      35,    35,   250,    35,   223,   585,   224,   233,    48,   142,
     701,   160,   149,   143,   149,   161,   162,   148,   484,    35,
     222,   148,   148,   148,   120,   121,    55,   234,   598,   251,
     162,   157,   248,   134,   163,   414,    56,   158,   154,   115,
     115,   263,   265,    55,   162,    33,    73,   163,   255,   252,
     279,   266,   269,    56,   135,   395,   415,  -154,   220,   126,
     495,   126,   268,   220,   178,   497,    57,    40,   315,   317,
     319,   321,    40,    40,   126,   304,   177,   137,  -154,    63,
      64,   432,   304,   213,   584,    68,    69,    70,    49,    33,
     270,    40,   126,   149,   152,    35,   502,   149,   149,   149,
      35,    35,   390,   586,   556,   139,   250,   250,   702,   559,
     562,   607,    54,   394,   562,  -217,   302,   608,   380,    35,
     476,  -217,   521,    74,    54,   599,   600,   148,   148,   162,
     582,   171,   260,   405,   172,   155,   115,   204,   412,   393,
     283,   215,   284,   206,   126,   285,   267,   128,    74,    54,
     472,   205,   177,   128,   177,    54,   486,   458,   160,  -274,
     305,  -274,   161,    40,   425,   396,   207,    40,    56,   313,
     460,   437,   280,   604,   211,   126,   305,   256,   257,   220,
     218,   604,   463,   230,   557,    55,   139,   239,   452,   475,
     216,    35,   303,   304,   349,    35,   353,    55,   398,   358,
     251,   359,   421,   149,   149,   239,   126,    56,   274,   261,
     220,    54,    40,   126,    65,   262,    66,   477,   628,   629,
     631,   633,   392,  -269,  -269,   219,   161,   473,    55,   420,
      35,   487,    56,   474,   304,   490,   306,   459,    56,   217,
      35,   397,   130,   115,  -255,   470,   232,   304,   461,   305,
     605,   115,   438,   481,   307,   400,   606,   454,   609,   304,
     464,   617,   229,   229,   610,   460,   394,   281,   460,   247,
     380,   282,   144,   314,  -262,   399,   406,   139,   626,     9,
      10,    11,   354,   623,   392,   520,   522,   278,   161,   162,
     460,   355,   129,   603,   600,   460,    67,   416,   287,   558,
     561,   115,   678,   523,   407,   460,   422,   460,   311,   423,
     491,   685,   124,   255,   255,    40,   460,  -255,  -255,  -255,
    -255,  -255,   530,    40,   426,   439,   239,    56,   427,    40,
      40,   401,   402,   455,   456,   440,   220,   618,   304,   441,
     460,   620,   304,    35,   621,   304,   548,   549,   550,   551,
     442,    35,    40,   627,   229,   457,   220,    35,    35,   624,
     304,   443,   500,   450,   126,   453,   675,   304,   220,   462,
     404,   676,   304,   465,   411,   466,   579,   581,   679,   304,
      35,   680,   304,   682,   304,   471,   611,   686,   304,   612,
     225,   227,   688,   304,   331,   332,   333,   335,   336,   507,
     509,   424,     9,    10,    11,   430,   479,   482,   436,   485,
     510,   162,   514,   511,   163,   444,   692,   304,   179,   180,
     181,    40,    40,     9,    10,    11,   518,   446,   447,   139,
     449,   558,   561,   519,    40,   124,   561,   239,   524,   128,
     527,  -257,   528,   239,   239,   322,   324,   326,   531,    35,
      35,   532,   126,   337,   338,   340,   124,   451,   327,   328,
     330,   220,    35,   125,   554,   552,    68,   489,   553,   569,
     571,   573,   574,   576,   555,   565,     9,    10,    11,   566,
     577,   578,   229,   587,   588,   182,   589,   590,   229,   183,
     601,   184,   102,   591,   102,   592,   593,   596,   616,   619,
     622,   625,   541,   672,   643,   634,   662,   635,   673,   124,
     162,    40,   674,   163,  -257,  -257,  -257,  -257,  -257,   640,
     342,  -132,   677,   683,    56,   344,   167,   169,   170,   513,
     697,   516,   698,   699,   517,   139,   139,   348,   346,    35,
     153,   478,   505,   351,    72,   102,     0,     0,     0,     0,
       0,   525,     0,     0,   526,     0,     0,     0,     0,   529,
       0,     0,     0,   535,     0,     0,     0,     0,     0,   229,
       0,     0,     0,     0,     0,   564,     0,   229,   568,     0,
     545,     0,   547,     0,   447,     0,   447,     0,     0,   447,
       0,     0,     0,     0,     0,     0,   102,   102,   229,   229,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   657,   658,   660,   661,     0,   663,   666,   668,   671,
       0,     0,     0,     0,     0,     0,     0,   447,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
       0,   102,     0,     0,     0,     0,   594,     0,     0,   595,
       0,   613,   615,     0,     0,     0,     0,   403,     0,    79,
      80,    81,    82,    83,    84,     0,    85,    86,     0,     0,
       0,     0,     0,     0,     0,   229,     0,     0,   229,     0,
       0,     0,     0,   102,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     9,    10,    11,     0,     0,     0,
       0,   447,   645,     0,   647,   648,   650,   651,   652,   654,
     656,     0,     0,   636,   638,     0,     0,   641,     0,     0,
     229,   229,     0,     0,     0,   229,    88,   124,    89,     0,
       0,     0,    90,   447,     0,     0,     0,     0,   102,   653,
       0,    91,    92,    93,    94,    95,    96,     0,   681,     0,
       0,   684,     0,   687,     0,   690,   691,     0,   693,   694,
     696,     0,     0,     0,     0,     0,   703,     0,   704,   705,
       0,   706,   708,     0,   709,   710,     0,     0,   712,     0,
       0,   150,     0,  -180,     0,     0,     0,     0,     0,     0,
     102,     0,     0,     0,   447,     0,     0,     0,   102,     0,
       0,   653,     0,     0,     0,     0,   128,     0,  -253,     0,
    -180,     0,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,     0,     0,     0,     0,
       0,     0,     0,     9,    10,    11,     0,     0,   102,  -180,
       0,  -180,     0,  -180,     0,  -180,  -180,  -180,  -180,  -180,
    -180,     0,     0,   151,     0,     0,  -180,  -338,     1,     0,
    -338,  -338,  -338,  -338,  -338,  -338,   124,  -338,  -338,  -180,
       0,  -253,  -253,  -253,  -253,  -253,     0,     0,     0,     0,
       0,    56,     0,   102,   102,     0,   102,     2,  -338,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,  -338,  -338,  -338,  -338,  -338,  -338,
    -338,  -338,  -338,  -338,  -338,  -338,    27,  -338,    28,  -338,
      29,  -338,    31,  -338,     0,     0,     0,     0,     0,     0,
    -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,   289,     0,
     -61,   -61,   -61,   -61,   -61,   -61,  -338,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,   -61,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   300,   -61,   186,     0,   -71,
     -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,     0,   -71,
     -71,   -71,   187,   -71,   -71,   -71,   -71,   188,   189,   -71,
     -71,   -71,   -71,   -71,   186,   -71,   -76,   -76,   -76,   -76,
     -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,   -76,     0,   -76,   -76,   -76,   187,
     -76,   -76,   -76,   -76,   188,   189,   -76,   -76,   -76,   -76,
     -76,   186,   -76,   -72,   -72,   -72,   -72,   -72,   -72,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,   -72,     0,   -72,   -72,   -72,   187,   -72,   -72,   -72,
     -72,   188,   189,   -72,   -72,   -72,   -72,   -72,   186,   -72,
     -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,     0,
     -73,   -73,   -73,   187,   -73,   -73,   -73,   -73,   188,   189,
     -73,   -73,   -73,   -73,   -73,   190,   -73,   -77,   -77,   -77,
     -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,   -77,     0,   -77,   -77,   -77,
     -77,   191,   192,   -77,   -77,     0,     0,   -77,   -77,   -77,
     -77,   -77,   193,   -77,   -82,   -82,   -82,   -82,   -82,   -82,
       0,   -82,   -82,   194,   195,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,     0,   -82,   -82,   -82,   -82,   -82,   190,
     -82,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,
       0,   -81,   -81,   -81,   -81,   191,   192,   -81,   -81,     0,
       0,   -81,   -81,   -81,   -81,   -81,   190,   -81,   -78,   -78,
     -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,   -78,     0,   -78,   -78,
     -78,   -78,   191,   192,   -78,   -78,     0,     0,   -78,   -78,
     -78,   -78,   -78,   190,   -78,   -79,   -79,   -79,   -79,   -79,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,   -79,     0,   -79,   -79,   -79,   -79,   191,
     192,   -79,   -79,     0,     0,   -79,   -79,   -79,   -79,   -79,
     193,   -79,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,
     -87,   194,   195,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,
     -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
       0,     0,   -87,   -87,   -87,   -87,   -87,   193,   -87,   -85,
     -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,   194,   195,
     -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,   -85,
     -85,   -85,   -85,   -85,   193,   -85,   -86,   -86,   -86,   -86,
     -86,   -86,     0,   -86,   -86,   194,   195,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,   -86,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,     0,   -86,   -86,   -86,   -86,
     -86,   193,   -86,   -83,   -83,   -83,   -83,   -83,   -83,     0,
     -83,   -83,   194,   195,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
       0,   -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,   -83,   -83,   -83,   -83,   -83,   193,   -83,
     -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,   194,
     195,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,
     -84,   -84,   -84,   -84,   -84,   196,   -84,   -89,   -89,   -89,
     -89,   -89,   -89,     0,   -89,   -89,     0,     0,   197,   198,
     -89,   -89,   -89,   -89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,     0,   -89,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,     0,     0,   199,   200,   -89,
     -89,   -89,   196,   -89,   -93,   -93,   -93,   -93,   -93,   -93,
       0,   -93,   -93,     0,     0,   197,   198,   -93,   -93,   -93,
     -93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,     0,   -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,     0,     0,   199,   200,   -93,   -93,   -93,   196,
     -93,   -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,
       0,     0,   197,   198,   -90,   -90,   -90,   -90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,
       0,   199,   200,   -90,   -90,   -90,   196,   -90,   -91,   -91,
     -91,   -91,   -91,   -91,     0,   -91,   -91,     0,     0,   197,
     198,   -91,   -91,   -91,   -91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,     0,   -91,     0,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,     0,     0,   199,   200,
     -91,   -91,   -91,   201,   -91,   -94,   -94,   -94,   -94,   -94,
     -94,     0,   -94,   -94,     0,     0,     0,     0,   202,   203,
     -94,   -94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,     0,   -94,     0,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,     0,     0,     0,     0,   -94,   -94,   -94,
     201,   -94,   -95,   -95,   -95,   -95,   -95,   -95,     0,   -95,
     -95,     0,     0,     0,     0,   202,   203,   -95,   -95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,     0,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,
     -95,     0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
       0,     0,     0,     0,   -95,   -95,   -95,   208,   -95,  -109,
    -109,  -109,  -109,  -109,  -109,     0,  -109,  -109,     0,     0,
       0,     0,     0,     0,     0,   209,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,     0,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,     0,  -109,     0,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,     0,     0,     0,
       0,     0,     0,   210,   460,  -109,  -350,  -350,  -350,  -350,
    -350,  -350,     0,  -350,  -350,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,     0,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
       0,   304,     0,     0,     0,     0,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,     1,     0,   365,    80,    81,    82,
      83,    84,  -350,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,    87,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
     366,   367,   368,     0,   369,   370,   371,   372,   373,   374,
     375,   376,    27,    88,    28,    89,    29,    30,    31,    90,
       0,     0,     0,     0,     0,     0,   232,   377,    91,    92,
      93,    94,    95,    96,   503,     0,   365,    80,    81,    82,
      83,    84,   378,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,    87,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
     366,   367,   368,     0,   369,   370,   371,   372,   373,   374,
     375,   376,    27,    88,    28,    89,    29,    30,    31,    90,
       0,     0,     0,     0,     0,     0,   232,   504,    91,    92,
      93,    94,    95,    96,   580,     0,    79,    80,    81,    82,
      83,    84,   378,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,    87,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    88,    28,    89,    29,    30,    31,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     1,     0,    79,    80,    81,    82,
      83,    84,   378,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,    87,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    88,    28,    89,    29,     0,    31,    90,
     145,     0,  -184,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,   378,     0,     0,     0,     0,     0,     0,     2,
       0,  -184,  -184,  -184,  -184,  -184,  -184,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -184,     0,
      28,   145,  -184,  -182,  -184,  -184,  -184,  -184,  -184,  -184,
       0,     0,     0,     0,     0,  -184,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -184,     0,
       2,     0,  -182,  -182,  -182,  -182,  -182,  -182,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -182,
       0,    28,     1,  -182,  -140,  -182,  -182,  -182,  -182,  -182,
    -182,     0,     0,     0,     0,     0,  -182,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -182,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     1,    29,  -142,    31,  -140,  -140,  -140,
       0,  -140,     0,     0,     0,     0,     0,  -140,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -140,     0,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     1,    29,  -144,    31,  -142,  -142,
    -142,     0,  -142,     0,     0,     0,     0,     0,  -142,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -142,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     1,    29,  -146,    31,  -144,
    -144,  -144,     0,  -144,     0,     0,     0,     0,     0,  -144,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -144,     0,     2,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     1,    29,  -148,    31,
    -146,  -146,  -146,     0,  -146,     0,     0,     0,     0,     0,
    -146,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -146,     0,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,   136,    29,     0,
      31,  -148,  -148,  -148,     0,  -148,     0,     0,     0,     0,
       0,  -148,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -148,     0,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   488,     0,   365,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,    27,     0,    28,     0,    29,
      30,    31,     0,     0,  -154,     0,     0,     0,     0,  -401,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   137,  -154,   563,     0,   365,    80,
      81,    82,    83,    84,     0,    85,    86,     0,   366,   367,
     368,     0,   369,   370,   371,   372,   373,   374,   375,   376,
       0,    88,     0,    89,     0,     0,    87,    90,     0,     0,
       0,     0,     0,     0,   232,     0,    91,    92,    93,    94,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
     378,     0,   366,   367,   368,     0,   369,   370,   371,   372,
     373,   374,   375,   376,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,   232,     0,
      91,    92,    93,    94,    95,    96,   567,     0,   365,    80,
      81,    82,    83,    84,   378,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   614,
       0,   365,    80,    81,    82,    83,    84,     0,    85,    86,
       0,     0,   366,   367,   368,     0,   369,   370,   371,   372,
     373,   374,   375,   376,     0,    88,     0,    89,     0,    87,
       0,    90,     0,     0,     0,     0,     0,     0,   232,     0,
      91,    92,    93,    94,    95,    96,     0,     0,     0,     0,
       0,     0,     0,     0,   378,   366,   367,   368,     0,   369,
     370,   371,   372,   373,   374,   375,   376,     0,    88,     0,
      89,     0,     0,     0,    90,     0,     0,     0,     0,     0,
       0,   232,     0,    91,    92,    93,    94,    95,    96,   646,
       0,   365,    80,    81,    82,    83,    84,   378,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   649,     0,   365,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,   366,   367,   368,     0,   369,
     370,   371,   372,   373,   374,   375,   376,     0,    88,     0,
      89,     0,    87,     0,    90,     0,     0,     0,     0,     0,
       0,   232,     0,    91,    92,    93,    94,    95,    96,     0,
       0,     0,     0,     0,     0,     0,     0,   378,   366,   367,
     368,     0,   369,   370,   371,   372,   373,   374,   375,   376,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,   232,     0,    91,    92,    93,    94,
      95,    96,   655,     0,   365,    80,    81,    82,    83,    84,
     378,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   695,     0,   365,    80,    81,
      82,    83,    84,     0,    85,    86,     0,     0,   366,   367,
     368,     0,   369,   370,   371,   372,   373,   374,   375,   376,
       0,    88,     0,    89,     0,    87,     0,    90,     0,     0,
       0,     0,     0,     0,   232,     0,    91,    92,    93,    94,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
     378,   366,   367,   368,     0,   369,   370,   371,   372,   373,
     374,   375,   376,     0,    88,     0,    89,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,   232,     0,    91,
      92,    93,    94,    95,    96,   707,     0,   365,    80,    81,
      82,    83,    84,   378,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   711,     0,
     365,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,   366,   367,   368,     0,   369,   370,   371,   372,   373,
     374,   375,   376,     0,    88,     0,    89,     0,    87,     0,
      90,     0,     0,     0,     0,     0,     0,   232,     0,    91,
      92,    93,    94,    95,    96,     0,     0,     0,     0,     0,
       0,     0,     0,   378,   366,   367,   368,     0,   369,   370,
     371,   372,   373,   374,   375,   376,   145,    88,  -194,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
     232,     0,    91,    92,    93,    94,    95,    96,     0,     0,
       0,     0,     0,     0,     0,     2,   378,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,   145,     0,
    -196,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,  -194,  -194,     0,  -194,  -194,     0,     0,     0,     0,
       0,  -194,     0,     0,     0,     0,     0,     2,     0,     0,
       0,     0,     0,     0,  -194,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,   498,     0,    79,    80,    81,    82,
      83,    84,     0,    85,    86,     0,     0,     0,    28,     0,
       0,     0,     0,  -196,  -196,     0,  -196,  -196,     0,     0,
       0,     0,     0,  -196,    87,   630,     0,    79,    80,    81,
      82,    83,    84,     0,    85,    86,  -196,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   632,     0,    79,
      80,    81,    82,    83,    84,    87,    85,    86,     0,     0,
       0,     0,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,    87,    91,    92,
      93,    94,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,   499,     0,    88,     0,    89,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,    96,     0,    88,     0,    89,     0,
       0,     0,    90,   378,     0,     0,     0,     0,     0,     0,
       0,    91,    92,    93,    94,    95,    96,     0,     0,   365,
      80,    81,    82,    83,    84,   378,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   365,    80,    81,    82,    83,    84,     0,    85,
      86,     0,     0,   366,   367,   368,     0,   369,   370,   371,
     372,   373,   374,   375,   376,     0,    88,     0,    89,     0,
      87,     0,    90,   689,     0,     0,     0,     0,     0,   232,
       0,    91,    92,    93,    94,    95,    96,     0,     0,     0,
       0,     0,     0,     0,     0,   378,   366,   367,   368,     0,
     369,   370,   371,   372,   373,   374,   375,   376,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,   232,     0,    91,    92,    93,    94,    95,    96,
       0,     0,    79,    80,    81,    82,    83,    84,   378,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,   378,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     1,     0,    79,    80,    81,    82,    83,    84,
     700,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,    87,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    88,    28,    89,    29,     0,    31,    90,     0,     0,
       0,     0,     0,     0,   228,     0,    91,    92,    93,    94,
      95,    96,    78,     0,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,    87,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    28,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,   173,     0,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,    87,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    28,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,   515,     0,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   357,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     9,
      10,    11,     0,     0,     0,     0,   543,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,   124,    89,     0,     0,    87,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,   358,     0,   359,   228,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,   358,     0,   359,   228,     0,
      91,    92,    93,    94,    95,    96,   308,     0,    79,    80,
      81,    82,    83,    84,     0,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   664,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     669,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,     0,    89,     0,     0,
      87,    90,   309,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,    88,     0,    89,
       0,     0,     0,    90,   665,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,    90,   670,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
     122,     0,    79,    80,    81,    82,    83,    84,     0,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   264,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   286,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
       0,    89,     0,     0,    87,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,   312,     0,    79,    80,    81,    82,
      83,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   316,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   318,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,    89,     0,     0,    87,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,   320,     0,
      79,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     323,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   325,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,    89,
       0,     0,    87,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,   329,     0,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   334,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   339,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,    89,     0,     0,    87,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,   341,     0,    79,    80,
      81,    82,    83,    84,     0,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   343,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     345,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,     0,    89,     0,     0,
      87,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
     347,     0,    79,    80,    81,    82,    83,    84,     0,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   350,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   352,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
       0,    89,     0,     0,    87,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,   445,     0,    79,    80,    81,    82,
      83,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   448,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   469,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,    89,     0,     0,    87,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,   480,     0,
      79,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     546,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   570,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,    89,
       0,     0,    87,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,   572,     0,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   575,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   637,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,    89,     0,     0,    87,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,   659,     0,    79,    80,
      81,    82,    83,    84,     0,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,   244,     0,     0,     0,     9,    10,    11,     0,     0,
       0,     0,     0,     0,     0,    88,     0,    89,     0,     0,
      87,    90,     0,   275,     0,     0,     0,     9,    10,    11,
      91,    92,    93,    94,    95,    96,     0,    88,   124,    89,
       0,     0,     0,    90,     0,     0,     0,     0,   245,     0,
       0,     0,    91,   246,    93,    94,    95,    96,     0,    88,
     124,    89,     0,     0,     0,    90,     0,     0,     0,     0,
     276,     0,     0,     0,    91,   277,    93,    94,    95,    96,
      79,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,   408,     0,     0,     0,     9,    10,    11,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,   428,     0,     0,     0,     9,    10,    11,
       0,     0,     0,     0,     0,     0,     0,    88,   124,    89,
       0,     0,    87,    90,     0,   433,     0,     0,   409,     9,
      10,    11,    91,   410,    93,    94,    95,    96,     0,    88,
     124,    89,     0,     0,     0,    90,     0,     0,     0,     0,
     429,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,   124,    89,     0,     0,     0,    90,     0,     0,
       0,     0,   434,     0,     0,     0,    91,   435,    93,    94,
      95,    96,    79,    80,    81,    82,    83,    84,     0,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,   533,     0,     0,     0,     9,    10,    11,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,    88,
     124,    89,     0,     0,    87,    90,     0,     0,     0,     0,
     534,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,   124,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,   358,     0,   359,   228,   560,    91,    92,
      93,    94,    95,    96,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,    89,     0,     0,    87,    90,     0,     0,
       0,   358,     0,   359,   228,   642,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,   358,     0,   359,   228,   644,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,   358,     0,   359,   228,     0,
      91,    92,    93,    94,    95,    96,    79,    80,    81,    82,
      83,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,    89,     0,     0,    87,    90,
       0,     0,     0,     0,     0,     0,   228,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,   451,     0,
      91,    92,    93,    94,    95,    96,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,     0,   512,     0,
       0,     0,    91,    92,    93,    94,    95,    96,    79,    80,
      81,    82,    83,    84,     0,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,     0,    89,     0,     0,
      87,    90,   667,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,    88,     0,    89,
       0,     0,     0,   166,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,   168,     0,     0,     0,     0,
       0,     0,     0,   159,    91,    92,    93,    94,    95,    96,
      79,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,     0,    87,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,  -144,     0,    28,     0,     0,     0,    88,   160,    89,
       0,     0,   161,    90,     0,     0,     0,     0,    56,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   271,     0,    54,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,     0,    31,  -144,  -144,  -144,     0,  -144,     0,
       0,     0,     0,     2,  -144,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   271,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,     0,    31,   392,
     272,     0,     0,   161,     0,     0,     0,     0,     2,    56,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   128,     0,    54,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,     0,    31,   160,   272,     0,     0,   161,     0,
       0,     0,     0,  -192,    56,     0,     0,     0,     0,     0,
       0,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,   145,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -192,     0,     0,  -192,     0,    55,
       0,     0,   251,     0,     0,     0,     0,  -192,     2,    56,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   159,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,     0,     0,  -196,  -196,     0,  -196,  -196,     0,
       0,     0,     0,     2,  -196,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   159,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,   160,
     -20,   -20,     0,   161,     0,     0,     0,     0,     2,    56,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   159,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,     0,     0,   160,   288,     0,     0,   161,     0,
       0,     0,     0,     2,    56,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   145,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,   160,
     602,     0,     0,   161,     0,     0,     0,     0,     2,    56,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   258,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   249,     2,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   145,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   259,     2,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   418,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   417,     2,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   419,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   236,     0,   237,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,    30,    31,     0,     0,     0,     0,     0,     0,
       0,  -399,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,     0,    31,     0,
     238,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,     0,    31,     0,   391,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    71,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,     0,    31,     0,
     431,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,    29,    30,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     0,    29,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,   506,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,    29,     0,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   508,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,     0,    29,     0,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   145,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,     0,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,   540,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,   536,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
     639,     0,    28,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,   536,     0,     0,     0,     0,     0,     2,
       0,     0,     0,     0,    78,     0,    28,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,   536,     0,     0,
       0,     0,     0,     2,     0,     0,     0,     0,   145,     0,
      28,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     0,
       0,     0,     0,     0,    28,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28
};

static const yytype_int16 yycheck[] =
{
      56,     0,     1,    33,   118,    50,    65,    52,    67,    52,
      62,   163,   142,     1,     1,    56,    60,   156,   157,    78,
       1,     1,    78,     3,     1,    55,     1,    76,     1,     0,
       1,   443,     1,   136,   137,    34,    35,     1,     1,   451,
       3,    40,    41,    42,    76,    44,   160,   472,   473,     1,
       1,     3,    76,    78,    53,   103,     1,    56,   117,    84,
     119,    60,   118,    34,    35,     1,   146,     3,     1,    40,
      41,    42,   152,    44,   130,     1,   132,   140,     3,    76,
       1,    76,    65,    80,    67,    80,   145,   146,    76,    60,
      77,   150,   151,   152,    50,    51,    76,   141,    79,    79,
     159,    78,   143,    78,   160,    78,    86,    84,     1,   154,
     155,   154,   155,    76,   173,     0,    83,   173,   148,    99,
     161,   260,   261,    86,    99,   239,    99,    78,   127,   128,
      99,   130,    84,   132,    90,    99,    99,   136,   186,   187,
     188,   189,   141,   142,   143,    78,    90,    98,    99,    34,
      35,   281,    78,     1,    99,    40,    41,    42,    83,    44,
     159,   160,   161,   146,    67,   136,    99,   150,   151,   152,
     141,   142,   235,    99,     1,    60,   256,   257,    99,   604,
     605,    78,     3,   239,   609,    78,     1,    84,   232,   160,
       1,    84,     1,     3,     3,    77,    78,   256,   257,   258,
     491,    76,     1,   244,    76,    98,   251,    85,   251,   239,
     166,   270,   168,    96,   213,   171,     1,     1,     3,     3,
       1,    95,   166,     1,   168,     3,     1,     1,    76,    77,
       1,    79,    80,   232,   275,     1,    18,   236,    86,   183,
       1,   282,   394,     1,    77,   244,     1,   150,   151,   248,
      78,     1,     1,   356,    81,    76,   141,   142,   306,   362,
      77,   232,    77,    78,   208,   236,   210,    76,     1,    80,
      79,    82,   271,   256,   257,   160,   275,    86,   392,    78,
     279,     3,   281,   282,     1,    84,     3,    98,   579,   580,
     581,   582,    76,    77,    78,    78,    80,    78,    76,    84,
     271,    76,    86,    84,    78,     1,    77,    81,    86,    77,
     281,    77,     1,   358,     3,   358,    83,    78,    79,     1,
      78,   366,    77,   366,     3,     1,    84,     1,    78,    78,
      79,     1,   136,   137,    84,     1,   392,    76,     1,   143,
     384,    80,   394,     3,    77,    78,    81,   232,     1,    38,
      39,    40,     6,     1,    76,   413,   414,   161,    80,   418,
       1,     6,   392,    77,    78,     1,    83,    79,   172,   472,
     473,   416,     1,   416,    81,     1,    77,     1,   182,    77,
      76,     1,    71,   413,   414,   384,     1,    76,    77,    78,
      79,    80,   433,   392,    81,    77,   281,    86,    81,   398,
     399,    77,    78,    77,    78,    77,   405,    77,    78,    78,
       1,    77,    78,   384,    77,    78,   461,   462,   463,   464,
      78,   392,   421,    76,   228,    81,   425,   398,   399,    77,
      78,    83,   376,    83,   433,    77,    77,    78,   437,    79,
     244,    77,    78,    77,   248,    77,   490,   491,    77,    78,
     421,    77,    78,    77,    78,     3,   559,    77,    78,   562,
     133,   134,    77,    78,   196,   197,   198,   199,   200,   398,
     399,   275,    38,    39,    40,   279,    79,    79,   282,    76,
       3,   540,    81,     3,   540,   289,    77,    78,     9,    10,
      11,   490,   491,    38,    39,    40,    81,   301,   302,   384,
     304,   604,   605,    81,   503,    71,   609,   392,    81,     1,
      81,     3,    77,   398,   399,   190,   191,   192,    81,   490,
     491,    81,   521,   201,   202,   203,    71,    83,   193,   194,
     195,   530,   503,    99,    84,    99,   421,   371,    99,   483,
     484,   485,   486,   487,    81,    79,    38,    39,    40,    79,
      62,    62,   356,    81,    81,    76,    81,    81,   362,    80,
      79,    82,    50,    81,    52,    81,    81,    81,    77,    77,
      77,    76,   442,    60,    84,    81,    77,    81,    60,    71,
     639,   580,    60,   639,    76,    77,    78,    79,    80,   600,
     204,    77,    77,    77,    86,   205,    84,    85,    86,   403,
      99,   405,    99,    99,   408,   490,   491,   207,   206,   580,
      73,   363,   384,   209,    44,   103,    -1,    -1,    -1,    -1,
      -1,   425,    -1,    -1,   428,    -1,    -1,    -1,    -1,   433,
      -1,    -1,    -1,   437,    -1,    -1,    -1,    -1,    -1,   443,
      -1,    -1,    -1,    -1,    -1,   479,    -1,   451,   482,    -1,
     454,    -1,   456,    -1,   458,    -1,   460,    -1,    -1,   463,
      -1,    -1,    -1,    -1,    -1,    -1,   154,   155,   472,   473,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   625,   626,   627,   628,    -1,   630,   631,   632,   633,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   501,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
      -1,   209,    -1,    -1,    -1,    -1,   530,    -1,    -1,   533,
      -1,   565,   566,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   559,    -1,    -1,   562,    -1,
      -1,    -1,    -1,   251,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,   585,   616,    -1,   618,   619,   620,   621,   622,   623,
     624,    -1,    -1,   597,   598,    -1,    -1,   601,    -1,    -1,
     604,   605,    -1,    -1,    -1,   609,    70,    71,    72,    -1,
      -1,    -1,    76,   617,    -1,    -1,    -1,    -1,   306,   623,
      -1,    85,    86,    87,    88,    89,    90,    -1,   662,    -1,
      -1,   665,    -1,   667,    -1,   669,   670,    -1,   672,   673,
     674,    -1,    -1,    -1,    -1,    -1,   680,    -1,   682,   683,
      -1,   685,   686,    -1,   688,   689,    -1,    -1,   692,    -1,
      -1,     1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
     358,    -1,    -1,    -1,   678,    -1,    -1,    -1,   366,    -1,
      -1,   685,    -1,    -1,    -1,    -1,     1,    -1,     3,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,   416,    69,
      -1,    71,    -1,    73,    -1,    75,    76,    77,    78,    79,
      80,    -1,    -1,    83,    -1,    -1,    86,     0,     1,    -1,
       3,     4,     5,     6,     7,     8,    71,    10,    11,    99,
      -1,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    86,    -1,   461,   462,    -1,   464,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,     1,    -1,
       3,     4,     5,     6,     7,     8,    99,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    81,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,     1,    99,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,     1,    99,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    81,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,     1,    99,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     1,    99,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    -1,    81,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    93,    94,    95,
      96,    97,     1,    99,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    93,    94,    95,    96,    97,     1,
      99,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    -1,    81,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    93,    94,    95,    96,    97,     1,    99,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    93,    94,
      95,    96,    97,     1,    99,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    -1,    93,    94,    95,    96,    97,
       1,    99,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    93,    94,    95,    96,    97,     1,    99,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    81,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    93,
      94,    95,    96,    97,     1,    99,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    -1,    93,    94,    95,    96,
      97,     1,    99,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    81,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    93,    94,    95,    96,    97,     1,    99,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
      93,    94,    95,    96,    97,     1,    99,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    -1,    81,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    93,    94,    95,
      96,    97,     1,    99,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    93,    94,    95,    96,    97,     1,
      99,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    -1,    81,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    93,    94,    95,    96,    97,     1,    99,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    93,    94,
      95,    96,    97,     1,    99,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    95,    96,    97,
       1,    99,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    95,    96,    97,     1,    99,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    81,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    97,     1,    99,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    78,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,     1,    -1,     3,     4,     5,     6,
       7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,     1,    -1,     3,     4,     5,     6,
       7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,     1,    -1,     3,     4,     5,     6,
       7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,     1,    -1,     3,     4,     5,     6,
       7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    75,    76,
       1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,     1,    73,     3,    75,    76,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,     1,    73,     3,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,     1,    73,     3,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,     1,    73,     3,    75,    76,    77,
      78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,     1,    73,     3,    75,    76,
      77,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,     1,    73,     3,    75,
      76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,     1,    73,    -1,
      75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    69,    -1,    71,    -1,    73,
      74,    75,    -1,    -1,    78,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    99,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    89,    90,     1,    -1,     3,     4,
       5,     6,     7,     8,    99,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    -1,    72,    -1,    31,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    89,    90,     1,
      -1,     3,     4,     5,     6,     7,     8,    99,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    -1,
      72,    -1,    31,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      89,    90,     1,    -1,     3,     4,     5,     6,     7,     8,
      99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    -1,    72,    -1,    31,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,
      86,    87,    88,    89,    90,     1,    -1,     3,     4,     5,
       6,     7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    -1,    72,    -1,    31,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,     1,    70,     3,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    76,    77,    -1,    79,    80,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    -1,    76,    77,    -1,    79,    80,    -1,    -1,
      -1,    -1,    -1,    86,    31,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    -1,     3,
       4,     5,     6,     7,     8,    99,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    -1,    72,    -1,
      31,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    89,    90,
      -1,    -1,     3,     4,     5,     6,     7,     8,    99,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     1,    -1,     3,     4,     5,     6,     7,     8,
      99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      89,    90,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    31,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    80,    -1,    82,    83,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    80,    -1,    82,    83,    -1,
      85,    86,    87,    88,    89,    90,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      31,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    31,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    31,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      31,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    31,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    31,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      31,    76,    -1,    34,    -1,    -1,    -1,    38,    39,    40,
      85,    86,    87,    88,    89,    90,    -1,    70,    71,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    31,    76,    -1,    34,    -1,    -1,    81,    38,
      39,    40,    85,    86,    87,    88,    89,    90,    -1,    70,
      71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    80,    -1,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,
      -1,    80,    -1,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    80,    -1,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    80,    -1,    82,    83,    -1,
      85,    86,    87,    88,    89,    90,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    31,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      31,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    85,    86,    87,    88,    89,    90,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,    -1,    71,    -1,    -1,    -1,    70,    76,    72,
      -1,    -1,    80,    76,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    76,    77,    78,    -1,    80,    -1,
      -1,    -1,    -1,    30,    86,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    76,
      77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    30,    86,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    76,    77,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    30,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    76,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    84,    30,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    76,    77,    -1,    79,    80,    -1,
      -1,    -1,    -1,    30,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    76,
      77,    78,    -1,    80,    -1,    -1,    -1,    -1,    30,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    30,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    76,
      77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    30,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     0,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,     1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
       1,    -1,    71,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,     1,    -1,    71,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,     1,    -1,
      71,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    30,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    69,    71,    73,
      74,    75,   128,   129,   132,   133,   134,   135,   141,   144,
     145,   146,   147,   164,   174,   175,   176,   129,     3,    83,
      76,    76,    76,     1,     3,    76,    86,    99,   130,   131,
     148,   149,   150,   129,   129,     1,     3,    83,   129,   129,
     129,     0,   175,    83,     3,   103,   142,   143,     1,     3,
       4,     5,     6,     7,     8,    10,    11,    31,    70,    72,
      76,    85,    86,    87,    88,    89,    90,   101,   102,   104,
     105,   108,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   127,   133,   138,   145,
     156,   156,     1,   127,    71,    99,   145,   151,     1,   148,
       1,   150,   151,     1,    78,    99,     1,    98,   128,   129,
     178,   179,    76,    80,   149,     1,   136,   137,   138,   164,
       1,    83,   136,   142,     1,    98,     1,    78,    84,     1,
      76,    80,   138,   150,   157,   158,    76,   110,    76,   110,
     110,    76,    76,     1,   110,   123,   124,   126,   156,     9,
      10,    11,    76,    80,    82,   112,     1,    86,    91,    92,
       1,    87,    88,     1,    12,    13,     1,    14,    15,    93,
      94,     1,    16,    17,    85,    95,    96,    18,     1,    19,
      97,    77,   138,     1,   157,   138,    77,    77,    78,    78,
     145,     1,    77,   150,   150,   131,   148,   131,    83,   124,
     159,   159,    83,   167,   128,   177,     1,     3,    77,   129,
     152,   153,   154,   155,    34,    81,    86,   124,   151,    84,
     137,    79,    99,   139,   140,   148,   136,   136,     1,    84,
       1,    78,    84,   127,     1,   127,   143,     1,    84,   143,
     145,     1,    77,   152,   157,    34,    81,    86,   124,   151,
     158,    76,    80,   156,   156,   156,     1,   124,    77,     1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      98,   125,     1,    77,    78,     1,    77,     3,     1,    77,
     109,   124,     1,   126,     3,   112,     1,   112,     1,   112,
       1,   112,   113,     1,   113,     1,   113,   114,   114,     1,
     114,   115,   115,   115,     1,   115,   115,   116,   116,     1,
     116,     1,   117,     1,   118,     1,   119,     1,   120,   126,
       1,   121,     1,   126,     6,     6,     1,     1,    80,    82,
     159,   160,   161,   162,   163,     3,    57,    58,    59,    61,
      62,    63,    64,    65,    66,    67,    68,    84,    99,   126,
     128,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     167,    77,    76,   148,   150,   157,     1,    77,     1,    78,
       1,    77,    78,     1,   124,   151,    81,    81,    34,    81,
      86,   124,   127,     1,    78,    99,    79,    84,     1,    84,
      84,   145,    77,    77,   124,   151,    81,    81,    34,    81,
     124,    77,   152,    34,    81,    86,   124,   151,    77,    77,
      77,    78,    78,    83,   124,     1,   124,   124,     1,   124,
      83,    83,   112,    77,     1,    77,    78,    81,     1,    81,
       1,    79,    79,     1,    79,    77,    77,    78,    84,     1,
     127,     3,     1,    78,    84,   159,     1,    98,   163,    79,
       1,   127,    79,     1,    76,    76,     1,    76,     1,   165,
       1,    76,     1,     3,     1,    99,     1,    99,     1,    99,
     126,     1,    99,     1,    84,   169,    56,   154,    56,   154,
       3,     3,    81,   124,    81,     1,   124,   124,    81,    81,
     140,     1,   140,   127,    81,   124,   124,    81,    77,   124,
     151,    81,    81,    34,    81,   124,    58,   106,   107,   156,
       1,   106,   160,     1,   160,   124,     1,   124,   123,   123,
     123,   123,    99,    99,    84,    81,     1,    81,   159,   161,
      84,   159,   161,     1,   165,    79,    79,     1,   165,   126,
       1,   126,     1,   126,   126,     1,   126,    62,    62,   128,
       1,   128,   170,     1,    99,     1,    99,    81,    81,    81,
      81,    81,    81,    81,   124,   124,    81,     1,    79,    77,
      78,    79,    77,    77,     1,    78,    84,    78,    84,    78,
      84,   159,   159,   165,     1,   165,    77,     1,    77,    77,
      77,    77,    77,     1,    77,    76,     1,    76,   170,   170,
       1,   170,     1,   170,    81,    81,   124,     1,   124,     1,
     107,   124,    84,    84,    84,   165,     1,   165,   165,     1,
     165,   165,   165,   124,   165,     1,   165,   126,   126,     1,
     126,   126,    77,   126,     1,    77,   126,    77,   126,     1,
      77,   126,    60,    60,    60,    77,    77,    77,     1,    77,
      77,   165,    77,    77,   165,     1,    77,   165,    77,    77,
     165,   165,    77,   165,   165,     1,   165,    99,    99,    99,
      99,     1,    99,   165,   165,   165,   165,     1,   165,   165,
     165,     1,   165
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   101,   101,   101,   102,
     102,   102,   103,   104,   104,   105,   105,   105,   106,   106,
     106,   107,   107,   107,   107,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   109,   109,   109,   109,   110,   110,
     110,   110,   110,   110,   110,   111,   111,   111,   111,   111,
     111,   112,   112,   113,   113,   113,   113,   113,   113,   113,
     113,   114,   114,   114,   114,   114,   114,   115,   115,   115,
     115,   115,   116,   116,   116,   116,   116,   116,   116,   117,
     117,   117,   117,   117,   118,   118,   118,   119,   119,   119,
     120,   120,   120,   121,   121,   121,   122,   122,   122,   123,
     123,   123,   123,   123,   124,   124,   124,   124,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   126,
     126,   126,   126,   127,   128,   128,   128,   128,   128,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     130,   130,   130,   131,   131,   131,   132,   132,   132,   132,
     132,   132,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   134,   134,
     134,   134,   134,   134,   134,   135,   135,   136,   136,   137,
     137,   137,   137,   138,   138,   138,   138,   138,   139,   139,
     139,   139,   140,   140,   140,   141,   141,   141,   141,   141,
     141,   141,   142,   142,   142,   142,   143,   143,   143,   143,
     144,   145,   145,   145,   145,   146,   146,   147,   147,   148,
     148,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   150,   150,   150,   150,   150,   150,   150,   151,
     151,   152,   152,   152,   153,   153,   153,   154,   154,   154,
     155,   155,   155,   156,   156,   156,   156,   157,   157,   157,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   159,   159,   159,   159,   159,   159,   160,   160,   160,
     160,   160,   160,   161,   161,   162,   162,   163,   163,   163,
     163,   164,   164,   165,   165,   165,   165,   165,   165,   166,
     166,   166,   166,   166,   166,   166,   167,   167,   167,   168,
     168,   169,   169,   170,   170,   170,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   174,   174,   175,   175,   177,
     176,   178,   176,   179,   179
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     6,     6,     6,     1,     3,
       3,     3,     3,     3,     3,     1,     4,     3,     4,     3,
       3,     2,     2,     6,     7,     4,     4,     6,     6,     7,
       7,     4,     4,     4,     1,     3,     3,     3,     1,     2,
       2,     2,     2,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       5,     5,     5,     5,     1,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     1,     2,     3,     1,     3,     2,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     3,     3,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     5,
       2,     4,     5,     5,     4,     1,     1,     1,     2,     2,
       3,     1,     3,     2,     1,     2,     1,     2,     1,     3,
       3,     3,     2,     3,     1,     4,     5,     5,     6,     2,
       5,     4,     1,     3,     3,     3,     3,     1,     3,     3,
       4,     1,     1,     1,     1,     1,     1,     4,     4,     2,
       1,     1,     3,     3,     4,     6,     5,     5,     6,     5,
       4,     4,     4,     3,     4,     3,     6,     6,     5,     4,
       4,     4,     3,     2,     2,     1,     3,     2,     2,     1,
       2,     3,     1,     3,     1,     3,     3,     2,     2,     1,
       1,     3,     3,     2,     1,     2,     2,     2,     1,     1,
       3,     2,     3,     5,     4,     5,     4,     3,     3,     3,
       4,     6,     5,     5,     6,     4,     4,     2,     3,     3,
       4,     3,     4,     1,     3,     4,     3,     2,     1,     4,
       3,     3,     4,     2,     2,     1,     2,     3,     2,     3,
       3,     7,     7,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     3,     4,     4,     3,     2,     3,     3,     1,
       2,     1,     1,     1,     2,     2,     7,     5,     5,     7,
       3,     4,     7,     7,     5,     5,     5,     5,     5,     7,
       6,     7,     6,     7,     5,     5,     5,     5,     7,     7,
       7,     7,     7,     6,     7,     7,     7,     6,     7,     6,
       7,     7,     7,     7,     3,     2,     2,     2,     3,     2,
       3,     2,     2,     3,     2,     1,     2,     1,     1,     0,
       5,     0,     4,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
#line 66 "bison.y" /* yacc.c:1646  */
    { process_id(); }
#line 3643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 71 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 72 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 76 "bison.y" /* yacc.c:1646  */
    { process_literal(); }
#line 3661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 92 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 93 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 100 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 107 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 108 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 123 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 124 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 126 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 127 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 129 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 130 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 132 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 133 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 134 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 145 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 146 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 185 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 186 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 187 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 188 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 196 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 197 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 199 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 206 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 207 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 219 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 227 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 228 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 234 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 240 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 246 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 252 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 258 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 264 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 265 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 266 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 273 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 274 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 295 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 296 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 305 "bison.y" /* yacc.c:1646  */
    { declaration_end(); }
#line 3907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 308 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 309 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 316 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 318 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 320 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 322 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 324 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 325 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 331 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 337 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 372 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 373 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 374 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 375 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 395 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 403 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 409 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 410 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 429 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 430 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 438 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 439 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 446 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 448 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 478 "bison.y" /* yacc.c:1646  */
    { save_id(); }
#line 4057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 496 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 497 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 498 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 502 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 503 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 504 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 505 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 515 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 516 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 517 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 530 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 536 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 550 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 557 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 558 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 598 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 599 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 600 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 608 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 609 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 615 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 626 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 627 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 632 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 649 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 650 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 651 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 652 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 658 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 675 "bison.y" /* yacc.c:1646  */
    {  yyerrok; }
#line 4237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 683 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 684 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 685 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 686 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 687 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 688 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 689 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 690 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 691 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 704 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 705 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 706 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 707 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 709 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 710 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 711 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 712 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 713 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 715 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 717 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 718 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 719 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 721 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 722 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 723 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 724 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 725 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 726 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 727 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 736 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 737 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 738 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 739 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 740 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 741 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 755 "bison.y" /* yacc.c:1646  */
    { inContext = TRUE; popRecord(); popRecord(); pushTable(); }
#line 4453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 755 "bison.y" /* yacc.c:1646  */
    { inContext = FALSE; popTable();}
#line 4459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 756 "bison.y" /* yacc.c:1646  */
    { inContext = TRUE; popRecord(); popRecord(); pushTable(); }
#line 4465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 756 "bison.y" /* yacc.c:1646  */
    { unDecleared = FALSE; inContext = FALSE; popTable();}
#line 4471 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4475 "y.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
  return yyresult;
}
#line 773 "bison.y" /* yacc.c:1906  */


//functions


void save_type(void)
{
	SemanticRecord *RS;
	
	RS = createSemanticRecord(TYPE);
	RS -> currentToken = previousToken;
	RS -> type = yychar;

	
	pushRecord(RS);
	//printf("%s\n", RS -> currentToken);
	//printList();
}

void save_id(void)
{
	char* token = strdup(yytext);
	int pos = search(token);
	if (!inContext)
	{
		if (pos == -1)
		{
	
			SemanticRecord *RS;
	
			RS = createSemanticRecord(IDENTIFIER);
			RS -> currentToken = token;
			RS -> line = yylineno;
			RS -> column = previousColumn;
	
	
			pushRecord(RS);
			//printList();
		}
	} 
	else if (pos == -1)
	{
		SemanticRecord *RS;
	
		RS = createSemanticRecord(IDENTIFIER);
		RS -> currentToken = token;
		RS -> line = yylineno;
		RS -> column = previousColumn;
	
		pushRecord(RS);
		//printList();
	}
	else 
	{
		SemanticRecord* RS = getSemanticRecordInPos(pos);
		char error[100] = "";
		char note[100] = "";
		sprintf(error, "semantic error, redeclaration of %s'%s'%s with no linkage", CWHTN, token, CWHT);
		yyerror(error);
		sprintf(note, "note, previous declaration of %s‘%s’%s was here", CWHTN, RS -> currentToken, CWHT);
		yynote(note, RS -> line, RS -> column, TRUE);
	}
}


void declaration_end(void)
{
	//printList();
	char* tokenValue;
	char* tokenName;

	SemanticRecord *dataType;
	dataType = retrieveRecord(TYPE);

	SemanticRecord *RS;
	RS = getTopRecord();
	
	while (RS -> kind != TYPE)
	{
		if (RS -> kind == ERROR)
		{
			appendSymbol(RS -> currentToken, RS -> line, RS -> column, ERROR, stackPos);
		}
		else
		{
			appendSymbol(RS -> currentToken, RS -> line, RS -> column, dataType -> type, stackPos);
		}
		popRecord();
		RS = getTopRecord();
	}
	popRecord();


	
}

void process_literal(void)
{
	char* tokenValue = strdup(yytext);
	SemanticRecord *RS;
	
	DO_Datos* c;
	RS = createSemanticRecord(DATAOBJECT);
	c = (DO_Datos*)RS -> dataBlock;
	c -> type = LITERAL;
	c -> value = tokenValue;

	RS -> dataBlock = c;
	RS -> currentToken = tokenValue;
	
	pushRecord(RS);
}

void process_op(void)
{
	SemanticRecord *RS;
	
	RS = createSemanticRecord(OPERATOR);
	RS -> currentToken = previousToken;

	
	pushRecord(RS);
}


void process_id(void)
{
	DO_Datos* object;
	SemanticRecord *RS;
	char *id;

	id = strdup(yytext);
	
	RS = createSemanticRecord(DATAOBJECT);
	RS -> currentToken = id;	
	RS -> line = yylineno;
	RS -> column = previousColumn;

	object = (DO_Datos*) RS -> dataBlock;
	object -> type = NAME;

	if (search(id) == -1)
	{
		if (!look_up_TS(id))
		{
			RS -> currentToken = id;
			RS -> kind = ERROR;
			checkForDeclaredError(id, RS);
			object -> type = ERROR;
		}
	}
	else
	{
		object -> varName = id;
	
		RS -> dataBlock = object;
	}
	

	pushRecord(RS);
	
}

void checkForDeclaredError(char *token, SemanticRecord* R)
{
	DO_Datos *datos;
	SemanticRecord *RS;
	int tokenPos = searhErrorToken(token);
	if (tokenPos == -1)
	{
		if (!look_up_TS(token))
		{
			char error[100];
			sprintf(error, "semantic error, %s'%s'%s undeclared (first use in this function)", CWHTN, token, CWHT);
			yyerror(error);

			if (unDecleared == FALSE)
			{
				char note[100];
				sprintf(note, "note, each undeclared identifier is reported only once for each function it appears in");
				yynote(note, R -> line, R -> column, FALSE);
				unDecleared = TRUE;
			}
		}
	}
	
}



