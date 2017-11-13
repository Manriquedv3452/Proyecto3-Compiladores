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
#define YYLAST   7502

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  97
/* YYNRULES -- Number of rules.  */
#define YYNRULES  382
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  648

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
      82,    86,    90,    91,    95,    96,    97,    98,   103,   104,
     106,   110,   111,   113,   114,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   138,   139,   140,   147,   148,
     152,   156,   157,   157,   158,   158,   159,   160,   161,   162,
     170,   171,   172,   173,   174,   175,   179,   180,   187,   188,
     188,   189,   189,   190,   190,   194,   198,   199,   199,   200,
     200,   205,   209,   210,   211,   213,   217,   218,   218,   219,
     219,   220,   220,   221,   221,   223,   230,   231,   232,   233,
     234,   238,   239,   240,   244,   245,   246,   250,   251,   252,
     256,   257,   258,   262,   263,   264,   268,   269,   270,   271,
     272,   276,   277,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   298,   299,   301,   302,   306,   310,
     311,   312,   316,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   336,   337,   338,   342,   342,   343,
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
     651,   652,   653,   657,   658,   658,   659,   659,   661,   662,
     663,   669,   670,   671,   675,   676,   680,   681,   685,   686,
     688,   692,   693,   694,   694,   694,   697,   698,   708,   709,
     710,   711,   712,   713,   719,   720,   724,   725,   726,   739,
     740,   744,   745,   746,   747,   748,   749,   750,   751,   752,
     753,   754,   758,   759,   763,   764,   768,   768,   768,   773,
     771,   781,   782
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

#define YYPACT_NINF -373

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-373)))

#define YYTABLE_NINF -380

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    7052,  7219,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,    72,   -56,   -47,  -373,
     -22,  -373,  -373,   162,  4033,  4104,  -373,   195,  -373,  -373,
    4175,  4246,  4317,  -373,  6997,  -373,  -373,  -373,   -20,    68,
    4806,  7397,  5030,  -373,   198,   369,  -373,    79,  -373,  4388,
     -38,   342,  -373,  -373,  7274,   735,  7274,  -373,  -373,  -373,
    -373,  -373,    68,  -373,    18,   179,  -373,  6501,  -373,  -373,
    -373,  -373,  -373,  6224,  -373,  -373,  -373,   121,   233,  4806,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
     515,  -373,  6246,  -373,   926,  1314,  1411,  2284,  2672,  2963,
    3060,   -46,    76,  3448,  -373,   144,  4511,   203,  4573,   152,
     155,   181,   187,    87,   206,  -373,  -373,  -373,   468,   217,
     198,  -373,  -373,  -373,  7052,   232,  6831,  5476,   -38,  7431,
    6556,  -373,   215,  -373,  7274,  7274,  6611,   188,  6246,  5052,
      68,    24,  -373,  6391,  5564,  -373,   -33,  -373,   135,  4806,
    -373,  6268,  6268,  7397,  6246,  6246,   451,  -373,  -373,   257,
     102,   321,  -373,  -373,  5960,  6246,   323,  -373,  6246,  -373,
    -373,  -373,  6246,  -373,  -373,  6246,  6246,  6246,  6246,  -373,
    -373,  -373,  -373,  6246,  6246,  5074,  6246,  6246,  6246,  6246,
    5164,  5186,  6246,  5208,  5298,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,   313,   327,  -373,  -373,  -373,  -373,  -373,  -373,
      78,  5982,  -373,   162,  6776,  3635,  -373,  6886,  -373,  -373,
      29,   213,   272,  -373,   274,  4896,  -373,   277,   280,  5586,
    -373,  -373,  6246,  -373,    83,  -373,   294,  6666,  6721,  3891,
    -373,    68,    63,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,   312,   338,  5740,  -373,   336,   346,  5608,   135,
    6941,  5696,   226,  4806,  -373,  -373,   362,   341,   128,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    6246,  6246,  -373,  5320,   353,  6004,  -373,  -373,   352,  -373,
      32,  -373,  -373,  6246,  6246,  6246,  1023,  6246,  6246,  1508,
    1605,  1702,  1799,  6246,  6246,  6246,  6246,  2381,  2478,  -373,
    2575,  2769,  2866,  3157,  3254,  -373,  3351,  -373,   -46,   229,
    -373,    76,   375,   239,   364,   367,  4940,  -373,  -373,  -373,
     232,   382,  5342,    94,   263,  -373,   310,  4626,   322,    67,
      36,    45,   619,  -373,  -373,    84,  -373,  -373,  -373,  -373,
    3725,  -373,  -373,  -373,  -373,  -373,  -373,  6336,  -373,   251,
    -373,  -373,  -373,  7107,  7163,   449,  -373,   455,  6092,   381,
    4918,  -373,  -373,  6246,  -373,   383,   384,  -373,   157,   246,
    -373,  6246,  -373,  3962,  -373,  -373,  -373,  -373,   386,  5740,
    -373,  -373,  6246,  -373,   401,  -373,   409,  5740,  -373,   407,
     408,  5718,   412,   319,  -373,  7329,  7329,  7329,  -373,  -373,
    -373,  -373,  -373,  5872,  -373,  6246,  -373,  6246,  6246,  -373,
    -373,  -373,  -373,  1120,  1217,  1896,  1993,  2090,  2187,  6246,
    6246,  6246,  6246,  6246,   393,   398,   -50,  5432,   497,  -373,
     193,  5982,    92,  -373,  -373,  4443,  4626,  -373,  4626,   425,
    6246,  6246,   442,  6246,  6246,   457,  7052,  3815,  -373,    59,
    -373,  -373,  -373,  -373,  -373,  -373,    88,  6246,  -373,   836,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,   440,
    -373,   441,   446,   450,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,   452,   459,  -373,  -373,   462,  5740,  -373,  -373,  6246,
    -373,   465,   412,   158,   354,  -373,   453,   -42,    14,   222,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,   463,  -373,
     469,    20,  -373,  5872,  5828,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,   474,  -373,  4626,  3545,   356,  6246,   365,
     373,   359,  4670,  4670,  4670,  -373,  -373,  6246,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,   475,   478,  -373,  6246,
    5454,  -373,  -373,  7363,  6246,  -373,  -373,  5872,  5850,  -373,
    -373,  -373,  -373,  -373,  -373,  5982,  -373,  -373,  5982,  4626,
    -373,  6246,  4626,   379,  4626,  4626,  4626,  6246,  6246,  6246,
    6114,  6136,  -373,  -373,  -373,  -373,  -373,  6446,  -373,  -373,
    -373,  -373,  -373,  -373,   476,  -373,  -373,   483,  -373,  -373,
     413,   421,   480,  4626,   484,  4626,   486,  4626,  4626,   470,
    4716,    64,  4626,  -373,  4626,  4626,  -373,  4626,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   172,   151,   152,   153,   155,   156,   220,   216,
     217,   218,   166,   158,   159,   160,   161,   164,   165,   162,
     163,   157,   167,   168,   180,   181,     0,     0,   219,   221,
       0,   154,   375,     0,     0,     0,   170,     0,   171,   169,
       0,     0,     0,   131,     0,   372,   374,   143,   204,     0,
       0,     0,     0,   226,     0,     0,   129,     0,   144,     0,
     225,     0,   133,   135,     0,     0,     0,   137,   139,   141,
       1,   373,     0,    11,     0,     0,   207,     0,     2,     8,
       9,    12,    13,     0,    42,    44,    10,     0,     0,     0,
      50,    51,    52,    53,    54,    55,    25,     3,     4,     6,
      41,    56,     0,    58,     0,     0,     0,     0,     0,     0,
       0,   100,   103,     0,   128,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   252,   219,   253,   249,   248,   132,
       0,   130,   150,   147,     0,     0,     0,     0,   224,     0,
       0,   182,     0,   186,     0,     0,     0,     0,     0,     0,
     206,     0,   200,     0,     0,   192,   272,   269,   273,     0,
      47,     0,     0,     0,     0,     0,    56,   111,   124,     0,
       0,     0,    31,    32,     0,     0,     0,    46,     0,    59,
      61,    63,     0,    67,    69,     0,     0,     0,     0,    81,
      83,    77,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   223,   188,   270,   267,   190,
     222,   215,     0,     0,   240,   227,   251,   254,   247,   145,
       0,     0,   381,     0,     0,     0,   380,     0,   264,   238,
     263,     0,     0,   258,     0,     0,   228,    51,     0,     0,
     176,   183,     0,   184,     0,   193,   199,     0,     0,     0,
     173,   205,     0,   202,   214,   213,   211,   210,   209,   201,
     208,   291,     0,     0,     0,   275,    51,     0,     0,   271,
       0,     0,     0,     0,    43,    45,     0,     0,     0,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   113,
       0,     7,     5,     0,     0,     0,    30,    27,     0,    38,
       0,    29,    65,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    89,
       0,     0,     0,     0,     0,    99,     0,   102,   101,     0,
     105,   104,     0,     0,     0,     0,     0,   297,   148,   382,
       0,     2,     0,     0,     0,   343,     0,     0,     0,     0,
       0,     0,     0,   331,   338,     0,   336,   337,   317,   318,
       0,   334,   319,   320,   321,   322,   245,     0,   261,   272,
     262,   244,   237,     0,     0,   246,   239,     0,     0,     0,
       0,   229,   236,     0,   235,    51,     0,   197,   187,     0,
     185,     0,   178,     0,   174,   203,   292,   274,     0,     0,
     276,   282,     0,   281,     0,   293,     0,     0,   283,    51,
       0,     0,    48,     0,    49,     0,     0,     0,   112,   127,
     126,   125,    37,     0,    57,    35,    28,     0,    36,    26,
      60,    62,    64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   302,
       0,     0,     0,   309,   378,     0,     0,   324,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   371,     0,
     369,   362,   368,   363,   366,   364,     0,   340,   339,     0,
     332,   335,   257,   260,   255,   259,   266,   265,   243,     0,
     231,     0,     0,     0,   232,   234,   196,   195,   194,   198,
     278,     0,     0,   280,   294,     0,     0,   284,   290,     0,
     289,     0,     0,     0,     0,    18,     0,     0,     0,     0,
      40,    39,   110,   108,   109,   107,   316,   315,     0,   298,
       0,     0,   312,   300,     0,   295,   301,   308,   307,   310,
     328,   323,   329,     0,   330,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   370,   361,   367,   365,   241,
     242,   230,   233,   277,   279,   286,     0,     0,   287,     0,
       0,    17,    15,     0,     0,    16,    14,     0,     0,    33,
     299,   313,   314,   311,   305,     0,   296,   304,     0,     0,
     327,   347,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   285,   288,    24,    23,    22,     0,    19,    21,
      34,   306,   303,   325,   342,   344,   355,   124,   354,   348,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   352,     0,     0,   350,     0,   341,   345,
     358,   357,   356,   349,   360,   359,   353,   351
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -373,  -373,  -373,  -373,  -373,  -373,  -372,    -5,  -373,  -373,
     418,  -373,  -373,  -373,   -35,  -166,  -373,  -373,  -373,   161,
    -373,  -373,  -177,   316,  -373,  -373,  -373,  -373,   132,    27,
     370,   371,   368,  -373,   -37,   -40,  -373,   -85,   -26,  -125,
      86,  -373,   443,  -373,  -373,   168,  -373,  -373,   101,  -116,
     -63,  -373,   -52,  -373,   502,  -102,  -373,    17,  -373,  -373,
     -23,   -59,   -55,  -131,  -124,  -373,   -10,  -373,   -11,  -112,
    -149,  -165,   154,  -152,  -373,   123,   153,    47,  -373,  -373,
    -373,  -127,  -373,   216,  -361,  -373,  -373,  -373,  -373,  -373,
    -373,   534,  -373,  -373,  -373,  -373,  -373
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    96,    97,    74,    98,    99,   514,   515,   100,   298,
     166,   161,   162,   102,   103,   104,   303,   304,   305,   105,
     307,   308,   106,   107,   315,   316,   313,   314,   108,   109,
     110,   111,   112,   113,   167,   168,   290,   355,   115,    32,
     223,    57,    58,   221,    34,   116,    36,    37,   140,   141,
     117,   244,   245,    38,    75,    76,    39,   118,    41,    42,
     246,    60,    61,   128,   262,   232,   233,   234,   516,   157,
     158,   449,   450,   451,   452,   453,    43,   357,   358,   543,
     459,   359,   360,   361,   362,   363,   462,   628,   364,   365,
      44,    45,    46,   134,   340,   135,   224
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     127,   142,   138,   142,   169,   208,   239,   269,   226,   222,
      59,   312,   231,   114,   155,   114,   306,    40,    40,   148,
      50,   582,   156,   268,   241,   258,   122,    73,   528,    51,
     241,   123,    53,   428,   529,   575,   573,   470,   136,   119,
     120,   263,   137,   153,   517,   518,   472,   154,   257,   260,
     200,    40,    40,   206,    52,   209,   338,    40,    40,    40,
     555,    40,   156,    72,   258,   642,    73,   177,   468,   216,
     469,    73,   126,   218,   169,    48,   155,   142,   170,   132,
     129,   142,   142,   142,   388,   477,    33,    47,   214,   557,
     300,   576,   573,   537,   201,   458,  -212,   238,   156,   339,
     356,   583,  -212,   294,   380,   367,   554,   220,   259,   154,
     293,   114,   114,   429,   267,    55,   149,   329,   370,   333,
      62,    63,   254,   256,   277,   278,    67,    68,    69,   416,
      33,   241,   241,   399,   299,   471,   435,   436,   437,   438,
     411,   433,   434,   302,   473,   217,   406,   395,   272,   257,
     260,    40,   276,    40,   126,    49,  -149,   130,   556,   569,
      53,   389,   293,   643,   215,    53,   293,   146,    35,    35,
      40,   126,   447,  -326,   448,   369,   133,  -149,   131,   295,
     150,   337,   390,   478,   142,   142,   155,   558,   169,   251,
     538,   599,   600,   601,   533,   379,    64,   163,    65,   386,
     220,    53,    35,    35,   207,   114,   417,   368,    35,    35,
      35,   270,    35,   454,   371,   271,   387,   143,    53,   143,
     269,   205,   230,   577,   398,   323,   324,   294,   404,   210,
     439,   410,   211,    54,   164,   356,   242,   570,    54,   230,
     442,    40,    40,    55,    40,   247,   248,   497,    55,    53,
     418,   419,   126,   421,    53,   263,   217,   151,   291,   212,
     424,    56,   413,   152,   460,   213,   252,   476,   430,   431,
     432,   534,   253,   373,    54,   375,   506,   535,    66,   153,
    -268,   126,  -268,   154,    55,   217,   536,    40,   126,    55,
     372,    54,    55,   143,   242,  -146,   337,   143,   143,   143,
     578,    55,    35,   412,    35,   114,   579,   293,   440,   165,
     138,   463,   369,    47,   243,   225,   457,   293,   443,   334,
     294,    35,    54,   466,   296,   242,   301,   367,   321,   322,
     155,   154,    55,   335,   292,   293,   496,   498,   489,   461,
     492,   552,   553,   493,   123,    53,   309,   310,   311,  -256,
     374,   376,   377,   425,   114,   571,   230,   591,   381,   501,
     597,   382,   502,   483,   485,   499,   439,   505,   584,   587,
     124,   511,  -250,   391,   595,   546,   547,    40,   549,   550,
     439,   585,   588,   337,    40,   520,   464,   521,   419,   396,
      40,    40,    35,    35,   465,    35,   512,   217,   467,   419,
     143,   143,   419,   522,   523,   524,   525,     9,    10,    11,
     114,   337,   584,   587,   439,   397,   217,   400,    54,   415,
     611,   531,   630,   612,   126,   585,   588,   401,   217,   426,
     427,   572,   573,   592,   293,   598,   422,   419,    35,   414,
     125,   444,   594,   293,   445,  -250,  -250,  -250,  -250,  -250,
     596,   293,   486,   230,   441,    55,   615,   293,   487,   230,
     230,   455,   490,   593,   494,   495,   566,   500,   101,   567,
     101,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   439,   503,    40,    40,   634,   504,   439,   507,   508,
     629,   293,   526,   337,   337,   423,    40,   527,   631,   293,
     532,   160,   541,   542,   545,   544,     9,    10,    11,   317,
     318,   320,   620,   621,   622,   624,   626,   419,   548,   551,
     101,   559,   560,   217,   171,   172,   173,   561,    35,   604,
     606,   562,   574,   563,   609,    35,   627,   337,   337,   125,
     564,    35,    35,   565,   155,   337,   568,   580,   337,   289,
     581,   419,   156,   589,    55,   617,   602,   632,   293,   603,
    -127,   635,   293,   637,   293,    47,   101,   101,   608,   640,
     326,   331,   328,   219,   147,   539,   481,   519,    71,   274,
     275,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     419,   174,   590,     0,   617,   175,   101,   176,     0,     0,
     101,     0,     0,   101,   101,   101,   101,     0,     0,     0,
       0,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     474,   101,    78,    79,    80,    81,    82,    83,     0,    84,
      85,     0,     0,     0,    35,    35,   613,     0,     0,   614,
       0,   616,   618,   619,     0,     0,     0,    35,     0,     0,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     633,     0,   636,     0,   638,   639,     0,     0,     0,   644,
       0,   645,   646,     0,   647,     0,     0,     0,     0,    87,
       0,    88,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
       0,     0,     0,   101,     0,     0,     0,     0,   475,     0,
       0,   101,   101,   101,     0,   101,   101,     0,     0,     0,
       0,   101,   101,   101,   101,     0,   144,     0,  -175,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     101,     0,     0,     0,     0,  -175,     0,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -175,     0,  -175,     0,  -175,   101,
    -175,  -175,  -175,  -175,  -175,  -175,     0,     0,   145,     0,
       0,  -175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -175,     0,  -333,     1,     0,  -333,
    -333,  -333,  -333,  -333,  -333,     0,  -333,  -333,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   101,   101,
       0,   101,     0,     0,     0,   101,     2,  -333,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,  -333,  -333,  -333,  -333,  -333,  -333,  -333,
    -333,  -333,  -333,  -333,  -333,    27,  -333,    28,  -333,    29,
    -333,    31,  -333,     0,     0,     0,     0,     0,     0,  -333,
    -333,  -333,  -333,  -333,  -333,  -333,  -333,   178,     0,   -66,
     -66,   -66,   -66,   -66,   -66,  -333,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,     0,   -66,
     -66,   -66,   179,   -66,   -66,   -66,   -66,   180,   181,   -66,
     -66,   -66,   -66,   -66,   178,   -66,   -71,   -71,   -71,   -71,
     -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,   -71,     0,   -71,   -71,   -71,   179,
     -71,   -71,   -71,   -71,   180,   181,   -71,   -71,   -71,   -71,
     -71,   178,   -71,   -68,   -68,   -68,   -68,   -68,   -68,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,   -68,     0,   -68,   -68,   -68,   179,   -68,   -68,   -68,
     -68,   180,   181,   -68,   -68,   -68,   -68,   -68,   178,   -68,
     -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,     0,
     -70,   -70,   -70,   179,   -70,   -70,   -70,   -70,   180,   181,
     -70,   -70,   -70,   -70,   -70,   182,   -70,   -72,   -72,   -72,
     -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,     0,   -72,     0,   -72,   -72,   -72,
     -72,   183,   184,   -72,   -72,     0,     0,   -72,   -72,   -72,
     -72,   -72,   185,   -72,   -76,   -76,   -76,   -76,   -76,   -76,
       0,   -76,   -76,   186,   187,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,   -76,   -76,   -76,   -76,   -76,   182,
     -76,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,
       0,   -75,   -75,   -75,   -75,   183,   184,   -75,   -75,     0,
       0,   -75,   -75,   -75,   -75,   -75,   182,   -75,   -73,   -73,
     -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,     0,   -73,     0,   -73,   -73,
     -73,   -73,   183,   184,   -73,   -73,     0,     0,   -73,   -73,
     -73,   -73,   -73,   182,   -73,   -74,   -74,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,   -74,     0,   -74,   -74,   -74,   -74,   183,
     184,   -74,   -74,     0,     0,   -74,   -74,   -74,   -74,   -74,
     185,   -74,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,
     -85,   186,   187,   -85,   -85,   -85,   -85,   -85,   -85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
     -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,   -85,   -85,   -85,   -85,   -85,   185,   -85,   -82,
     -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   186,   187,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,   -82,
     -82,   -82,   -82,   -82,   185,   -82,   -84,   -84,   -84,   -84,
     -84,   -84,     0,   -84,   -84,   186,   187,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,   -84,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,   -84,   -84,   -84,   -84,
     -84,   185,   -84,   -78,   -78,   -78,   -78,   -78,   -78,     0,
     -78,   -78,   186,   187,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,   -78,   -78,   -78,   -78,   -78,   185,   -78,
     -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   186,
     187,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
     -80,   -80,   -80,   -80,   -80,   188,   -80,   -86,   -86,   -86,
     -86,   -86,   -86,     0,   -86,   -86,     0,     0,   189,   190,
     -86,   -86,   -86,   -86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,     0,     0,   191,   192,   -86,
     -86,   -86,   188,   -86,   -90,   -90,   -90,   -90,   -90,   -90,
       0,   -90,   -90,     0,     0,   189,   190,   -90,   -90,   -90,
     -90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,     0,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,     0,     0,   191,   192,   -90,   -90,   -90,   188,
     -90,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,
       0,     0,   189,   190,   -87,   -87,   -87,   -87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,   191,   192,   -87,   -87,   -87,   188,   -87,   -88,   -88,
     -88,   -88,   -88,   -88,     0,   -88,   -88,     0,     0,   189,
     190,   -88,   -88,   -88,   -88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,   -88,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,   191,   192,
     -88,   -88,   -88,   193,   -88,   -91,   -91,   -91,   -91,   -91,
     -91,     0,   -91,   -91,     0,     0,     0,     0,   194,   195,
     -91,   -91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,     0,   -91,     0,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,     0,     0,     0,     0,   -91,   -91,   -91,
     193,   -91,   -93,   -93,   -93,   -93,   -93,   -93,     0,   -93,
     -93,     0,     0,     0,     0,   194,   195,   -93,   -93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,     0,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,
     -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
       0,     0,     0,     0,   -93,   -93,   -93,   193,   -93,   -92,
     -92,   -92,   -92,   -92,   -92,     0,   -92,   -92,     0,     0,
       0,     0,   194,   195,   -92,   -92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,     0,   -92,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,     0,
       0,   -92,   -92,   -92,   196,   -92,   -94,   -94,   -94,   -94,
     -94,   -94,     0,   -94,   -94,     0,     0,     0,     0,     0,
       0,   -94,   -94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,     0,   -94,     0,   -94,   -94,   197,   -94,
     -94,   -94,   -94,   -94,     0,     0,     0,     0,   -94,   -94,
     -94,   198,   -94,   -97,   -97,   -97,   -97,   -97,   -97,     0,
     -97,   -97,     0,     0,     0,     0,     0,     0,   -97,   -97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,     0,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
       0,   -97,     0,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,     0,     0,     0,     0,   199,   -97,   -97,   196,   -97,
     -96,   -96,   -96,   -96,   -96,   -96,     0,   -96,   -96,     0,
       0,     0,     0,     0,     0,   -96,   -96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,     0,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,     0,   -96,     0,
     -96,   -96,   197,   -96,   -96,   -96,   -96,   -96,     0,     0,
       0,     0,   -96,   -96,   -96,   196,   -96,   -95,   -95,   -95,
     -95,   -95,   -95,     0,   -95,   -95,     0,     0,     0,     0,
       0,     0,   -95,   -95,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
       0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,     0,   -95,     0,   -95,   -95,   197,
     -95,   -95,   -95,   -95,   -95,     0,     0,     0,     0,   -95,
     -95,   -95,   198,   -95,   -98,   -98,   -98,   -98,   -98,   -98,
       0,   -98,   -98,     0,     0,     0,     0,     0,     0,   -98,
     -98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,     0,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,     0,   -98,     0,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,     0,     0,     0,     0,   199,   -98,   -98,   202,
     -98,  -106,  -106,  -106,  -106,  -106,  -106,     0,  -106,  -106,
       0,     0,     0,     0,     0,     0,     0,   203,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -106,  -106,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,
    -106,  -106,  -106,  -106,     0,  -106,  -106,  -106,  -106,  -106,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,     0,  -106,
       0,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,     0,
       0,     0,     0,     0,     0,   204,   439,  -106,  -346,  -346,
    -346,  -346,  -346,  -346,     0,  -346,  -346,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -346,  -346,  -346,  -346,  -346,
    -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,
    -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,
    -346,     0,  -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,
    -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,
    -346,  -346,     0,   293,     0,     0,     0,     0,  -346,  -346,
    -346,  -346,  -346,  -346,  -346,  -346,     1,     0,   341,    79,
      80,    81,    82,    83,  -346,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,    86,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,   342,   343,   344,     0,   345,   346,   347,   348,
     349,   350,   351,   352,    27,    87,    28,    88,    29,    30,
      31,    89,     0,     0,     0,     0,     0,     0,   225,   353,
      90,    91,    92,    93,    94,    95,   479,     0,   341,    79,
      80,    81,    82,    83,   354,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,    86,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,   342,   343,   344,     0,   345,   346,   347,   348,
     349,   350,   351,   352,    27,    87,    28,    88,    29,    30,
      31,    89,     0,     0,     0,     0,     0,     0,   225,   480,
      90,    91,    92,    93,    94,    95,     1,     0,    78,    79,
      80,    81,    82,    83,   354,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,    86,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    87,    28,    88,    29,    30,
      31,    89,   139,     0,  -179,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,     0,     0,     0,     0,
       0,     0,     0,     0,   354,     0,     0,     0,     0,     0,
       0,     2,     0,  -179,  -179,  -179,  -179,  -179,  -179,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -179,     0,    28,   139,  -179,  -177,  -179,  -179,  -179,  -179,
    -179,  -179,     0,     0,     0,     0,     0,  -179,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -179,     0,     2,     0,  -177,  -177,  -177,  -177,  -177,  -177,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -177,     0,    28,     1,  -177,  -134,  -177,  -177,  -177,
    -177,  -177,  -177,     0,     0,     0,     0,     0,  -177,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -177,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     1,    29,  -136,    31,  -134,
    -134,  -134,     0,  -134,     0,     0,     0,     0,     0,  -134,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -134,     0,     2,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     1,    29,  -138,    31,
    -136,  -136,  -136,     0,  -136,     0,     0,     0,     0,     0,
    -136,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -136,     0,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,     1,    29,  -140,
      31,  -138,  -138,  -138,     0,  -138,     0,     0,     0,     0,
       0,  -138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -138,     0,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     1,    29,
    -142,    31,  -140,  -140,  -140,     0,  -140,     0,     0,     0,
       0,     0,  -140,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -140,     0,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,   132,
      29,     0,    31,  -142,  -142,  -142,     0,  -142,     0,     0,
       0,     0,     0,  -142,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -142,     0,  -376,     0,
    -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,
    -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,
    -376,  -376,  -376,  -376,   540,     0,   341,    79,    80,    81,
      82,    83,     0,    84,    85,     0,     0,  -376,     0,  -376,
       0,  -376,  -376,  -376,     0,     0,  -149,     0,     0,     0,
       0,  -379,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   133,  -149,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     342,   343,   344,     0,   345,   346,   347,   348,   349,   350,
     351,   352,   139,    87,  -189,    88,     0,     0,     0,    89,
       0,     0,     0,     0,     0,     0,   225,     0,    90,    91,
      92,    93,    94,    95,     0,     0,     0,     0,     0,     0,
       0,     2,   354,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,   139,     0,  -191,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,  -189,  -189,     0,
    -189,  -189,     0,     0,     0,     0,     0,  -189,     0,     0,
       0,     0,     0,     2,     0,     0,     0,     0,     0,     0,
    -189,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   341,
      79,    80,    81,    82,    83,     0,    84,    85,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,  -191,
    -191,     0,  -191,  -191,     0,     0,     0,    86,     0,  -191,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -191,    78,    79,    80,    81,    82,    83,     0,
      84,    85,     0,   342,   343,   344,     0,   345,   346,   347,
     348,   349,   350,   351,   352,     0,    87,     0,    88,     0,
       0,    86,    89,     0,     0,     0,     0,     0,     0,   225,
       0,    90,    91,    92,    93,    94,    95,     0,     0,    78,
      79,    80,    81,    82,    83,   354,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,     0,    88,     0,     0,     0,    89,    86,     0,     0,
       0,     0,     0,     0,     0,    90,    91,    92,    93,    94,
      95,     0,     0,     0,     0,     0,     0,     0,     0,   354,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,    88,     0,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,    92,    93,    94,    95,    77,     0,    78,
      79,    80,    81,    82,    83,   641,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,    86,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,    28,    88,     0,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,    92,    93,    94,    95,   378,     0,    78,
      79,    80,    81,    82,    83,     0,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   491,
       0,    78,    79,    80,    81,    82,    83,    86,    84,    85,
       0,     0,     0,     0,     9,    10,    11,     0,     0,     0,
       0,   446,     0,    78,    79,    80,    81,    82,    83,    86,
      84,    85,     0,     0,     0,     0,     9,    10,    11,     0,
       0,     0,     0,     0,     0,     0,    87,   125,    88,     0,
       0,    86,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,    92,    93,    94,    95,     0,    87,   125,
      88,     0,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,    92,    93,    94,    95,     0,
      87,     0,    88,     0,     0,     0,    89,     0,     0,     0,
     447,     0,   448,   336,     0,    90,    91,    92,    93,    94,
      95,   121,     0,    78,    79,    80,    81,    82,    83,     0,
      84,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   255,     0,    78,    79,    80,    81,    82,
      83,    86,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   319,     0,    78,    79,    80,
      81,    82,    83,    86,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,     0,    88,     0,     0,    86,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    91,    92,    93,    94,
      95,     0,    87,     0,    88,     0,     0,     0,    89,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,    95,     0,    87,     0,    88,     0,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,    92,    93,    94,    95,   325,     0,    78,    79,    80,
      81,    82,    83,     0,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   327,     0,    78,
      79,    80,    81,    82,    83,    86,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   330,
       0,    78,    79,    80,    81,    82,    83,    86,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,     0,    88,     0,     0,    86,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,    92,    93,    94,    95,     0,    87,     0,    88,     0,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,    92,    93,    94,    95,     0,    87,     0,
      88,     0,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,    92,    93,    94,    95,   332,
       0,    78,    79,    80,    81,    82,    83,     0,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   420,     0,    78,    79,    80,    81,    82,    83,    86,
      84,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   456,     0,    78,    79,    80,    81,    82,
      83,    86,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,     0,
      88,     0,     0,    86,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,    92,    93,    94,    95,     0,
      87,     0,    88,     0,     0,     0,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    91,    92,    93,    94,
      95,     0,    87,     0,    88,     0,     0,     0,    89,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,    95,   530,     0,    78,    79,    80,    81,    82,
      83,     0,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   605,     0,    78,    79,    80,
      81,    82,    83,    86,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      79,    80,    81,    82,    83,    86,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,    88,     0,     0,    86,    89,     0,
     235,     0,     0,     0,     9,    10,    11,    90,    91,    92,
      93,    94,    95,     0,    87,     0,    88,     0,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,    92,    93,    94,    95,     0,    87,   125,    88,     0,
       0,     0,    89,     0,     0,     0,     0,   236,     0,     0,
       0,    90,   237,    92,    93,    94,    95,    78,    79,    80,
      81,    82,    83,     0,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      79,    80,    81,    82,    83,    86,    84,    85,   264,     0,
       0,     0,     9,    10,    11,     0,     0,     0,     0,     0,
       0,    78,    79,    80,    81,    82,    83,    86,    84,    85,
     383,     0,     0,     0,     9,    10,    11,     0,     0,     0,
       0,     0,     0,     0,    87,   125,    88,     0,     0,    86,
      89,     0,   402,     0,     0,   265,     9,    10,    11,    90,
     266,    92,    93,    94,    95,     0,    87,   125,    88,     0,
       0,     0,    89,     0,     0,     0,     0,   384,     0,     0,
       0,    90,   385,    92,    93,    94,    95,     0,    87,   125,
      88,     0,     0,     0,    89,     0,     0,     0,     0,   403,
       0,     0,     0,    90,    91,    92,    93,    94,    95,    78,
      79,    80,    81,    82,    83,     0,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,    79,    80,    81,    82,    83,    86,    84,    85,
     407,     0,     0,     0,     9,    10,    11,     0,     0,     0,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    86,
      84,    85,   509,     0,     0,     0,     9,    10,    11,     0,
       0,     0,     0,     0,     0,     0,    87,   125,    88,     0,
       0,    86,    89,     0,     0,     0,     0,   408,     9,    10,
      11,    90,   409,    92,    93,    94,    95,     0,    87,   125,
      88,     0,     0,     0,    89,     0,     0,     0,     0,   510,
       0,     0,     0,    90,    91,    92,    93,    94,    95,     0,
      87,   125,    88,     0,     0,     0,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    91,    92,    93,    94,
      95,    78,    79,    80,    81,    82,    83,     0,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    86,
      84,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,    79,    80,    81,    82,
      83,    86,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,     0,
      88,     0,     0,    86,    89,     0,     0,     0,   447,     0,
     448,   336,   586,    90,    91,    92,    93,    94,    95,     0,
      87,     0,    88,     0,     0,     0,    89,     0,     0,     0,
     447,     0,   448,   336,   610,    90,    91,    92,    93,    94,
      95,     0,    87,     0,    88,     0,     0,     0,    89,     0,
       0,     0,   447,     0,   448,   336,     0,    90,    91,    92,
      93,    94,    95,    78,    79,    80,    81,    82,    83,     0,
      84,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,    79,    80,    81,    82,
      83,    86,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    86,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,     0,    88,     0,     0,    86,    89,   297,     0,     0,
       0,     0,     0,     0,     0,    90,    91,    92,    93,    94,
      95,     0,    87,     0,    88,     0,     0,     0,    89,     0,
       0,     0,     0,     0,     0,   336,     0,    90,    91,    92,
      93,    94,    95,     0,    87,     0,    88,     0,     0,     0,
      89,     0,     0,     0,     0,     0,     0,   423,     0,    90,
      91,    92,    93,    94,    95,    78,    79,    80,    81,    82,
      83,     0,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    86,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      79,    80,    81,    82,    83,    86,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,    88,     0,     0,    86,    89,     0,
       0,     0,     0,   488,     0,     0,     0,    90,    91,    92,
      93,    94,    95,     0,    87,     0,    88,     0,     0,     0,
      89,   623,     0,     0,     0,     0,     0,     0,     0,    90,
      91,    92,    93,    94,    95,     0,    87,     0,    88,     0,
       0,     0,    89,   625,     0,     0,     0,     0,     0,     0,
       0,    90,    91,    92,    93,    94,    95,    78,    79,    80,
      81,    82,    83,     0,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      79,    80,    81,    82,    83,    86,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,    79,    80,    81,    82,    83,    86,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,     0,    88,     0,     0,    86,
     159,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,    92,    93,    94,    95,     0,    87,     0,    88,     0,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,    92,    93,    94,    95,     1,    87,    53,
      88,     0,     0,     0,   273,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,    92,    93,    94,    95,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
       0,    31,   367,   261,     0,     0,   154,     0,     0,     0,
       0,     2,    55,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   139,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,     0,    31,   153,   261,     0,
       0,   154,     0,     0,     0,     0,     2,    55,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   139,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     0,
       0,     0,   153,   -20,   -20,     0,   154,     0,     0,     0,
       0,     2,    55,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   139,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,   153,     0,     0,
       0,   154,     0,     0,     0,     0,     2,    55,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   249,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     240,     2,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   139,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   250,     2,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   393,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     392,     2,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   394,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   227,     0,   228,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
      30,    31,     0,     0,     0,     0,     0,     0,     0,  -377,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,     0,    31,     0,   229,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
       0,    31,     0,   366,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    70,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,     0,    31,     0,   405,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,    30,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,    30,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   482,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,     0,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   484,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,   139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,    29,     0,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     0,     0,     0,   607,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,   513,     0,     0,
       0,     0,     0,     2,     0,     0,     0,     0,    77,     0,
      28,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,   513,     0,     0,     0,     0,     0,     2,     0,     0,
       0,     0,   139,     0,    28,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,     0,     0,    28,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28
};

static const yytype_int16 yycheck[] =
{
      55,    64,    61,    66,    89,   117,   137,   156,   135,   134,
      33,   188,   136,    50,    77,    52,   182,     0,     1,     1,
      76,     1,    77,   154,   140,     1,    52,     3,    78,    76,
     146,    54,     3,     1,    84,    77,    78,     1,    76,    50,
      51,   153,    80,    76,   416,   417,     1,    80,   150,   151,
      96,    34,    35,   116,    76,   118,   221,    40,    41,    42,
       1,    44,   117,    83,     1,     1,     3,   102,     1,   124,
       3,     3,    55,   128,   159,     3,   139,   140,    89,     1,
       1,   144,   145,   146,     1,     1,     0,     1,     1,     1,
     175,    77,    78,     1,    18,     1,    78,   137,   153,   224,
     225,    81,    84,     1,   235,    76,   467,   130,    84,    80,
      78,   148,   149,    81,   154,    86,    98,   202,   230,   204,
      34,    35,   148,   149,   164,   165,    40,    41,    42,     1,
      44,   247,   248,   264,   174,    99,   313,   314,   315,   316,
     271,   307,   308,   178,    99,   128,   270,    84,   159,   251,
     252,   134,   163,   136,   137,    83,    78,    78,    99,     1,
       3,    78,    78,    99,    77,     3,    78,    66,     0,     1,
     153,   154,    80,    79,    82,   230,    98,    99,    99,    77,
       1,   221,    99,    99,   247,   248,   249,    99,   273,     1,
      98,   552,   553,   554,     1,   235,     1,    76,     3,   239,
     223,     3,    34,    35,     1,   242,    78,   230,    40,    41,
      42,    76,    44,   340,     1,    80,   242,    64,     3,    66,
     369,    77,   136,     1,   264,   198,   199,     1,   268,    77,
       1,   271,    77,    76,     1,   360,    79,    79,    76,   153,
       1,   224,   225,    86,   227,   144,   145,     1,    86,     3,
     290,   291,   235,   293,     3,   367,   239,    78,     1,    78,
     295,    99,   273,    84,     1,    78,    78,   352,   303,   304,
     305,    78,    84,     1,    76,     1,   407,    84,    83,    76,
      77,   264,    79,    80,    86,   268,   451,   270,   271,    86,
      77,    76,    86,   140,    79,    78,   336,   144,   145,   146,
      78,    86,   134,    77,   136,   342,    84,    78,    79,    76,
     369,     1,   367,   227,    99,    83,   342,    78,    79,     6,
       1,   153,    76,     1,     3,    79,     3,    76,   196,   197,
     393,    80,    86,     6,    77,    78,   388,   389,   378,    76,
     380,   466,   467,   383,   367,     3,   185,   186,   187,    77,
      78,    77,    78,     1,   391,     1,   270,     1,    81,   399,
       1,    81,   402,   373,   374,   391,     1,   407,   533,   534,
       1,   411,     3,    79,     1,   460,   461,   360,   463,   464,
       1,   533,   534,   423,   367,   425,    76,   427,   428,    77,
     373,   374,   224,   225,   347,   227,    77,   380,    76,   439,
     247,   248,   442,   440,   441,   442,   443,    38,    39,    40,
     447,   451,   577,   578,     1,    77,   399,    81,    76,    78,
     585,   447,     1,   588,   407,   577,   578,    81,   411,    77,
      78,    77,    78,    77,    78,    76,    83,   477,   270,    77,
      71,    77,    77,    78,    77,    76,    77,    78,    79,    80,
      77,    78,     3,   367,    79,    86,    77,    78,     3,   373,
     374,    79,    81,   548,    81,    81,   506,    81,    50,   509,
      52,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     1,    81,   466,   467,     1,    77,     1,    81,    81,
      77,    78,    99,   533,   534,    83,   479,    99,    77,    78,
       3,    83,   455,   456,    79,   458,    38,    39,    40,   193,
     194,   195,   597,   598,   599,   600,   601,   557,    76,    62,
     102,    81,    81,   506,     9,    10,    11,    81,   360,   569,
     570,    81,    79,    81,   574,   367,    60,   577,   578,    71,
      81,   373,   374,    81,   607,   585,    81,    84,   588,    98,
      81,   591,   607,    79,    86,   595,    81,    77,    78,    81,
      77,    77,    78,    77,    78,   479,   148,   149,   573,    99,
     200,   203,   201,   130,    72,   452,   360,   423,    44,   161,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     630,    76,   545,    -1,   634,    80,   178,    82,    -1,    -1,
     182,    -1,    -1,   185,   186,   187,   188,    -1,    -1,    -1,
      -1,   193,   194,   195,   196,   197,   198,   199,   200,   201,
       1,   203,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,   466,   467,   589,    -1,    -1,   592,
      -1,   594,   595,   596,    -1,    -1,    -1,   479,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     623,    -1,   625,    -1,   627,   628,    -1,    -1,    -1,   632,
      -1,   634,   635,    -1,   637,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,   295,    -1,    -1,    -1,    -1,    99,    -1,
      -1,   303,   304,   305,    -1,   307,   308,    -1,    -1,    -1,
      -1,   313,   314,   315,   316,    -1,     1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     342,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,   391,
      75,    76,    77,    78,    79,    80,    -1,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    -1,     0,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   440,   441,
      -1,   443,    -1,    -1,    -1,   447,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,     1,    -1,     3,
       4,     5,     6,     7,     8,    99,    10,    11,    12,    13,
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
      -1,    -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    81,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    95,    96,    97,     1,    99,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    95,    96,
      97,     1,    99,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    81,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    95,    96,    97,     1,    99,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    95,    96,    97,     1,    99,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    -1,    81,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    95,
      96,    97,     1,    99,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    95,    96,    97,     1,
      99,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    -1,    81,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    97,     1,    99,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    78,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,     1,    -1,     3,     4,
       5,     6,     7,     8,    99,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,     1,    -1,     3,     4,
       5,     6,     7,     8,    99,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,     1,    -1,     3,     4,
       5,     6,     7,     8,    99,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      75,    76,     1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,     1,    73,     3,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,     1,    73,     3,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,
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
      73,    -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    69,    -1,    71,
      -1,    73,    74,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,     1,    70,     3,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    99,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    76,    77,    -1,
      79,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    76,
      77,    -1,    79,    80,    -1,    -1,    -1,    31,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    -1,    72,    -1,
      -1,    31,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    89,    90,    -1,    -1,     3,
       4,     5,     6,     7,     8,    99,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,     1,    -1,     3,
       4,     5,     6,     7,     8,    99,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,
      -1,    31,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    70,    71,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      80,    -1,    82,    83,    -1,    85,    86,    87,    88,    89,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,
      34,    -1,    -1,    -1,    38,    39,    40,    85,    86,    87,
      88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    70,    71,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    34,    -1,
      -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,    31,
      76,    -1,    34,    -1,    -1,    81,    38,    39,    40,    85,
      86,    87,    88,    89,    90,    -1,    70,    71,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    70,    71,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    34,    -1,    -1,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,
      -1,    31,    76,    -1,    -1,    -1,    -1,    81,    38,    39,
      40,    85,    86,    87,    88,    89,    90,    -1,    70,    71,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    31,    76,    -1,    -1,    -1,    80,    -1,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      80,    -1,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    80,    -1,    82,    83,    -1,    85,    86,    87,
      88,    89,    90,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    31,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,
      86,    87,    88,    89,    90,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    31,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,     1,    70,     3,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    30,    86,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    76,    77,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    30,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    76,    77,    78,    -1,    80,    -1,    -1,    -1,
      -1,    30,    86,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    30,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     0,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,     1,    -1,
      71,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,     1,    -1,    71,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    71,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71
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
     110,   111,   112,    76,     1,    76,   110,   134,   135,   137,
     168,     9,    10,    11,    76,    80,    82,   114,     1,    86,
      91,    92,     1,    87,    88,     1,    12,    13,     1,    14,
      15,    93,    94,     1,    16,    17,     1,    85,     1,    95,
      96,    18,     1,    19,    97,    77,   150,     1,   169,   150,
      77,    77,    78,    78,     1,    77,   162,   157,   162,   142,
     160,   143,   139,   140,   196,    83,   181,     1,     3,    77,
     140,   164,   165,   166,   167,    34,    81,    86,   135,   163,
      84,   149,    79,    99,   151,   152,   160,   148,   148,     1,
      84,     1,    78,    84,   138,     1,   138,   155,     1,    84,
     155,    77,   164,   169,    34,    81,    86,   135,   163,   170,
      76,    80,   168,    76,   110,   110,   168,   135,   135,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    98,
     136,     1,    77,    78,     1,    77,     3,    77,   109,   135,
     137,     3,   114,   116,   117,   118,   115,   120,   121,   119,
     119,   119,   122,   126,   127,   124,   125,   123,   123,     1,
     123,   128,   128,   129,   129,     1,   130,     1,   131,   137,
       1,   132,     1,   137,     6,     6,    83,   135,   171,   139,
     194,     3,    57,    58,    59,    61,    62,    63,    64,    65,
      66,    67,    68,    84,    99,   137,   139,   177,   178,   181,
     182,   183,   184,   185,   188,   189,    77,    76,   160,   162,
     169,     1,    77,     1,    78,     1,    77,    78,     1,   135,
     163,    81,    81,    34,    81,    86,   135,   138,     1,    78,
      99,    79,    84,     1,    84,    84,    77,    77,   135,   163,
      81,    81,    34,    81,   135,    77,   164,    34,    81,    86,
     135,   163,    77,   168,    77,    78,     1,    78,   135,   135,
       1,   135,    83,    83,   114,     1,    77,    78,     1,    81,
     114,   114,   114,   115,   115,   122,   122,   122,   122,     1,
      79,    79,     1,    79,    77,    77,     1,    80,    82,   171,
     172,   173,   174,   175,   181,    79,     1,   138,     1,   180,
       1,    76,   186,     1,    76,   177,     1,    76,     1,     3,
       1,    99,     1,    99,     1,    99,   137,     1,    99,     1,
      84,   183,    56,   166,    56,   166,     3,     3,    81,   135,
      81,     1,   135,   135,    81,    81,   152,     1,   152,   138,
      81,   135,   135,    81,    77,   135,   163,    81,    81,    34,
      81,   135,    77,    58,   106,   107,   168,   106,   106,   172,
     135,   135,   134,   134,   134,   134,    99,    99,    78,    84,
       1,   138,     3,     1,    78,    84,   171,     1,    98,   175,
       1,   177,   177,   179,   177,    79,   137,   137,    76,   137,
     137,    62,   139,   139,   184,     1,    99,     1,    99,    81,
      81,    81,    81,    81,    81,    81,   135,   135,    81,     1,
      79,     1,    77,    78,    79,    77,    77,     1,    78,    84,
      84,    81,     1,    81,   171,   173,    84,   171,   173,    79,
     177,     1,    77,   137,    77,     1,    77,     1,    76,   184,
     184,   184,    81,    81,   135,     1,   135,     1,   107,   135,
      84,   171,   171,   177,   177,    77,   177,   135,   177,   177,
     137,   137,   137,    77,   137,    77,   137,    60,   187,    77,
       1,    77,    77,   177,     1,    77,   177,    77,   177,   177,
      99,    99,     1,    99,   177,   177,   177,   177
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   101,   101,   102,   102,
     102,   103,   104,   104,   105,   105,   105,   105,   106,   106,
     106,   107,   107,   107,   107,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     109,   110,   111,   110,   112,   110,   110,   110,   110,   110,
     113,   113,   113,   113,   113,   113,   114,   114,   115,   116,
     115,   117,   115,   118,   115,   115,   119,   120,   119,   121,
     119,   119,   122,   122,   122,   122,   123,   124,   123,   125,
     123,   126,   123,   127,   123,   123,   128,   128,   128,   128,
     128,   129,   129,   129,   130,   130,   130,   131,   131,   131,
     132,   132,   132,   133,   133,   133,   134,   134,   134,   134,
     134,   135,   135,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   137,   137,   137,   137,   138,   139,
     139,   139,   139,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   141,   141,   141,   143,   142,   142,
     142,   144,   144,   144,   144,   144,   144,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   146,   146,   146,   146,   146,   146,   146,
     147,   147,   148,   148,   149,   149,   149,   149,   150,   150,
     150,   150,   150,   151,   151,   151,   151,   152,   152,   152,
     153,   153,   153,   153,   153,   153,   153,   154,   154,   154,
     154,   155,   155,   155,   155,   156,   157,   157,   157,   157,
     158,   158,   159,   159,   160,   160,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   162,   162,   162,
     162,   162,   162,   163,   163,   164,   164,   164,   165,   165,
     165,   166,   166,   166,   167,   167,   167,   168,   168,   168,
     168,   169,   169,   169,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   171,   171,   171,   171,   171,
     171,   172,   172,   172,   172,   172,   172,   173,   173,   174,
     174,   175,   175,   175,   175,   176,   176,   177,   177,   177,
     177,   177,   177,   178,   179,   178,   180,   178,   178,   178,
     178,   181,   181,   181,   182,   182,   183,   183,   184,   184,
     184,   185,   185,   186,   187,   185,   185,   185,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   190,   190,   191,   191,   193,   194,   192,   195,
     192,   196,   196
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     6,     6,     6,     6,     1,     3,
       3,     3,     3,     3,     3,     1,     4,     3,     4,     3,
       3,     2,     2,     6,     7,     4,     4,     4,     1,     3,
       3,     1,     0,     3,     0,     3,     2,     2,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     0,
       4,     0,     4,     0,     4,     3,     1,     0,     4,     0,
       4,     3,     1,     3,     3,     3,     1,     0,     4,     0,
       4,     0,     4,     0,     4,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     5,     5,     5,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     1,     2,
       3,     1,     3,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     3,     2,     0,     4,     1,
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
       1,     1,     1,     3,     0,     5,     0,     4,     3,     3,
       3,     2,     3,     3,     1,     2,     1,     1,     1,     2,
       2,     7,     5,     0,     0,     7,     3,     4,     5,     7,
       6,     7,     6,     7,     5,     5,     7,     7,     7,     7,
       7,     3,     2,     2,     2,     3,     2,     3,     2,     2,
       3,     2,     1,     2,     1,     1,     0,     0,     6,     0,
       4,     1,     2
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
#line 3263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 76 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 80 "bison.y" /* yacc.c:1646  */
    { process_literal(I_CONSTANT); }
#line 3275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 96 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 97 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 98 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 106 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 113 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 114 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 120 "bison.y" /* yacc.c:1646  */
    { call_functionNoParams(); }
#line 3317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 124 "bison.y" /* yacc.c:1646  */
    { save_op(); eval_unary(); }
#line 3323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 125 "bison.y" /* yacc.c:1646  */
    { save_op(); eval_unary(); }
#line 3329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 138 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 139 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 140 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 152 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 157 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 157 "bison.y" /* yacc.c:1646  */
    { eval_unary(); }
#line 3365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 158 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 158 "bison.y" /* yacc.c:1646  */
    { eval_unary(); }
#line 3377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 188 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 188 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 189 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 189 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 190 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 190 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 194 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 199 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 199 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 200 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 200 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 205 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 213 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 218 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 218 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 219 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 219 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 220 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 220 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 221 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 221 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 233 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 234 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 240 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 246 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 252 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 258 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 264 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 270 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 271 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 272 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 277 "bison.y" /* yacc.c:1646  */
    {process_assign();}
#line 3569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 284 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 285 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 286 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 287 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 288 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 289 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 290 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 291 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 292 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 293 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 294 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 301 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 302 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 310 "bison.y" /* yacc.c:1646  */
    { declaration_end(); }
#line 3653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 311 "bison.y" /* yacc.c:1646  */
    { declaration_end(); }
#line 3659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 316 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 323 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 325 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 327 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 329 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 331 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 332 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 338 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 342 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 342 "bison.y" /* yacc.c:1646  */
    { process_assign(); }
#line 3719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 343 "bison.y" /* yacc.c:1646  */
    { initializeID(); }
#line 3725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 344 "bison.y" /* yacc.c:1646  */
    { 
					if(yychar == IDENTIFIER || yychar == I_CONSTANT || yychar == F_CONSTANT)
						yyerrok; 

					yyclearin;  
					clearSemanticRecords(); }
#line 3736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 384 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 385 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 386 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 387 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 407 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 415 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 421 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 422 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 441 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 442 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 450 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 451 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 458 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 460 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 490 "bison.y" /* yacc.c:1646  */
    { save_id(); }
#line 3826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 508 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 509 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 510 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 514 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 515 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 516 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 517 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 527 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 528 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 542 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 548 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 562 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 569 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 570 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 610 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 611 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 612 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 620 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 621 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 627 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 638 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 639 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 644 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 658 "bison.y" /* yacc.c:1646  */
    { begin_case(); }
#line 3970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 658 "bison.y" /* yacc.c:1646  */
    { /*end_case();*/}
#line 3976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 659 "bison.y" /* yacc.c:1646  */
    { create_default(); }
#line 3982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 659 "bison.y" /* yacc.c:1646  */
    { append_exit(); }
#line 3988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 661 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 662 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 663 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 671 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 688 "bison.y" /* yacc.c:1646  */
    {  yyerrok; }
#line 4018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 694 "bison.y" /* yacc.c:1646  */
    { start_switch(); }
#line 4024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 694 "bison.y" /* yacc.c:1646  */
    { save_comparator(); }
#line 4030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 694 "bison.y" /* yacc.c:1646  */
    { end_switch(); }
#line 4036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 697 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 698 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 719 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 720 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 724 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 725 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 726 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 739 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 740 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 749 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 750 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 751 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 752 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 753 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 754 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 768 "bison.y" /* yacc.c:1646  */
    { start_function(); stackPos -= 4; }
#line 4132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 768 "bison.y" /* yacc.c:1646  */
    { inContext = TRUE; pushTable(); }
#line 4138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 768 "bison.y" /* yacc.c:1646  */
    { end_function(); unDecleared = FALSE; inContext = FALSE; popTable(); stackPos -= 4; }
#line 4144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 773 "bison.y" /* yacc.c:1646  */
    { inContext = TRUE;  start_function(); stackPos -= 4; pushTable(); }
#line 4150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 777 "bison.y" /* yacc.c:1646  */
    { end_function(); unDecleared = FALSE; inContext = FALSE;  popTable(); stackPos -= 4;}
#line 4156 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4160 "y.tab.c" /* yacc.c:1646  */
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


#include "semanticActions.c"



