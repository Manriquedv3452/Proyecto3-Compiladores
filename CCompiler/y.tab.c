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
void process_literal(int literalType);
void process_id(void);
void save_id(void);
void process_op(void);
void process_id(void);
void declaration_end(void);
void addTableContext(void);
void checkForDeclaredError(char *token, SemanticRecord* R);
void eval_binary(void);
int verifyIfCodeNeeded(DO_Data* op1, char operator, DO_Data* op2, SemanticRecord* dataType);
void getLiteralResult(DO_Data* op1, char operator, DO_Data* op2, SemanticRecord* dataType, int operand1, int operand2);
void pushNewSemanticRecordDO(int literalType, DO_Data *op, char* value);

void yyerror(const char *);
void yynote(char *noteInfo, int line, int column, int writeCode, int cursorPosi);
extern int getToken(void);
extern char* yytext;
extern int yylineno;
extern int column;
extern int previousColumn;
extern void print(void);

extern char* previousToken;
extern int cursorPos;
extern int previousTokenCode;

#define yylex getToken
#define YYERROR_VERBOSE 1

int errorFound = FALSE;
int inFunction = FALSE;
int inContext = FALSE;
int unDecleared = FALSE;


#line 117 "y.tab.c" /* yacc.c:339  */

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

#line 318 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   9125

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  85
/* YYNRULES -- Number of rules.  */
#define YYNRULES  408
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  710

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
       0,    72,    72,    73,    74,    75,    76,    77,    78,    82,
      83,    84,    88,    92,    93,    97,    98,    99,   103,   104,
     106,   110,   111,   113,   114,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   129,   130,   132,   133,   135,
     136,   138,   139,   140,   147,   148,   151,   152,   156,   157,
     158,   159,   160,   161,   162,   170,   171,   172,   173,   174,
     175,   179,   180,   187,   188,   188,   189,   189,   190,   190,
     191,   192,   193,   194,   198,   199,   199,   200,   200,   202,
     203,   205,   209,   210,   211,   212,   213,   217,   218,   219,
     220,   221,   223,   225,   230,   231,   232,   233,   234,   238,
     239,   240,   244,   245,   246,   250,   251,   252,   256,   257,
     258,   262,   263,   264,   268,   269,   270,   271,   272,   276,
     277,   279,   280,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   298,   299,   301,   302,   306,   310,
     311,   312,   314,   316,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   336,   337,   338,   342,   343,
     344,   353,   354,   355,   356,   357,   358,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   381,   382,   383,   384,   385,   386,   387,
     391,   392,   396,   397,   401,   402,   403,   407,   411,   412,
     413,   414,   415,   419,   420,   421,   422,   426,   427,   428,
     436,   437,   438,   439,   440,   441,   442,   447,   448,   450,
     451,   455,   456,   458,   460,   464,   468,   469,   470,   471,
     475,   476,   480,   481,   485,   486,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     508,   509,   510,   514,   515,   516,   517,   522,   523,   524,
     525,   527,   528,   533,   534,   539,   540,   542,   546,   547,
     548,   553,   554,   555,   559,   560,   562,   566,   567,   569,
     570,   574,   575,   576,   580,   581,   582,   583,   584,   585,
     586,   587,   588,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   606,   607,   608,   610,   611,
     612,   616,   617,   618,   619,   620,   621,   625,   627,   631,
     632,   636,   637,   638,   639,   643,   644,   648,   649,   650,
     651,   652,   653,   657,   658,   659,   661,   662,   663,   664,
     668,   669,   670,   674,   675,   679,   680,   684,   685,   687,
     691,   692,   693,   695,   696,   697,   698,   699,   700,   701,
     702,   703,   707,   708,   709,   710,   711,   712,   716,   717,
     718,   719,   721,   722,   723,   724,   725,   727,   729,   730,
     731,   733,   734,   735,   736,   737,   738,   739,   743,   744,
     745,   746,   747,   748,   749,   750,   751,   752,   753,   757,
     758,   762,   763,   767,   767,   768,   768,   781,   782
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
  "static_assert_declaration", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "$@6", "$@7", "declaration_list", YY_NULLPTR
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

#define YYPACT_NINF -447

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-447)))

#define YYTABLE_NINF -406

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    8641,  8808,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,  -447,  -447,  -447,  -447,  -447,    30,   -67,   -32,  -447,
     -13,  -447,  -447,   123,  3775,  3846,  -447,    36,  -447,  -447,
    3917,  3988,  4059,  -447,  8586,  -447,  -447,  -447,    42,    23,
    5279,  9020,  5749,   -23,  -447,    81,   406,  -447,    24,  -447,
    4130,   104,   298,  -447,  -447,  8863,  3562,  8863,  -447,  -447,
    -447,  -447,  -447,    23,  -447,   108,   186,  -447,  8090,  -447,
    -447,  -447,  -447,  -447,  7637,  7725,  7725,  -447,    19,    63,
    5369,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,   455,  -447,  7747,  -447,  1089,  1477,  1574,  2447,  2835,
      27,    35,    94,   177,  3029,  -447,   136,   729,   180,  4857,
     218,   232,   255,   258,  -447,   176,   256,  -447,  -447,  -447,
     524,   269,    81,  -447,  4201,  7483,  -447,   123,   292,  8365,
    8420,  6977,   104,  9054,  8145,  -447,   169,  -447,  8863,  8863,
    8200,   203,  7747,  5771,    23,   223,  -447,  7870,  7065,  -447,
     252,  -447,   259,  5369,  -447,  5369,  -447,  -447,  9020,  5861,
    7980,   990,  -447,  -447,   281,   197,   351,  -447,  -447,  5615,
    5883,   366,  -447,  7747,  5905,  5995,  6017,  7747,  6039,  6129,
    7747,  7747,  6151,  7747,  7747,  7747,  6173,  7747,  7747,  7747,
    6263,  6285,  6307,  6397,  6419,  7747,  6441,  6531,  -447,  -447,
    -447,  -447,  -447,  -447,  -447,   388,   392,  -447,  -447,  -447,
    -447,  -447,  -447,    72,  5503,  -447,  -447,  3216,  -447,  -447,
     292,  8475,  -447,  -447,   191,   219,   287,  -447,   299,  5459,
    -447,   324,   325,  7087,  -447,  -447,  7747,  -447,    65,  -447,
     329,  8255,  8310,  3633,  -447,    23,   260,  -447,  -447,  -447,
    -447,  -447,  -447,  -447,  -447,  -447,   333,   334,  7241,  -447,
     340,   343,  7109,   259,  8530,  7197,   246,   249,   348,   349,
     353,   346,  7747,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,  -447,  -447,  -447,  6553,  7747,  -447,  6575,   355,  7505,
    -447,   383,  -447,   302,  -447,   380,   184,  -447,  -447,  -447,
    7747,  -447,  7747,  -447,  7747,  1186,  -447,  7747,  -447,  7747,
    1671,  1768,  -447,  1865,  1962,  2059,  2156,  -447,  2253,  2350,
    2544,  2641,  -447,  2738,  -447,  2932,  -447,    27,  -447,    35,
    -447,    94,   240,  -447,   177,   384,   271,   390,   391,  -447,
      -7,  6665,   429,  -447,   215,  7483,   135,  -447,   396,  6687,
     397,    29,   394,   153,   550,   245,   314,    39,    54,   655,
    -447,  -447,    84,  -447,  -447,  -447,  -447,  3306,  -447,  -447,
    -447,  -447,  -447,  -447,  -447,  7815,  -447,   286,  -447,  -447,
    -447,  8696,  8752,   477,  -447,   488,  7593,   413,  5481,  -447,
    -447,  7747,  -447,   414,   415,  -447,   204,   248,  -447,  7747,
    -447,  3704,  -447,  -447,  -447,  -447,   416,  7241,  -447,  -447,
    7747,  -447,   422,  -447,   430,  7241,  -447,   425,   434,  7219,
     435,   435,  -447,  8918,  8952,  7461,  -447,  -447,  -447,  -447,
    -447,  -447,  -447,  5593,  -447,  -447,  7747,  -447,  6709,  -447,
    7747,  -447,  -447,  -447,  -447,  1283,  1380,  7747,  7747,  7747,
    7747,  7747,   418,   421,   438,  -447,   443,    64,  -447,  7461,
    7329,  -447,  -447,  -447,  -447,  -447,  4256,   446,   447,  4300,
    7747,  6799,  6821,  7747,  6843,   465,   467,  8641,  3396,  -447,
      74,  -447,  -447,  -447,  -447,  -447,  -447,    90,  7747,  -447,
     900,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
     451,  -447,   453,   458,   459,  -447,  -447,  -447,  -447,  -447,
    -447,  -447,   460,   463,  -447,  -447,   464,  7241,  -447,  -447,
    7747,  -447,   466,    18,   207,  -447,   457,  8035,   214,   220,
       2,   253,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,  -447,  -447,  -447,  -447,  -447,  7483,  -447,  -447,  7483,
    -447,  -447,  5077,  4390,  -447,  -447,  3126,   469,   305,   472,
     307,   310,   473,   313,   476,   319,  5167,  3486,  4913,  4944,
    -447,  -447,  7747,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,   478,   484,  -447,  7747,  6933,  -447,  8986,  7747,  -447,
    -447,  7461,  7351,  -447,   482,  -447,  7373,  -447,  -447,  -447,
    -447,  -447,  -447,  5077,  7747,  4433,  5077,  4523,  5077,  5077,
    5077,  4566,  7747,  7747,  6955,  7747,   490,  7747,  5637,  7615,
    5727,  -447,  -447,  -447,  -447,  -447,  7925,  -447,  -447,  -447,
    -447,  -447,   508,   509,   513,  -447,  -447,  -447,  -447,  -447,
     497,  -447,  -447,  -447,   339,   342,   498,   345,   370,  5077,
     395,   499,  5077,   401,  5077,   433,  5034,  5077,   436,  5077,
    5077,  4656,   480,   483,   485,  5189,    80,  5077,  -447,  5077,
    5077,  -447,  5077,  4699,  -447,  5077,  5077,  -447,  -447,  4789,
    -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   182,   161,   162,   163,   165,   166,   230,   226,
     227,   228,   176,   168,   169,   170,   171,   174,   175,   172,
     173,   167,   177,   178,   190,   191,     0,     0,   229,   231,
       0,   164,   402,     0,     0,     0,   180,     0,   181,   179,
       0,     0,     0,   141,     0,   399,   401,   154,   214,     0,
       0,     0,     0,     0,   236,     0,     0,   139,     0,   155,
       0,   235,     0,   144,   146,     0,     0,     0,   148,   150,
     152,     1,   400,     0,    12,     0,     0,   217,     0,     2,
       9,    10,    13,    14,     0,     0,     0,    11,     0,     0,
       0,    55,    56,    57,    58,    59,    60,    25,     3,     4,
       6,    48,    61,     0,    63,     0,     0,     0,     0,     0,
     102,   105,   108,   111,     0,   138,     0,     0,     0,     0,
       0,     0,     0,     0,   142,     0,   262,   229,   263,   259,
     258,   143,     0,   140,     0,     0,   407,     0,     0,     0,
       0,     0,   234,     0,     0,   192,     0,   196,     0,     0,
       0,     0,     0,     0,   216,     0,   210,     0,     0,   202,
     282,   279,   283,     0,    52,     0,    49,    50,     0,     0,
       0,     0,   119,   134,     0,     0,     0,    31,    32,     0,
       0,     0,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   233,   198,
     280,   277,   200,   232,   225,     0,     0,   250,   237,   261,
     264,   257,   156,     0,     0,   307,   158,     0,   406,   408,
       0,     0,   274,   248,   273,     0,     0,   268,     0,     0,
     238,    56,     0,     0,   186,   193,     0,   194,     0,   203,
     209,     0,     0,     0,   183,   215,     0,   212,   224,   223,
     221,   220,   219,   211,   218,   301,     0,     0,     0,   285,
      56,     0,     0,   281,     0,     0,     0,     0,     0,     0,
       0,     7,     0,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   123,     0,     8,     5,     0,     0,     0,
      30,     0,    27,     0,    44,     0,     0,    29,    73,    70,
       0,    71,     0,    72,     0,     0,    79,     0,    80,     0,
       0,     0,    85,     0,     0,     0,     0,    93,     0,     0,
       0,     0,    97,     0,   101,     0,   104,   103,   107,   106,
     110,   109,     0,   113,   112,     0,     0,     0,     0,   160,
       0,     0,     0,   312,     0,     0,     0,   319,     2,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     340,   347,     0,   345,   346,   327,   328,     0,   343,   329,
     330,   331,   332,   404,   255,     0,   271,   282,   272,   254,
     247,     0,     0,   256,   249,     0,     0,     0,     0,   239,
     246,     0,   245,    56,     0,   207,   197,     0,   195,     0,
     188,     0,   184,   213,   302,   284,     0,     0,   286,   292,
       0,   291,     0,   303,     0,     0,   293,    56,     0,     0,
      53,     0,    54,     0,     0,     0,   121,   122,   120,   137,
     136,   135,    43,     0,    62,    36,    41,    28,     0,    35,
      42,    26,    65,    67,    69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   308,     0,     0,   322,   310,
       0,   305,   311,   318,   317,   320,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   398,
       0,   396,   389,   395,   390,   393,   391,     0,   349,   348,
       0,   341,   344,   267,   270,   265,   269,   276,   275,   253,
       0,   241,     0,     0,     0,   242,   244,   206,   205,   204,
     208,   288,     0,     0,   290,   304,     0,     0,   294,   300,
       0,   299,     0,     0,     0,    18,     0,     0,     0,     0,
       0,     0,    47,    46,    45,   118,   116,   117,   115,   326,
     325,   309,   323,   324,   321,   315,     0,   306,   314,     0,
     336,   333,     0,     0,   339,   335,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     397,   388,   394,   392,   251,   252,   240,   243,   287,   289,
     296,     0,     0,   297,     0,     0,    16,     0,     0,    17,
      15,     0,     0,    37,     0,    38,     0,    33,   316,   313,
     337,   338,   334,     0,   355,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   295,   298,    24,    23,    22,     0,    19,    21,    39,
      40,    34,   358,   359,   351,   360,   361,   352,   371,   368,
     134,   370,   369,   362,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   377,     0,
       0,   366,     0,     0,   381,     0,     0,   383,   364,     0,
     353,   356,   357,   350,   372,   376,   373,   375,   374,   363,
     387,   382,   384,   386,   385,   367,   378,   379,   380,   365
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -447,  -447,  -447,  -447,  -447,  -447,   143,   -14,  -447,  -447,
     520,  -447,   -87,  -156,  -447,  -447,  -447,   161,  -447,  -447,
     261,   243,   386,   399,   382,   398,   424,  -447,   -46,    73,
    -447,   -31,   -49,   -52,    48,  -447,   456,  -447,    12,  -447,
    -447,    62,   -86,   -50,  -447,    -6,  -447,   517,  -134,  -447,
       1,  -447,  -447,    -4,   -57,   -56,  -131,  -126,  -447,   -35,
    -447,    28,  -107,  -153,   -97,  -375,  -446,  -447,   263,   -33,
     174,  -447,  -120,  -447,   244,  -341,  -447,  -447,  -447,  -447,
     580,  -447,  -447,  -447,  -447
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    97,    98,    75,    99,   100,   534,   535,   101,   303,
     171,   103,   104,   105,   310,   312,   314,   106,   317,   319,
     107,   108,   109,   110,   111,   112,   113,   114,   172,   173,
     294,   372,   116,    32,   137,    58,    59,    34,   117,    36,
      37,   144,   145,   118,   248,   249,    38,    76,    77,    39,
     119,    41,    42,   250,    61,    62,   130,   266,   236,   237,
     238,   536,   161,   162,   353,   354,   355,   356,   357,    43,
     374,   375,   376,   377,   378,   379,   380,   381,   382,    44,
      45,    46,   230,   138,   139
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     129,    40,    40,   123,   115,   142,   115,   273,   136,    50,
     243,   211,    35,    35,   235,   146,   182,   146,   228,   594,
     261,   264,   160,   556,   559,   131,    74,   272,   159,    60,
     480,   315,   147,    48,   147,    40,    40,    65,   226,    66,
     491,    40,    40,    40,    51,    40,    35,    35,    33,    47,
     267,   125,    35,    35,    35,   493,    35,   128,   245,   174,
     539,    40,   160,    52,   245,   553,   406,   209,   541,   212,
     219,   464,    35,   349,   221,   580,   124,   465,   120,   121,
     604,   698,    63,    64,    54,   498,   605,   229,    68,    69,
      70,   582,    33,   159,   146,   168,   308,   595,   146,   146,
     146,   160,   132,   258,   260,   481,   115,   115,   398,   152,
     383,   147,   201,    49,   160,   147,   147,   147,   175,    67,
     159,   261,   264,   133,    53,    73,    54,   388,   223,   150,
     202,   220,   174,   223,   174,    40,   473,   417,   492,   169,
      40,    40,   128,   407,   429,   554,    35,   579,   424,   306,
    -159,    35,    35,   494,   483,   556,   559,    55,    40,   128,
     559,   455,   297,   456,   408,   245,   245,    56,   297,    35,
     135,  -159,    54,   581,   342,   373,   346,   217,   387,   699,
     140,   210,    47,   499,   141,   450,  -222,   154,   234,   583,
     203,   276,  -222,   277,    54,   204,   278,   405,   298,    55,
     115,   146,   146,   159,   255,   234,   153,    54,   225,    56,
     251,   252,   444,   208,   242,   351,   469,   352,   147,   147,
     389,   601,    57,   452,   262,   453,    74,   454,    40,   484,
     386,   271,    40,   474,   273,   625,   626,   628,   630,    35,
     128,   457,   280,    35,   220,    55,   487,   298,   246,   518,
     298,    54,   304,   218,   601,    56,   157,  -278,   472,  -278,
     158,   262,   297,    74,   155,   451,    56,   385,   247,   128,
     156,   158,   460,   220,   299,    40,   128,    56,   267,    47,
      55,   256,   295,   246,   596,   597,    35,   257,   391,    54,
      56,   600,   597,   470,   527,   213,   390,   225,   602,   471,
     393,    54,   467,   446,   603,   115,   614,   263,   457,   214,
     478,   457,   397,   115,   620,   489,   404,   490,   297,   458,
     623,   488,   234,   430,    55,   373,   431,   246,   157,   387,
     142,   606,   158,   215,    56,   274,   216,   607,   497,   275,
     457,   416,    56,   457,   413,   422,   675,  -157,   428,   297,
     461,   320,   321,   323,   300,   436,   504,   506,   296,   297,
     520,   159,   385,   115,  -266,   392,   158,   438,   439,   307,
     441,   457,   555,   558,    55,   227,   394,   395,    40,   447,
     448,   125,   615,   297,   617,   297,    40,   618,   297,    35,
     621,   297,    40,    40,   347,   624,   457,    35,   348,   220,
     517,   519,   682,    35,    35,   399,   400,   126,   409,  -260,
     414,   415,   545,   546,   547,   548,   672,   297,   220,   673,
     297,   418,   676,   297,   419,   432,   128,   433,   225,   435,
     220,   434,   468,   234,   457,   576,   578,   457,   442,   234,
     234,   330,   331,   333,     9,    10,    11,   677,   297,   566,
     568,   570,   571,   573,   324,   325,   326,   328,   329,   608,
     445,   449,   609,   459,   176,   177,   178,   462,   463,   510,
     482,   513,   679,   297,   514,   476,   479,   127,   683,   297,
     507,   160,  -260,  -260,  -260,  -260,  -260,   159,    40,    40,
     522,   508,    56,   523,   511,   515,   516,   521,   526,    35,
      35,    40,   532,   524,   555,   558,   528,   525,   225,   558,
     685,   297,    35,   689,   297,   529,   225,   549,   443,   542,
     550,   544,   551,   439,   552,   562,   563,   574,   220,   575,
     439,   179,   584,   439,   585,   180,   598,   181,   486,   586,
     587,   588,   225,   225,   589,   590,   613,   593,    47,   616,
     619,   485,   622,   358,    80,    81,    82,    83,    84,   631,
      85,    86,     9,    10,    11,   632,   640,   659,   669,   670,
     102,   439,   102,   671,  -137,   674,   680,   538,    40,   694,
     160,    87,   695,   637,   696,   339,   159,   335,   222,    35,
     151,   654,   655,   657,   658,   127,   660,   663,   665,   668,
     591,   337,   341,   592,   164,   166,   167,   359,   360,   361,
      56,   362,   363,   364,   365,   366,   367,   368,   369,   475,
      88,   502,    89,   102,    72,    47,    90,     0,     0,   225,
     344,     0,   225,   227,     0,    91,    92,    93,    94,    95,
      96,     0,     0,     0,     0,     0,     0,     0,     0,   371,
     561,     0,     0,   565,     0,   439,   495,     0,    79,    80,
      81,    82,    83,    84,     0,    85,    86,   633,   635,     0,
       0,   638,   102,   102,   225,   225,     0,     0,     0,   225,
       0,     0,     0,     0,     0,     0,    87,   439,     0,     0,
       0,     0,     0,   650,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,     0,   102,     0,     0,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,    88,   102,    89,     0,     0,
     143,    90,  -199,     0,     0,     0,   610,   612,     0,     0,
      91,    92,    93,    94,    95,    96,     0,     0,   439,     0,
       0,     0,     0,     0,   496,   650,     0,     0,     0,     2,
       0,     0,     0,     0,     0,     0,   102,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,   642,     0,   644,
     645,   647,   648,   649,   651,   653,     0,     0,     0,     0,
      28,     0,     0,     0,     0,  -199,  -199,     0,  -199,  -199,
       0,     0,     0,     0,     0,  -199,     0,     0,     0,   102,
       0,     0,     0,     0,     0,     0,     0,     0,  -199,     0,
     102,     0,   102,   678,   102,     0,   681,   102,   684,   102,
     687,   688,     0,   690,   691,   693,     0,     0,     0,     0,
       0,   700,     0,   701,   702,     0,   703,   705,     0,   706,
     707,     0,     0,   709,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,     0,     0,     0,     0,     0,   102,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -342,     1,     0,  -342,  -342,  -342,  -342,  -342,  -342,     0,
    -342,  -342,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
       2,  -342,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,  -342,  -342,  -342,
    -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,    27,
    -342,    28,  -342,    29,  -342,    31,  -342,     0,   102,   102,
       0,   102,     0,  -342,  -342,  -342,  -342,  -342,  -342,  -342,
    -342,   282,     0,   -61,   -61,   -61,   -61,   -61,   -61,  -342,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,     0,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
       0,   -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   293,   -61,
     183,     0,   -74,   -74,   -74,   -74,   -74,   -74,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
     -74,     0,   -74,   -74,   -74,   184,   -74,   -74,   -74,   -74,
     185,   186,   -74,   -74,   -74,   -74,   -74,   183,   -74,   -81,
     -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,     0,   -81,
     -81,   -81,   184,   -81,   -81,   -81,   -81,   185,   186,   -81,
     -81,   -81,   -81,   -81,   183,   -81,   -76,   -76,   -76,   -76,
     -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,   -76,     0,   -76,   -76,   -76,   184,
     -76,   -76,   -76,   -76,   185,   186,   -76,   -76,   -76,   -76,
     -76,   183,   -76,   -78,   -78,   -78,   -78,   -78,   -78,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,   -78,     0,   -78,   -78,   -78,   184,   -78,   -78,   -78,
     -78,   185,   186,   -78,   -78,   -78,   -78,   -78,   187,   -78,
     -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,     0,
     -82,   -82,   -82,   -82,   188,   189,   -82,   -82,     0,     0,
     -82,   -82,   -82,   -82,   -82,   190,   -82,   -87,   -87,   -87,
     -87,   -87,   -87,     0,   -87,   -87,   191,   192,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,   -87,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,     0,     0,   -87,   -87,   -87,
     -87,   -87,   187,   -87,   -86,   -86,   -86,   -86,   -86,   -86,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,   -86,     0,   -86,   -86,   -86,   -86,   188,   189,
     -86,   -86,     0,     0,   -86,   -86,   -86,   -86,   -86,   187,
     -86,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,
       0,   -83,   -83,   -83,   -83,   188,   189,   -83,   -83,     0,
       0,   -83,   -83,   -83,   -83,   -83,   187,   -83,   -84,   -84,
     -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,   -84,     0,   -84,   -84,
     -84,   -84,   188,   189,   -84,   -84,     0,     0,   -84,   -84,
     -84,   -84,   -84,   190,   -84,   -92,   -92,   -92,   -92,   -92,
     -92,     0,   -92,   -92,   191,   192,   -92,   -92,   -92,   -92,
     -92,   -92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,     0,   -92,     0,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,     0,     0,   -92,   -92,   -92,   -92,   -92,
     190,   -92,   -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,
     -90,   191,   192,   -90,   -90,   -90,   -90,   -90,   -90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,
     -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
       0,     0,   -90,   -90,   -90,   -90,   -90,   190,   -90,   -91,
     -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,   191,   192,
     -91,   -91,   -91,   -91,   -91,   -91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,     0,   -91,     0,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,   -91,
     -91,   -91,   -91,   -91,   190,   -91,   -88,   -88,   -88,   -88,
     -88,   -88,     0,   -88,   -88,   191,   192,   -88,   -88,   -88,
     -88,   -88,   -88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,     0,   -88,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,     0,     0,   -88,   -88,   -88,   -88,
     -88,   190,   -88,   -89,   -89,   -89,   -89,   -89,   -89,     0,
     -89,   -89,   191,   192,   -89,   -89,   -89,   -89,   -89,   -89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
       0,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,     0,     0,   -89,   -89,   -89,   -89,   -89,   193,   -89,
     -94,   -94,   -94,   -94,   -94,   -94,     0,   -94,   -94,     0,
       0,   194,   195,   -94,   -94,   -94,   -94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,     0,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,   -94,     0,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,
     196,   197,   -94,   -94,   -94,   193,   -94,   -98,   -98,   -98,
     -98,   -98,   -98,     0,   -98,   -98,     0,     0,   194,   195,
     -98,   -98,   -98,   -98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
       0,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,     0,   -98,     0,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,     0,     0,   196,   197,   -98,
     -98,   -98,   193,   -98,   -95,   -95,   -95,   -95,   -95,   -95,
       0,   -95,   -95,     0,     0,   194,   195,   -95,   -95,   -95,
     -95,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,     0,   -95,     0,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,     0,     0,   196,   197,   -95,   -95,   -95,   193,
     -95,   -96,   -96,   -96,   -96,   -96,   -96,     0,   -96,   -96,
       0,     0,   194,   195,   -96,   -96,   -96,   -96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,     0,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,     0,   -96,
       0,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,     0,
       0,   196,   197,   -96,   -96,   -96,   198,   -96,   -99,   -99,
     -99,   -99,   -99,   -99,     0,   -99,   -99,     0,     0,     0,
       0,   199,   200,   -99,   -99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,     0,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,     0,   -99,     0,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,     0,     0,     0,     0,
     -99,   -99,   -99,   198,   -99,  -100,  -100,  -100,  -100,  -100,
    -100,     0,  -100,  -100,     0,     0,     0,     0,   199,   200,
    -100,  -100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,     0,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,     0,  -100,     0,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,     0,     0,     0,     0,  -100,  -100,  -100,
     205,  -100,  -114,  -114,  -114,  -114,  -114,  -114,     0,  -114,
    -114,     0,     0,     0,     0,     0,     0,     0,   206,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,     0,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,     0,
    -114,     0,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
       0,     0,     0,     0,     0,     0,   207,   457,  -114,  -354,
    -354,  -354,  -354,  -354,  -354,     0,  -354,  -354,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -354,  -354,  -354,  -354,
    -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,
    -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,
    -354,  -354,     0,  -354,  -354,  -354,  -354,  -354,  -354,  -354,
    -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,
    -354,  -354,  -354,     0,   297,     0,     0,     0,     0,  -354,
    -354,  -354,  -354,  -354,  -354,  -354,  -354,     1,     0,   358,
      80,    81,    82,    83,    84,  -354,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,    87,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,   359,   360,   361,     0,   362,   363,   364,
     365,   366,   367,   368,   369,    27,    88,    28,    89,    29,
      30,    31,    90,     0,     0,     0,     0,     0,     0,   227,
     370,    91,    92,    93,    94,    95,    96,   500,     0,   358,
      80,    81,    82,    83,    84,   371,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,    87,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,   359,   360,   361,     0,   362,   363,   364,
     365,   366,   367,   368,   369,    27,    88,    28,    89,    29,
      30,    31,    90,     0,     0,     0,     0,     0,     0,   227,
     501,    91,    92,    93,    94,    95,    96,   577,     0,    79,
      80,    81,    82,    83,    84,   371,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,    87,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    88,    28,    89,    29,
      30,    31,    90,     0,     0,     0,     0,     0,     0,     0,
       0,    91,    92,    93,    94,    95,    96,     1,     0,    79,
      80,    81,    82,    83,    84,   371,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,    87,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    88,    28,    89,    29,
       0,    31,    90,   148,     0,  -185,     0,     0,     0,     0,
       0,    91,    92,    93,    94,    95,    96,     0,     0,     0,
       0,     0,     0,     0,     0,   371,     0,     0,     0,     0,
       0,     0,  -185,     0,  -185,  -185,  -185,  -185,  -185,  -185,
    -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,
    -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -185,     0,  -185,   143,  -185,  -189,  -185,  -185,  -185,
    -185,  -185,  -185,     0,     0,   149,     0,     0,  -185,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -185,     0,     2,     0,  -189,  -189,  -189,  -189,  -189,
    -189,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -189,     0,    28,   143,  -189,  -187,  -189,  -189,
    -189,  -189,  -189,  -189,     0,     0,     0,     0,     0,  -189,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -189,     0,     2,     0,  -187,  -187,  -187,  -187,
    -187,  -187,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -187,     0,    28,     1,  -187,  -145,  -187,
    -187,  -187,  -187,  -187,  -187,     0,     0,     0,     0,     0,
    -187,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -187,     0,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,     1,    29,  -147,
      31,  -145,  -145,  -145,     0,  -145,     0,     0,     0,     0,
       0,  -145,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -145,     0,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     1,    29,
    -149,    31,  -147,  -147,  -147,     0,  -147,     0,     0,     0,
       0,     0,  -147,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -147,     0,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     1,
      29,  -151,    31,  -149,  -149,  -149,     0,  -149,     0,     0,
       0,     0,     0,  -149,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -149,     0,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       1,    29,  -153,    31,  -151,  -151,  -151,     0,  -151,     0,
       0,     0,     0,     0,  -151,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -151,     0,     2,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,   134,    29,     0,    31,  -153,  -153,  -153,     0,  -153,
       0,     0,     0,     0,     0,  -153,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -153,     0,
       2,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    28,     1,    29,    30,    31,     0,     0,  -159,     0,
       0,     0,     0,  -405,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   135,  -159,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   560,     0,   358,
      80,    81,    82,    83,    84,     0,    85,    86,     0,     0,
      27,     0,    28,     0,    29,     0,    31,     0,     0,  -160,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -160,   564,     0,   358,    80,    81,    82,    83,    84,     0,
      85,    86,     0,   359,   360,   361,     0,   362,   363,   364,
     365,   366,   367,   368,   369,     0,    88,     0,    89,     0,
       0,    87,    90,     0,     0,     0,     0,     0,     0,   227,
       0,    91,    92,    93,    94,    95,    96,     0,     0,     0,
       0,     0,     0,     0,     0,   371,     0,   359,   360,   361,
       0,   362,   363,   364,   365,   366,   367,   368,   369,     0,
      88,     0,    89,     0,     0,     0,    90,     0,     0,     0,
       0,     0,     0,   227,     0,    91,    92,    93,    94,    95,
      96,   611,     0,   358,    80,    81,    82,    83,    84,   371,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   643,     0,   358,    80,    81,    82,
      83,    84,     0,    85,    86,     0,     0,   359,   360,   361,
       0,   362,   363,   364,   365,   366,   367,   368,   369,     0,
      88,     0,    89,     0,    87,     0,    90,     0,     0,     0,
       0,     0,     0,   227,     0,    91,    92,    93,    94,    95,
      96,     0,     0,     0,     0,     0,     0,     0,     0,   371,
     359,   360,   361,     0,   362,   363,   364,   365,   366,   367,
     368,   369,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,   227,     0,    91,    92,
      93,    94,    95,    96,   646,     0,   358,    80,    81,    82,
      83,    84,   371,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   652,     0,   358,
      80,    81,    82,    83,    84,     0,    85,    86,     0,     0,
     359,   360,   361,     0,   362,   363,   364,   365,   366,   367,
     368,   369,     0,    88,     0,    89,     0,    87,     0,    90,
       0,     0,     0,     0,     0,     0,   227,     0,    91,    92,
      93,    94,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,   371,   359,   360,   361,     0,   362,   363,   364,
     365,   366,   367,   368,   369,     0,    88,     0,    89,     0,
       0,     0,    90,     0,     0,     0,     0,     0,     0,   227,
       0,    91,    92,    93,    94,    95,    96,   692,     0,   358,
      80,    81,    82,    83,    84,   371,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     704,     0,   358,    80,    81,    82,    83,    84,     0,    85,
      86,     0,     0,   359,   360,   361,     0,   362,   363,   364,
     365,   366,   367,   368,   369,     0,    88,     0,    89,     0,
      87,     0,    90,     0,     0,     0,     0,     0,     0,   227,
       0,    91,    92,    93,    94,    95,    96,     0,     0,     0,
       0,     0,     0,     0,     0,   371,   359,   360,   361,     0,
     362,   363,   364,   365,   366,   367,   368,   369,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,   227,     0,    91,    92,    93,    94,    95,    96,
     708,     0,   358,    80,    81,    82,    83,    84,   371,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   359,   360,   361,     0,
     362,   363,   364,   365,   366,   367,   368,   369,   143,    88,
    -201,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,   227,     0,    91,    92,    93,    94,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     2,   371,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,   627,     0,    79,    80,    81,    82,
      83,    84,     0,    85,    86,     0,     0,     0,    28,     0,
       0,     0,     0,  -201,  -201,     0,  -201,  -201,     0,     0,
       0,     0,     0,  -201,    87,   629,     0,    79,    80,    81,
      82,    83,    84,     0,    85,    86,  -201,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,   371,     0,    88,     0,    89,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,    96,     0,     0,   358,    80,    81,
      82,    83,    84,   371,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     358,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,   359,   360,   361,     0,   362,   363,   364,   365,   366,
     367,   368,   369,     0,    88,     0,    89,     0,    87,     0,
      90,   686,     0,     0,     0,     0,     0,   227,     0,    91,
      92,    93,    94,    95,    96,     0,     0,     0,     0,     0,
       0,     0,     0,   371,   359,   360,   361,     0,   362,   363,
     364,   365,   366,   367,   368,   369,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
     227,     0,    91,    92,    93,    94,    95,    96,     0,     0,
      79,    80,    81,    82,    83,    84,   371,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,    90,   371,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
      78,     0,    79,    80,    81,    82,    83,    84,   697,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
      87,     0,     0,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      28,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
     170,     0,    79,    80,    81,    82,    83,    84,     0,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
      87,     0,     0,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      28,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
     396,     0,    79,    80,    81,    82,    83,    84,     0,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   512,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     9,    10,    11,
       0,     0,     0,     0,   350,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,    88,
     127,    89,     0,     0,    87,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,   127,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,   351,     0,   352,   224,     0,    91,    92,
      93,    94,    95,    96,   540,     0,    79,    80,    81,    82,
      83,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   301,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   661,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,    89,     0,     0,    87,    90,
       0,     0,     0,   351,     0,   352,   224,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,   302,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,    88,     0,    89,
       0,     0,     0,    90,   662,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,   666,     0,
      79,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,    89,
       0,     0,    87,    90,   667,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,   279,     0,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   305,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   309,     0,   -64,   -64,
     -64,   -64,   -64,   -64,    87,   -64,   -64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,    89,     0,     0,   -64,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,   -64,     0,   -64,     0,     0,
       0,   -64,     0,     0,     0,     0,     0,     0,     0,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   311,     0,   -66,   -66,
     -66,   -66,   -66,   -66,     0,   -66,   -66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   313,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -66,   -68,   -68,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     316,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -68,   -75,
     -75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -66,     0,   -66,     0,     0,
     -75,   -66,     0,     0,     0,     0,     0,     0,     0,     0,
     -66,   -66,   -66,   -66,   -66,   -66,     0,   -68,     0,   -68,
       0,     0,     0,   -68,     0,     0,     0,     0,     0,     0,
       0,     0,   -68,   -68,   -68,   -68,   -68,   -68,     0,   -75,
       0,   -75,     0,     0,     0,   -75,     0,     0,     0,     0,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     318,     0,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,
     -77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   322,     0,    79,    80,    81,    82,    83,    84,
     -77,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   327,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -77,
       0,   -77,     0,     0,    87,   -77,     0,     0,     0,     0,
       0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,   332,     0,    79,    80,    81,    82,
      83,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   334,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   336,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,    89,     0,     0,    87,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,   338,     0,
      79,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     340,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   343,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,    89,
       0,     0,    87,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,   345,     0,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   437,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   440,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,    89,     0,     0,    87,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,   466,     0,    79,    80,
      81,    82,    83,    84,     0,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   477,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     543,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,     0,    89,     0,     0,
      87,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
     567,     0,    79,    80,    81,    82,    83,    84,     0,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   569,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   572,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
       0,    89,     0,     0,    87,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,   634,     0,    79,    80,    81,    82,
      83,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   656,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,    89,     0,     0,    87,    90,
       0,   239,     0,     0,     0,     9,    10,    11,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,    88,   127,    89,
       0,     0,     0,    90,     0,     0,     0,     0,   240,     0,
       0,     0,    91,   241,    93,    94,    95,    96,    79,    80,
      81,    82,    83,    84,     0,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,   268,
       0,     0,     0,     9,    10,    11,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,   401,     0,     0,     0,     9,    10,    11,     0,     0,
       0,     0,     0,     0,     0,    88,   127,    89,     0,     0,
      87,    90,     0,   420,     0,     0,   269,     9,    10,    11,
      91,   270,    93,    94,    95,    96,     0,    88,   127,    89,
       0,     0,     0,    90,     0,     0,     0,     0,   402,     0,
       0,     0,    91,   403,    93,    94,    95,    96,     0,    88,
     127,    89,     0,     0,     0,    90,     0,     0,     0,     0,
     421,     0,     0,     0,    91,    92,    93,    94,    95,    96,
      79,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,   425,     0,     0,     0,     9,    10,    11,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,   530,     0,     0,     0,     9,    10,    11,
       0,     0,     0,     0,     0,     0,     0,    88,   127,    89,
       0,     0,    87,    90,     0,     0,     0,     0,   426,     9,
      10,    11,    91,   427,    93,    94,    95,    96,     0,    88,
     127,    89,     0,     0,     0,    90,     0,     0,     0,     0,
     531,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,   127,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,    79,    80,    81,    82,    83,    84,     0,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
       0,    89,     0,     0,    87,    90,     0,     0,     0,   351,
       0,   352,   224,   557,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,   351,     0,   352,   224,   639,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,   351,     0,   352,   224,   641,    91,    92,
      93,    94,    95,    96,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,    89,     0,     0,    87,    90,     0,     0,
       0,   351,     0,   352,   224,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,   224,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,   443,     0,
      91,    92,    93,    94,    95,    96,    79,    80,    81,    82,
      83,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,    89,     0,     0,    87,    90,
       0,     0,     0,     0,   509,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,   664,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,    88,     0,    89,
       0,     0,     0,   163,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,    79,    80,
      81,    82,    83,    84,     0,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,     0,    89,     0,     0,
       0,   165,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     1,    88,    54,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,     0,    29,     0,
      31,   385,   265,     0,     0,   158,     0,     0,     0,     0,
       2,    56,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   143,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    28,     0,    29,     0,    31,   157,   265,     0,     0,
     158,     0,     0,     0,     0,     2,    56,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,   157,   -20,   -20,     0,   158,     0,     0,     0,     0,
       2,    56,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   143,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,     0,   157,   281,     0,     0,
     158,     0,     0,     0,     0,     2,    56,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,   157,   599,     0,     0,   158,     0,     0,     0,     0,
       2,    56,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   143,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,     0,   157,     0,     0,     0,
     158,     0,     0,     0,     0,     2,    56,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   253,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   244,
       2,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   143,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   254,     2,     0,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   411,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   410,
       2,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   412,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   231,     0,   232,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,     0,    29,    30,
      31,     0,     0,     0,     0,     0,     0,     0,  -403,     0,
       2,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    28,     0,    29,     0,    31,     0,   233,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,     0,    29,     0,
      31,     0,   384,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    71,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    28,     0,    29,     0,    31,     0,   423,     0,     0,
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
      25,    26,   503,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
       0,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   505,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,     0,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       0,     0,     0,   537,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,   533,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,   636,     0,    28,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
     533,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       0,    78,     0,    28,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,   533,     0,     0,     0,     0,     0,
       2,     0,     0,     0,     0,   143,     0,    28,     9,    10,
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
      56,     0,     1,    52,    50,    62,    52,   160,    60,    76,
     141,   118,     0,     1,   140,    65,   103,    67,   138,     1,
     154,   155,    78,   469,   470,     1,     3,   158,    78,    33,
       1,   187,    65,     3,    67,    34,    35,     1,   135,     3,
       1,    40,    41,    42,    76,    44,    34,    35,     0,     1,
     157,    55,    40,    41,    42,     1,    44,    56,   144,    90,
     435,    60,   118,    76,   150,     1,     1,   117,   443,   119,
     126,    78,    60,     1,   130,     1,    99,    84,    50,    51,
      78,     1,    34,    35,     3,     1,    84,   139,    40,    41,
      42,     1,    44,   143,   144,    76,   183,    79,   148,   149,
     150,   157,    78,   152,   153,    76,   152,   153,   239,     1,
     230,   144,    85,    83,   170,   148,   149,   150,    90,    83,
     170,   255,   256,    99,     1,    83,     3,   234,   132,    67,
      95,   130,   163,   137,   165,   134,     1,   268,    99,    76,
     139,   140,   141,    78,   275,    81,   134,   488,   274,   180,
      78,   139,   140,    99,     1,   601,   602,    76,   157,   158,
     606,   317,    78,   319,    99,   251,   252,    86,    78,   157,
      98,    99,     3,    99,   205,   227,   207,     1,   234,    99,
      76,     1,   134,    99,    80,     1,    78,     1,   140,    99,
      96,   163,    84,   165,     3,    18,   168,   246,     1,    76,
     246,   251,   252,   253,     1,   157,    98,     3,   135,    86,
     148,   149,   299,    77,   141,    80,     1,    82,   251,   252,
       1,     1,    99,   310,     1,   312,     3,   314,   227,    76,
     234,   158,   231,    98,   387,   576,   577,   578,   579,   227,
     239,     1,   169,   231,   243,    76,     1,     1,    79,     1,
       1,     3,   179,    77,     1,    86,    76,    77,   355,    79,
      80,     1,    78,     3,    78,    81,    86,    76,    99,   268,
      84,    80,     1,   272,    77,   274,   275,    86,   385,   231,
      76,    78,     1,    79,    77,    78,   274,    84,     1,     3,
      86,    77,    78,    78,   425,    77,    77,   224,    78,    84,
       1,     3,   351,     1,    84,   351,     1,    84,     1,    77,
     359,     1,   239,   359,     1,     1,   243,     3,    78,    79,
       1,    76,   274,    77,    76,   377,    77,    79,    76,   385,
     387,    78,    80,    78,    86,    76,    78,    84,   369,    80,
       1,   268,    86,     1,    84,   272,     1,    78,   275,    78,
      79,   190,   191,   192,     3,   282,   391,   392,    77,    78,
     409,   411,    76,   409,    77,    78,    80,   294,   295,     3,
     297,     1,   469,   470,    76,    83,    77,    78,   377,    77,
      78,   385,    77,    78,    77,    78,   385,    77,    78,   377,
      77,    78,   391,   392,     6,    76,     1,   385,     6,   398,
     406,   407,     1,   391,   392,    81,    81,     1,    79,     3,
      77,    77,   458,   459,   460,   461,    77,    78,   417,    77,
      78,    81,    77,    78,    81,    77,   425,    78,   355,    83,
     429,    78,     3,   385,     1,   487,   488,     1,    83,   391,
     392,   198,   199,   200,    38,    39,    40,    77,    78,   480,
     481,   482,   483,   484,   193,   194,   195,   196,   197,   556,
      77,    81,   559,    79,     9,    10,    11,    77,    77,   396,
      76,   398,    77,    78,   401,    79,    79,    71,    77,    78,
       3,   537,    76,    77,    78,    79,    80,   537,   487,   488,
     417,     3,    86,   420,    81,    81,    81,    81,   425,   487,
     488,   500,   429,    81,   601,   602,    81,    77,   435,   606,
      77,    78,   500,    77,    78,    81,   443,    99,    83,   446,
      99,   448,    84,   450,    81,    79,    79,    62,   527,    62,
     457,    76,    81,   460,    81,    80,    79,    82,   364,    81,
      81,    81,   469,   470,    81,    81,    77,    81,   500,    77,
      77,     1,    76,     3,     4,     5,     6,     7,     8,    81,
      10,    11,    38,    39,    40,    81,    84,    77,    60,    60,
      50,   498,    52,    60,    77,    77,    77,   434,   577,    99,
     636,    31,    99,   597,    99,   203,   636,   201,   132,   577,
      73,   622,   623,   624,   625,    71,   627,   628,   629,   630,
     527,   202,   204,   530,    84,    85,    86,    57,    58,    59,
      86,    61,    62,    63,    64,    65,    66,    67,    68,   356,
      70,   377,    72,   103,    44,   577,    76,    -1,    -1,   556,
     206,    -1,   559,    83,    -1,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
     476,    -1,    -1,   479,    -1,   582,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,   594,   595,    -1,
      -1,   598,   152,   153,   601,   602,    -1,    -1,    -1,   606,
      -1,    -1,    -1,    -1,    -1,    -1,    31,   614,    -1,    -1,
      -1,    -1,    -1,   620,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,    -1,    -1,   187,    -1,    -1,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,    70,   206,    72,    -1,    -1,
       1,    76,     3,    -1,    -1,    -1,   562,   563,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    -1,   675,    -1,
      -1,    -1,    -1,    -1,    99,   682,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,   246,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,   613,    -1,   615,
     616,   617,   618,   619,   620,   621,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    76,    77,    -1,    79,    80,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,   299,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
     310,    -1,   312,   659,   314,    -1,   662,   317,   664,   319,
     666,   667,    -1,   669,   670,   671,    -1,    -1,    -1,    -1,
      -1,   677,    -1,   679,   680,    -1,   682,   683,    -1,   685,
     686,    -1,    -1,   689,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   359,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       0,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   409,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,   458,   459,
      -1,   461,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,     1,    -1,     3,     4,     5,     6,     7,     8,    99,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    81,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
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
      90,    91,    92,    93,    94,    95,    96,    97,     1,    99,
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
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
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
      -1,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    -1,    81,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    93,    94,    95,    96,    97,     1,    99,     3,     4,
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
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    97,     1,    99,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    78,    -1,    -1,    -1,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,     1,    -1,     3,
       4,     5,     6,     7,     8,    99,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,     1,    -1,     3,
       4,     5,     6,     7,     8,    99,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,     1,    -1,     3,
       4,     5,     6,     7,     8,    99,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,     1,    -1,     3,
       4,     5,     6,     7,     8,    99,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    75,    76,     1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,     1,    73,     3,    75,    76,    77,
      78,    79,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,     1,    73,     3,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,     1,    73,     3,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,     1,    73,     3,
      75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,     1,    73,
       3,    75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,     1,
      73,     3,    75,    76,    77,    78,    -1,    80,    -1,    -1,
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
      71,     1,    73,    -1,    75,    76,    77,    78,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,     1,    73,    74,    75,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    -1,    72,    -1,
      -1,    31,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,    89,
      90,     1,    -1,     3,     4,     5,     6,     7,     8,    99,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    -1,    72,    -1,    31,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    89,    90,     1,    -1,     3,     4,     5,     6,
       7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    -1,    72,    -1,    31,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    89,    90,     1,    -1,     3,
       4,     5,     6,     7,     8,    99,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    -1,    72,    -1,
      31,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    89,    90,
       1,    -1,     3,     4,     5,     6,     7,     8,    99,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    86,    31,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
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
      -1,    -1,    -1,    80,    -1,    82,    83,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    31,    76,    77,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    31,    76,
      -1,    34,    -1,    -1,    -1,    38,    39,    40,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      11,    34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    31,    76,    -1,    -1,    -1,    -1,    81,    38,
      39,    40,    85,    86,    87,    88,    89,    90,    -1,    70,
      71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,    80,
      -1,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    80,    -1,    82,    83,    84,    85,    86,    87,    88,
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
      -1,    80,    -1,    82,    83,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    89,    90,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    31,    76,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
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
      74,    75,   133,   134,   137,   138,   139,   140,   146,   149,
     150,   151,   152,   169,   179,   180,   181,   134,     3,    83,
      76,    76,    76,     1,     3,    76,    86,    99,   135,   136,
     153,   154,   155,   134,   134,     1,     3,    83,   134,   134,
     134,     0,   180,    83,     3,   103,   147,   148,     1,     3,
       4,     5,     6,     7,     8,    10,    11,    31,    70,    72,
      76,    85,    86,    87,    88,    89,    90,   101,   102,   104,
     105,   108,   110,   111,   112,   113,   117,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   132,   138,   143,   150,
     161,   161,     1,   132,    99,   153,     1,    71,   150,   155,
     156,     1,    78,    99,     1,    98,   133,   134,   183,   184,
      76,    80,   154,     1,   141,   142,   143,   169,     1,    83,
     141,   147,     1,    98,     1,    78,    84,    76,    80,   143,
     155,   162,   163,    76,   110,    76,   110,   110,    76,    76,
       1,   110,   128,   129,   131,   161,     9,    10,    11,    76,
      80,    82,   112,     1,    86,    91,    92,     1,    87,    88,
       1,    12,    13,     1,    14,    15,    93,    94,     1,    16,
      17,    85,    95,    96,    18,     1,    19,    97,    77,   143,
       1,   162,   143,    77,    77,    78,    78,     1,    77,   155,
     150,   155,   136,   153,    83,   129,   164,    83,   172,   133,
     182,     1,     3,    77,   134,   157,   158,   159,   160,    34,
      81,    86,   129,   156,    84,   142,    79,    99,   144,   145,
     153,   141,   141,     1,    84,     1,    78,    84,   132,     1,
     132,   148,     1,    84,   148,    77,   157,   162,    34,    81,
      86,   129,   156,   163,    76,    80,   161,   161,   161,     1,
     129,    77,     1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    98,   130,     1,    77,    78,     1,    77,
       3,     1,    77,   109,   129,     1,   131,     3,   112,     1,
     114,     1,   115,     1,   116,   113,     1,   118,     1,   119,
     117,   117,     1,   117,   120,   120,   120,     1,   120,   120,
     121,   121,     1,   121,     1,   122,     1,   123,     1,   124,
       1,   125,   131,     1,   126,     1,   131,     6,     6,     1,
       1,    80,    82,   164,   165,   166,   167,   168,     3,    57,
      58,    59,    61,    62,    63,    64,    65,    66,    67,    68,
      84,    99,   131,   133,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   172,    77,    76,   153,   155,   162,     1,
      77,     1,    78,     1,    77,    78,     1,   129,   156,    81,
      81,    34,    81,    86,   129,   132,     1,    78,    99,    79,
      84,     1,    84,    84,    77,    77,   129,   156,    81,    81,
      34,    81,   129,    77,   157,    34,    81,    86,   129,   156,
      77,    77,    77,    78,    78,    83,   129,     1,   129,   129,
       1,   129,    83,    83,   112,    77,     1,    77,    78,    81,
       1,    81,   112,   112,   112,   113,   113,     1,    79,    79,
       1,    79,    77,    77,    78,    84,     1,   132,     3,     1,
      78,    84,   164,     1,    98,   168,    79,     1,   132,    79,
       1,    76,    76,     1,    76,     1,   170,     1,    76,     1,
       3,     1,    99,     1,    99,     1,    99,   131,     1,    99,
       1,    84,   174,    56,   159,    56,   159,     3,     3,    81,
     129,    81,     1,   129,   129,    81,    81,   145,     1,   145,
     132,    81,   129,   129,    81,    77,   129,   156,    81,    81,
      34,    81,   129,    58,   106,   107,   161,     1,   106,   165,
       1,   165,   129,     1,   129,   128,   128,   128,   128,    99,
      99,    84,    81,     1,    81,   164,   166,    84,   164,   166,
       1,   170,    79,    79,     1,   170,   131,     1,   131,     1,
     131,   131,     1,   131,    62,    62,   133,     1,   133,   175,
       1,    99,     1,    99,    81,    81,    81,    81,    81,    81,
      81,   129,   129,    81,     1,    79,    77,    78,    79,    77,
      77,     1,    78,    84,    78,    84,    78,    84,   164,   164,
     170,     1,   170,    77,     1,    77,    77,    77,    77,    77,
       1,    77,    76,     1,    76,   175,   175,     1,   175,     1,
     175,    81,    81,   129,     1,   129,     1,   107,   129,    84,
      84,    84,   170,     1,   170,   170,     1,   170,   170,   170,
     129,   170,     1,   170,   131,   131,     1,   131,   131,    77,
     131,     1,    77,   131,    77,   131,     1,    77,   131,    60,
      60,    60,    77,    77,    77,     1,    77,    77,   170,    77,
      77,   170,     1,    77,   170,    77,    77,   170,   170,    77,
     170,   170,     1,   170,    99,    99,    99,    99,     1,    99,
     170,   170,   170,   170,     1,   170,   170,   170,     1,   170
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
     111,   112,   112,   113,   114,   113,   115,   113,   116,   113,
     113,   113,   113,   113,   117,   118,   117,   119,   117,   117,
     117,   117,   120,   120,   120,   120,   120,   121,   121,   121,
     121,   121,   121,   121,   122,   122,   122,   122,   122,   123,
     123,   123,   124,   124,   124,   125,   125,   125,   126,   126,
     126,   127,   127,   127,   128,   128,   128,   128,   128,   129,
     129,   129,   129,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   131,   131,   131,   131,   132,   133,
     133,   133,   133,   133,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   135,   135,   135,   136,   136,
     136,   137,   137,   137,   137,   137,   137,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   139,   139,   139,   139,   139,   139,   139,
     140,   140,   141,   141,   142,   142,   142,   142,   143,   143,
     143,   143,   143,   144,   144,   144,   144,   145,   145,   145,
     146,   146,   146,   146,   146,   146,   146,   147,   147,   147,
     147,   148,   148,   148,   148,   149,   150,   150,   150,   150,
     151,   151,   152,   152,   153,   153,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   155,   155,   155,
     155,   155,   155,   156,   156,   157,   157,   157,   158,   158,
     158,   159,   159,   159,   160,   160,   160,   161,   161,   161,
     161,   162,   162,   162,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   164,   164,   164,   164,   164,
     164,   165,   165,   165,   165,   165,   165,   166,   166,   167,
     167,   168,   168,   168,   168,   169,   169,   170,   170,   170,
     170,   170,   170,   171,   171,   171,   171,   171,   171,   171,
     172,   172,   172,   173,   173,   174,   174,   175,   175,   175,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   179,
     179,   180,   180,   182,   181,   183,   181,   184,   184
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
       1,     1,     4,     1,     0,     4,     0,     4,     0,     4,
       3,     3,     3,     3,     1,     0,     4,     0,     4,     3,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     5,     5,     5,     5,     1,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     1,     2,
       3,     1,     3,     3,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     3,     2,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     5,     2,     4,     5,     5,     4,
       1,     1,     1,     2,     2,     3,     1,     3,     2,     1,
       2,     1,     2,     1,     3,     3,     3,     2,     3,     1,
       4,     5,     5,     6,     2,     5,     4,     1,     3,     3,
       3,     3,     1,     3,     3,     4,     1,     1,     1,     1,
       1,     1,     4,     4,     2,     1,     1,     3,     3,     4,
       6,     5,     5,     6,     5,     4,     4,     4,     3,     4,
       3,     6,     6,     5,     4,     4,     4,     3,     2,     2,
       1,     3,     2,     1,     2,     3,     1,     3,     1,     3,
       3,     2,     2,     1,     1,     3,     3,     2,     1,     2,
       2,     2,     1,     1,     3,     2,     3,     5,     4,     5,
       4,     3,     3,     3,     4,     6,     5,     5,     6,     4,
       4,     2,     3,     3,     4,     3,     4,     1,     3,     4,
       3,     2,     1,     4,     3,     3,     4,     2,     2,     1,
       2,     3,     2,     3,     3,     7,     7,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     3,     4,     4,     3,
       2,     3,     3,     1,     2,     1,     1,     1,     2,     2,
       7,     5,     5,     7,     3,     4,     7,     7,     5,     5,
       5,     5,     5,     7,     6,     7,     6,     7,     5,     5,
       5,     5,     7,     7,     7,     7,     7,     6,     7,     7,
       7,     6,     7,     6,     7,     7,     7,     7,     3,     2,
       2,     2,     3,     2,     3,     2,     2,     3,     2,     1,
       2,     1,     1,     0,     5,     0,     4,     1,     2
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
#line 72 "bison.y" /* yacc.c:1646  */
    { process_id(); }
#line 3609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 77 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 78 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 82 "bison.y" /* yacc.c:1646  */
    { process_literal(I_CONSTANT); }
#line 3627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 98 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 99 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 106 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 113 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 114 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 129 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 130 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 132 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 133 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 135 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 136 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 138 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 139 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 140 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 151 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 152 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 188 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 188 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 189 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 189 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 190 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 190 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 191 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 192 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 193 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 194 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 199 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 199 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 200 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 202 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 203 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 205 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 212 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 213 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 225 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 233 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 234 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 240 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 246 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 252 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 258 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 264 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 270 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 271 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 272 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 279 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 280 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 301 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 302 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 310 "bison.y" /* yacc.c:1646  */
    { declaration_end(); }
#line 3927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 311 "bison.y" /* yacc.c:1646  */
    {  declaration_end(); }
#line 3933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 314 "bison.y" /* yacc.c:1646  */
    { yyerrok;  }
#line 3939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 316 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 323 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 325 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 327 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 329 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 331 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 332 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 338 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 344 "bison.y" /* yacc.c:1646  */
    { 
					if(yychar == IDENTIFIER || yychar == I_CONSTANT || yychar == F_CONSTANT)
						yyerrok; 

					yyclearin;  
					clearSemanticRecords(); }
#line 3998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 384 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 385 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 386 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 387 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 407 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 415 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 421 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 422 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 441 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 442 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 450 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 451 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 458 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 460 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 490 "bison.y" /* yacc.c:1646  */
    { save_id(); }
#line 4088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 508 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 509 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 510 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 514 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 515 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 516 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 517 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 527 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 528 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 542 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 548 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 562 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 569 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 570 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 610 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 611 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 612 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 620 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 621 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 627 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 638 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 639 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 644 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 661 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 662 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 663 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 664 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 670 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 687 "bison.y" /* yacc.c:1646  */
    {  yyerrok; }
#line 4262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 695 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 696 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 697 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 698 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 699 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 700 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 701 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 702 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 703 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 716 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 717 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 718 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 719 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 721 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 722 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 723 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 724 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 725 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 727 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 729 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 730 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 731 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 733 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 734 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 735 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 736 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 737 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 738 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 739 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 748 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 749 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 750 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 751 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 752 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 753 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 767 "bison.y" /* yacc.c:1646  */
    { inContext = TRUE; popRecord(); popRecord(); pushTable(); }
#line 4478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 767 "bison.y" /* yacc.c:1646  */
    { inContext = FALSE; popTable();}
#line 4484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 768 "bison.y" /* yacc.c:1646  */
    { inContext = TRUE; popRecord(); popRecord(); pushTable(); }
#line 4490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 768 "bison.y" /* yacc.c:1646  */
    { unDecleared = FALSE; inContext = FALSE; popTable();}
#line 4496 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4500 "y.tab.c" /* yacc.c:1646  */
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
#line 785 "bison.y" /* yacc.c:1906  */


//functions

char resultBinary[MAX_VALUE_SIZE];

void save_type(void)
{
	SemanticRecord *RS;
	
	RS = createSemanticRecord(TYPE);
	strcpy(RS -> currentToken, previousToken);
	RS -> type = previousTokenCode;

	
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
	
			RS = createSemanticRecord(ID);
			strcpy(RS -> currentToken, token);
			RS -> line = yylineno;
			RS -> column = previousColumn;
			RS -> cursorPosi = cursorPos;
	
			pushRecord(RS);
			//printList();
		}
	} 
	else if (pos == -1)
	{
		pos = look_up_top_pos(token);
		if (pos == -1)
		{
			SemanticRecord *RS;
	
			RS = createSemanticRecord(ID);
			strcpy(RS -> currentToken, token);
			RS -> line = yylineno;
			RS -> column = previousColumn;	
			RS -> cursorPosi = cursorPos;
	
			pushRecord(RS);
			//printList();
		}
		else
		{
			SymbolTable *symbol = getSymbolInPos(pos);
			char error[100] = "";
			char note[100] = "";
			sprintf(error, "semantic error, redeclaration of %s'%s'%s with no linkage", CWHTN, token, CWHT);
			yyerror(error);
			sprintf(note, "note, previous declaration of %s‘%s’%s was here", CWHTN, symbol -> varName, CWHT);
			yynote(note, symbol -> line, symbol -> column, TRUE, symbol -> cursorPosi);
		}
	}
	else 
	{
		SemanticRecord* RS = getSemanticRecordInPos(pos);
		char error[100] = "";
		char note[100] = "";
		sprintf(error, "semantic error, redeclaration of %s'%s'%s with no linkage", CWHTN, token, CWHT);
		yyerror(error);
		sprintf(note, "note, previous declaration of %s‘%s’%s was here", CWHTN, RS -> currentToken, CWHT);
		yynote(note, RS -> line, RS -> column, TRUE, RS -> cursorPosi);
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
	
	while (RS -> kind != TYPE && RS != tailRecord)
	{
		if (RS -> kind == ERROR)
		{
			appendSymbol(RS -> currentToken, RS -> line, RS -> column, RS -> cursorPosi, ERROR, stackPos);
		}
		else
		{
			appendSymbol(RS -> currentToken, RS -> line, RS -> column, RS -> cursorPosi, dataType -> type, stackPos);
		}
		popRecord();
		RS = getTopRecord();
	}
	popRecord();
	
}

void process_literal(int literalType)
{
	char* tokenValue = strdup(yytext);
	SemanticRecord *RS;
	
	DO_Data* c;
	RS = createSemanticRecord(DATAOBJECT);
	c = (DO_Data*)RS -> dataBlock;
	c -> type = LITERAL;
	c -> literalType = literalType;
	strcpy(c -> value, tokenValue);
	c -> line = yylineno;
	c -> column = previousColumn;
	c -> cursorPosi = cursorPos;

	RS -> dataBlock = c;
	strcpy(RS -> currentToken, tokenValue);
	RS -> line = yylineno;
	RS -> column = previousColumn;
	RS -> cursorPosi = cursorPos;
	
	pushRecord(RS);
}

void process_op(void)
{
	SemanticRecord *RS;
	
	RS = createSemanticRecord(OPERATOR);
	strcpy(RS -> currentToken, previousToken);
	RS -> type = previousTokenCode;

	
	pushRecord(RS);
}


void process_id(void)
{
	DO_Data* object;
	SemanticRecord *RS;
	char *id;

	id = strdup(yytext);
	
	RS = createSemanticRecord(DATAOBJECT);
	strcpy(RS -> currentToken, id);	
	RS -> line = yylineno;
	RS -> column = previousColumn;
	RS -> cursorPosi = cursorPos;

	object = (DO_Data*) RS -> dataBlock;

	object -> line = yylineno;
	object -> column = previousColumn;
	object -> cursorPosi = cursorPos;

	if (search(id) == -1)
	{
		if (!look_up_TS(id))
		{
			strcpy(RS -> currentToken, id);
			RS -> kind = ERROR;
			checkForDeclaredError(id, RS);
			object -> type = ERROR;
		}
		else
		{
			strcpy(object -> varName, id);
			object -> type = ID;
			RS -> type = ID;
		}
		
	}
	else
	{
		strcpy(object -> varName, id);
		object -> type = ID;
		RS -> type = ID;
	}
	
	RS -> dataBlock = object;
	pushRecord(RS);
	
}

void checkForDeclaredError(char *token, SemanticRecord* R)
{
	DO_Data *datos;
	SemanticRecord *RS;
	int tokenPos = searhErrorToken(token);
	if (tokenPos == -1)
	{
		if (!look_up_error_TS(token))
		{
			char error[100];
			sprintf(error, "semantic error, %s'%s'%s undeclared (first use in this function)", CWHTN, token, CWHT);
			yyerror(error);

			if (unDecleared == FALSE)
			{
				char note[100];
				sprintf(note, "note, each undeclared identifier is reported only once for each function it appears in");
				yynote(note, R -> line, R -> column, FALSE, RS -> cursorPosi);
				unDecleared = TRUE;
			}
		}
	}
	
}

void eval_binary(void)
{
	SemanticRecord* RS = getTopRecord();
	char operator;
	SemanticRecord* dataType = retrieveRecord(TYPE);

	//printList();
	
	DO_Data* op2 = (DO_Data*) RS -> dataBlock; popRecordWithoutDataBlock(); RS = getTopRecord();
	operator = RS -> type; popRecord(); RS = getTopRecord();
	DO_Data* op1 = (DO_Data*) RS -> dataBlock; popRecordWithoutDataBlock(); 

	//printf("%s\n", op1 -> currentToken);
	if (op1 -> type == ERROR || op2 -> type == ERROR)
	{
		RS = createSemanticRecord(OPERATOR);
		op1 = (DO_Data*) RS -> dataBlock;

		RS -> kind = ERROR;
		op1 -> type = ERROR;
		strcpy(RS -> currentToken, "");
		RS -> dataBlock = op1;

		pushRecord(RS);

		return;
		
	}

	
	if (!verifyIfCodeNeeded(op1, operator, op2, dataType)){}
	free(op1);
	free(op2);
}


int verifyIfCodeNeeded(DO_Data* op1, char operator, DO_Data* op2, SemanticRecord* dataType)
{
	int operand1, operand2;
	if (op1 -> type == LITERAL && op2 -> type == LITERAL)
	{
		
		operand1 = atoi(op1 -> value);
		operand2 = atoi(op2 -> value);


		if (operand2 == 0)
		{	
			if (operator == '/')
			{
				//printWarning
				return 0;
			}
		}
		getLiteralResult(op1, operator, op2, dataType, operand1, operand2);
	
		pushNewSemanticRecordDO(I_CONSTANT, op2, resultBinary);
		
	}
	else if (op1 -> type == ID && op2 -> type == LITERAL)
	{
		operand2 = atoi(op2 -> value);
		if (operand2 == 0)
		{
			if (operator == '/' || operator == '%')
			{
				//printWarning
				return 0;
			}
			else if (operator == '*')
			{
				pushNewSemanticRecordDO(op2 -> literalType, op2, "0");
				return 1;
			}
			else
			{
				pushNewSemanticRecordDO(op1 -> literalType, op1, "");
				return 0;
			}
		}
		else if (operand2 == 1)
		{
			if (operator == '*' || operator == '/')
			{
				pushNewSemanticRecordDO(op1 -> literalType, op1, "");
				return 1;
			}
		}
	}
	else if (op1 -> type == LITERAL && op2 -> type == ID)
	{
		operand1 = atoi(op1 -> value);
		if (operand1 == 0)
		{
			if (operator == '/' || operator == '*' || operator == '%')
			{
				pushNewSemanticRecordDO(op1 -> literalType, op1, "0");
				return 1;
			}
			else
			{
				pushNewSemanticRecordDO(op2 -> literalType, op2, "");
				return 1;
			}
		}
		else if (operand1 == 1)
		{
			if (operator == '*')
			{
				pushNewSemanticRecordDO(op2 -> literalType, op2, "");
				return 1;
			}
		}
	}
	
	if (strcmp(op1 -> varName, op2 -> varName) == 0)
	{
		if (operator == '/')
		{
			op1 -> type = LITERAL;
			op1 -> literalType = I_CONSTANT;
			pushNewSemanticRecordDO(op1 -> literalType, op1, "1");
			return 1;
		}
		else if (operator == '%')
		{
			op1 -> type = LITERAL;
			op1 -> literalType = I_CONSTANT;
			pushNewSemanticRecordDO(op2 -> literalType, op2, "0");
			return 1;
		}
	}
	return 0;
	
}

void pushNewSemanticRecordDO(int literalType, DO_Data *op, char* value)
{
	SemanticRecord *newSemanticRecord = createSemanticRecord(DATAOBJECT);
	DO_Data* newDataObject = (DO_Data*) newSemanticRecord -> dataBlock;
	

	newSemanticRecord -> type = op -> type;
	newSemanticRecord -> line = op -> line;
	newSemanticRecord -> column = op -> column;
	newSemanticRecord -> cursorPosi = op -> cursorPosi;

	newDataObject -> line = op -> line;
	newDataObject -> column = op -> column;
	newDataObject -> cursorPosi = op -> cursorPosi;
	newDataObject -> type = op -> type;
	

	if (op -> type == LITERAL)
	{
		strcpy(newDataObject -> value, value);
		newDataObject -> literalType = literalType;
		strcpy(newSemanticRecord -> currentToken, value);
	}
	else
	{
		strcpy(newDataObject -> varName, op -> varName);		
		strcpy(newSemanticRecord -> currentToken, op -> varName);
	
	}
	
		
	newSemanticRecord -> dataBlock = newDataObject;
	pushRecord(newSemanticRecord);
	//printList();
}
void getLiteralResult(DO_Data* op1, char operator, DO_Data* op2, SemanticRecord* dataType, int operand1, int operand2)
{
	
	
	memset(resultBinary, '\0', MAX_VALUE_SIZE);
	//float opF1, opF2;
	//get operator constant

	//get operator
	if (operator == '+')
	{
		if (dataType -> type == INT)
			sprintf(resultBinary, "%d", operand1 + operand2);
	}
	else if (operator == '-')
	{
		
		if (dataType -> type == INT)
			sprintf(resultBinary, "%d", operand1 - operand2);
		
			
	}

	else if (operator == '*')
	{
		if (dataType -> type == INT)
			sprintf(resultBinary, "%d", operand1 * operand2);	
		
			
	}

	else if (operator == '/')
	{
		
		if (dataType -> type == INT)
			sprintf(resultBinary, "%d", operand1 / operand2);
			
		
	}

	else if (operator == '%')
	{		
		if (dataType -> type == INT)
			sprintf(resultBinary, "%d", operand1 % operand2);
		
			
	}

	//total = result;
}



