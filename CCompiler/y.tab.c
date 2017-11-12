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

#include "semanticActions.h"

void yyerror(const char *);
void yynote(char *noteInfo, int line, int column, int writeCode, int cursorPosi);
void yywarning(char *warningInfo, int line, int column, int writeCode, int cursorPosi);
extern int getToken(void);
extern char* yytext;
extern int yylineno;
extern int column;
extern int previousColumn;
extern void print(void);
extern int nextToken;

extern char* previousToken;
extern int cursorPos;
extern int previousTokenCode;

#define yylex getToken
#define YYERROR_VERBOSE 1

int errorFound = FALSE;
int inFunction = FALSE;
int inContext = FALSE;
int unDecleared = FALSE;
char* actualFunction;


#line 106 "y.tab.c" /* yacc.c:339  */

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

#line 307 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   8150

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  90
/* YYNRULES -- Number of rules.  */
#define YYNRULES  394
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  678

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
       0,    61,    61,    67,    68,    69,    70,    72,    76,    77,
      78,    82,    86,    87,    91,    92,    93,    97,    98,   100,
     104,   105,   107,   108,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   132,   133,   134,   141,   142,   145,
     146,   150,   151,   152,   153,   154,   155,   156,   164,   165,
     166,   167,   168,   169,   173,   174,   181,   182,   182,   183,
     183,   184,   184,   185,   186,   187,   188,   192,   193,   193,
     194,   194,   196,   197,   199,   203,   204,   205,   206,   207,
     211,   212,   213,   214,   215,   217,   219,   224,   225,   226,
     227,   228,   232,   233,   234,   238,   239,   240,   244,   245,
     246,   250,   251,   252,   256,   257,   258,   262,   263,   264,
     265,   266,   270,   271,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   292,   293,   295,   296,   300,
     304,   305,   306,   308,   310,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   330,   331,   332,   336,
     337,   338,   347,   348,   349,   350,   351,   352,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   375,   376,   377,   378,   379,   380,
     381,   385,   386,   390,   391,   395,   396,   397,   401,   405,
     406,   407,   408,   409,   413,   414,   415,   416,   420,   421,
     422,   430,   431,   432,   433,   434,   435,   436,   441,   442,
     444,   445,   449,   450,   452,   454,   458,   462,   463,   464,
     465,   469,   470,   474,   475,   479,   480,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   502,   503,   504,   508,   509,   510,   511,   516,   517,
     518,   519,   521,   522,   527,   528,   533,   534,   536,   540,
     541,   542,   547,   548,   549,   553,   554,   556,   560,   561,
     563,   564,   568,   569,   570,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,   587,   588,
     589,   590,   591,   592,   593,   594,   600,   601,   602,   604,
     605,   606,   610,   611,   612,   613,   614,   615,   619,   621,
     625,   626,   630,   631,   632,   633,   637,   638,   642,   643,
     644,   645,   646,   647,   651,   652,   652,   653,   653,   655,
     662,   663,   664,   668,   669,   673,   674,   678,   679,   681,
     685,   686,   687,   687,   687,   690,   691,   701,   702,   703,
     704,   705,   706,   710,   711,   712,   713,   715,   716,   717,
     718,   719,   721,   723,   724,   725,   727,   728,   729,   730,
     731,   732,   733,   737,   738,   739,   740,   741,   742,   743,
     744,   745,   746,   747,   751,   752,   756,   757,   761,   761,
     761,   766,   764,   774,   775
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
  "cast_expression", "multiplicative_expression", "$@1", "$@2", "$@3",
  "additive_expression", "$@4", "$@5", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
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
  "static_assert_declaration", "statement", "labeled_statement", "$@6",
  "$@7", "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "$@8", "$@9",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "$@10", "$@11", "$@12",
  "declaration_list", YY_NULLPTR
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

#define YYPACT_NINF -414

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-414)))

#define YYTABLE_NINF -392

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    7666,  7833,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,  -414,  -414,    96,   -67,   -64,  -414,
     -24,  -414,  -414,    81,  3578,  3649,  -414,    71,  -414,  -414,
    3720,  3791,  3862,  -414,  7611,  -414,  -414,  -414,    -4,    56,
    4829,  8045,   701,    -5,  -414,    12,   280,  -414,    50,  -414,
    3933,   252,   159,  -414,  -414,  7888,  3365,  7888,  -414,  -414,
    -414,  -414,  -414,    56,  -414,    99,   164,  -414,  7115,  -414,
    -414,  -414,  -414,  -414,  6783,  6805,  6805,  -414,    65,    90,
    4829,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
    -414,   452,  -414,  6827,  -414,   892,  1280,  1377,  2250,  2638,
      16,    22,    33,   140,  2832,  -414,   153,  4323,   181,  4385,
     177,   192,   214,   221,  -414,   174,   223,  -414,  -414,  -414,
     465,   248,    12,  -414,  -414,  6541,  7666,   258,  7445,  6123,
     252,  8079,  7170,  -414,   145,  -414,  7888,  7888,  7225,   175,
    6827,  5097,    56,    59,  -414,  6950,  6145,  -414,   270,  -414,
     272,  4829,  -414,  4829,  -414,  -414,  8045,  5187,   410,  -414,
    -414,   224,   210,   328,  -414,  -414,  6563,  6827,   332,  -414,
    6827,  5209,  5231,  5321,  6827,  5343,  5365,  6827,  6827,  5455,
    6827,  6827,  6827,  5477,  6827,  6827,  6827,  5499,  5589,  5611,
    5633,  5723,  6827,  5745,  5767,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,   343,   374,  -414,  -414,  -414,  -414,  -414,  -414,
      27,  4963,  -414,  -414,  -414,    81,  7390,  3019,  -414,  7500,
    -414,  -414,   200,   238,   267,  -414,   284,  4919,  -414,   303,
     315,  6167,  -414,  -414,  6827,  -414,    82,  -414,   331,  7280,
    7335,  3436,  -414,    56,   281,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,   339,   350,  6387,  -414,   361,   362,
    6255,   272,  7555,  6277,   276,   304,   351,   342,   366,  -414,
    -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
    6827,  6827,  -414,  5857,   371,  6651,  -414,  -414,   290,  -414,
      37,  -414,  -414,  -414,  6827,  -414,  6827,  -414,  6827,   989,
    -414,  6827,  -414,  6827,  1474,  1571,  -414,  1668,  1765,  1862,
    1959,  -414,  2056,  2153,  2347,  2444,  -414,  2541,  -414,  2735,
    -414,    16,  -414,    22,  -414,    33,   211,  -414,   140,   379,
     232,   387,   388,    -9,  5879,   448,  -414,   219,  6541,    88,
    -414,  -414,   258,   390,  6827,  -414,    28,  -414,    46,  3988,
     118,   368,    25,    47,  4441,  -414,  -414,    85,  -414,  -414,
    -414,  -414,  3109,  -414,  -414,  -414,  -414,  -414,  -414,  6895,
    -414,   137,  -414,  -414,  -414,  7721,  7777,   463,  -414,   464,
    6673,   393,  4941,  -414,  -414,  6827,  -414,   397,   398,  -414,
     237,   261,  -414,  6827,  -414,  3507,  -414,  -414,  -414,  -414,
     401,  6387,  -414,  -414,  6827,  -414,   403,  -414,   394,  6387,
    -414,   404,   405,  6299,   407,   407,  -414,  7943,  7977,  -414,
    -414,  -414,  -414,  -414,  6519,  -414,  6827,  -414,  5901,  6827,
    -414,  -414,  -414,  -414,  1086,  1183,  6827,  6827,  6827,  6827,
    6827,   389,   392,   412,  -414,   425,    52,  -414,  6519,  6409,
    -414,  -414,  -414,  -414,  -414,  -414,  4032,  -414,   419,  6827,
    6827,   431,  6827,  5991,   447,   453,  7666,  3199,  -414,    53,
    -414,  -414,  -414,  -414,  -414,  -414,    86,  6827,  -414,   795,
    -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,   436,
    -414,   437,   438,   442,  -414,  -414,  -414,  -414,  -414,  -414,
    -414,   443,   445,  -414,  -414,   446,  6387,  -414,  -414,  6827,
    -414,   449,   113,   169,  -414,   450,  7060,   201,   255,  -414,
    -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  6541,  -414,  -414,  6541,  -414,  -414,   454,
    4627,  2929,   297,  6827,   311,   458,   313,   455,   262,  4717,
    3289,  4472,  4494,  -414,  -414,  6827,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,   461,   462,  -414,  6827,  6013,  -414,
    8011,  6827,  -414,  -414,  6519,  6431,  -414,  -414,  -414,  4627,
    -414,  6827,  4627,   316,  4627,  4627,  4627,  4122,  6827,  6827,
    6035,  6827,   467,  6827,  5053,  6695,  5075,  -414,  -414,  -414,
    -414,  -414,  7005,  -414,  -414,  -414,  -414,   485,  -414,  -414,
    -414,   471,  -414,  -414,  -414,   320,   335,   472,   363,   369,
    4627,   372,   475,  4627,   382,  4627,   417,  4584,  4627,   424,
    4627,  4627,   459,   466,   469,  4739,    54,  4627,  -414,  4627,
    4627,  -414,  4627,  4165,  -414,  4627,  4627,  -414,  -414,  4255,
    -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   173,   152,   153,   154,   156,   157,   221,   217,
     218,   219,   167,   159,   160,   161,   162,   165,   166,   163,
     164,   158,   168,   169,   181,   182,     0,     0,   220,   222,
       0,   155,   387,     0,     0,     0,   171,     0,   172,   170,
       0,     0,     0,   132,     0,   384,   386,   145,   205,     0,
       0,     0,     0,     0,   227,     0,     0,   130,     0,   146,
       0,   226,     0,   135,   137,     0,     0,     0,   139,   141,
     143,     1,   385,     0,    11,     0,     0,   208,     0,     2,
       8,     9,    12,    13,     0,     0,     0,    10,     0,     0,
       0,    48,    49,    50,    51,    52,    53,    24,     3,     4,
       6,    41,    54,     0,    56,     0,     0,     0,     0,     0,
      95,    98,   101,   104,     0,   129,     0,     0,     0,     0,
       0,     0,     0,     0,   133,     0,   253,   220,   254,   250,
     249,   134,     0,   131,   151,     0,     0,     0,     0,     0,
     225,     0,     0,   183,     0,   187,     0,     0,     0,     0,
       0,     0,   207,     0,   201,     0,     0,   193,   273,   270,
     274,     0,    45,     0,    42,    43,     0,     0,    54,   112,
     125,     0,     0,     0,    30,    31,     0,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,   189,   271,   268,   191,
     223,   216,     0,     0,   241,   228,   252,   255,   248,   147,
       0,     0,   298,   149,   393,     0,     0,     0,   392,     0,
     265,   239,   264,     0,     0,   259,     0,     0,   229,    49,
       0,     0,   177,   184,     0,   185,     0,   194,   200,     0,
       0,     0,   174,   206,     0,   203,   215,   214,   212,   211,
     210,   202,   209,   292,     0,     0,     0,   276,    49,     0,
       0,   272,     0,     0,     0,     0,     0,     0,     0,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   114,
       0,     7,     5,     0,     0,     0,    29,    26,     0,    37,
       0,    28,    66,    63,     0,    64,     0,    65,     0,     0,
      72,     0,    73,     0,     0,     0,    78,     0,     0,     0,
       0,    86,     0,     0,     0,     0,    90,     0,    94,     0,
      97,    96,   100,    99,   103,   102,     0,   106,   105,     0,
       0,     0,     0,     0,     0,     0,   303,     0,     0,     0,
     310,   394,     0,     2,     0,   327,     0,   342,     0,     0,
       0,     0,     0,     0,     0,   330,   337,     0,   335,   336,
     318,   319,     0,   333,   320,   321,   322,   323,   246,     0,
     262,   273,   263,   245,   238,     0,     0,   247,   240,     0,
       0,     0,     0,   230,   237,     0,   236,    49,     0,   198,
     188,     0,   186,     0,   179,     0,   175,   204,   293,   275,
       0,     0,   277,   283,     0,   282,     0,   294,     0,     0,
     284,    49,     0,     0,    46,     0,    47,     0,     0,   113,
     128,   127,   126,    36,     0,    55,    34,    27,     0,    35,
      25,    58,    60,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   299,     0,     0,   313,   301,     0,
     296,   302,   309,   308,   311,   390,     0,   325,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   383,     0,
     381,   374,   380,   375,   378,   376,     0,   339,   338,     0,
     331,   334,   258,   261,   256,   260,   267,   266,   244,     0,
     232,     0,     0,     0,   233,   235,   197,   196,   195,   199,
     279,     0,     0,   281,   295,     0,     0,   285,   291,     0,
     290,     0,     0,     0,    17,     0,     0,     0,     0,    40,
      39,    38,   111,   109,   110,   108,   317,   316,   300,   314,
     315,   312,   306,     0,   297,   305,     0,   329,   324,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   382,   373,   379,   377,   242,   243,   231,
     234,   278,   280,   287,     0,     0,   288,     0,     0,    15,
       0,     0,    16,    14,     0,     0,    32,   307,   304,     0,
     328,   346,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   286,   289,    23,
      22,    21,     0,    18,    20,    33,   326,   341,   343,   356,
     353,   125,   355,   354,   347,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   362,     0,
       0,   351,     0,     0,   366,     0,     0,   368,   349,     0,
     340,   344,   357,   361,   358,   360,   359,   348,   372,   367,
     369,   371,   370,   352,   363,   364,   365,   350
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -414,  -414,  -414,  -414,  -414,  -414,   119,   -23,  -414,  -414,
     470,  -414,   -72,  -166,  -414,  -414,  -414,   189,  -414,  -414,
     347,   204,   364,   365,   370,   373,   360,  -414,   143,    34,
    -414,    41,   -48,  -134,    36,  -414,   434,  -414,    23,  -414,
    -414,    42,   -99,   -51,  -414,     3,  -414,   496,  -133,  -414,
       0,  -414,  -414,   -16,   -59,   -45,  -131,  -128,  -414,    21,
    -414,   -29,  -105,  -153,  -129,   138,  -413,  -414,   222,   -35,
      93,  -414,  -414,  -414,  -130,  -414,   203,  -354,  -414,  -414,
    -414,  -414,  -414,  -414,   532,  -414,  -414,  -414,  -414,  -414
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    97,    98,    75,    99,   100,   523,   524,   101,   298,
     168,   103,   104,   105,   304,   306,   308,   106,   311,   313,
     107,   108,   109,   110,   111,   112,   113,   114,   169,   170,
     290,   367,   116,    32,   225,    58,    59,    34,   117,    36,
      37,   142,   143,   118,   246,   247,    38,    76,    77,    39,
     119,    41,    42,   248,    61,    62,   130,   264,   234,   235,
     236,   525,   159,   160,   346,   347,   348,   349,   350,    43,
     369,   370,   549,   468,   371,   372,   373,   374,   375,   471,
     641,   376,   377,    44,    45,    46,   136,   352,   137,   226
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,    40,   224,   140,   123,   271,   223,   228,   241,    50,
     233,   129,    51,   208,   144,    54,   144,    60,   309,   259,
     262,   120,   121,    35,    35,   270,   480,   157,   134,   469,
     145,   179,   145,   158,    40,    40,    33,    47,   439,   125,
      40,    40,    40,   243,    40,   543,   546,   472,   482,   243,
     265,   131,    52,   540,   563,   666,   128,    35,    35,    74,
     260,   172,    74,    35,    35,    35,   206,    35,   209,   453,
      63,    64,    65,   158,    66,   454,    68,    69,    70,    73,
      33,   216,    53,   400,    54,   218,   487,   565,    55,   462,
     157,   144,   351,   368,   124,   144,   144,   144,    56,    48,
     150,   198,   256,   258,   470,  -150,   392,   145,   302,   148,
     158,   145,   145,   145,   577,   293,   220,   199,   440,   476,
     259,   262,   473,   562,   481,   135,  -150,   382,   132,   200,
     217,   171,   274,   541,   275,   411,    40,   276,    40,   128,
      54,   166,   423,   261,   418,   444,   483,   445,    54,   133,
     243,   243,   564,   667,    67,    40,   128,    55,   201,    35,
     401,    35,    54,   293,   293,   152,   167,    56,   344,   222,
     345,   543,   546,   240,   232,   214,   253,  -213,    35,    49,
      57,   402,   207,  -213,   488,   566,   463,   381,   249,   250,
     269,   232,   578,   115,   477,   115,   399,   151,   144,   144,
     157,   278,   171,    54,   171,   601,   602,   604,   606,   220,
     299,   294,   446,   379,   145,   145,   380,   156,   300,   461,
     458,    55,   465,   435,   244,   291,    40,    40,   271,    40,
     205,    56,   441,   449,   442,    55,   443,   128,   368,   383,
      54,   217,   153,   336,   245,   340,   579,   580,   154,    35,
      35,   215,    35,   254,   210,   222,   584,   155,  -269,   255,
    -269,   156,   507,   599,    54,    47,   128,    56,   385,   211,
     217,   391,    40,   128,   265,   398,   379,   294,   583,   580,
     156,   126,   260,  -251,    74,   387,    56,   295,   516,   293,
     447,   436,   212,   115,   115,    35,   456,   459,   591,   213,
     410,   292,   293,   460,   416,   294,   467,   422,   232,    56,
     293,   450,   446,    55,   596,   384,   244,   446,     9,    10,
      11,   446,   140,    56,   429,   430,  -148,   432,   138,   542,
     545,   296,   139,   585,   381,   301,   446,    55,   600,   586,
     244,   227,   559,   561,  -257,   386,   155,    56,   272,   341,
     156,   127,   273,   424,   157,   509,  -251,  -251,  -251,  -251,
    -251,   388,   389,   125,   645,   407,    56,   437,   438,   478,
     446,   479,    40,   446,   592,   293,   314,   315,   317,    40,
     342,   425,   222,   652,   393,    40,    40,   115,   594,   293,
     597,   293,   217,   618,   293,    35,   394,   642,   293,   324,
     325,   327,    35,   506,   508,   486,   493,   495,    35,    35,
     403,   217,   643,   293,   587,   232,   408,   588,   446,   128,
     427,   232,   232,   217,   499,   446,   502,   409,   426,   503,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     646,   293,   412,   413,   428,   511,   647,   293,   512,   649,
     293,   457,   475,   515,   433,   542,   545,   521,   448,   653,
     293,   173,   174,   175,   451,   452,   496,   497,   222,   466,
     529,   514,   531,   430,   500,   157,    40,    40,   504,   505,
     430,   158,   510,   430,   513,   517,   518,   115,   536,    40,
     434,   537,   222,   222,   655,   293,   538,   115,   550,    35,
      35,   659,   293,     9,    10,    11,   539,   553,   289,   557,
     551,   552,    35,   554,   556,   558,   217,   567,   568,   569,
     102,   430,   102,   570,   571,    47,   572,   573,   176,   581,
     576,   598,   177,   589,   178,   595,   127,   318,   319,   320,
     322,   323,   607,   608,   630,   640,   115,   527,  -128,   644,
     574,    56,   650,   575,   162,   164,   165,   613,   662,   548,
      40,   157,   329,   338,   331,   663,   219,   158,   664,   149,
     333,   464,   528,   102,   335,   491,    72,   222,     0,     0,
     222,     0,     0,    35,     0,     0,     0,     0,     0,     0,
     532,   533,   534,   535,   593,     0,    47,     0,     0,   430,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   609,   611,     0,     0,   614,     0,     0,   222,   222,
     102,   102,     0,     0,     0,   430,     0,     0,     0,     0,
     621,     0,     0,     0,     0,     0,     0,     0,     0,   625,
     626,   628,   629,   590,   631,   634,   636,   639,     0,     0,
     102,     0,     0,     0,   102,     0,     0,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,     0,   102,     0,     0,     0,     0,     0,   430,
       0,     0,   616,     0,     0,   617,   621,   619,   620,   622,
     624,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,   102,     0,     0,     0,     0,     0,
       0,     0,     0,   648,     0,     0,   651,     0,   654,     0,
     657,   658,    87,   660,   661,     0,     0,     0,     0,     0,
     668,     0,   669,   670,     0,   671,   673,     0,   674,   675,
       0,     0,   677,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,     0,     0,     0,
       0,    88,     0,    89,   102,     0,   102,    90,   102,     0,
       0,   102,     0,   102,     0,     0,    91,    92,    93,    94,
      95,    96,     0,     0,     0,  -332,     1,     0,  -332,  -332,
    -332,  -332,  -332,  -332,     0,  -332,  -332,     0,     0,     0,
       0,     0,     0,     0,   102,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   102,     2,  -332,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,  -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,
    -332,  -332,  -332,  -332,    27,  -332,    28,  -332,    29,  -332,
      31,  -332,     0,   102,     0,     0,     0,     0,  -332,  -332,
    -332,  -332,  -332,  -332,  -332,  -332,     0,     0,     0,     0,
       0,     0,     0,   180,  -332,   -67,   -67,   -67,   -67,   -67,
     -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,     0,     0,     0,   102,   102,     0,
     102,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,   -67,     0,   -67,   -67,   -67,   181,   -67,
     -67,   -67,   -67,   182,   183,   -67,   -67,   -67,   -67,   -67,
     180,   -67,   -74,   -74,   -74,   -74,   -74,   -74,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
     -74,     0,   -74,   -74,   -74,   181,   -74,   -74,   -74,   -74,
     182,   183,   -74,   -74,   -74,   -74,   -74,   180,   -74,   -69,
     -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,   -69,     0,   -69,
     -69,   -69,   181,   -69,   -69,   -69,   -69,   182,   183,   -69,
     -69,   -69,   -69,   -69,   180,   -69,   -71,   -71,   -71,   -71,
     -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,   -71,     0,   -71,   -71,   -71,   181,
     -71,   -71,   -71,   -71,   182,   183,   -71,   -71,   -71,   -71,
     -71,   184,   -71,   -75,   -75,   -75,   -75,   -75,   -75,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,   -75,     0,   -75,   -75,   -75,   -75,   185,   186,   -75,
     -75,     0,     0,   -75,   -75,   -75,   -75,   -75,   187,   -75,
     -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   188,
     189,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
     -80,   -80,   -80,   -80,   -80,   184,   -80,   -79,   -79,   -79,
     -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,   -79,     0,   -79,   -79,   -79,
     -79,   185,   186,   -79,   -79,     0,     0,   -79,   -79,   -79,
     -79,   -79,   184,   -79,   -76,   -76,   -76,   -76,   -76,   -76,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,   -76,     0,   -76,   -76,   -76,   -76,   185,   186,
     -76,   -76,     0,     0,   -76,   -76,   -76,   -76,   -76,   184,
     -76,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,
       0,   -77,   -77,   -77,   -77,   185,   186,   -77,   -77,     0,
       0,   -77,   -77,   -77,   -77,   -77,   187,   -77,   -85,   -85,
     -85,   -85,   -85,   -85,     0,   -85,   -85,   188,   189,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,   -85,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,     0,   -85,   -85,
     -85,   -85,   -85,   187,   -85,   -83,   -83,   -83,   -83,   -83,
     -83,     0,   -83,   -83,   188,   189,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,   -83,   -83,   -83,   -83,   -83,
     187,   -83,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,
     -84,   188,   189,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
     -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,   -84,   -84,   -84,   -84,   -84,   187,   -84,   -81,
     -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   188,   189,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,   -81,
     -81,   -81,   -81,   -81,   187,   -81,   -82,   -82,   -82,   -82,
     -82,   -82,     0,   -82,   -82,   188,   189,   -82,   -82,   -82,
     -82,   -82,   -82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,   -82,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,   -82,   -82,   -82,   -82,
     -82,   190,   -82,   -87,   -87,   -87,   -87,   -87,   -87,     0,
     -87,   -87,     0,     0,   191,   192,   -87,   -87,   -87,   -87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
       0,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,   193,   194,   -87,   -87,   -87,   190,   -87,
     -91,   -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,     0,
       0,   191,   192,   -91,   -91,   -91,   -91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,   -91,     0,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,
     193,   194,   -91,   -91,   -91,   190,   -91,   -88,   -88,   -88,
     -88,   -88,   -88,     0,   -88,   -88,     0,     0,   191,   192,
     -88,   -88,   -88,   -88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,     0,   -88,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,   193,   194,   -88,
     -88,   -88,   190,   -88,   -89,   -89,   -89,   -89,   -89,   -89,
       0,   -89,   -89,     0,     0,   191,   192,   -89,   -89,   -89,
     -89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,     0,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,     0,     0,   193,   194,   -89,   -89,   -89,   195,
     -89,   -92,   -92,   -92,   -92,   -92,   -92,     0,   -92,   -92,
       0,     0,     0,     0,   196,   197,   -92,   -92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,     0,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,   -92,
       0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,
       0,     0,     0,   -92,   -92,   -92,   195,   -92,   -93,   -93,
     -93,   -93,   -93,   -93,     0,   -93,   -93,     0,     0,     0,
       0,   196,   197,   -93,   -93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,     0,   -93,     0,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,     0,     0,     0,     0,
     -93,   -93,   -93,   202,   -93,  -107,  -107,  -107,  -107,  -107,
    -107,     0,  -107,  -107,     0,     0,     0,     0,     0,     0,
       0,   203,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,     0,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,     0,  -107,     0,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,     0,     0,     0,     0,     0,     0,   204,
     446,  -107,  -345,  -345,  -345,  -345,  -345,  -345,     0,  -345,
    -345,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,     0,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,     0,   293,     0,     0,
       0,     0,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
       1,     0,   353,    80,    81,    82,    83,    84,  -345,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
      87,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,   354,   355,   356,     0,
     357,   358,   359,   360,   361,   362,   363,   364,    27,    88,
      28,    89,    29,    30,    31,    90,     0,     0,     0,     0,
       0,     0,   227,   365,    91,    92,    93,    94,    95,    96,
     489,     0,   353,    80,    81,    82,    83,    84,   366,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
      87,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,   354,   355,   356,     0,
     357,   358,   359,   360,   361,   362,   363,   364,    27,    88,
      28,    89,    29,    30,    31,    90,     0,     0,     0,     0,
       0,     0,   227,   490,    91,    92,    93,    94,    95,    96,
     560,     0,    79,    80,    81,    82,    83,    84,   366,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
      87,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,    88,
      28,    89,    29,    30,    31,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       1,     0,    79,    80,    81,    82,    83,    84,   366,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
      87,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,    88,
      28,    89,    29,     0,    31,    90,   146,     0,  -176,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,   366,     0,
       0,     0,     0,     0,     0,  -176,     0,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -176,     0,  -176,   141,  -176,  -180,
    -176,  -176,  -176,  -176,  -176,  -176,     0,     0,   147,     0,
       0,  -176,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -176,     0,     2,     0,  -180,  -180,
    -180,  -180,  -180,  -180,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -180,     0,    28,   141,  -180,
    -178,  -180,  -180,  -180,  -180,  -180,  -180,     0,     0,     0,
       0,     0,  -180,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -180,     0,     2,     0,  -178,
    -178,  -178,  -178,  -178,  -178,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -178,     0,    28,     1,
    -178,  -136,  -178,  -178,  -178,  -178,  -178,  -178,     0,     0,
       0,     0,     0,  -178,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -178,     0,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       1,    29,  -138,    31,  -136,  -136,  -136,     0,  -136,     0,
       0,     0,     0,     0,  -136,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -136,     0,     2,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     1,    29,  -140,    31,  -138,  -138,  -138,     0,  -138,
       0,     0,     0,     0,     0,  -138,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -138,     0,
       2,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    28,     1,    29,  -142,    31,  -140,  -140,  -140,     0,
    -140,     0,     0,     0,     0,     0,  -140,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -140,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     1,    29,  -144,    31,  -142,  -142,  -142,
       0,  -142,     0,     0,     0,     0,     0,  -142,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -142,     0,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,   134,    29,     0,    31,  -144,  -144,
    -144,     0,  -144,     0,     0,     0,     0,     0,  -144,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -144,     0,  -388,     0,  -388,  -388,  -388,  -388,  -388,
    -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,
    -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,   474,
       0,   353,    80,    81,    82,    83,    84,     0,    85,    86,
       0,     0,  -388,     0,  -388,     0,  -388,  -388,  -388,     0,
       0,  -150,     0,     0,     0,     0,  -391,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   135,  -150,   547,     0,   353,    80,    81,    82,    83,
      84,     0,    85,    86,     0,   354,   355,   356,     0,   357,
     358,   359,   360,   361,   362,   363,   364,     0,    88,     0,
      89,     0,     0,    87,    90,     0,     0,     0,     0,     0,
       0,   227,     0,    91,    92,    93,    94,    95,    96,     0,
       0,     0,     0,     0,     0,     0,     0,   366,     0,   354,
     355,   356,     0,   357,   358,   359,   360,   361,   362,   363,
     364,     0,    88,     0,    89,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,   227,     0,    91,    92,    93,
      94,    95,    96,   623,     0,   353,    80,    81,    82,    83,
      84,   366,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   672,     0,   353,    80,
      81,    82,    83,    84,     0,    85,    86,     0,     0,   354,
     355,   356,     0,   357,   358,   359,   360,   361,   362,   363,
     364,     0,    88,     0,    89,     0,    87,     0,    90,     0,
       0,     0,     0,     0,     0,   227,     0,    91,    92,    93,
      94,    95,    96,     0,     0,     0,     0,     0,     0,     0,
       0,   366,   354,   355,   356,     0,   357,   358,   359,   360,
     361,   362,   363,   364,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,   227,     0,
      91,    92,    93,    94,    95,    96,   676,     0,   353,    80,
      81,    82,    83,    84,   366,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   354,   355,   356,     0,   357,   358,   359,   360,
     361,   362,   363,   364,   141,    88,  -190,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,   227,     0,
      91,    92,    93,    94,    95,    96,     0,     0,     0,     0,
       0,     0,     0,     2,   366,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,   141,     0,  -192,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,  -190,
    -190,     0,  -190,  -190,     0,     0,     0,     0,     0,  -190,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
       0,     0,  -190,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,   484,     0,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,     0,    28,     0,     0,     0,
       0,  -192,  -192,     0,  -192,  -192,     0,     0,     0,     0,
       0,  -192,    87,   603,     0,    79,    80,    81,    82,    83,
      84,     0,    85,    86,  -192,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   605,     0,    79,    80,    81,
      82,    83,    84,    87,    85,    86,     0,     0,     0,     0,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,    87,    91,    92,    93,    94,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
     485,     0,    88,     0,    89,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,    96,     0,    88,     0,    89,     0,     0,     0,
      90,   366,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,    96,     0,     0,   353,    80,    81,
      82,    83,    84,   366,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     353,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,   354,   355,   356,     0,   357,   358,   359,   360,   361,
     362,   363,   364,     0,    88,     0,    89,     0,    87,     0,
      90,   656,     0,     0,     0,     0,     0,   227,     0,    91,
      92,    93,    94,    95,    96,     0,     0,     0,     0,     0,
       0,     0,     0,   366,   354,   355,   356,     0,   357,   358,
     359,   360,   361,   362,   363,   364,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
     227,     0,    91,    92,    93,    94,    95,    96,     0,     0,
      79,    80,    81,    82,    83,    84,   366,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,    90,   366,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
      78,     0,    79,    80,    81,    82,    83,    84,   665,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
      87,     0,     0,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      28,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
     390,     0,    79,    80,    81,    82,    83,    84,     0,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   501,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     9,    10,    11,
       0,     0,     0,     0,   343,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,    88,
     127,    89,     0,     0,    87,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,   127,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,   344,     0,   345,   221,     0,    91,    92,
      93,    94,    95,    96,   632,     0,    79,    80,    81,    82,
      83,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   637,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   257,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,    89,     0,     0,    87,    90,
     633,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,   638,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,   277,     0,
      79,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     303,     0,   -57,   -57,   -57,   -57,   -57,   -57,    87,   -57,
     -57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   305,     0,   -59,   -59,   -59,   -59,   -59,   -59,
     -57,   -59,   -59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,    89,
       0,     0,   -59,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,   -57,
       0,   -57,     0,     0,     0,   -57,     0,     0,     0,     0,
       0,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,   -57,
       0,   -59,     0,   -59,     0,     0,     0,   -59,     0,     0,
       0,     0,     0,     0,     0,     0,   -59,   -59,   -59,   -59,
     -59,   -59,   307,     0,   -61,   -61,   -61,   -61,   -61,   -61,
       0,   -61,   -61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   310,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -61,   -68,   -68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   312,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -68,   -70,   -70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -61,     0,   -61,     0,     0,   -70,   -61,     0,     0,
       0,     0,     0,     0,     0,     0,   -61,   -61,   -61,   -61,
     -61,   -61,     0,   -68,     0,   -68,     0,     0,     0,   -68,
       0,     0,     0,     0,     0,     0,     0,     0,   -68,   -68,
     -68,   -68,   -68,   -68,     0,   -70,     0,   -70,     0,     0,
       0,   -70,     0,     0,     0,     0,     0,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   316,     0,    79,    80,
      81,    82,    83,    84,     0,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   321,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     326,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,     0,    89,     0,     0,
      87,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
     328,     0,    79,    80,    81,    82,    83,    84,     0,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   330,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   332,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
       0,    89,     0,     0,    87,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,   334,     0,    79,    80,    81,    82,
      83,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   337,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   339,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,    89,     0,     0,    87,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,   431,     0,
      79,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     455,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   530,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,    89,
       0,     0,    87,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,   555,     0,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   610,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   627,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,    89,     0,     0,    87,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,    79,    80,    81,    82,
      83,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,   237,     0,     0,
       0,     9,    10,    11,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,   266,
       0,     0,     0,     9,    10,    11,     0,     0,     0,     0,
       0,     0,     0,    88,   127,    89,     0,     0,    87,    90,
       0,   395,     0,     0,   238,     9,    10,    11,    91,   239,
      93,    94,    95,    96,     0,    88,   127,    89,     0,     0,
       0,    90,     0,     0,     0,     0,   267,     0,     0,     0,
      91,   268,    93,    94,    95,    96,     0,    88,   127,    89,
       0,     0,     0,    90,     0,     0,     0,     0,   396,     0,
       0,     0,    91,   397,    93,    94,    95,    96,    79,    80,
      81,    82,    83,    84,     0,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,   414,
       0,     0,     0,     9,    10,    11,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,   419,     0,     0,     0,     9,    10,    11,     0,     0,
       0,     0,     0,     0,     0,    88,   127,    89,     0,     0,
      87,    90,     0,   519,     0,     0,   415,     9,    10,    11,
      91,    92,    93,    94,    95,    96,     0,    88,   127,    89,
       0,     0,     0,    90,     0,     0,     0,     0,   420,     0,
       0,     0,    91,   421,    93,    94,    95,    96,     0,    88,
     127,    89,     0,     0,     0,    90,     0,     0,     0,     0,
     520,     0,     0,     0,    91,    92,    93,    94,    95,    96,
      79,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     9,    10,    11,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,   127,    89,
       0,     0,    87,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,   344,
       0,   345,   221,   544,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,   344,     0,   345,   221,   615,    91,    92,    93,    94,
      95,    96,    79,    80,    81,    82,    83,    84,     0,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
       0,    89,     0,     0,    87,    90,     0,     0,     0,   344,
       0,   345,   221,     0,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,   221,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
     297,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,    89,     0,     0,    87,    90,     0,     0,
       0,     0,     0,     0,   434,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,   498,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,   635,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,    79,    80,    81,    82,
      83,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,    89,     0,     0,    87,   161,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,   163,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     1,    88,    54,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,     0,    29,     0,
      31,   379,   263,     0,     0,   156,     0,     0,     0,     0,
       2,    56,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   141,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    28,     0,    29,     0,    31,   155,   263,     0,     0,
     156,     0,     0,     0,     0,     2,    56,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   141,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,   155,   -19,   -19,     0,   156,     0,     0,     0,     0,
       2,    56,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   141,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,     0,   155,   582,     0,     0,
     156,     0,     0,     0,     0,     2,    56,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   141,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,   155,     0,     0,     0,   156,     0,     0,     0,     0,
       2,    56,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   251,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   242,     2,     0,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   141,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   252,
       2,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   405,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   404,     2,     0,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   406,
       2,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   229,     0,   230,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    28,     0,    29,    30,    31,     0,     0,     0,     0,
       0,     0,     0,  -389,     0,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,     0,    29,     0,
      31,     0,   231,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    28,     0,    29,     0,    31,     0,   378,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    71,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,     0,    29,     0,
      31,     0,   417,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,    30,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   492,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,     0,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   494,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,     0,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   141,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     0,     0,     0,   526,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,   522,     0,     0,     0,     0,     0,     2,     0,     0,
       0,     0,   612,     0,    28,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,   522,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,    78,     0,    28,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,   522,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
     141,     0,    28,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     0,     0,     0,     0,     0,    28,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28
};

static const yytype_int16 yycheck[] =
{
       0,     1,   136,    62,    52,   158,   135,   137,   139,    76,
     138,    56,    76,   118,    65,     3,    67,    33,   184,   152,
     153,    50,    51,     0,     1,   156,     1,    78,     1,     1,
      65,   103,    67,    78,    34,    35,     0,     1,     1,    55,
      40,    41,    42,   142,    44,   458,   459,     1,     1,   148,
     155,     1,    76,     1,     1,     1,    56,    34,    35,     3,
       1,    90,     3,    40,    41,    42,   117,    44,   119,    78,
      34,    35,     1,   118,     3,    84,    40,    41,    42,    83,
      44,   126,     1,     1,     3,   130,     1,     1,    76,     1,
     141,   142,   226,   227,    99,   146,   147,   148,    86,     3,
       1,    85,   150,   151,    76,    78,   237,   142,   180,    67,
     155,   146,   147,   148,     1,    78,   132,    95,    81,     1,
     253,   254,    76,   477,    99,    98,    99,   232,    78,    96,
     130,    90,   161,    81,   163,   266,   136,   166,   138,   139,
       3,    76,   273,    84,   272,   311,    99,   313,     3,    99,
     249,   250,    99,    99,    83,   155,   156,    76,    18,   136,
      78,   138,     3,    78,    78,     1,    76,    86,    80,   135,
      82,   584,   585,   139,   138,     1,     1,    78,   155,    83,
      99,    99,     1,    84,    99,    99,    98,   232,   146,   147,
     156,   155,    79,    50,    76,    52,   244,    98,   249,   250,
     251,   167,   161,     3,   163,   559,   560,   561,   562,   225,
     176,     1,     1,    76,   249,   250,   232,    80,   177,   348,
       1,    76,   352,   295,    79,     1,   226,   227,   381,   229,
      77,    86,   304,     1,   306,    76,   308,   237,   372,     1,
       3,   241,    78,   202,    99,   204,    77,    78,    84,   226,
     227,    77,   229,    78,    77,   221,     1,    76,    77,    84,
      79,    80,     1,     1,     3,   229,   266,    86,     1,    77,
     270,   237,   272,   273,   379,   241,    76,     1,    77,    78,
      80,     1,     1,     3,     3,     1,    86,    77,   419,    78,
      79,     1,    78,   150,   151,   272,   344,    78,     1,    78,
     266,    77,    78,    84,   270,     1,   354,   273,   272,    86,
      78,    79,     1,    76,     1,    77,    79,     1,    38,    39,
      40,     1,   381,    86,   290,   291,    78,   293,    76,   458,
     459,     3,    80,    78,   379,     3,     1,    76,    76,    84,
      79,    83,   476,   477,    77,    78,    76,    86,    76,     6,
      80,    71,    80,    77,   405,   403,    76,    77,    78,    79,
      80,    77,    78,   379,     1,    84,    86,    77,    78,     1,
       1,     3,   372,     1,    77,    78,   187,   188,   189,   379,
       6,    77,   348,     1,    81,   385,   386,   244,    77,    78,
      77,    78,   392,    77,    78,   372,    81,    77,    78,   195,
     196,   197,   379,   400,   401,   364,   385,   386,   385,   386,
      79,   411,    77,    78,   543,   379,    77,   546,     1,   419,
      78,   385,   386,   423,   390,     1,   392,    77,    77,   395,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      77,    78,    81,    81,    78,   411,    77,    78,   414,    77,
      78,     3,   359,   419,    83,   584,   585,   423,    79,    77,
      78,     9,    10,    11,    77,    77,     3,     3,   434,    79,
     436,    77,   438,   439,    81,   526,   476,   477,    81,    81,
     446,   526,    81,   449,    81,    81,    81,   344,    99,   489,
      83,    99,   458,   459,    77,    78,    84,   354,    79,   476,
     477,    77,    78,    38,    39,    40,    81,    76,    98,    62,
     469,   470,   489,   472,   473,    62,   516,    81,    81,    81,
      50,   487,    52,    81,    81,   489,    81,    81,    76,    79,
      81,    76,    80,    79,    82,    77,    71,   190,   191,   192,
     193,   194,    81,    81,    77,    60,   403,   428,    77,    77,
     516,    86,    77,   519,    84,    85,    86,   580,    99,   466,
     560,   612,   198,   203,   199,    99,   132,   612,    99,    73,
     200,   349,   434,   103,   201,   372,    44,   543,    -1,    -1,
     546,    -1,    -1,   560,    -1,    -1,    -1,    -1,    -1,    -1,
     447,   448,   449,   450,   553,    -1,   560,    -1,    -1,   565,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   577,   578,    -1,    -1,   581,    -1,    -1,   584,   585,
     150,   151,    -1,    -1,    -1,   591,    -1,    -1,    -1,    -1,
     596,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   598,
     599,   600,   601,   550,   603,   604,   605,   606,    -1,    -1,
     180,    -1,    -1,    -1,   184,    -1,    -1,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,    -1,   203,    -1,    -1,    -1,    -1,    -1,   645,
      -1,    -1,   589,    -1,    -1,   592,   652,   594,   595,   596,
     597,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,   244,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   630,    -1,    -1,   633,    -1,   635,    -1,
     637,   638,    31,   640,   641,    -1,    -1,    -1,    -1,    -1,
     647,    -1,   649,   650,    -1,   652,   653,    -1,   655,   656,
      -1,    -1,   659,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   295,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,   304,    -1,   306,    76,   308,    -1,
      -1,   311,    -1,   313,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,     0,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   344,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   354,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,   403,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    99,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,   447,   448,    -1,
     450,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       1,    99,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,     1,    99,     3,
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
      10,    11,    -1,    -1,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    81,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    93,    94,    95,    96,    97,     1,    99,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    -1,    81,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    95,    96,    97,     1,    99,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      95,    96,    97,     1,    99,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    97,
       1,    99,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    78,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
       1,    -1,     3,     4,     5,     6,     7,     8,    99,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
       1,    -1,     3,     4,     5,     6,     7,     8,    99,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
       1,    -1,     3,     4,     5,     6,     7,     8,    99,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
       1,    -1,     3,     4,     5,     6,     7,     8,    99,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    76,     1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,     1,    73,     3,
      75,    76,    77,    78,    79,    80,    -1,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,     1,    73,
       3,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,     1,
      73,     3,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
       1,    73,     3,    75,    76,    77,    78,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,     1,    73,     3,    75,    76,    77,    78,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,     1,    73,     3,    75,    76,    77,    78,    -1,
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
      -1,    69,    -1,    71,     1,    73,    -1,    75,    76,    77,
      78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    83,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    99,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    -1,
      72,    -1,    -1,    31,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    89,    90,     1,    -1,     3,     4,     5,     6,     7,
       8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    -1,    72,    -1,    31,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    89,    90,     1,    -1,     3,     4,
       5,     6,     7,     8,    99,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,     1,    70,     3,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    76,
      77,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    76,    77,    -1,    79,    80,    -1,    -1,    -1,    -1,
      -1,    86,    31,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    -1,     3,     4,     5,
       6,     7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    -1,    72,    -1,    31,    -1,
      76,    77,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    89,    90,    -1,    -1,
       3,     4,     5,     6,     7,     8,    99,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
       1,    -1,     3,     4,     5,     6,     7,     8,    99,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    80,    -1,    82,    83,    -1,    85,    86,
      87,    88,    89,    90,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    31,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      85,    86,    87,    88,    89,    90,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    34,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    34,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    31,    76,
      -1,    34,    -1,    -1,    81,    38,    39,    40,    85,    86,
      87,    88,    89,    90,    -1,    70,    71,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    71,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    34,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,
      31,    76,    -1,    34,    -1,    -1,    81,    38,    39,    40,
      85,    86,    87,    88,    89,    90,    -1,    70,    71,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    31,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,
      -1,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    80,    -1,    82,    83,    84,    85,    86,    87,    88,
      89,    90,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,    80,
      -1,    82,    83,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    31,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,     1,    70,     3,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      30,    86,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    76,    77,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    30,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,
      30,    86,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    76,    77,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    30,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      30,    86,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     0,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,     1,    -1,    71,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,     1,    -1,    71,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
       1,    -1,    71,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    30,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    69,    71,    73,
      74,    75,   133,   134,   137,   138,   139,   140,   146,   149,
     150,   151,   152,   169,   183,   184,   185,   134,     3,    83,
      76,    76,    76,     1,     3,    76,    86,    99,   135,   136,
     153,   154,   155,   134,   134,     1,     3,    83,   134,   134,
     134,     0,   184,    83,     3,   103,   147,   148,     1,     3,
       4,     5,     6,     7,     8,    10,    11,    31,    70,    72,
      76,    85,    86,    87,    88,    89,    90,   101,   102,   104,
     105,   108,   110,   111,   112,   113,   117,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   132,   138,   143,   150,
     161,   161,     1,   132,    99,   153,     1,    71,   150,   155,
     156,     1,    78,    99,     1,    98,   186,   188,    76,    80,
     154,     1,   141,   142,   143,   169,     1,    83,   141,   147,
       1,    98,     1,    78,    84,    76,    80,   143,   155,   162,
     163,    76,   110,    76,   110,   110,    76,    76,   110,   128,
     129,   131,   161,     9,    10,    11,    76,    80,    82,   112,
       1,    86,    91,    92,     1,    87,    88,     1,    12,    13,
       1,    14,    15,    93,    94,     1,    16,    17,    85,    95,
      96,    18,     1,    19,    97,    77,   143,     1,   162,   143,
      77,    77,    78,    78,     1,    77,   155,   150,   155,   136,
     153,    83,   129,   164,   133,   134,   189,    83,   174,     1,
       3,    77,   134,   157,   158,   159,   160,    34,    81,    86,
     129,   156,    84,   142,    79,    99,   144,   145,   153,   141,
     141,     1,    84,     1,    78,    84,   132,     1,   132,   148,
       1,    84,   148,    77,   157,   162,    34,    81,    86,   129,
     156,   163,    76,    80,   161,   161,   161,     1,   129,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    98,
     130,     1,    77,    78,     1,    77,     3,    77,   109,   129,
     131,     3,   112,     1,   114,     1,   115,     1,   116,   113,
       1,   118,     1,   119,   117,   117,     1,   117,   120,   120,
     120,     1,   120,   120,   121,   121,     1,   121,     1,   122,
       1,   123,     1,   124,     1,   125,   131,     1,   126,     1,
     131,     6,     6,     1,    80,    82,   164,   165,   166,   167,
     168,   133,   187,     3,    57,    58,    59,    61,    62,    63,
      64,    65,    66,    67,    68,    84,    99,   131,   133,   170,
     171,   174,   175,   176,   177,   178,   181,   182,    77,    76,
     153,   155,   162,     1,    77,     1,    78,     1,    77,    78,
       1,   129,   156,    81,    81,    34,    81,    86,   129,   132,
       1,    78,    99,    79,    84,     1,    84,    84,    77,    77,
     129,   156,    81,    81,    34,    81,   129,    77,   157,    34,
      81,    86,   129,   156,    77,    77,    77,    78,    78,   129,
     129,     1,   129,    83,    83,   112,     1,    77,    78,     1,
      81,   112,   112,   112,   113,   113,     1,    79,    79,     1,
      79,    77,    77,    78,    84,     1,   132,     3,     1,    78,
      84,   164,     1,    98,   168,   174,    79,   132,   173,     1,
      76,   179,     1,    76,     1,   170,     1,    76,     1,     3,
       1,    99,     1,    99,     1,    99,   131,     1,    99,     1,
      84,   176,    56,   159,    56,   159,     3,     3,    81,   129,
      81,     1,   129,   129,    81,    81,   145,     1,   145,   132,
      81,   129,   129,    81,    77,   129,   156,    81,    81,    34,
      81,   129,    58,   106,   107,   161,     1,   106,   165,   129,
       1,   129,   128,   128,   128,   128,    99,    99,    84,    81,
       1,    81,   164,   166,    84,   164,   166,     1,   170,   172,
      79,   131,   131,    76,   131,     1,   131,    62,    62,   133,
       1,   133,   177,     1,    99,     1,    99,    81,    81,    81,
      81,    81,    81,    81,   129,   129,    81,     1,    79,    77,
      78,    79,    77,    77,     1,    78,    84,   164,   164,    79,
     170,     1,    77,   131,    77,    77,     1,    77,    76,     1,
      76,   177,   177,     1,   177,     1,   177,    81,    81,   129,
       1,   129,     1,   107,   129,    84,   170,   170,    77,   170,
     170,   129,   170,     1,   170,   131,   131,     1,   131,   131,
      77,   131,     1,    77,   131,    77,   131,     1,    77,   131,
      60,   180,    77,    77,    77,     1,    77,    77,   170,    77,
      77,   170,     1,    77,   170,    77,    77,   170,   170,    77,
     170,   170,    99,    99,    99,    99,     1,    99,   170,   170,
     170,   170,     1,   170,   170,   170,     1,   170
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   101,   101,   102,   102,
     102,   103,   104,   104,   105,   105,   105,   106,   106,   106,
     107,   107,   107,   107,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   109,   109,   109,
     109,   110,   110,   110,   110,   110,   110,   110,   111,   111,
     111,   111,   111,   111,   112,   112,   113,   114,   113,   115,
     113,   116,   113,   113,   113,   113,   113,   117,   118,   117,
     119,   117,   117,   117,   117,   120,   120,   120,   120,   120,
     121,   121,   121,   121,   121,   121,   121,   122,   122,   122,
     122,   122,   123,   123,   123,   124,   124,   124,   125,   125,
     125,   126,   126,   126,   127,   127,   127,   128,   128,   128,
     128,   128,   129,   129,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   131,   131,   131,   131,   132,
     133,   133,   133,   133,   133,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   135,   135,   135,   136,
     136,   136,   137,   137,   137,   137,   137,   137,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   139,   139,   139,   139,   139,   139,
     139,   140,   140,   141,   141,   142,   142,   142,   142,   143,
     143,   143,   143,   143,   144,   144,   144,   144,   145,   145,
     145,   146,   146,   146,   146,   146,   146,   146,   147,   147,
     147,   147,   148,   148,   148,   148,   149,   150,   150,   150,
     150,   151,   151,   152,   152,   153,   153,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   155,   155,
     155,   155,   155,   155,   156,   156,   157,   157,   157,   158,
     158,   158,   159,   159,   159,   160,   160,   160,   161,   161,
     161,   161,   162,   162,   162,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   164,   164,   164,   164,
     164,   164,   165,   165,   165,   165,   165,   165,   166,   166,
     167,   167,   168,   168,   168,   168,   169,   169,   170,   170,
     170,   170,   170,   170,   171,   172,   171,   173,   171,   171,
     174,   174,   174,   175,   175,   176,   176,   177,   177,   177,
     178,   178,   179,   180,   178,   178,   178,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   183,   183,   184,   184,   186,   187,
     185,   188,   185,   189,   189
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     6,     6,     6,     1,     3,     3,
       3,     3,     3,     3,     1,     4,     3,     4,     3,     3,
       2,     2,     6,     7,     4,     4,     4,     1,     3,     3,
       3,     1,     2,     2,     2,     2,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     0,     4,     0,
       4,     0,     4,     3,     3,     3,     3,     1,     0,     4,
       0,     4,     3,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     5,     5,
       5,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       2,     3,     1,     3,     3,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     3,     2,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     5,     2,     4,     5,     5,
       4,     1,     1,     1,     2,     2,     3,     1,     3,     2,
       1,     2,     1,     2,     1,     3,     3,     3,     2,     3,
       1,     4,     5,     5,     6,     2,     5,     4,     1,     3,
       3,     3,     3,     1,     3,     3,     4,     1,     1,     1,
       1,     1,     1,     4,     4,     2,     1,     1,     3,     3,
       4,     6,     5,     5,     6,     5,     4,     4,     4,     3,
       4,     3,     6,     6,     5,     4,     4,     4,     3,     2,
       2,     1,     3,     2,     1,     2,     3,     1,     3,     1,
       3,     3,     2,     2,     1,     1,     3,     3,     2,     1,
       2,     2,     2,     1,     1,     3,     2,     3,     5,     4,
       5,     4,     3,     3,     3,     4,     6,     5,     5,     6,
       4,     4,     2,     3,     3,     4,     3,     4,     1,     3,
       4,     3,     2,     1,     4,     3,     3,     4,     2,     2,
       1,     2,     3,     2,     3,     3,     7,     7,     1,     1,
       1,     1,     1,     1,     3,     0,     5,     0,     4,     3,
       2,     3,     3,     1,     2,     1,     1,     1,     2,     2,
       7,     5,     0,     0,     7,     3,     4,     5,     7,     6,
       7,     6,     7,     5,     5,     5,     5,     7,     7,     7,
       7,     7,     6,     7,     7,     7,     6,     7,     6,     7,
       7,     7,     7,     3,     2,     2,     2,     3,     2,     3,
       2,     2,     3,     2,     1,     2,     1,     1,     0,     0,
       6,     0,     4,     1,     2
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
#line 61 "bison.y" /* yacc.c:1646  */
    { 
						if(nextToken == IDENTIFIER)
							process_id(); 
						else if (nextToken == '(')
							process_function(); 
					}
#line 3398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 72 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 76 "bison.y" /* yacc.c:1646  */
    { process_literal(I_CONSTANT); }
#line 3410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 92 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 93 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 100 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 107 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 108 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 114 "bison.y" /* yacc.c:1646  */
    { call_functionNoParams(); }
#line 3446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 132 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 133 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 134 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 145 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 146 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 182 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 182 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 183 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 183 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 184 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 184 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 185 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 186 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 187 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 188 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 193 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 193 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 194 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 194 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 196 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 197 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 199 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 206 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 207 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 219 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 227 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 228 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 234 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 240 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 246 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 252 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 258 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 264 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 265 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 266 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 295 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 296 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 304 "bison.y" /* yacc.c:1646  */
    { declaration_end(); }
#line 3674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 305 "bison.y" /* yacc.c:1646  */
    { declaration_end(); }
#line 3680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 308 "bison.y" /* yacc.c:1646  */
    { yyerrok;  }
#line 3686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 310 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 317 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 319 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 321 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 323 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 325 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 326 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 332 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 336 "bison.y" /* yacc.c:1646  */
    { process_assign(); }
#line 3740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 338 "bison.y" /* yacc.c:1646  */
    { 
					if(yychar == IDENTIFIER || yychar == I_CONSTANT || yychar == F_CONSTANT)
						yyerrok; 

					yyclearin;  
					clearSemanticRecords(); }
#line 3751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 378 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 379 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 380 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 381 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 401 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 409 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 415 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 416 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 435 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 436 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 444 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 445 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 452 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 454 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 484 "bison.y" /* yacc.c:1646  */
    { save_id(); }
#line 3841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 502 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 503 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 504 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 508 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 509 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 510 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 511 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 521 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 522 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 536 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 542 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 556 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 563 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 564 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 604 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 605 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 606 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 614 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 615 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 621 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 632 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 633 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 638 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 652 "bison.y" /* yacc.c:1646  */
    { begin_case(); }
#line 3985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 652 "bison.y" /* yacc.c:1646  */
    { /*end_case();*/}
#line 3991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 653 "bison.y" /* yacc.c:1646  */
    { create_default(); }
#line 3997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 653 "bison.y" /* yacc.c:1646  */
    { append_exit(); }
#line 4003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 655 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 664 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 681 "bison.y" /* yacc.c:1646  */
    {  yyerrok; }
#line 4021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 687 "bison.y" /* yacc.c:1646  */
    { start_switch(); }
#line 4027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 687 "bison.y" /* yacc.c:1646  */
    { save_comparator(); }
#line 4033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 687 "bison.y" /* yacc.c:1646  */
    { end_switch(); }
#line 4039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 690 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 691 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 710 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 711 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 712 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 713 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 715 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 716 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 717 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 718 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 719 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 721 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 723 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 724 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 725 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 727 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 728 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 729 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 730 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 731 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 732 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 733 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 742 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 743 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 744 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 745 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 746 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 747 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 761 "bison.y" /* yacc.c:1646  */
    { start_function(); stackPos -= 4; }
#line 4213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 761 "bison.y" /* yacc.c:1646  */
    { inContext = TRUE; pushTable(); }
#line 4219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 761 "bison.y" /* yacc.c:1646  */
    { end_function(); unDecleared = FALSE; inContext = FALSE; popTable(); stackPos -= 4; /*temp*/ }
#line 4225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 766 "bison.y" /* yacc.c:1646  */
    { inContext = TRUE;  start_function(); stackPos -= 4; pushTable(); }
#line 4231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 770 "bison.y" /* yacc.c:1646  */
    { end_function(); unDecleared = FALSE; inContext = FALSE; popTable(); stackPos -= 4; /*temp*/}
#line 4237 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4241 "y.tab.c" /* yacc.c:1646  */
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
#line 778 "bison.y" /* yacc.c:1906  */


#include "semanticActions.c"



