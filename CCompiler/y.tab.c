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
#include "semanticStructs.h"
#define FALSE 0
#define TRUE 1
#define CWHT  "\x1B[0m"
#define CWHTN  "\x1B[1m"

void save_type(void);
void process_literal(void);
void process_id(void);
void save_id(void);
void process_op(void);
void declaration_end(void);

void yyerror(const char *);
extern int getToken(void);
extern char* yytext;
extern void print(void);

extern char* previousToken;

#define yylex getToken
#define YYERROR_VERBOSE 1

int errorFound = 0;
int inDeclaration = FALSE;


#line 101 "y.tab.c" /* yacc.c:339  */

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

#line 302 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   9388

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  402
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  711

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
       0,    56,    56,    57,    58,    59,    60,    61,    62,    66,
      67,    68,    72,    76,    77,    81,    82,    83,    87,    88,
      90,    94,    95,    97,    98,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   113,   114,   116,   117,   119,
     120,   122,   123,   124,   131,   132,   135,   136,   140,   141,
     142,   143,   144,   145,   146,   154,   155,   156,   157,   158,
     159,   163,   164,   171,   172,   173,   174,   175,   176,   177,
     178,   182,   183,   184,   186,   187,   189,   193,   194,   195,
     196,   197,   201,   202,   203,   204,   205,   207,   209,   214,
     215,   216,   217,   218,   222,   223,   224,   228,   229,   230,
     234,   235,   236,   240,   241,   242,   246,   247,   248,   252,
     253,   254,   255,   256,   260,   261,   263,   264,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   282,
     283,   285,   286,   290,   294,   295,   296,   298,   299,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     319,   320,   321,   325,   326,   327,   331,   332,   333,   334,
     335,   336,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   359,   360,
     361,   362,   363,   364,   365,   369,   370,   374,   375,   379,
     380,   381,   385,   389,   390,   391,   392,   393,   397,   398,
     399,   400,   404,   405,   406,   414,   415,   416,   417,   418,
     419,   420,   425,   426,   428,   429,   433,   434,   436,   438,
     442,   446,   447,   448,   449,   453,   454,   458,   459,   463,
     464,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   486,   487,   488,   492,   493,
     494,   495,   500,   501,   502,   503,   505,   506,   507,   511,
     512,   517,   518,   520,   524,   525,   526,   531,   532,   533,
     537,   538,   540,   544,   545,   547,   548,   552,   553,   554,
     558,   559,   560,   561,   562,   563,   564,   565,   566,   567,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   584,   585,   586,   588,   589,   590,   594,   595,   596,
     597,   598,   599,   603,   605,   609,   610,   614,   615,   616,
     617,   621,   622,   626,   627,   628,   629,   630,   631,   635,
     636,   637,   639,   640,   641,   642,   646,   647,   648,   652,
     653,   657,   658,   662,   663,   665,   669,   670,   671,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   685,   686,
     687,   688,   689,   690,   694,   695,   696,   697,   699,   700,
     701,   702,   703,   705,   707,   708,   709,   711,   712,   713,
     714,   715,   716,   717,   721,   722,   723,   724,   725,   726,
     727,   728,   729,   730,   731,   735,   736,   740,   741,   745,
     746,   759,   760
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
  "function_definition", "declaration_list", YY_NULLPTR
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

#define YYPACT_NINF -479

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-479)))

#define YYTABLE_NINF -351

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    8904,  9071,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,    18,   -48,   -38,  -479,
     -35,  -479,  -479,    41,  3811,  3882,  -479,   226,  -479,  -479,
    3953,  4024,  4095,  -479,  8849,  -479,  -479,  -479,   -32,    57,
    5377,  9283,  5847,   531,  -479,   260,   304,  -479,    14,  -479,
    4166,   -24,   320,  -479,  -479,  9126,  3598,  9126,  -479,  -479,
    -479,  -479,  -479,    57,  -479,   106,   137,  -479,  8353,  -479,
    -479,  -479,  -479,  -479,  7735,  7823,  7823,  -479,   -13,    -8,
    5467,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,   552,  -479,  7845,  -479,  1125,  1513,  1610,  2483,  2871,
       9,    35,   117,   192,  3065,  -479,   149,   933,   245,  4865,
     158,   183,   228,   241,  -479,  -479,  -479,   494,   494,   170,
     398,  -479,   515,   260,   260,  -479,  5287,  3252,  7581,  -479,
      41,  -479,  8628,  8683,  7075,   -24,  9317,  8408,  -479,   101,
    -479,  9126,  9126,  8463,   200,  7845,  5869,    57,    47,  -479,
    9317,  8023,  7163,  -479,    -1,  -479,   215,  5467,  -479,  5467,
    -479,  -479,  9283,  5959,  8243,  1023,  -479,  -479,   221,   268,
     370,  -479,  -479,  5713,  5981,   382,  -479,  7845,  6003,  6093,
    6115,  7845,  6137,  6227,  7845,  7845,  6249,  7845,  7845,  7845,
    6271,  7845,  7845,  7845,  6361,  6383,  6405,  6495,  6517,  7845,
    6539,  6629,  -479,  -479,   494,  -479,  -479,  -479,  -479,   328,
     359,  -479,  -479,  -479,  -479,  -479,  -479,    65,  -479,  5601,
    -479,  -479,   319,  6651,   321,   207,   341,   254,  4221,   261,
      90,    26,    69,   660,  -479,  -479,    25,  -479,  -479,  -479,
    -479,  3342,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    8738,  -479,  -479,   240,   275,   224,  -479,   250,  5557,  -479,
     326,   343,  7185,  -479,  -479,  7845,  -479,    84,  -479,   366,
    8518,  8573,  3669,  -479,    57,    94,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  8133,  9071,  -479,   373,   381,  7339,
    -479,   385,   392,  7207,   215,  8793,  7295,   371,   391,   408,
     405,   410,   407,  7845,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  6673,  7845,  -479,  6763,   412,
    7603,  -479,   415,  -479,   279,  -479,   421,     3,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  1222,  -479,  1319,  -479,
    1416,  1707,  1804,  -479,  1901,  1998,  2095,  2192,  -479,  2289,
    2386,  2580,  2677,  -479,  2774,  -479,  2968,  -479,     9,  -479,
      35,  -479,   117,   235,  -479,   192,   414,   269,   427,   428,
    7581,   -11,  6785,   504,  -479,   201,  7581,   114,  -479,  4265,
     429,   431,  4355,  7845,  6807,  6897,  7845,  6919,   451,   453,
    8904,  3432,  -479,    70,  -479,  -479,  -479,  -479,  -479,  -479,
     125,  7845,  -479,   857,  -479,  -479,  -479,  7968,  -479,   286,
    -479,  -479,  -479,  8959,  9015,   514,  -479,   519,  7691,   444,
    5579,  -479,  -479,  7845,  -479,   446,   447,  -479,  8078,   178,
    -479,  7845,  -479,  3740,  -479,  -479,  7913,  -479,  -479,   449,
    7339,  -479,  -479,  7845,  -479,   450,  -479,   458,  7339,  -479,
     455,   457,  7317,   441,   441,  -479,  9181,  9215,  7559,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  5691,  -479,  -479,  7845,
    -479,  6941,  -479,  7845,  -479,  7845,  7845,  7845,  7845,  7845,
     440,   442,   459,  -479,   464,    63,  -479,  7559,  7427,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  5085,  4398,  -479,  -479,
    3162,   470,   331,   473,   338,   348,   479,   353,   484,   274,
    5175,  3522,  4921,  4952,  -479,  -479,  7845,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,   485,  -479,   486,   491,   492,
    -479,  -479,  -479,   494,  -479,  -479,  -479,   495,   501,  -479,
    -479,   502,  7339,  -479,  -479,  7845,  -479,   503,    30,     0,
    -479,   506,  8298,   194,   208,     2,   219,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  7581,  -479,  -479,  7581,  -479,  -479,  -479,  5085,  7845,
    4488,  5085,  4531,  5085,  5085,  5085,  4621,  7845,  7845,  7031,
    7845,   511,  7845,  5735,  7713,  5825,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,   508,   509,  -479,  7845,  7053,  -479,  9249,
    7845,  -479,  -479,  7559,  7449,  -479,   512,  -479,  7471,  -479,
    -479,  -479,   549,   550,   551,  -479,  -479,  -479,  -479,  -479,
     535,  -479,  -479,  -479,   362,   375,   537,   387,   393,  5085,
     402,   540,  5085,   409,  5085,   422,  5042,  5085,   443,  -479,
    -479,  -479,  -479,  -479,  8188,  -479,  -479,  -479,  -479,  -479,
    5085,  5085,  4664,   520,   521,   524,  5197,    71,  5085,  -479,
    5085,  5085,  -479,  5085,  4754,  -479,  5085,  5085,  -479,  -479,
    4797,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479
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
       0,   254,     0,     0,     0,   135,     0,     0,     0,   401,
       0,   400,     0,     0,     0,   229,     0,     0,   187,     0,
     191,     0,     0,     0,     0,     0,     0,   211,     0,   205,
       0,     0,     0,   197,   278,   275,   279,     0,    52,     0,
      49,    50,     0,     0,     0,     0,   114,   129,     0,     0,
       0,    31,    32,     0,     0,     0,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   228,   193,   276,   273,   195,   227,   220,     0,
       0,   260,   245,   232,   256,   252,   152,     0,   151,     0,
     303,   155,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   336,   343,     0,   341,   342,   323,
     324,     0,   339,   325,   326,   327,   328,   153,   402,   399,
       0,   270,   243,     0,     0,     0,   264,     0,     0,   233,
      56,     0,     0,   181,   188,     0,   189,     0,   198,   204,
       0,     0,     0,   178,   210,     0,   207,   219,   218,   216,
     215,   214,   206,   213,     0,     0,   297,     0,     0,     0,
     281,    56,     0,     0,   277,     0,     0,     0,     0,     0,
       0,     0,     7,     0,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   118,     0,     8,     5,     0,     0,
       0,    30,     0,    27,     0,    44,     0,     0,    29,    70,
      67,    64,    68,    65,    69,    66,     0,    74,     0,    75,
       0,     0,     0,    80,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    92,     0,    96,     0,    99,    98,   102,
     101,   105,   104,     0,   108,   107,     0,     0,     0,     0,
       0,     0,     0,     0,   308,     0,     0,     0,   315,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   394,     0,   392,   385,   391,   386,   389,   387,
       0,   345,   344,     0,   337,   340,   250,     0,   267,   278,
     268,   249,   242,     0,     0,   251,   244,     0,     0,     0,
       0,   234,   241,     0,   240,    56,     0,   202,     0,     0,
     190,     0,   183,     0,   179,   208,     0,   298,   280,     0,
       0,   282,   288,     0,   287,     0,   299,     0,     0,   289,
      56,     0,     0,    53,     0,    54,     0,     0,     0,   116,
     117,   115,   132,   131,   130,    43,     0,    62,    36,    41,
      28,     0,    35,    42,    26,     0,     0,     0,     0,     0,
       0,     0,     0,   304,     0,     0,   318,   306,     0,   301,
     307,   314,   313,   316,   332,   329,     0,     0,   335,   331,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   393,   384,   390,   388,   263,   266,
     261,   265,   272,   271,   248,     0,   236,     0,     0,     0,
     237,   239,   201,   200,   199,   203,   284,     0,     0,   286,
     300,     0,     0,   290,   296,     0,   295,     0,     0,     0,
      18,     0,     0,     0,     0,     0,     0,    47,    46,    45,
     113,   111,   112,   110,   322,   321,   305,   319,   320,   317,
     311,     0,   302,   310,     0,   333,   334,   330,     0,   351,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   246,   247,   235,   238,
     283,   285,   292,     0,     0,   293,     0,     0,    16,     0,
       0,    17,    15,     0,     0,    37,     0,    38,     0,    33,
     312,   309,   354,   355,   347,   356,   357,   348,   367,   364,
     129,   366,   365,   358,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   291,
     294,    24,    23,    22,     0,    19,    21,    39,    40,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   373,
       0,     0,   362,     0,     0,   377,     0,     0,   379,   360,
       0,   349,   352,   353,   346,   368,   372,   369,   371,   370,
     359,   383,   378,   380,   382,   381,   363,   374,   375,   376,
     361
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -479,  -479,  -479,  -479,  -479,  -479,   157,     6,  -479,  -479,
     638,  -479,   -34,   -93,   225,   406,   230,   413,   423,   424,
     425,   426,  -479,   -27,    61,  -479,   184,   -44,   -23,   198,
    -479,   148,  -479,   151,  -479,  -479,   115,  -123,   -64,  -479,
       4,  -479,   562,  -125,  -479,     5,  -479,  -479,   -26,   -50,
     -56,   -54,  -133,  -479,    58,  -479,   -33,  -102,  -151,  -127,
    -433,  -478,  -479,   251,   -31,   120,  -479,    46,  -479,   386,
    -347,  -479,  -479,  -479,  -479,   595,  -479,  -479
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    97,    98,    75,    99,   100,   559,   560,   101,   334,
     175,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   176,   177,   325,   246,   116,    32,    47,
      58,    59,    34,   117,    36,    37,   147,   148,   118,   277,
     278,    38,    76,    77,    39,   119,    41,    42,   227,    61,
      62,   127,   297,   265,   266,   267,   561,   165,   166,   384,
     385,   386,   387,   388,    43,   248,   249,   250,   251,   252,
     253,   254,   255,   256,    44,    45,    46,   142
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     131,   149,   132,   149,   483,    40,    40,    60,   123,   231,
     264,   257,   145,   304,   163,   133,   215,   120,   121,   581,
     584,    48,   164,   115,   274,   115,   411,   404,    50,   129,
     274,   616,   290,   293,   150,   564,   150,   139,    51,    40,
      40,    52,    53,   566,    54,    40,    40,    40,   291,    40,
      74,    73,   143,   213,   523,   216,   144,   179,   126,   298,
      74,   126,   164,   172,   578,    40,   380,   492,   173,   186,
     406,   524,   699,   493,   224,   161,   225,   618,   619,   162,
     626,   328,   163,   149,   484,   438,   627,   149,   149,   149,
     272,   402,   134,   403,   205,   291,   163,    74,   346,   348,
     350,    49,   128,   328,    54,   164,   141,   155,   303,   617,
     163,   287,   289,   135,   247,   501,   150,    55,   164,   258,
     150,   150,   150,   279,   412,   405,   526,    56,   115,   115,
     206,   292,   221,   126,   307,   126,   308,   221,   157,   309,
      57,    40,    40,  -154,   579,   581,   584,    40,    40,   126,
     584,    35,    35,   339,   341,   343,   345,   274,   274,   290,
     293,   420,   439,   138,  -154,   294,    40,   126,   407,   525,
     700,   222,   457,   600,   601,   603,   605,    55,   445,   543,
     275,    54,   153,   440,  -217,    35,    35,    56,   259,   391,
    -217,    35,    35,    35,   382,    35,   383,   230,    33,   230,
     276,   284,   497,   328,   156,   271,   115,   419,   393,   623,
     208,    35,   502,   207,   430,   158,   149,   149,   163,   126,
     623,   159,   326,   302,   527,   423,   212,    65,   247,    66,
     216,   437,    63,    64,   311,   217,   485,   418,    68,    69,
      70,   128,    33,    54,   335,   450,   214,   223,   115,   150,
     150,   425,   462,   231,    55,   396,    40,   275,   140,   500,
     218,   128,   400,    54,    56,    40,   280,   281,   304,   329,
     488,   622,   619,   126,   178,   598,   421,   221,   285,   498,
     479,   226,   228,   394,   286,   499,   624,    35,    35,    54,
     230,   305,   625,    35,    35,   306,   477,   628,   327,   328,
     446,  -262,   424,   629,   126,   130,   219,  -255,   221,    67,
      40,   126,    35,   328,   486,   298,   417,  -269,  -269,   220,
     162,   161,  -274,    54,  -274,   162,    56,   426,   427,   429,
     397,    56,   589,   436,   378,   140,    55,   401,   495,   485,
     140,   263,     9,    10,    11,   330,    56,   328,   489,   485,
     599,   178,   422,   178,   595,   115,   480,   481,   399,   263,
     449,   419,   417,   485,   455,   379,   162,   461,   337,   145,
     580,   583,   329,   331,   469,   124,   485,   520,   522,   163,
    -255,  -255,  -255,  -255,  -255,   338,   471,   472,   676,   474,
      56,   129,   329,   373,   485,   377,    55,   545,   389,   128,
     392,  -257,    35,   485,   552,    40,    40,   431,   590,   328,
     683,    35,   279,   279,   115,   592,   328,   395,    40,   351,
     352,   354,    40,   485,   432,   593,   328,   410,    40,    40,
     596,   328,   361,   362,   364,   221,     9,    10,    11,   673,
     328,   230,   542,   544,   485,   441,    35,   230,   463,   140,
     447,    40,   674,   328,   630,   221,    35,   631,   448,   570,
     571,   572,   573,   126,   677,   328,   451,   221,   464,   124,
     678,   328,   472,   452,  -257,  -257,  -257,  -257,  -257,   680,
     328,   529,   531,   466,    56,   465,   684,   328,   467,   535,
     468,   538,   478,   487,   539,   475,   580,   583,   163,   686,
     328,   583,   482,   263,   490,   491,   164,   496,   506,   505,
     507,   547,   509,   518,   548,   519,   128,   532,  -253,   551,
     690,   328,   533,   557,   476,   536,    40,   540,   541,   230,
     546,   549,     9,    10,    11,   550,   553,   230,   554,   574,
     567,   575,   569,   576,   472,   577,   472,   588,   126,   472,
     591,    35,    35,     9,    10,    11,   594,   221,   230,   230,
     597,   180,   181,   182,    35,   124,   606,   607,    35,     9,
      10,    11,   608,   609,    35,    35,   610,   510,   512,   514,
     515,   517,   611,   612,   615,   620,   124,   472,   649,   659,
     660,  -253,  -253,  -253,  -253,  -253,   668,    35,   140,   140,
     163,    56,   124,   355,   356,   357,   359,   360,   164,   670,
     671,   672,  -132,   613,   675,   263,   614,   681,   366,   695,
     696,   263,   263,   697,   563,   665,   585,   587,   183,   368,
     125,   370,   184,   372,   185,   154,   375,   415,   503,    72,
       0,     0,   230,     0,    68,   230,     0,     0,     0,     0,
     472,     0,     0,     0,     0,     0,   640,     0,     0,     0,
       0,   408,     0,    79,    80,    81,    82,    83,    84,     0,
      85,    86,    35,     0,     0,     0,     0,   661,   663,     0,
       0,   666,     0,     0,   230,   230,     0,     0,   102,   230,
     102,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   632,     0,
     634,   635,   637,   638,   639,   641,   643,     0,     0,     0,
       0,     0,   168,   170,   171,     0,     0,     0,     0,     0,
      88,     0,    89,     0,     0,     0,    90,   472,     0,     0,
       0,   102,     0,     0,   640,    91,    92,    93,    94,    95,
      96,     0,     0,     0,     0,     0,     0,     0,     0,   409,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   679,
       0,     0,   682,     0,   685,     0,   688,   689,     0,     0,
       0,   644,   645,   647,   648,     0,   650,   653,   655,   658,
     691,   692,   694,   102,   102,     0,     0,     0,   701,     0,
     702,   703,     0,   704,   706,     0,   707,   708,     0,     0,
     710,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,     0,   102,     0,
       0,     0,     0,     0,     0,     0,     0,  -338,     1,     0,
    -338,  -338,  -338,  -338,  -338,  -338,     0,  -338,  -338,     0,
       0,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,  -338,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   102,  -338,  -338,  -338,  -338,  -338,  -338,
    -338,  -338,  -338,  -338,  -338,  -338,    27,  -338,    28,  -338,
      29,  -338,    31,  -338,   146,     0,  -194,     0,     0,     0,
    -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,     0,     0,
       0,     0,     0,     0,     0,     0,  -338,     0,     0,     0,
       0,     0,     0,     2,     0,     0,     0,     0,   102,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,  -194,
    -194,     0,  -194,  -194,     0,     0,     0,     0,     0,  -194,
     102,     0,     0,     0,   313,     0,   -61,   -61,   -61,   -61,
     -61,   -61,  -194,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   102,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,     0,   -61,     0,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   324,   -61,     0,   102,   102,   187,   102,   -71,   -71,
     -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,   -71,     0,   -71,   -71,
     -71,   188,   -71,   -71,   -71,   -71,   189,   190,   -71,   -71,
     -71,   -71,   -71,   187,   -71,   -76,   -76,   -76,   -76,   -76,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,   -76,     0,   -76,   -76,   -76,   188,   -76,
     -76,   -76,   -76,   189,   190,   -76,   -76,   -76,   -76,   -76,
     187,   -76,   -72,   -72,   -72,   -72,   -72,   -72,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
     -72,     0,   -72,   -72,   -72,   188,   -72,   -72,   -72,   -72,
     189,   190,   -72,   -72,   -72,   -72,   -72,   187,   -72,   -73,
     -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,     0,   -73,
     -73,   -73,   188,   -73,   -73,   -73,   -73,   189,   190,   -73,
     -73,   -73,   -73,   -73,   191,   -73,   -77,   -77,   -77,   -77,
     -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,   -77,     0,   -77,   -77,   -77,   -77,
     192,   193,   -77,   -77,     0,     0,   -77,   -77,   -77,   -77,
     -77,   194,   -77,   -82,   -82,   -82,   -82,   -82,   -82,     0,
     -82,   -82,   195,   196,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,   -82,   -82,   -82,   -82,   -82,   191,   -82,
     -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,     0,
     -81,   -81,   -81,   -81,   192,   193,   -81,   -81,     0,     0,
     -81,   -81,   -81,   -81,   -81,   191,   -81,   -78,   -78,   -78,
     -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,   -78,     0,   -78,   -78,   -78,
     -78,   192,   193,   -78,   -78,     0,     0,   -78,   -78,   -78,
     -78,   -78,   191,   -78,   -79,   -79,   -79,   -79,   -79,   -79,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,   -79,     0,   -79,   -79,   -79,   -79,   192,   193,
     -79,   -79,     0,     0,   -79,   -79,   -79,   -79,   -79,   194,
     -79,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,
     195,   196,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,   -87,   -87,   -87,   -87,   -87,   194,   -87,   -85,   -85,
     -85,   -85,   -85,   -85,     0,   -85,   -85,   195,   196,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,   -85,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,     0,   -85,   -85,
     -85,   -85,   -85,   194,   -85,   -86,   -86,   -86,   -86,   -86,
     -86,     0,   -86,   -86,   195,   196,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,     0,   -86,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,   -86,   -86,   -86,   -86,   -86,
     194,   -86,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,
     -83,   195,   196,   -83,   -83,   -83,   -83,   -83,   -83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
     -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,   -83,   -83,   -83,   -83,   -83,   194,   -83,   -84,
     -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,   195,   196,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,   -84,
     -84,   -84,   -84,   -84,   197,   -84,   -89,   -89,   -89,   -89,
     -89,   -89,     0,   -89,   -89,     0,     0,   198,   199,   -89,
     -89,   -89,   -89,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,     0,   -89,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,     0,     0,   200,   201,   -89,   -89,
     -89,   197,   -89,   -93,   -93,   -93,   -93,   -93,   -93,     0,
     -93,   -93,     0,     0,   198,   199,   -93,   -93,   -93,   -93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,     0,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
       0,   -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,     0,     0,   200,   201,   -93,   -93,   -93,   197,   -93,
     -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,     0,
       0,   198,   199,   -90,   -90,   -90,   -90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,     0,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,
     200,   201,   -90,   -90,   -90,   197,   -90,   -91,   -91,   -91,
     -91,   -91,   -91,     0,   -91,   -91,     0,     0,   198,   199,
     -91,   -91,   -91,   -91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     0,   -91,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,     0,     0,   200,   201,   -91,
     -91,   -91,   202,   -91,   -94,   -94,   -94,   -94,   -94,   -94,
       0,   -94,   -94,     0,     0,     0,     0,   203,   204,   -94,
     -94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,     0,   -94,     0,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,     0,     0,     0,     0,   -94,   -94,   -94,   202,
     -94,   -95,   -95,   -95,   -95,   -95,   -95,     0,   -95,   -95,
       0,     0,     0,     0,   203,   204,   -95,   -95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,     0,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,   -95,
       0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,
       0,     0,     0,   -95,   -95,   -95,   209,   -95,  -109,  -109,
    -109,  -109,  -109,  -109,     0,  -109,  -109,     0,     0,     0,
       0,     0,     0,     0,   210,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,     0,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,     0,  -109,     0,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,     0,     0,     0,     0,
       0,     0,   211,   485,  -109,  -350,  -350,  -350,  -350,  -350,
    -350,     0,  -350,  -350,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,     0,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,     0,
     328,     0,     0,     0,     0,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,     1,     0,   232,    80,    81,    82,    83,
      84,  -350,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,    87,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,   233,
     234,   235,     0,   236,   237,   238,   239,   240,   241,   242,
     243,    27,    88,    28,    89,    29,    30,    31,    90,     0,
       0,     0,     0,     0,     0,   137,   244,    91,    92,    93,
      94,    95,    96,   413,     0,   232,    80,    81,    82,    83,
      84,   245,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,    87,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,   233,
     234,   235,     0,   236,   237,   238,   239,   240,   241,   242,
     243,    27,    88,    28,    89,    29,    30,    31,    90,     0,
       0,     0,     0,     0,     0,   137,   414,    91,    92,    93,
      94,    95,    96,   521,     0,    79,    80,    81,    82,    83,
      84,   245,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,    87,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,    88,    28,    89,    29,    30,    31,    90,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,    96,     1,     0,    79,    80,    81,    82,    83,
      84,   245,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,    87,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,    88,    28,    89,    29,     0,    31,    90,   151,
       0,  -180,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,    96,     0,     0,     0,     0,     0,     0,     0,
       0,   245,     0,     0,     0,     0,     0,     0,  -180,     0,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -180,     0,  -180,
     146,  -180,  -184,  -180,  -180,  -180,  -180,  -180,  -180,     0,
       0,   152,     0,     0,  -180,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -180,     0,     2,
       0,  -184,  -184,  -184,  -184,  -184,  -184,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -184,     0,
      28,   146,  -184,  -182,  -184,  -184,  -184,  -184,  -184,  -184,
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
      25,    26,   398,     0,   232,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,    27,     0,    28,     0,    29,
      30,    31,     0,     0,  -154,     0,     0,     0,     0,   137,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   138,  -154,   504,     0,   232,    80,
      81,    82,    83,    84,     0,    85,    86,     0,   233,   234,
     235,     0,   236,   237,   238,   239,   240,   241,   242,   243,
       0,    88,     0,    89,     0,     0,    87,    90,     0,     0,
       0,     0,     0,     0,   137,     0,    91,    92,    93,    94,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
     245,     0,   233,   234,   235,     0,   236,   237,   238,   239,
     240,   241,   242,   243,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,   137,     0,
      91,    92,    93,    94,    95,    96,   508,     0,   232,    80,
      81,    82,    83,    84,   245,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   586,
       0,   232,    80,    81,    82,    83,    84,     0,    85,    86,
       0,     0,   233,   234,   235,     0,   236,   237,   238,   239,
     240,   241,   242,   243,     0,    88,     0,    89,     0,    87,
       0,    90,     0,     0,     0,     0,     0,     0,   137,     0,
      91,    92,    93,    94,    95,    96,     0,     0,     0,     0,
       0,     0,     0,     0,   245,   233,   234,   235,     0,   236,
     237,   238,   239,   240,   241,   242,   243,     0,    88,     0,
      89,     0,     0,     0,    90,     0,     0,     0,     0,     0,
       0,   137,     0,    91,    92,    93,    94,    95,    96,   633,
       0,   232,    80,    81,    82,    83,    84,   245,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   636,     0,   232,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,   233,   234,   235,     0,   236,
     237,   238,   239,   240,   241,   242,   243,     0,    88,     0,
      89,     0,    87,     0,    90,     0,     0,     0,     0,     0,
       0,   137,     0,    91,    92,    93,    94,    95,    96,     0,
       0,     0,     0,     0,     0,     0,     0,   245,   233,   234,
     235,     0,   236,   237,   238,   239,   240,   241,   242,   243,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,   137,     0,    91,    92,    93,    94,
      95,    96,   642,     0,   232,    80,    81,    82,    83,    84,
     245,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   693,     0,   232,    80,    81,
      82,    83,    84,     0,    85,    86,     0,     0,   233,   234,
     235,     0,   236,   237,   238,   239,   240,   241,   242,   243,
       0,    88,     0,    89,     0,    87,     0,    90,     0,     0,
       0,     0,     0,     0,   137,     0,    91,    92,    93,    94,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
     245,   233,   234,   235,     0,   236,   237,   238,   239,   240,
     241,   242,   243,     0,    88,     0,    89,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,   137,     0,    91,
      92,    93,    94,    95,    96,   705,     0,   232,    80,    81,
      82,    83,    84,   245,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   709,     0,
     232,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,   233,   234,   235,     0,   236,   237,   238,   239,   240,
     241,   242,   243,     0,    88,     0,    89,     0,    87,     0,
      90,     0,     0,     0,     0,     0,     0,   137,     0,    91,
      92,    93,    94,    95,    96,     0,     0,     0,     0,     0,
       0,     0,     0,   245,   233,   234,   235,     0,   236,   237,
     238,   239,   240,   241,   242,   243,   146,    88,  -196,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
     137,     0,    91,    92,    93,    94,    95,    96,     0,     0,
       0,     0,     0,     0,     0,     2,   245,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,   602,     0,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,     0,    28,     0,     0,     0,
       0,  -196,  -196,     0,  -196,  -196,     0,     0,     0,     0,
       0,  -196,    87,   604,     0,    79,    80,    81,    82,    83,
      84,     0,    85,    86,  -196,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
     245,     0,    88,     0,    89,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,    96,     0,     0,   232,    80,    81,    82,    83,
      84,   245,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   232,    80,
      81,    82,    83,    84,     0,    85,    86,     0,     0,   233,
     234,   235,     0,   236,   237,   238,   239,   240,   241,   242,
     243,     0,    88,     0,    89,     0,    87,     0,    90,   687,
       0,     0,     0,     0,     0,   137,     0,    91,    92,    93,
      94,    95,    96,     0,     0,     0,     0,     0,     0,     0,
       0,   245,   233,   234,   235,     0,   236,   237,   238,   239,
     240,   241,   242,   243,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,   137,     0,
      91,    92,    93,    94,    95,    96,     0,     0,    79,    80,
      81,    82,    83,    84,   245,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,    88,     0,    89,
       0,     0,     0,    90,   245,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     1,     0,
      79,    80,    81,    82,    83,    84,   698,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,    87,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    88,    28,    89,
      29,     0,    31,    90,     0,     0,     0,     0,     0,     0,
     229,     0,    91,    92,    93,    94,    95,    96,    78,     0,
      79,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,    87,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    28,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,   174,     0,
      79,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,    87,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    28,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,   428,     0,
      79,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     537,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     9,    10,    11,     0,     0,
       0,     0,   381,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     9,    10,    11,
       0,     0,     0,     0,     0,     0,     0,    88,   124,    89,
       0,     0,    87,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
     124,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,   382,     0,   383,   229,     0,    91,    92,    93,    94,
      95,    96,   565,     0,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   332,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   651,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,    89,     0,     0,    87,    90,     0,     0,
       0,   382,     0,   383,   229,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
     333,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,   652,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,   656,     0,    79,    80,
      81,    82,    83,    84,     0,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     288,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,     0,    89,     0,     0,
      87,    90,   657,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
     310,     0,    79,    80,    81,    82,    83,    84,     0,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   336,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   340,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
       0,    89,     0,     0,    87,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,   342,     0,    79,    80,    81,    82,
      83,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   344,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   347,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,    89,     0,     0,    87,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,   349,     0,
      79,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     353,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   358,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,    89,
       0,     0,    87,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,   363,     0,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   365,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   367,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,    89,     0,     0,    87,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,   369,     0,    79,    80,
      81,    82,    83,    84,     0,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   371,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     374,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,     0,    89,     0,     0,
      87,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
     376,     0,    79,    80,    81,    82,    83,    84,     0,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   390,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   470,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
       0,    89,     0,     0,    87,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,   473,     0,    79,    80,    81,    82,
      83,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   494,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   511,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,    89,     0,     0,    87,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,   513,     0,
      79,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     516,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   568,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,    89,
       0,     0,    87,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,   646,     0,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   662,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,    89,     0,     0,    87,    90,     0,   268,
       0,     0,     0,     9,    10,    11,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,    88,   124,    89,     0,     0,
       0,    90,     0,     0,     0,     0,   269,     0,     0,     0,
      91,   270,    93,    94,    95,    96,    79,    80,    81,    82,
      83,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,   299,     0,     0,
       0,     9,    10,    11,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,   433,
       0,     0,     0,     9,    10,    11,     0,     0,     0,     0,
       0,     0,     0,    88,   124,    89,     0,     0,    87,    90,
       0,   453,     0,     0,   300,     9,    10,    11,    91,   301,
      93,    94,    95,    96,     0,    88,   124,    89,     0,     0,
       0,    90,     0,     0,     0,     0,   434,     0,     0,     0,
      91,   435,    93,    94,    95,    96,     0,    88,   124,    89,
       0,     0,     0,    90,     0,     0,     0,     0,   454,     0,
       0,     0,    91,    92,    93,    94,    95,    96,    79,    80,
      81,    82,    83,    84,     0,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,   458,
       0,     0,     0,     9,    10,    11,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,   555,     0,     0,     0,     9,    10,    11,     0,     0,
       0,     0,     0,     0,     0,    88,   124,    89,     0,     0,
      87,    90,     0,     0,     0,     0,   459,     9,    10,    11,
      91,   460,    93,    94,    95,    96,     0,    88,   124,    89,
       0,     0,     0,    90,     0,     0,     0,     0,   556,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
     124,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
      79,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,    89,
       0,     0,    87,    90,     0,     0,     0,   382,     0,   383,
     229,   582,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,   382,
       0,   383,   229,   667,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,   382,     0,   383,   229,   669,    91,    92,    93,    94,
      95,    96,    79,    80,    81,    82,    83,    84,     0,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
       0,    89,     0,     0,    87,    90,     0,     0,     0,   382,
       0,   383,   229,     0,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,   229,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,   476,     0,    91,    92,
      93,    94,    95,    96,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,    89,     0,     0,    87,    90,     0,     0,
       0,     0,   534,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
     654,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,   167,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,    79,    80,    81,    82,
      83,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,    89,     0,     0,     0,   169,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     1,    88,  -144,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   295,
       0,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,     0,    31,  -144,
    -144,  -144,     0,  -144,     0,     0,     0,     0,     2,  -144,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   295,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,     0,    31,   417,   296,     0,     0,   162,     0,
       0,     0,     0,     2,    56,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   128,
       0,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,     0,    31,   161,
     296,     0,     0,   162,     0,     0,     0,     0,  -192,    56,
       0,     0,     0,     0,     0,     0,  -192,  -192,  -192,  -192,
    -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,  -192,  -192,   146,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -192,
       0,     0,  -192,     0,    55,     0,     0,   275,     0,     0,
       0,     0,  -192,     2,    56,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,  -196,
    -196,     0,  -196,  -196,     0,     0,     0,     0,     2,  -196,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,     0,     0,   161,   -20,   -20,     0,   162,     0,
       0,     0,     0,     2,    56,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,   161,
     312,     0,     0,   162,     0,     0,     0,     0,     2,    56,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,     0,     0,   161,   621,     0,     0,   162,     0,
       0,     0,     0,     2,    56,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   146,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,   161,
       0,     0,     0,   162,     0,     0,     0,     0,     2,    56,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   282,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   273,     2,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   146,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   283,     2,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   443,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   442,     2,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   444,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   260,     0,   261,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,    30,    31,     0,     0,     0,     0,     0,     0,
       0,   137,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,     0,    31,     0,
     262,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,     0,    31,     0,   416,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    71,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,     0,    31,     0,
     456,     0,     0,     0,     0,     0,     0,     0,     0,     2,
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
      22,    23,    24,    25,    26,   528,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,    29,     0,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   530,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,     0,    29,     0,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   146,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,     0,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,   562,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,   558,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
     664,     0,    28,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,   558,     0,     0,     0,     0,     0,     2,
       0,     0,     0,     0,    78,     0,    28,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,   558,     0,     0,
       0,     0,     0,     2,     0,     0,     0,     0,   146,     0,
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
      56,    65,    56,    67,     1,     0,     1,    33,    52,   136,
     143,   138,    62,   164,    78,     1,   118,    50,    51,   497,
     498,     3,    78,    50,   147,    52,     1,     1,    76,    55,
     153,     1,   157,   158,    65,   468,    67,    60,    76,    34,
      35,    76,     1,   476,     3,    40,    41,    42,     1,    44,
       3,    83,    76,   117,   401,   119,    80,    90,    53,   161,
       3,    56,   118,    76,     1,    60,     1,    78,    76,   103,
       1,     1,     1,    84,   130,    76,   132,    77,    78,    80,
      78,    78,   146,   147,    81,     1,    84,   151,   152,   153,
     144,     1,    78,     3,    85,     1,   160,     3,   191,   192,
     193,    83,     1,    78,     3,   161,    60,     1,   162,    79,
     174,   155,   156,    99,   137,     1,   147,    76,   174,   142,
     151,   152,   153,   149,    99,    99,     1,    86,   155,   156,
      95,    84,   127,   128,   167,   130,   169,   132,     1,   172,
      99,   136,   137,    78,    81,   623,   624,   142,   143,   144,
     628,     0,     1,   187,   188,   189,   190,   280,   281,   284,
     285,   263,    78,    98,    99,   160,   161,   162,    99,    99,
      99,     1,   305,   520,   521,   522,   523,    76,    84,     1,
      79,     3,    67,    99,    78,    34,    35,    86,   142,   233,
      84,    40,    41,    42,    80,    44,    82,   136,     0,   138,
      99,     1,     1,    78,    98,   144,   233,   263,     1,     1,
      18,    60,    98,    96,   268,    78,   280,   281,   282,   214,
       1,    84,     1,   162,    99,     1,    77,     1,   251,     3,
     294,   275,    34,    35,   173,    77,     1,   263,    40,    41,
      42,     1,    44,     3,   183,   299,     1,    77,   275,   280,
     281,     1,   306,   380,    76,     1,   251,    79,    60,   386,
      77,     1,     1,     3,    86,   260,   151,   152,   419,     1,
       1,    77,    78,   268,    90,     1,     1,   272,    78,    78,
       1,   133,   134,    76,    84,    84,    78,   136,   137,     3,
     229,    76,    84,   142,   143,    80,   330,    78,    77,    78,
     295,    77,    78,    84,   299,     1,    78,     3,   303,    83,
     305,   306,   161,    78,    79,   417,    76,    77,    78,    78,
      80,    76,    77,     3,    79,    80,    86,    77,    78,   268,
      76,    86,     1,   272,     6,   137,    76,    76,   382,     1,
     142,   143,    38,    39,    40,    77,    86,    78,    79,     1,
      76,   167,    77,   169,     1,   382,    77,    78,   238,   161,
     299,   417,    76,     1,   303,     6,    80,   306,   184,   419,
     497,   498,     1,     3,   313,    71,     1,   400,   401,   443,
      76,    77,    78,    79,    80,     3,   325,   326,     1,   328,
      86,   417,     1,   209,     1,   211,    76,   441,    79,     1,
      79,     3,   251,     1,   458,   400,   401,    81,    77,    78,
       1,   260,   438,   439,   441,    77,    78,    76,   413,   194,
     195,   196,   417,     1,    81,    77,    78,   243,   423,   424,
      77,    78,   202,   203,   204,   430,    38,    39,    40,    77,
      78,   380,   438,   439,     1,    79,   295,   386,    77,   251,
      77,   446,    77,    78,   581,   450,   305,   584,    77,   486,
     487,   488,   489,   458,    77,    78,    81,   462,    77,    71,
      77,    78,   411,    81,    76,    77,    78,    79,    80,    77,
      78,   423,   424,    78,    86,    77,    77,    78,    78,   428,
      83,   430,    77,    79,   433,    83,   623,   624,   562,    77,
      78,   628,    81,   305,    77,    77,   562,     3,    79,   389,
      79,   450,   392,    62,   453,    62,     1,     3,     3,   458,
      77,    78,     3,   462,    83,    81,   521,    81,    81,   468,
      81,    81,    38,    39,    40,    77,    81,   476,    81,    99,
     479,    99,   481,    84,   483,    81,   485,    77,   543,   488,
      77,   400,   401,    38,    39,    40,    77,   552,   497,   498,
      76,     9,    10,    11,   413,    71,    81,    81,   417,    38,
      39,    40,    81,    81,   423,   424,    81,   393,   394,   395,
     396,   397,    81,    81,    81,    79,    71,   526,    77,    81,
      81,    76,    77,    78,    79,    80,    84,   446,   400,   401,
     664,    86,    71,   197,   198,   199,   200,   201,   664,    60,
      60,    60,    77,   552,    77,   417,   555,    77,   205,    99,
      99,   423,   424,    99,   467,   619,   506,   507,    76,   206,
      99,   207,    80,   208,    82,    73,   210,   251,   387,    44,
      -1,    -1,   581,    -1,   446,   584,    -1,    -1,    -1,    -1,
     589,    -1,    -1,    -1,    -1,    -1,   595,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,   521,    -1,    -1,    -1,    -1,   616,   617,    -1,
      -1,   620,    -1,    -1,   623,   624,    -1,    -1,    50,   628,
      52,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   588,    -1,
     590,   591,   592,   593,   594,   595,   596,    -1,    -1,    -1,
      -1,    -1,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,   676,    -1,    -1,
      -1,   103,    -1,    -1,   683,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   649,
      -1,    -1,   652,    -1,   654,    -1,   656,   657,    -1,    -1,
      -1,   597,   598,   599,   600,    -1,   602,   603,   604,   605,
     670,   671,   672,   155,   156,    -1,    -1,    -1,   678,    -1,
     680,   681,    -1,   683,   684,    -1,   686,   687,    -1,    -1,
     690,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,    -1,   210,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,   233,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,   275,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,     1,    -1,     3,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,   330,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    76,
      77,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    86,
     382,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    99,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,   441,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    -1,   486,   487,     1,   489,     3,     4,
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
      -1,    10,    11,    -1,    -1,    -1,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    95,    96,    97,     1,
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
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    97,     1,    99,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      78,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,     1,    -1,     3,     4,     5,     6,     7,
       8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,     1,    -1,     3,     4,     5,     6,     7,
       8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,     1,    -1,     3,     4,     5,     6,     7,
       8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,     1,    -1,     3,     4,     5,     6,     7,
       8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    75,    76,     1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
       1,    73,     3,    75,    76,    77,    78,    79,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    30,
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
      55,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    76,    77,    -1,    79,    80,    -1,    -1,    -1,    -1,
      -1,    86,    31,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    -1,     3,     4,     5,     6,     7,
       8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    -1,    72,    -1,    31,    -1,    76,    77,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    89,    90,    -1,    -1,     3,     4,
       5,     6,     7,     8,    99,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     1,    -1,
       3,     4,     5,     6,     7,     8,    99,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    89,    90,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    31,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    80,    -1,    82,    83,    -1,    85,    86,    87,    88,
      89,    90,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,
      -1,    80,    -1,    82,    83,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,    34,
      -1,    -1,    -1,    38,    39,    40,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    71,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
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
      31,    76,    -1,    -1,    -1,    -1,    81,    38,    39,    40,
      85,    86,    87,    88,    89,    90,    -1,    70,    71,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    31,    76,    -1,    -1,    -1,    80,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    70,
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
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    89,    90,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,     1,    70,     3,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    76,
      77,    78,    -1,    80,    -1,    -1,    -1,    -1,    30,    86,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    76,    77,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    30,    86,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    76,
      77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    30,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    74,    -1,    76,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    84,    30,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    76,
      77,    -1,    79,    80,    -1,    -1,    -1,    -1,    30,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    76,    77,    78,    -1,    80,    -1,
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
      -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    30,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    30,    86,
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
       1,   150,   151,     1,    78,    99,     1,    83,    98,   128,
     129,   167,   177,    76,    80,   149,     1,   136,   137,   138,
     164,     1,    83,   136,   142,     1,    98,     1,    78,    84,
       1,    76,    80,   138,   150,   157,   158,    76,   110,    76,
     110,   110,    76,    76,     1,   110,   123,   124,   126,   156,
       9,    10,    11,    76,    80,    82,   112,     1,    86,    91,
      92,     1,    87,    88,     1,    12,    13,     1,    14,    15,
      93,    94,     1,    16,    17,    85,    95,    96,    18,     1,
      19,    97,    77,   138,     1,   157,   138,    77,    77,    78,
      78,   145,     1,    77,   150,   150,   131,   148,   131,    83,
     124,   159,     3,    57,    58,    59,    61,    62,    63,    64,
      65,    66,    67,    68,    84,    99,   126,   128,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   159,   128,   167,
       1,     3,    77,   129,   152,   153,   154,   155,    34,    81,
      86,   124,   151,    84,   137,    79,    99,   139,   140,   148,
     136,   136,     1,    84,     1,    78,    84,   127,     1,   127,
     143,     1,    84,   143,   145,     1,    77,   152,   157,    34,
      81,    86,   124,   151,   158,    76,    80,   156,   156,   156,
       1,   124,    77,     1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    98,   125,     1,    77,    78,     1,
      77,     3,     1,    77,   109,   124,     1,   126,     3,   112,
       1,   112,     1,   112,     1,   112,   113,     1,   113,     1,
     113,   114,   114,     1,   114,   115,   115,   115,     1,   115,
     115,   116,   116,     1,   116,     1,   117,     1,   118,     1,
     119,     1,   120,   126,     1,   121,     1,   126,     6,     6,
       1,     1,    80,    82,   159,   160,   161,   162,   163,    79,
       1,   127,    79,     1,    76,    76,     1,    76,     1,   165,
       1,    76,     1,     3,     1,    99,     1,    99,     1,    99,
     126,     1,    99,     1,    84,   169,    77,    76,   148,   150,
     157,     1,    77,     1,    78,     1,    77,    78,     1,   124,
     151,    81,    81,    34,    81,    86,   124,   127,     1,    78,
      99,    79,    84,     1,    84,    84,   145,    77,    77,   124,
     151,    81,    81,    34,    81,   124,    77,   152,    34,    81,
      86,   124,   151,    77,    77,    77,    78,    78,    83,   124,
       1,   124,   124,     1,   124,    83,    83,   112,    77,     1,
      77,    78,    81,     1,    81,     1,    79,    79,     1,    79,
      77,    77,    78,    84,     1,   127,     3,     1,    78,    84,
     159,     1,    98,   163,     1,   165,    79,    79,     1,   165,
     126,     1,   126,     1,   126,   126,     1,   126,    62,    62,
     128,     1,   128,   170,     1,    99,     1,    99,    56,   154,
      56,   154,     3,     3,    81,   124,    81,     1,   124,   124,
      81,    81,   140,     1,   140,   127,    81,   124,   124,    81,
      77,   124,   151,    81,    81,    34,    81,   124,    58,   106,
     107,   156,     1,   106,   160,     1,   160,   124,     1,   124,
     123,   123,   123,   123,    99,    99,    84,    81,     1,    81,
     159,   161,    84,   159,   161,   165,     1,   165,    77,     1,
      77,    77,    77,    77,    77,     1,    77,    76,     1,    76,
     170,   170,     1,   170,     1,   170,    81,    81,    81,    81,
      81,    81,    81,   124,   124,    81,     1,    79,    77,    78,
      79,    77,    77,     1,    78,    84,    78,    84,    78,    84,
     159,   159,   165,     1,   165,   165,     1,   165,   165,   165,
     124,   165,     1,   165,   126,   126,     1,   126,   126,    77,
     126,     1,    77,   126,    77,   126,     1,    77,   126,    81,
      81,   124,     1,   124,     1,   107,   124,    84,    84,    84,
      60,    60,    60,    77,    77,    77,     1,    77,    77,   165,
      77,    77,   165,     1,    77,   165,    77,    77,   165,   165,
      77,   165,   165,     1,   165,    99,    99,    99,    99,     1,
      99,   165,   165,   165,   165,     1,   165,   165,   165,     1,
     165
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
     173,   173,   173,   173,   173,   174,   174,   175,   175,   176,
     176,   177,   177
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
       3,     2,     2,     3,     2,     1,     2,     1,     1,     4,
       3,     1,     2
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
        case 7:
#line 61 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 62 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 66 "bison.y" /* yacc.c:1646  */
    { process_literal(); }
#line 3657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 82 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 83 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 90 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 97 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 98 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 113 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 114 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 116 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 117 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 119 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 120 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 122 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 123 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 124 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 135 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 136 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 175 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 176 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 177 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 178 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 186 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 187 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 189 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 196 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 197 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 209 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 217 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 218 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 224 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 230 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 236 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 242 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 248 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 254 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 255 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 256 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 263 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 264 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 285 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 286 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 295 "bison.y" /* yacc.c:1646  */
    { inDeclaration = FALSE;/* save in TS */}
#line 3903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 298 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 299 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 306 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 308 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 310 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 312 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 314 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 315 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 321 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 327 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 362 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 363 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 364 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 365 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 385 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 393 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 399 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 400 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 419 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 420 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 428 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 429 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 436 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 438 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 468 "bison.y" /* yacc.c:1646  */
    { save_id(); }
#line 4053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 486 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 487 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 488 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 492 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 493 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 494 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 495 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 505 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 506 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 507 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 520 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 526 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 540 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 547 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 548 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 588 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 589 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 590 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 598 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 599 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 605 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 616 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 617 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 622 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 639 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 640 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 641 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 642 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 648 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 665 "bison.y" /* yacc.c:1646  */
    {  yyerrok; }
#line 4233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 673 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 674 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 675 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 676 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 677 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 678 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 679 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 680 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 681 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 694 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 695 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 696 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 697 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 699 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 700 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 701 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 702 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 703 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 705 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 707 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 708 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 709 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 711 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 712 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 713 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 714 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 715 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 716 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 717 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 726 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 727 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 728 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 729 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 730 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 731 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4443 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4447 "y.tab.c" /* yacc.c:1646  */
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
#line 763 "bison.y" /* yacc.c:1906  */


//functions
void save_type(void);
void process_literal(void);


void save_type(void)
{
	SemanticRecord *RS;
	
	RS = createSemanticRecord(TYPE);
	RS -> currentToken = previousToken;

	
	pushRecord(RS);
	//printf("%s\n", RS -> currentToken);
	//printList();
}

void save_id(void)
{
	char* token = strdup(yytext);
	if (!search(token))
	{
		SemanticRecord *RS;
	
		RS = createSemanticRecord(ID);
		RS -> currentToken = token;
	
	
		pushRecord(RS);
		//printList();
	}
	else 
	{
		char error[100] = "";
		sprintf(error, "semantic error, redeclaration of %s'%s'%s with no linkage", CWHTN, token, CWHT);
		yyerror(error);
	}
}


void declaration_end(void)
{
	char* tokenValue;
	char* tokenName;

	SemanticRecord *dataType;
	dataType = retrieveRecord(TYPE);

	SemanticRecord *RS;
	RS = getTopRecord();

	while (RS -> kind != TYPE)
	{
		//RECORRER E INSERTAR EN LA TABLA DE SIMBOLOS
	}

	
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

	printList();
}

void process_op(void)
{
	SemanticRecord *RS;
	
	RS = createSemanticRecord(OPERATOR);
	RS -> currentToken = previousToken;

	
	pushRecord(RS);
}




