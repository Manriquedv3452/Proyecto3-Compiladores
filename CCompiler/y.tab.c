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
int inContext = FALSE;
int unDecleared = FALSE;
char* actualFunction;



#line 107 "y.tab.c" /* yacc.c:339  */

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

#line 308 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  70
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7435

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  97
/* YYNRULES -- Number of rules.  */
#define YYNRULES  387
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  649

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
       0,    62,    62,    71,    72,    73,    74,    76,    80,    81,
      82,    86,    90,    91,    95,    96,    97,   101,   102,   104,
     108,   109,   111,   112,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   136,   137,   138,   145,   146,   149,
     150,   154,   155,   155,   156,   156,   157,   158,   159,   160,
     168,   169,   170,   171,   172,   173,   177,   178,   185,   186,
     186,   187,   187,   188,   188,   189,   190,   191,   192,   196,
     197,   197,   198,   198,   200,   201,   203,   207,   208,   209,
     211,   215,   216,   216,   217,   217,   218,   218,   219,   219,
     221,   228,   229,   230,   231,   232,   236,   237,   238,   242,
     243,   244,   248,   249,   250,   254,   255,   256,   260,   261,
     262,   266,   267,   268,   269,   270,   274,   275,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   296,
     297,   299,   300,   304,   308,   309,   310,   314,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   334,
     335,   336,   340,   340,   341,   342,   351,   352,   353,   354,
     355,   356,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   379,   380,
     381,   382,   383,   384,   385,   389,   390,   394,   395,   399,
     400,   401,   405,   409,   410,   411,   412,   413,   417,   418,
     419,   420,   424,   425,   426,   434,   435,   436,   437,   438,
     439,   440,   445,   446,   448,   449,   453,   454,   456,   458,
     462,   466,   467,   468,   469,   473,   474,   478,   479,   483,
     484,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   501,   506,   507,   508,   512,   513,
     514,   515,   520,   521,   522,   523,   525,   526,   531,   532,
     537,   538,   540,   544,   545,   546,   551,   552,   553,   557,
     558,   560,   564,   565,   567,   568,   572,   573,   574,   578,
     579,   580,   581,   582,   583,   584,   585,   586,   587,   588,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     604,   605,   606,   608,   609,   610,   614,   615,   616,   617,
     618,   619,   623,   625,   629,   630,   634,   635,   636,   637,
     641,   642,   646,   647,   648,   649,   650,   651,   655,   656,
     656,   657,   657,   659,   660,   661,   667,   668,   669,   673,
     674,   678,   679,   683,   684,   686,   690,   691,   692,   692,
     692,   695,   696,   706,   707,   708,   709,   710,   711,   717,
     718,   722,   723,   724,   737,   738,   742,   743,   744,   745,
     746,   747,   748,   749,   750,   751,   752,   756,   757,   761,
     762,   766,   766,   766,   771,   769,   779,   780
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
  "argument_expression_list", "unary_expression", "$@1", "$@2",
  "unary_operator", "cast_expression", "multiplicative_expression", "$@3",
  "$@4", "$@5", "additive_expression", "$@6", "$@7", "shift_expression",
  "relational_expression", "$@8", "$@9", "$@10", "$@11",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "$@12",
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
  "static_assert_declaration", "statement", "labeled_statement", "$@13",
  "$@14", "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "$@15", "$@16",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "$@17", "$@18", "$@19",
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

#define YYPACT_NINF -495

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-495)))

#define YYTABLE_NINF -385

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    6951,  7118,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,
    -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,
    -495,  -495,  -495,  -495,  -495,  -495,    46,   -22,   -15,  -495,
      -9,  -495,  -495,    72,  3469,  3540,  -495,   216,  -495,  -495,
    3611,  3682,  3753,  -495,  6896,  -495,  -495,  -495,   -13,    69,
    4248,  7330,  4472,  -495,   171,   490,  -495,    77,  -495,  3824,
     -42,   252,  -495,  -495,  7173,   754,  7173,  -495,  -495,  -495,
    -495,  -495,    69,  -495,    95,    28,  -495,  6400,  -495,  -495,
    -495,  -495,  -495,  6068,  -495,  -495,  -495,     4,    12,  4248,
    -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,
     466,  -495,  6090,  -495,   944,  1332,  1429,  2302,  2690,     6,
      13,   110,   204,  2884,  -495,   188,   645,   250,  3947,   201,
     210,   176,   214,   217,   223,  -495,  -495,  -495,   440,   255,
     171,  -495,  -495,  -495,  6951,   270,  6730,  5320,   -42,  7364,
    6455,  -495,   177,  -495,  7173,  7173,  6510,    63,  6090,  4494,
      69,   102,  -495,  6235,  5408,  -495,   -36,  -495,   -17,  4248,
    -495,  6112,  6112,  7330,  4516,   424,  -495,  -495,   257,   260,
     353,  -495,  -495,  5804,  6090,   355,  -495,  6090,  4606,  4628,
    4650,  6090,  4740,  4762,  6090,  6090,  6090,  6090,  -495,  -495,
    -495,  -495,  6090,  6090,  4784,  4874,  4896,  4918,  5008,  6090,
    5030,  5052,  -495,  -495,  -495,  -495,  -495,  -495,  -495,   360,
     363,  -495,  -495,  -495,  -495,  -495,  -495,    67,  5826,  -495,
      72,  6675,  3071,  -495,  6785,  -495,  -495,   128,   263,   272,
    -495,   290,  4338,  -495,   291,   300,  5430,  -495,  -495,  6090,
    -495,    89,  -495,   292,  6565,  6620,  3327,  -495,    69,   209,
    -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,   309,
     310,  5584,  -495,   319,   325,  5452,   -17,  6840,  5540,   284,
    4248,  -495,  -495,   311,   334,   336,  -495,  -495,  -495,  -495,
    -495,  -495,  -495,  -495,  -495,  -495,  -495,  6090,  6090,  -495,
    5142,   333,  5848,  -495,  -495,   297,  -495,   234,  -495,  -495,
    -495,  6090,  -495,  6090,  -495,  6090,  1041,  -495,  6090,  -495,
    6090,  1526,  1623,  1720,  1817,  6090,  6090,  6090,  6090,  2399,
    2496,  -495,  2593,  -495,  2787,  -495,     6,  -495,    13,  -495,
     110,   243,  -495,   204,   340,   269,   343,   347,  4382,  -495,
    -495,  -495,   270,   349,  5164,    96,    35,  -495,    78,  4046,
     198,    42,    24,    31,  4003,  -495,  -495,    99,  -495,  -495,
    -495,  -495,  3161,  -495,  -495,  -495,  -495,  -495,  -495,  6180,
    -495,   231,  -495,  -495,  -495,  7006,  7062,   423,  -495,   427,
    5936,   358,  4360,  -495,  -495,  6090,  -495,   381,   383,  -495,
     224,   265,  -495,  6090,  -495,  3398,  -495,  -495,  -495,  -495,
     388,  5584,  -495,  -495,  6090,  -495,   389,  -495,   364,  5584,
    -495,   400,   401,  5562,   352,   307,  -495,  7228,  7262,  -495,
    -495,  -495,  -495,  -495,  5716,  -495,  6090,  -495,  5186,  6090,
    -495,  -495,  -495,  -495,  1138,  1235,  1914,  2011,  2108,  2205,
    6090,  6090,  6090,  6090,  6090,   387,   390,   -57,  5276,   485,
    -495,   142,  5826,   127,  -495,  -495,  3879,  4046,  -495,  4046,
     411,  6090,  6090,   418,  6090,  6090,   433,  6951,  3251,  -495,
      36,  -495,  -495,  -495,  -495,  -495,  -495,   106,  6090,  -495,
     854,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,
     416,  -495,   417,   421,   425,  -495,  -495,  -495,  -495,  -495,
    -495,  -495,   426,   428,  -495,  -495,   429,  5584,  -495,  -495,
    6090,  -495,   431,   352,   238,   -12,  -495,   420,  6345,    17,
     202,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,
     436,  -495,   438,    18,  -495,  5716,  5672,  -495,  -495,  -495,
    -495,  -495,  -495,  -495,  -495,   446,  -495,  4046,  2981,   305,
    6090,   312,   330,   248,  4136,  4136,  4136,  -495,  -495,  6090,
    -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,   450,   451,
    -495,  6090,  5298,  -495,  7296,  6090,  -495,  -495,  5716,  5694,
    -495,  -495,  -495,  -495,  -495,  -495,  5826,  -495,  -495,  5826,
    4046,  -495,  6090,  4046,   344,  4046,  4046,  4046,  6090,  6090,
    6090,  5958,  5980,  -495,  -495,  -495,  -495,  -495,  6290,  -495,
    -495,  -495,  -495,  -495,  -495,   444,  -495,  -495,   456,  -495,
    -495,   354,   356,   359,  4046,   394,  4046,   396,  4046,  4046,
     406,  4158,    38,  4046,  -495,  4046,  4046,  -495,  4046,  -495,
    -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   177,   156,   157,   158,   160,   161,   225,   221,
     222,   223,   171,   163,   164,   165,   166,   169,   170,   167,
     168,   162,   172,   173,   185,   186,     0,     0,   224,   226,
       0,   159,   380,     0,     0,     0,   175,     0,   176,   174,
       0,     0,     0,   136,     0,   377,   379,   148,   209,     0,
       0,     0,     0,   231,     0,     0,   134,     0,   149,     0,
     230,     0,   138,   140,     0,     0,     0,   142,   144,   146,
       1,   378,     0,    11,     0,     0,   212,     0,     2,     8,
       9,    12,    13,     0,    42,    44,    10,     0,     0,     0,
      50,    51,    52,    53,    54,    55,    24,     3,     4,     6,
      41,    56,     0,    58,     0,     0,     0,     0,     0,    99,
     102,   105,   108,     0,   133,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   257,   224,   258,   254,   253,   137,
       0,   135,   155,   152,     0,     0,     0,     0,   229,     0,
       0,   187,     0,   191,     0,     0,     0,     0,     0,     0,
     211,     0,   205,     0,     0,   197,   277,   274,   278,     0,
      47,     0,     0,     0,     0,    56,   116,   129,     0,     0,
       0,    30,    31,     0,     0,     0,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    86,    88,
      82,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   228,   193,   275,   272,   195,   227,   220,     0,
       0,   245,   232,   256,   259,   252,   150,     0,     0,   386,
       0,     0,     0,   385,     0,   269,   243,   268,     0,     0,
     263,     0,     0,   233,    51,     0,     0,   181,   188,     0,
     189,     0,   198,   204,     0,     0,     0,   178,   210,     0,
     207,   219,   218,   216,   215,   214,   206,   213,   296,     0,
       0,     0,   280,    51,     0,     0,   276,     0,     0,     0,
       0,    43,    45,     0,     0,     0,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   118,     0,     7,     5,
       0,     0,     0,    29,    26,     0,    37,     0,    28,    68,
      65,     0,    66,     0,    67,     0,     0,    74,     0,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,    98,     0,   101,   100,   104,   103,   107,
     106,     0,   110,   109,     0,     0,     0,     0,     0,   302,
     153,   387,     0,     2,     0,     0,     0,   348,     0,     0,
       0,     0,     0,     0,     0,   336,   343,     0,   341,   342,
     322,   323,     0,   339,   324,   325,   326,   327,   250,     0,
     266,   277,   267,   249,   242,     0,     0,   251,   244,     0,
       0,     0,     0,   234,   241,     0,   240,    51,     0,   202,
     192,     0,   190,     0,   183,     0,   179,   208,   297,   279,
       0,     0,   281,   287,     0,   286,     0,   298,     0,     0,
     288,    51,     0,     0,    48,     0,    49,     0,     0,   117,
     132,   131,   130,    36,     0,    57,    34,    27,     0,    35,
      25,    60,    62,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     307,     0,     0,     0,   314,   383,     0,     0,   329,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   376,
       0,   374,   367,   373,   368,   371,   369,     0,   345,   344,
       0,   337,   340,   262,   265,   260,   264,   271,   270,   248,
       0,   236,     0,     0,     0,   237,   239,   201,   200,   199,
     203,   283,     0,     0,   285,   299,     0,     0,   289,   295,
       0,   294,     0,     0,     0,     0,    17,     0,     0,     0,
       0,    40,    39,    38,   115,   113,   114,   112,   321,   320,
       0,   303,     0,     0,   317,   305,     0,   300,   306,   313,
     312,   315,   333,   328,   334,     0,   335,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   375,   366,   372,
     370,   246,   247,   235,   238,   282,   284,   291,     0,     0,
     292,     0,     0,    15,     0,     0,    16,    14,     0,     0,
      32,   304,   318,   319,   316,   310,     0,   301,   309,     0,
       0,   332,   352,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   290,   293,    23,    22,    21,     0,    18,
      20,    33,   311,   308,   330,   347,   349,   360,   129,   359,
     353,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   357,     0,     0,   355,     0,   346,
     350,   363,   362,   361,   354,   365,   364,   358,   356
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -495,  -495,  -495,  -495,  -495,  -495,    90,   -40,  -495,  -495,
     435,  -495,  -495,  -495,   -90,  -151,  -495,  -495,  -495,    57,
    -495,  -495,  -154,   266,  -495,  -495,  -495,  -495,   332,   339,
     341,   338,   357,  -495,   -39,    14,  -495,   -85,   -47,  -103,
      92,  -495,   409,  -495,  -495,   189,  -495,  -495,   194,  -120,
     -63,  -495,  -102,  -495,   468,  -127,  -495,    16,  -495,  -495,
     -26,   -53,   -55,  -119,  -121,  -495,  -104,  -495,    -3,  -107,
    -150,  -216,   117,  -494,  -495,    91,    51,    44,  -495,  -495,
    -495,  -126,  -495,   181,  -416,  -495,  -495,  -495,  -495,  -495,
    -495,   503,  -495,  -495,  -495,  -495,  -495
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    96,    97,    74,    98,    99,   515,   516,   100,   295,
     165,   161,   162,   102,   103,   104,   301,   303,   305,   105,
     308,   310,   106,   107,   317,   318,   315,   316,   108,   109,
     110,   111,   112,   113,   166,   167,   287,   357,   115,    32,
     220,    57,    58,   218,    34,   116,    36,    37,   140,   141,
     117,   241,   242,    38,    75,    76,    39,   118,    41,    42,
     243,    60,    61,   128,   259,   229,   230,   231,   517,   157,
     158,   450,   451,   452,   453,   454,    43,   359,   360,   545,
     460,   361,   362,   363,   364,   365,   463,   629,   366,   367,
      44,    45,    46,   134,   342,   135,   221
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     127,   142,   340,   142,   168,   122,   266,    59,   138,   223,
     205,   114,   176,   114,   155,   228,    40,    40,   236,   583,
     238,   530,   156,   254,   257,   471,   238,   531,   123,   150,
     306,   219,   473,   314,   136,   265,   461,   557,   137,   643,
     153,   586,   589,   469,   154,   470,   260,   119,   120,    48,
      40,    40,   556,   203,    50,   206,    40,    40,    40,   267,
      40,    51,   156,   268,   248,   573,   574,    52,   132,   213,
      72,   126,    73,   215,   168,    53,   155,   142,   129,   464,
     163,   142,   142,   142,   586,   589,   169,   299,   164,   297,
     390,   195,    33,    47,   577,   574,   148,   459,   156,   584,
     478,   251,   253,   255,   217,    73,   151,   559,   196,   114,
     114,   462,   152,   382,   331,   143,   335,   143,   341,   358,
     372,   254,   257,   472,   238,   238,    62,    63,   539,    49,
     474,    53,    67,    68,    69,   558,    33,   644,   600,   601,
     602,   249,   401,   535,   214,  -154,   408,   250,    54,   413,
      40,   235,    40,   126,   465,   130,   269,   434,    55,   435,
     273,   436,   437,   438,   439,   133,  -154,   391,   264,    40,
     126,    56,   371,  -217,    53,  -331,   131,   290,   275,  -217,
      53,   142,   142,   155,   290,   168,   256,   296,   392,    35,
      35,   143,   389,   149,   217,   143,   143,   143,   479,   467,
     114,   370,   425,   578,   369,   560,   197,   448,   154,   449,
     255,   431,    73,   432,    55,   433,   455,    64,   211,    65,
     536,   266,   198,    35,    35,   540,   537,    53,   227,    35,
      35,    35,   339,    35,    53,   429,   538,    40,    40,   571,
      40,   311,   312,   313,   440,   227,   381,    54,   126,   598,
     388,   204,   214,    54,   209,    53,   239,    55,   288,   358,
     146,   291,   260,    55,   373,   202,   498,   415,    53,   477,
     443,   484,   486,   375,   468,   400,   240,   126,   207,   406,
     579,   214,   412,    40,   126,   291,   580,   208,   497,   499,
     507,   377,   210,   397,   212,   143,   143,   458,   426,    66,
      54,   419,   420,   239,   422,   114,   592,   369,   291,    55,
      55,   154,   290,   440,   371,   430,    47,   572,   138,   585,
     588,   290,   441,    35,   599,    35,   153,  -273,    54,  -273,
     154,   596,   155,  -151,   289,   290,    55,   292,   244,   245,
     374,    54,    35,   123,   239,   440,   500,   290,   444,  -261,
     376,    55,   339,   222,   114,   440,   293,   631,   298,   227,
     440,   414,   585,   588,   554,   555,   336,   378,   379,   337,
     612,   393,   383,   613,   427,   428,   548,   549,    40,   551,
     552,   384,   593,   290,   513,    40,   398,   399,   416,   595,
     290,    40,    40,   466,   490,   635,   493,   440,   214,   494,
     402,   533,   524,   525,   526,   527,   403,   597,   290,   114,
      35,    35,   417,    35,   418,   502,   423,   214,   503,   442,
     445,   616,   290,   506,   446,   126,   487,   512,   456,   214,
     488,   630,   290,   632,   290,   424,   633,   290,   339,   491,
     521,   505,   523,   420,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   420,   155,    35,   420,   319,   320,
     322,   227,   495,   156,   496,   594,   339,   227,   227,   501,
     504,   636,   290,   638,   290,   170,   171,   172,     9,    10,
      11,   508,   509,    40,    40,   101,   528,   101,   534,   529,
     547,   124,   420,  -255,   550,   553,    40,   561,   562,   575,
     543,   544,   563,   546,   628,   641,   564,   565,   519,   566,
     567,   125,   570,   621,   622,   623,   625,   627,   160,   582,
     581,   568,   286,   214,   569,   590,    55,   324,     9,    10,
      11,   603,   604,  -132,   609,   326,   330,   101,   328,   216,
     147,   520,   173,   482,   541,   155,   174,    71,   175,   339,
     339,    35,     0,   156,     0,     0,     0,   333,    35,     0,
       0,   125,     0,     0,    35,    35,  -255,  -255,  -255,  -255,
    -255,     0,    47,   420,     0,     0,    55,     0,     0,     0,
       0,     0,     0,   101,   101,   605,   607,     0,     0,   610,
       0,   591,   339,   339,     0,     0,   271,   272,     0,     0,
     339,     0,     0,   339,     0,     0,   420,     0,     0,     0,
     618,     0,   101,     0,     0,     0,   101,     0,     0,   101,
     101,   101,   101,     0,     0,     0,     0,   101,   101,   101,
     101,   101,   101,   101,   614,   101,     0,   615,     0,   617,
     619,   620,     0,     0,     0,   420,   139,     0,  -194,   618,
       0,     0,     0,     0,     0,     0,    35,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   634,    35,
     637,     0,   639,   640,   101,     2,     0,   645,     0,   646,
     647,     0,   648,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,  -194,  -194,     0,  -194,  -194,     0,   101,     0,     0,
       0,  -194,     0,     0,     0,     0,   101,     0,   101,     0,
     101,     0,     0,   101,  -194,   101,     0,     0,     0,     0,
     101,   101,   101,   101,     0,   144,     0,  -180,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   101,
       0,     0,     0,     0,  -180,     0,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -180,     0,  -180,     0,  -180,   101,  -180,
    -180,  -180,  -180,  -180,  -180,     0,     0,   145,     0,     0,
    -180,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -180,  -338,     1,     0,  -338,  -338,  -338,
    -338,  -338,  -338,     0,  -338,  -338,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,   101,     0,   101,
       0,     0,     0,   101,     2,  -338,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,
    -338,  -338,  -338,    27,  -338,    28,  -338,    29,  -338,    31,
    -338,     0,     0,     0,     0,     0,     0,  -338,  -338,  -338,
    -338,  -338,  -338,  -338,  -338,   177,     0,   -69,   -69,   -69,
     -69,   -69,   -69,  -338,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,   -69,     0,   -69,   -69,   -69,
     178,   -69,   -69,   -69,   -69,   179,   180,   -69,   -69,   -69,
     -69,   -69,   177,   -69,   -76,   -76,   -76,   -76,   -76,   -76,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,   -76,     0,   -76,   -76,   -76,   178,   -76,   -76,
     -76,   -76,   179,   180,   -76,   -76,   -76,   -76,   -76,   177,
     -76,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,
       0,   -71,   -71,   -71,   178,   -71,   -71,   -71,   -71,   179,
     180,   -71,   -71,   -71,   -71,   -71,   177,   -71,   -73,   -73,
     -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,     0,   -73,     0,   -73,   -73,
     -73,   178,   -73,   -73,   -73,   -73,   179,   180,   -73,   -73,
     -73,   -73,   -73,   181,   -73,   -77,   -77,   -77,   -77,   -77,
     -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,   -77,     0,   -77,   -77,   -77,   -77,   182,
     183,   -77,   -77,     0,     0,   -77,   -77,   -77,   -77,   -77,
     184,   -77,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,
     -81,   185,   186,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
     -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,   -81,   -81,   -81,   -81,   -81,   181,   -81,   -80,
     -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,     0,   -80,
     -80,   -80,   -80,   182,   183,   -80,   -80,     0,     0,   -80,
     -80,   -80,   -80,   -80,   181,   -80,   -78,   -78,   -78,   -78,
     -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,   -78,     0,   -78,   -78,   -78,   -78,
     182,   183,   -78,   -78,     0,     0,   -78,   -78,   -78,   -78,
     -78,   181,   -78,   -79,   -79,   -79,   -79,   -79,   -79,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,   -79,     0,   -79,   -79,   -79,   -79,   182,   183,   -79,
     -79,     0,     0,   -79,   -79,   -79,   -79,   -79,   184,   -79,
     -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,   185,
     186,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,     0,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,
     -90,   -90,   -90,   -90,   -90,   184,   -90,   -87,   -87,   -87,
     -87,   -87,   -87,     0,   -87,   -87,   185,   186,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,   -87,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,     0,     0,   -87,   -87,   -87,
     -87,   -87,   184,   -87,   -89,   -89,   -89,   -89,   -89,   -89,
       0,   -89,   -89,   185,   186,   -89,   -89,   -89,   -89,   -89,
     -89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,     0,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,     0,     0,   -89,   -89,   -89,   -89,   -89,   184,
     -89,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,
     185,   186,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
       0,   -83,   -83,   -83,   -83,   -83,   184,   -83,   -85,   -85,
     -85,   -85,   -85,   -85,     0,   -85,   -85,   185,   186,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,   -85,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,     0,   -85,   -85,
     -85,   -85,   -85,   187,   -85,   -91,   -91,   -91,   -91,   -91,
     -91,     0,   -91,   -91,     0,     0,   188,   189,   -91,   -91,
     -91,   -91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,     0,   -91,     0,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,     0,     0,   190,   191,   -91,   -91,   -91,
     187,   -91,   -95,   -95,   -95,   -95,   -95,   -95,     0,   -95,
     -95,     0,     0,   188,   189,   -95,   -95,   -95,   -95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,     0,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,
     -95,     0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
       0,     0,   190,   191,   -95,   -95,   -95,   187,   -95,   -92,
     -92,   -92,   -92,   -92,   -92,     0,   -92,   -92,     0,     0,
     188,   189,   -92,   -92,   -92,   -92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,     0,   -92,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,   190,
     191,   -92,   -92,   -92,   187,   -92,   -93,   -93,   -93,   -93,
     -93,   -93,     0,   -93,   -93,     0,     0,   188,   189,   -93,
     -93,   -93,   -93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,     0,   -93,     0,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,     0,     0,   190,   191,   -93,   -93,
     -93,   192,   -93,   -96,   -96,   -96,   -96,   -96,   -96,     0,
     -96,   -96,     0,     0,     0,     0,   193,   194,   -96,   -96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,     0,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
       0,   -96,     0,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,     0,     0,     0,     0,   -96,   -96,   -96,   192,   -96,
     -97,   -97,   -97,   -97,   -97,   -97,     0,   -97,   -97,     0,
       0,     0,     0,   193,   194,   -97,   -97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,     0,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,     0,   -97,     0,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,     0,     0,
       0,     0,   -97,   -97,   -97,   199,   -97,  -111,  -111,  -111,
    -111,  -111,  -111,     0,  -111,  -111,     0,     0,     0,     0,
       0,     0,     0,   200,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
       0,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,     0,  -111,     0,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,     0,     0,     0,     0,     0,
       0,   201,   440,  -111,  -351,  -351,  -351,  -351,  -351,  -351,
       0,  -351,  -351,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,
    -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,
    -351,  -351,  -351,  -351,  -351,  -351,  -351,     0,  -351,  -351,
    -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,
    -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,     0,   290,
       0,     0,     0,     0,  -351,  -351,  -351,  -351,  -351,  -351,
    -351,  -351,     1,     0,   343,    79,    80,    81,    82,    83,
    -351,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,    86,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,   344,   345,
     346,     0,   347,   348,   349,   350,   351,   352,   353,   354,
      27,    87,    28,    88,    29,    30,    31,    89,     0,     0,
       0,     0,     0,     0,   222,   355,    90,    91,    92,    93,
      94,    95,   480,     0,   343,    79,    80,    81,    82,    83,
     356,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,    86,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,   344,   345,
     346,     0,   347,   348,   349,   350,   351,   352,   353,   354,
      27,    87,    28,    88,    29,    30,    31,    89,     0,     0,
       0,     0,     0,     0,   222,   481,    90,    91,    92,    93,
      94,    95,     1,     0,    78,    79,    80,    81,    82,    83,
     356,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,    86,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    87,    28,    88,    29,    30,    31,    89,   139,     0,
    -184,     0,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,     0,     0,     0,     0,     0,     0,     0,     0,
     356,     0,     0,     0,     0,     0,     0,     2,     0,  -184,
    -184,  -184,  -184,  -184,  -184,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -184,     0,    28,   139,
    -184,  -182,  -184,  -184,  -184,  -184,  -184,  -184,     0,     0,
       0,     0,     0,  -184,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -184,     0,     2,     0,
    -182,  -182,  -182,  -182,  -182,  -182,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -182,     0,    28,
       1,  -182,  -139,  -182,  -182,  -182,  -182,  -182,  -182,     0,
       0,     0,     0,     0,  -182,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -182,     0,     2,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     1,    29,  -141,    31,  -139,  -139,  -139,     0,  -139,
       0,     0,     0,     0,     0,  -139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -139,     0,
       2,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    28,     1,    29,  -143,    31,  -141,  -141,  -141,     0,
    -141,     0,     0,     0,     0,     0,  -141,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -141,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     1,    29,  -145,    31,  -143,  -143,  -143,
       0,  -143,     0,     0,     0,     0,     0,  -143,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -143,     0,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     1,    29,  -147,    31,  -145,  -145,
    -145,     0,  -145,     0,     0,     0,     0,     0,  -145,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -145,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,   132,    29,     0,    31,  -147,
    -147,  -147,     0,  -147,     0,     0,     0,     0,     0,  -147,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -147,     0,  -381,     0,  -381,  -381,  -381,  -381,
    -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,
    -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,
     542,     0,   343,    79,    80,    81,    82,    83,     0,    84,
      85,     0,     0,  -381,     0,  -381,     0,  -381,  -381,  -381,
       0,     0,  -154,     0,     0,     0,     0,  -384,     0,     0,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   133,  -154,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   344,   345,   346,     0,
     347,   348,   349,   350,   351,   352,   353,   354,   139,    87,
    -196,    88,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     0,   222,     0,    90,    91,    92,    93,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     2,   356,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,   475,     0,    78,    79,    80,    81,
      82,    83,     0,    84,    85,     0,     0,     0,    28,     0,
       0,     0,     0,  -196,  -196,     0,  -196,  -196,     0,     0,
       0,     0,     0,  -196,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -196,     0,     0,   343,
      79,    80,    81,    82,    83,     0,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,    88,     0,    86,     0,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,     0,     0,     0,     0,     0,     0,
       0,     0,   476,   344,   345,   346,     0,   347,   348,   349,
     350,   351,   352,   353,   354,     0,    87,     0,    88,     0,
       0,     0,    89,     0,     0,     0,     0,     0,     0,   222,
       0,    90,    91,    92,    93,    94,    95,     0,     0,    78,
      79,    80,    81,    82,    83,   356,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,    79,    80,    81,    82,    83,    86,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,    88,     0,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,    92,    93,    94,    95,     0,    87,     0,
      88,     0,     0,     0,    89,   356,     0,     0,     0,     0,
       0,     0,     0,    90,    91,    92,    93,    94,    95,    77,
       0,    78,    79,    80,    81,    82,    83,   642,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,    86,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,    28,
      88,     0,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,    92,    93,    94,    95,   380,
       0,    78,    79,    80,    81,    82,    83,     0,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   492,     0,    78,    79,    80,    81,    82,    83,    86,
      84,    85,     0,     0,     0,     0,     9,    10,    11,     0,
       0,     0,     0,   447,     0,    78,    79,    80,    81,    82,
      83,    86,    84,    85,     0,     0,     0,     0,     9,    10,
      11,     0,     0,     0,     0,     0,     0,     0,    87,   125,
      88,     0,     0,    86,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,    92,    93,    94,    95,     0,
      87,   125,    88,     0,     0,     0,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    91,    92,    93,    94,
      95,     0,    87,     0,    88,     0,     0,     0,    89,     0,
       0,     0,   448,     0,   449,   338,     0,    90,    91,    92,
      93,    94,    95,   121,     0,    78,    79,    80,    81,    82,
      83,     0,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   252,     0,    78,    79,    80,
      81,    82,    83,    86,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   274,     0,    78,
      79,    80,    81,    82,    83,    86,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,    88,     0,     0,    86,    89,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,    95,     0,    87,     0,    88,     0,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,    92,    93,    94,    95,     0,    87,     0,    88,     0,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,    92,    93,    94,    95,   300,     0,   -59,
     -59,   -59,   -59,   -59,   -59,     0,   -59,   -59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   302,
       0,   -61,   -61,   -61,   -61,   -61,   -61,   -59,   -61,   -61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   304,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -61,
     -63,   -63,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -59,     0,   -59,     0,
       0,   -63,   -59,     0,     0,     0,     0,     0,     0,     0,
       0,   -59,   -59,   -59,   -59,   -59,   -59,     0,   -61,     0,
     -61,     0,     0,     0,   -61,     0,     0,     0,     0,     0,
       0,     0,     0,   -61,   -61,   -61,   -61,   -61,   -61,     0,
     -63,     0,   -63,     0,     0,     0,   -63,     0,     0,     0,
       0,     0,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   307,     0,   -70,   -70,   -70,   -70,   -70,   -70,     0,
     -70,   -70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   309,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -70,   -72,   -72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   321,     0,    78,    79,    80,
      81,    82,    83,   -72,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -70,     0,   -70,     0,     0,    86,   -70,     0,     0,     0,
       0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,     0,   -72,     0,   -72,     0,     0,     0,   -72,     0,
       0,     0,     0,     0,     0,     0,     0,   -72,   -72,   -72,
     -72,   -72,   -72,     0,    87,     0,    88,     0,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,    92,    93,    94,    95,   323,     0,    78,    79,    80,
      81,    82,    83,     0,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   325,     0,    78,
      79,    80,    81,    82,    83,    86,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   327,
       0,    78,    79,    80,    81,    82,    83,    86,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,     0,    88,     0,     0,    86,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,    92,    93,    94,    95,     0,    87,     0,    88,     0,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,    92,    93,    94,    95,     0,    87,     0,
      88,     0,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,    92,    93,    94,    95,   329,
       0,    78,    79,    80,    81,    82,    83,     0,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   332,     0,    78,    79,    80,    81,    82,    83,    86,
      84,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   334,     0,    78,    79,    80,    81,    82,
      83,    86,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,     0,
      88,     0,     0,    86,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,    92,    93,    94,    95,     0,
      87,     0,    88,     0,     0,     0,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    91,    92,    93,    94,
      95,     0,    87,     0,    88,     0,     0,     0,    89,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,    95,   421,     0,    78,    79,    80,    81,    82,
      83,     0,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   457,     0,    78,    79,    80,
      81,    82,    83,    86,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   522,     0,    78,
      79,    80,    81,    82,    83,    86,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,    88,     0,     0,    86,    89,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,    95,     0,    87,     0,    88,     0,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,    92,    93,    94,    95,     0,    87,     0,    88,     0,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,    92,    93,    94,    95,   532,     0,    78,
      79,    80,    81,    82,    83,     0,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   606,
       0,    78,    79,    80,    81,    82,    83,    86,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    86,
      84,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,    88,     0,
       0,    86,    89,     0,   232,     0,     0,     0,     9,    10,
      11,    90,    91,    92,    93,    94,    95,     0,    87,     0,
      88,     0,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,    92,    93,    94,    95,     0,
      87,   125,    88,     0,     0,     0,    89,     0,     0,     0,
       0,   233,     0,     0,     0,    90,   234,    92,    93,    94,
      95,    78,    79,    80,    81,    82,    83,     0,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    86,
      84,    85,   261,     0,     0,     0,     9,    10,    11,     0,
       0,     0,     0,     0,     0,    78,    79,    80,    81,    82,
      83,    86,    84,    85,   385,     0,     0,     0,     9,    10,
      11,     0,     0,     0,     0,     0,     0,     0,    87,   125,
      88,     0,     0,    86,    89,     0,   404,     0,     0,   262,
       9,    10,    11,    90,   263,    92,    93,    94,    95,     0,
      87,   125,    88,     0,     0,     0,    89,     0,     0,     0,
       0,   386,     0,     0,     0,    90,   387,    92,    93,    94,
      95,     0,    87,   125,    88,     0,     0,     0,    89,     0,
       0,     0,     0,   405,     0,     0,     0,    90,    91,    92,
      93,    94,    95,    78,    79,    80,    81,    82,    83,     0,
      84,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,    79,    80,    81,    82,
      83,    86,    84,    85,   409,     0,     0,     0,     9,    10,
      11,     0,     0,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    86,    84,    85,   510,     0,     0,     0,
       9,    10,    11,     0,     0,     0,     0,     0,     0,     0,
      87,   125,    88,     0,     0,    86,    89,     0,     0,     0,
       0,   410,     9,    10,    11,    90,   411,    92,    93,    94,
      95,     0,    87,   125,    88,     0,     0,     0,    89,     0,
       0,     0,     0,   511,     0,     0,     0,    90,    91,    92,
      93,    94,    95,     0,    87,   125,    88,     0,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,    92,    93,    94,    95,    78,    79,    80,    81,    82,
      83,     0,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    86,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      79,    80,    81,    82,    83,    86,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,    88,     0,     0,    86,    89,     0,
       0,     0,   448,     0,   449,   338,   587,    90,    91,    92,
      93,    94,    95,     0,    87,     0,    88,     0,     0,     0,
      89,     0,     0,     0,   448,     0,   449,   338,   611,    90,
      91,    92,    93,    94,    95,     0,    87,     0,    88,     0,
       0,     0,    89,     0,     0,     0,   448,     0,   449,   338,
       0,    90,    91,    92,    93,    94,    95,    78,    79,    80,
      81,    82,    83,     0,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      79,    80,    81,    82,    83,    86,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,    79,    80,    81,    82,    83,    86,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,     0,    88,     0,     0,    86,
      89,   294,     0,     0,     0,     0,     0,     0,     0,    90,
      91,    92,    93,    94,    95,     0,    87,     0,    88,     0,
       0,     0,    89,     0,     0,     0,     0,     0,     0,   338,
       0,    90,    91,    92,    93,    94,    95,     0,    87,     0,
      88,     0,     0,     0,    89,     0,     0,     0,     0,     0,
       0,   424,     0,    90,    91,    92,    93,    94,    95,    78,
      79,    80,    81,    82,    83,     0,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,    79,    80,    81,    82,    83,    86,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    86,
      84,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,    88,     0,
       0,    86,    89,     0,     0,     0,     0,   489,     0,     0,
       0,    90,    91,    92,    93,    94,    95,     0,    87,     0,
      88,     0,     0,     0,    89,   624,     0,     0,     0,     0,
       0,     0,     0,    90,    91,    92,    93,    94,    95,     0,
      87,     0,    88,     0,     0,     0,    89,   626,     0,     0,
       0,     0,     0,     0,     0,    90,    91,    92,    93,    94,
      95,    78,    79,    80,    81,    82,    83,     0,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    86,
      84,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,    79,    80,    81,    82,
      83,    86,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,     0,
      88,     0,     0,    86,   159,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,    92,    93,    94,    95,     0,
      87,     0,    88,     0,     0,     0,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    91,    92,    93,    94,
      95,     1,    87,    53,    88,     0,     0,     0,   270,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    28,     0,    29,     0,    31,   369,   258,     0,     0,
     154,     0,     0,     0,     0,     2,    55,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   139,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,     0,    29,     0,
      31,   153,   258,     0,     0,   154,     0,     0,     0,     0,
       2,    55,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   139,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,     0,   153,   -19,   -19,     0,
     154,     0,     0,     0,     0,     2,    55,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   139,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,   153,   576,     0,     0,   154,     0,     0,     0,     0,
       2,    55,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   139,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,     0,   153,     0,     0,     0,
     154,     0,     0,     0,     0,     2,    55,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   246,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
       2,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   139,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   247,     2,     0,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   395,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   394,
       2,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   396,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   224,     0,   225,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,     0,    29,    30,
      31,     0,     0,     0,     0,     0,     0,     0,  -382,     0,
       2,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    28,     0,    29,     0,    31,     0,   226,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,     0,    29,     0,
      31,     0,   368,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    70,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    28,     0,    29,     0,    31,     0,   407,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,    30,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   483,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
       0,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   485,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,     0,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   139,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       0,     0,     0,   518,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,   514,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,   608,     0,    28,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
     514,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       0,    77,     0,    28,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,   514,     0,     0,     0,     0,     0,
       2,     0,     0,     0,     0,   139,     0,    28,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     0,     0,     0,     0,
       0,    28,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28
};

static const yytype_int16 yycheck[] =
{
      55,    64,   218,    66,    89,    52,   156,    33,    61,   135,
     117,    50,   102,    52,    77,   136,     0,     1,   137,     1,
     140,    78,    77,   150,   151,     1,   146,    84,    54,     1,
     181,   134,     1,   187,    76,   154,     1,     1,    80,     1,
      76,   535,   536,     1,    80,     3,   153,    50,    51,     3,
      34,    35,   468,   116,    76,   118,    40,    41,    42,    76,
      44,    76,   117,    80,     1,    77,    78,    76,     1,   124,
      83,    55,     3,   128,   159,     3,   139,   140,     1,     1,
      76,   144,   145,   146,   578,   579,    89,   177,    76,   174,
       1,    85,     0,     1,    77,    78,     1,     1,   153,    81,
       1,   148,   149,     1,   130,     3,    78,     1,    95,   148,
     149,    76,    84,   232,   199,    64,   201,    66,   221,   222,
     227,   248,   249,    99,   244,   245,    34,    35,     1,    83,
      99,     3,    40,    41,    42,    99,    44,    99,   554,   555,
     556,    78,   261,     1,   128,    78,   267,    84,    76,   268,
     134,   137,   136,   137,    76,    78,   159,   308,    86,   310,
     163,   315,   316,   317,   318,    98,    99,    78,   154,   153,
     154,    99,   227,    78,     3,    79,    99,    78,   164,    84,
       3,   244,   245,   246,    78,   270,    84,   173,    99,     0,
       1,   140,   239,    98,   220,   144,   145,   146,    99,     1,
     239,   227,   292,     1,    76,    99,    96,    80,    80,    82,
       1,   301,     3,   303,    86,   305,   342,     1,     1,     3,
      78,   371,    18,    34,    35,    98,    84,     3,   136,    40,
      41,    42,   218,    44,     3,     1,   452,   221,   222,     1,
     224,   184,   185,   186,     1,   153,   232,    76,   232,     1,
     236,     1,   236,    76,    78,     3,    79,    86,     1,   362,
      66,     1,   369,    86,     1,    77,     1,   270,     3,   354,
       1,   375,   376,     1,    76,   261,    99,   261,    77,   265,
      78,   265,   268,   267,   268,     1,    84,    77,   390,   391,
     409,     1,    78,    84,    77,   244,   245,   344,     1,    83,
      76,   287,   288,    79,   290,   344,     1,    76,     1,    86,
      86,    80,    78,     1,   369,    81,   224,    79,   371,   535,
     536,    78,    79,   134,    76,   136,    76,    77,    76,    79,
      80,     1,   395,    78,    77,    78,    86,    77,   144,   145,
      77,    76,   153,   369,    79,     1,   393,    78,    79,    77,
      78,    86,   338,    83,   393,     1,     3,     1,     3,   267,
       1,    77,   578,   579,   467,   468,     6,    77,    78,     6,
     586,    79,    81,   589,    77,    78,   461,   462,   362,   464,
     465,    81,    77,    78,    77,   369,    77,    77,    77,    77,
      78,   375,   376,   349,   380,     1,   382,     1,   382,   385,
      81,   448,   441,   442,   443,   444,    81,    77,    78,   448,
     221,   222,    78,   224,    78,   401,    83,   401,   404,    79,
      77,    77,    78,   409,    77,   409,     3,   413,    79,   413,
       3,    77,    78,    77,    78,    83,    77,    78,   424,    81,
     426,    77,   428,   429,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,   440,   518,   267,   443,   192,   193,
     194,   369,    81,   518,    81,   550,   452,   375,   376,    81,
      81,    77,    78,    77,    78,     9,    10,    11,    38,    39,
      40,    81,    81,   467,   468,    50,    99,    52,     3,    99,
      79,     1,   478,     3,    76,    62,   480,    81,    81,    79,
     456,   457,    81,   459,    60,    99,    81,    81,   418,    81,
      81,    71,    81,   598,   599,   600,   601,   602,    83,    81,
      84,   507,    98,   507,   510,    79,    86,   195,    38,    39,
      40,    81,    81,    77,   574,   196,   198,   102,   197,   130,
      72,   424,    76,   362,   453,   608,    80,    44,    82,   535,
     536,   362,    -1,   608,    -1,    -1,    -1,   200,   369,    -1,
      -1,    71,    -1,    -1,   375,   376,    76,    77,    78,    79,
      80,    -1,   480,   559,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,   148,   149,   571,   572,    -1,    -1,   575,
      -1,   547,   578,   579,    -1,    -1,   161,   162,    -1,    -1,
     586,    -1,    -1,   589,    -1,    -1,   592,    -1,    -1,    -1,
     596,    -1,   177,    -1,    -1,    -1,   181,    -1,    -1,   184,
     185,   186,   187,    -1,    -1,    -1,    -1,   192,   193,   194,
     195,   196,   197,   198,   590,   200,    -1,   593,    -1,   595,
     596,   597,    -1,    -1,    -1,   631,     1,    -1,     3,   635,
      -1,    -1,    -1,    -1,    -1,    -1,   467,   468,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   624,   480,
     626,    -1,   628,   629,   239,    30,    -1,   633,    -1,   635,
     636,    -1,   638,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    76,    77,    -1,    79,    80,    -1,   292,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,   301,    -1,   303,    -1,
     305,    -1,    -1,   308,    99,   310,    -1,    -1,    -1,    -1,
     315,   316,   317,   318,    -1,     1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   344,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,   393,    75,
      76,    77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,     0,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   441,   442,    -1,   444,
      -1,    -1,    -1,   448,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,     1,    -1,     3,     4,     5,
       6,     7,     8,    99,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    -1,    81,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,     1,    99,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,     1,
      99,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    -1,    81,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,     1,    99,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
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
       8,    -1,    10,    11,    -1,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    -1,    93,    94,    95,    96,    97,
       1,    99,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    93,    94,    95,    96,    97,     1,    99,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    81,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    93,
      94,    95,    96,    97,     1,    99,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    -1,    93,    94,    95,    96,
      97,     1,    99,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    81,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    95,    96,    97,     1,    99,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    95,    96,    97,     1,    99,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    -1,    81,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    97,     1,    99,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    78,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,     1,    -1,     3,     4,     5,     6,     7,     8,
      99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,     1,    -1,     3,     4,     5,     6,     7,     8,
      99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,     1,    -1,     3,     4,     5,     6,     7,     8,
      99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,     1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
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
       1,    73,     3,    75,    76,    77,    78,    79,    80,    -1,
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
      -1,    69,    -1,    71,     1,    73,     3,    75,    76,    77,
      78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,     1,    73,    -1,    75,    76,
      77,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,     1,    70,
       3,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    -1,    76,    77,    -1,    79,    80,    -1,    -1,
      -1,    -1,    -1,    86,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    31,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    89,    90,    -1,    -1,     3,
       4,     5,     6,     7,     8,    99,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,     1,
      -1,     3,     4,     5,     6,     7,     8,    99,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    -1,    31,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    80,    -1,    82,    83,    -1,    85,    86,    87,
      88,    89,    90,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    31,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    31,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    31,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    31,    76,    -1,    34,    -1,    -1,    -1,    38,    39,
      40,    85,    86,    87,    88,    89,    90,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    34,    -1,    -1,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    34,    -1,    -1,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    -1,    31,    76,    -1,    34,    -1,    -1,    81,
      38,    39,    40,    85,    86,    87,    88,    89,    90,    -1,
      70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    34,    -1,    -1,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    34,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,
      -1,    81,    38,    39,    40,    85,    86,    87,    88,    89,
      90,    -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    70,    71,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,
      -1,    -1,    80,    -1,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    80,    -1,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    82,    83,
      -1,    85,    86,    87,    88,    89,    90,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    31,
      76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    89,    90,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    89,    90,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    31,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    31,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,     1,    70,     3,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    76,    77,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    30,    86,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      30,    86,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    76,    77,    78,    -1,
      80,    -1,    -1,    -1,    -1,    30,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      30,    86,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    30,    86,    -1,    -1,    -1,
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
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     0,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,     1,    -1,    71,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,     1,    -1,    71,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,     1,    -1,    71,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    30,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    69,    71,    73,
      74,    75,   139,   140,   144,   145,   146,   147,   153,   156,
     157,   158,   159,   176,   190,   191,   192,   140,     3,    83,
      76,    76,    76,     3,    76,    86,    99,   141,   142,   160,
     161,   162,   140,   140,     1,     3,    83,   140,   140,   140,
       0,   191,    83,     3,   103,   154,   155,     1,     3,     4,
       5,     6,     7,     8,    10,    11,    31,    70,    72,    76,
      85,    86,    87,    88,    89,    90,   101,   102,   104,   105,
     108,   110,   113,   114,   115,   119,   122,   123,   128,   129,
     130,   131,   132,   133,   134,   138,   145,   150,   157,   168,
     168,     1,   138,   160,     1,    71,   157,   162,   163,     1,
      78,    99,     1,    98,   193,   195,    76,    80,   161,     1,
     148,   149,   150,   176,     1,    83,   148,   154,     1,    98,
       1,    78,    84,    76,    80,   150,   162,   169,   170,    76,
     110,   111,   112,    76,    76,   110,   134,   135,   137,   168,
       9,    10,    11,    76,    80,    82,   114,     1,    86,    91,
      92,     1,    87,    88,     1,    12,    13,     1,    14,    15,
      93,    94,     1,    16,    17,    85,    95,    96,    18,     1,
      19,    97,    77,   150,     1,   169,   150,    77,    77,    78,
      78,     1,    77,   162,   157,   162,   142,   160,   143,   139,
     140,   196,    83,   181,     1,     3,    77,   140,   164,   165,
     166,   167,    34,    81,    86,   135,   163,    84,   149,    79,
      99,   151,   152,   160,   148,   148,     1,    84,     1,    78,
      84,   138,     1,   138,   155,     1,    84,   155,    77,   164,
     169,    34,    81,    86,   135,   163,   170,    76,    80,   168,
      76,   110,   110,   168,     1,   135,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    98,   136,     1,    77,
      78,     1,    77,     3,    77,   109,   135,   137,     3,   114,
       1,   116,     1,   117,     1,   118,   115,     1,   120,     1,
     121,   119,   119,   119,   122,   126,   127,   124,   125,   123,
     123,     1,   123,     1,   128,     1,   129,     1,   130,     1,
     131,   137,     1,   132,     1,   137,     6,     6,    83,   135,
     171,   139,   194,     3,    57,    58,    59,    61,    62,    63,
      64,    65,    66,    67,    68,    84,    99,   137,   139,   177,
     178,   181,   182,   183,   184,   185,   188,   189,    77,    76,
     160,   162,   169,     1,    77,     1,    78,     1,    77,    78,
       1,   135,   163,    81,    81,    34,    81,    86,   135,   138,
       1,    78,    99,    79,    84,     1,    84,    84,    77,    77,
     135,   163,    81,    81,    34,    81,   135,    77,   164,    34,
      81,    86,   135,   163,    77,   168,    77,    78,    78,   135,
     135,     1,   135,    83,    83,   114,     1,    77,    78,     1,
      81,   114,   114,   114,   115,   115,   122,   122,   122,   122,
       1,    79,    79,     1,    79,    77,    77,     1,    80,    82,
     171,   172,   173,   174,   175,   181,    79,     1,   138,     1,
     180,     1,    76,   186,     1,    76,   177,     1,    76,     1,
       3,     1,    99,     1,    99,     1,    99,   137,     1,    99,
       1,    84,   183,    56,   166,    56,   166,     3,     3,    81,
     135,    81,     1,   135,   135,    81,    81,   152,     1,   152,
     138,    81,   135,   135,    81,    77,   135,   163,    81,    81,
      34,    81,   135,    77,    58,   106,   107,   168,     1,   106,
     172,   135,     1,   135,   134,   134,   134,   134,    99,    99,
      78,    84,     1,   138,     3,     1,    78,    84,   171,     1,
      98,   175,     1,   177,   177,   179,   177,    79,   137,   137,
      76,   137,   137,    62,   139,   139,   184,     1,    99,     1,
      99,    81,    81,    81,    81,    81,    81,    81,   135,   135,
      81,     1,    79,    77,    78,    79,    77,    77,     1,    78,
      84,    84,    81,     1,    81,   171,   173,    84,   171,   173,
      79,   177,     1,    77,   137,    77,     1,    77,     1,    76,
     184,   184,   184,    81,    81,   135,     1,   135,     1,   107,
     135,    84,   171,   171,   177,   177,    77,   177,   135,   177,
     177,   137,   137,   137,    77,   137,    77,   137,    60,   187,
      77,     1,    77,    77,   177,     1,    77,   177,    77,   177,
     177,    99,    99,     1,    99,   177,   177,   177,   177
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   101,   101,   102,   102,
     102,   103,   104,   104,   105,   105,   105,   106,   106,   106,
     107,   107,   107,   107,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   109,   109,   109,
     109,   110,   111,   110,   112,   110,   110,   110,   110,   110,
     113,   113,   113,   113,   113,   113,   114,   114,   115,   116,
     115,   117,   115,   118,   115,   115,   115,   115,   115,   119,
     120,   119,   121,   119,   119,   119,   119,   122,   122,   122,
     122,   123,   124,   123,   125,   123,   126,   123,   127,   123,
     123,   128,   128,   128,   128,   128,   129,   129,   129,   130,
     130,   130,   131,   131,   131,   132,   132,   132,   133,   133,
     133,   134,   134,   134,   134,   134,   135,   135,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   137,
     137,   137,   137,   138,   139,   139,   139,   139,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   141,
     141,   141,   143,   142,   142,   142,   144,   144,   144,   144,
     144,   144,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   146,   146,
     146,   146,   146,   146,   146,   147,   147,   148,   148,   149,
     149,   149,   149,   150,   150,   150,   150,   150,   151,   151,
     151,   151,   152,   152,   152,   153,   153,   153,   153,   153,
     153,   153,   154,   154,   154,   154,   155,   155,   155,   155,
     156,   157,   157,   157,   157,   158,   158,   159,   159,   160,
     160,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   162,   162,   162,   162,   162,   162,   163,   163,
     164,   164,   164,   165,   165,   165,   166,   166,   166,   167,
     167,   167,   168,   168,   168,   168,   169,   169,   169,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     171,   171,   171,   171,   171,   171,   172,   172,   172,   172,
     172,   172,   173,   173,   174,   174,   175,   175,   175,   175,
     176,   176,   177,   177,   177,   177,   177,   177,   178,   179,
     178,   180,   178,   178,   178,   178,   181,   181,   181,   182,
     182,   183,   183,   184,   184,   184,   185,   185,   186,   187,
     185,   185,   185,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   190,   190,   191,
     191,   193,   194,   192,   195,   192,   196,   196
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     6,     6,     6,     1,     3,     3,
       3,     3,     3,     3,     1,     4,     3,     4,     3,     3,
       2,     2,     6,     7,     4,     4,     4,     1,     3,     3,
       3,     1,     0,     3,     0,     3,     2,     2,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     0,
       4,     0,     4,     0,     4,     3,     3,     3,     3,     1,
       0,     4,     0,     4,     3,     3,     3,     1,     3,     3,
       3,     1,     0,     4,     0,     4,     0,     4,     0,     4,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     5,     5,     5,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     1,     2,     3,     1,     3,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       3,     2,     0,     4,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     5,
       2,     4,     5,     5,     4,     1,     1,     1,     2,     2,
       3,     1,     3,     2,     1,     2,     1,     2,     1,     3,
       3,     3,     2,     3,     1,     4,     5,     5,     6,     2,
       5,     4,     1,     3,     3,     3,     3,     1,     3,     3,
       4,     1,     1,     1,     1,     1,     1,     4,     4,     2,
       1,     1,     3,     3,     4,     6,     5,     5,     6,     5,
       4,     4,     4,     3,     4,     3,     6,     6,     5,     4,
       4,     4,     3,     2,     2,     1,     3,     2,     1,     2,
       3,     1,     3,     1,     3,     3,     2,     2,     1,     1,
       3,     3,     2,     1,     2,     2,     2,     1,     1,     3,
       2,     3,     5,     4,     5,     4,     3,     3,     3,     4,
       6,     5,     5,     6,     4,     4,     2,     3,     3,     4,
       3,     4,     1,     3,     4,     3,     2,     1,     4,     3,
       3,     4,     2,     2,     1,     2,     3,     2,     3,     3,
       7,     7,     1,     1,     1,     1,     1,     1,     3,     0,
       5,     0,     4,     3,     3,     3,     2,     3,     3,     1,
       2,     1,     1,     1,     2,     2,     7,     5,     0,     0,
       7,     3,     4,     5,     7,     6,     7,     6,     7,     5,
       5,     7,     7,     7,     7,     7,     3,     2,     2,     2,
       3,     2,     3,     2,     2,     3,     2,     1,     2,     1,
       1,     0,     0,     6,     0,     4,     1,     2
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
#line 62 "bison.y" /* yacc.c:1646  */
    { 
						
						if(nextToken == IDENTIFIER)
							process_id(); 
						else if (nextToken == '(')
							process_function(); 
						else if (nextToken == '=' || 275 <= nextToken <= 284)
							verify_id_for_Assign();
					}
#line 3249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 76 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 80 "bison.y" /* yacc.c:1646  */
    { process_literal(I_CONSTANT); }
#line 3261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 96 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 97 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 104 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 111 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 112 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 118 "bison.y" /* yacc.c:1646  */
    { call_functionNoParams(); }
#line 3297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 122 "bison.y" /* yacc.c:1646  */
    { save_op(); eval_unary(); }
#line 3303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 123 "bison.y" /* yacc.c:1646  */
    { save_op(); eval_unary(); }
#line 3309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 136 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 137 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 138 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 149 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 150 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 155 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 155 "bison.y" /* yacc.c:1646  */
    { eval_unary(); }
#line 3351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 156 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 156 "bison.y" /* yacc.c:1646  */
    { eval_unary(); }
#line 3363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 186 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 186 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 187 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 187 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 188 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 188 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 189 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 190 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 191 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 192 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 197 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 197 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 198 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 198 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 200 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 201 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 203 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 211 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 216 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 216 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 217 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 217 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 218 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 218 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 219 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 219 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 231 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 232 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 238 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 244 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 250 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 256 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 262 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 268 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 269 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 270 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 275 "bison.y" /* yacc.c:1646  */
    {process_assign();}
#line 3585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 282 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 283 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 284 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 285 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 286 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 287 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 288 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 289 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 290 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 291 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 292 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 299 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 300 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 308 "bison.y" /* yacc.c:1646  */
    { declaration_end(); }
#line 3669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 309 "bison.y" /* yacc.c:1646  */
    { declaration_end(); }
#line 3675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 314 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 321 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 323 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 325 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 327 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 329 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 330 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 336 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 340 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 340 "bison.y" /* yacc.c:1646  */
    { process_assign(); }
#line 3735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 341 "bison.y" /* yacc.c:1646  */
    { initializeID(); }
#line 3741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 342 "bison.y" /* yacc.c:1646  */
    { 
					if(yychar == IDENTIFIER || yychar == I_CONSTANT || yychar == F_CONSTANT)
						yyerrok; 

					yyclearin;  
					clearSemanticRecords(); }
#line 3752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 382 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 383 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 384 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 385 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 405 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 413 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 419 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 420 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 439 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 440 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 448 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 449 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 456 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 458 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 488 "bison.y" /* yacc.c:1646  */
    { save_id(); }
#line 3842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 506 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 507 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 508 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 512 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 513 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 514 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 515 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 525 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 526 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 540 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 546 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 560 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 567 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 568 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 608 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 609 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 610 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 618 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 619 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 625 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 636 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 637 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 642 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 656 "bison.y" /* yacc.c:1646  */
    { begin_case(); }
#line 3986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 656 "bison.y" /* yacc.c:1646  */
    { /*end_case();*/}
#line 3992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 657 "bison.y" /* yacc.c:1646  */
    { create_default(); }
#line 3998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 657 "bison.y" /* yacc.c:1646  */
    { append_exit(); }
#line 4004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 659 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 660 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 661 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 669 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 686 "bison.y" /* yacc.c:1646  */
    {  yyerrok; }
#line 4034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 692 "bison.y" /* yacc.c:1646  */
    { start_switch(); }
#line 4040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 692 "bison.y" /* yacc.c:1646  */
    { save_comparator(); }
#line 4046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 692 "bison.y" /* yacc.c:1646  */
    { end_switch(); }
#line 4052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 695 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 696 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 717 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 718 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 722 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 723 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 724 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 737 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 738 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 747 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 748 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 749 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 750 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 751 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 752 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 766 "bison.y" /* yacc.c:1646  */
    { start_function(); stackPos -= 4; }
#line 4148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 766 "bison.y" /* yacc.c:1646  */
    { inContext = TRUE; pushTable(); }
#line 4154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 766 "bison.y" /* yacc.c:1646  */
    { end_function(); unDecleared = FALSE; inContext = FALSE; popTable(); stackPos -= 4; }
#line 4160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 771 "bison.y" /* yacc.c:1646  */
    { inContext = TRUE;  start_function(); stackPos -= 4; pushTable(); }
#line 4166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 775 "bison.y" /* yacc.c:1646  */
    { end_function(); unDecleared = FALSE; inContext = FALSE;  popTable(); stackPos -= 4;}
#line 4172 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4176 "y.tab.c" /* yacc.c:1646  */
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
#line 783 "bison.y" /* yacc.c:1906  */


#include "semanticActions.c"



