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
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* "%code top" blocks.  */
#line 22 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"

#include "zend.h"
#include "zend_list.h"
#include "zend_globals.h"
#include "zend_API.h"
#include "zend_constants.h"
#include "zend_language_scanner.h"
#include "zend_exceptions.h"

#define YYSIZE_T size_t
#define yytnamerr zend_yytnamerr
static YYSIZE_T zend_yytnamerr(char*, const char*);

#ifdef _MSC_VER
#define YYMALLOC malloc
#define YYFREE free
#endif

#line 86 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
/* Substitute the type names.  */
#define YYSTYPE         ZENDSTYPE
/* Substitute the variable and function names.  */
#define yyparse         zendparse
#define yylex           zendlex
#define yyerror         zenderror
#define yydebug         zenddebug
#define yynerrs         zendnerrs


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
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_ZEND_HOME_ENORKIN_KOS_TMP_PHP_SRC_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
# define YY_ZEND_HOME_ENORKIN_KOS_TMP_PHP_SRC_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef ZENDDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define ZENDDEBUG 1
#  else
#   define ZENDDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define ZENDDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined ZENDDEBUG */
#if ZENDDEBUG
extern int zenddebug;
#endif
/* "%code requires" blocks.  */
#line 41 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"

#include "zend_compile.h"

#line 150 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"

/* Token type.  */
#ifndef ZENDTOKENTYPE
# define ZENDTOKENTYPE
  enum zendtokentype
  {
    END = 0,
    T_THROW = 258,
    PREC_ARROW_FUNCTION = 259,
    T_INCLUDE = 260,
    T_INCLUDE_ONCE = 261,
    T_REQUIRE = 262,
    T_REQUIRE_ONCE = 263,
    T_LOGICAL_OR = 264,
    T_LOGICAL_XOR = 265,
    T_LOGICAL_AND = 266,
    T_PRINT = 267,
    T_YIELD = 268,
    T_DOUBLE_ARROW = 269,
    T_YIELD_FROM = 270,
    T_PLUS_EQUAL = 271,
    T_MINUS_EQUAL = 272,
    T_MUL_EQUAL = 273,
    T_DIV_EQUAL = 274,
    T_CONCAT_EQUAL = 275,
    T_MOD_EQUAL = 276,
    T_AND_EQUAL = 277,
    T_OR_EQUAL = 278,
    T_XOR_EQUAL = 279,
    T_SL_EQUAL = 280,
    T_SR_EQUAL = 281,
    T_POW_EQUAL = 282,
    T_COALESCE_EQUAL = 283,
    T_COALESCE = 284,
    T_BOOLEAN_OR = 285,
    T_BOOLEAN_AND = 286,
    T_AMPERSAND_NOT_FOLLOWED_BY_VAR_OR_VARARG = 287,
    T_AMPERSAND_FOLLOWED_BY_VAR_OR_VARARG = 288,
    T_IS_EQUAL = 289,
    T_IS_NOT_EQUAL = 290,
    T_IS_IDENTICAL = 291,
    T_IS_NOT_IDENTICAL = 292,
    T_SPACESHIP = 293,
    T_IS_SMALLER_OR_EQUAL = 294,
    T_IS_GREATER_OR_EQUAL = 295,
    T_SL = 296,
    T_SR = 297,
    T_INSTANCEOF = 298,
    T_INT_CAST = 299,
    T_DOUBLE_CAST = 300,
    T_STRING_CAST = 301,
    T_ARRAY_CAST = 302,
    T_OBJECT_CAST = 303,
    T_BOOL_CAST = 304,
    T_UNSET_CAST = 305,
    T_POW = 306,
    T_CLONE = 307,
    T_NOELSE = 308,
    T_ELSEIF = 309,
    T_ELSE = 310,
    T_LNUMBER = 311,
    T_DNUMBER = 312,
    T_STRING = 313,
    T_NAME_FULLY_QUALIFIED = 314,
    T_NAME_RELATIVE = 315,
    T_NAME_QUALIFIED = 316,
    T_VARIABLE = 317,
    T_INLINE_HTML = 318,
    T_ENCAPSED_AND_WHITESPACE = 319,
    T_CONSTANT_ENCAPSED_STRING = 320,
    T_STRING_VARNAME = 321,
    T_NUM_STRING = 322,
    T_EVAL = 323,
    T_NEW = 324,
    T_EXIT = 325,
    T_IF = 326,
    T_ENDIF = 327,
    T_ECHO = 328,
    T_DO = 329,
    T_WHILE = 330,
    T_ENDWHILE = 331,
    T_FOR = 332,
    T_ENDFOR = 333,
    T_FOREACH = 334,
    T_ENDFOREACH = 335,
    T_DECLARE = 336,
    T_ENDDECLARE = 337,
    T_AS = 338,
    T_SWITCH = 339,
    T_ENDSWITCH = 340,
    T_CASE = 341,
    T_DEFAULT = 342,
    T_MATCH = 343,
    T_BREAK = 344,
    T_CONTINUE = 345,
    T_GOTO = 346,
    T_FUNCTION = 347,
    T_FN = 348,
    T_CONST = 349,
    T_RETURN = 350,
    T_TRY = 351,
    T_CATCH = 352,
    T_FINALLY = 353,
    T_USE = 354,
    T_INSTEADOF = 355,
    T_GLOBAL = 356,
    T_STATIC = 357,
    T_ABSTRACT = 358,
    T_FINAL = 359,
    T_PRIVATE = 360,
    T_PROTECTED = 361,
    T_PUBLIC = 362,
    T_READONLY = 363,
    T_VAR = 364,
    T_UNSET = 365,
    T_ISSET = 366,
    T_EMPTY = 367,
    T_HALT_COMPILER = 368,
    T_CLASS = 369,
    T_TRAIT = 370,
    T_INTERFACE = 371,
    T_ENUM = 372,
    T_EXTENDS = 373,
    T_IMPLEMENTS = 374,
    T_NAMESPACE = 375,
    T_LIST = 376,
    T_ARRAY = 377,
    T_CALLABLE = 378,
    T_LINE = 379,
    T_FILE = 380,
    T_DIR = 381,
    T_CLASS_C = 382,
    T_TRAIT_C = 383,
    T_METHOD_C = 384,
    T_FUNC_C = 385,
    T_NS_C = 386,
    T_ATTRIBUTE = 387,
    T_INC = 388,
    T_DEC = 389,
    T_OBJECT_OPERATOR = 390,
    T_NULLSAFE_OBJECT_OPERATOR = 391,
    T_COMMENT = 392,
    T_DOC_COMMENT = 393,
    T_OPEN_TAG = 394,
    T_OPEN_TAG_WITH_ECHO = 395,
    T_CLOSE_TAG = 396,
    T_WHITESPACE = 397,
    T_START_HEREDOC = 398,
    T_END_HEREDOC = 399,
    T_DOLLAR_OPEN_CURLY_BRACES = 400,
    T_CURLY_OPEN = 401,
    T_PAAMAYIM_NEKUDOTAYIM = 402,
    T_NS_SEPARATOR = 403,
    T_ELLIPSIS = 404,
    T_BAD_CHARACTER = 405,
    T_ERROR = 406
  };
#endif

/* Value type.  */
#if ! defined ZENDSTYPE && ! defined ZENDSTYPE_IS_DECLARED
typedef zend_parser_stack_elem ZENDSTYPE;
# define ZENDSTYPE_IS_TRIVIAL 1
# define ZENDSTYPE_IS_DECLARED 1
#endif



ZEND_API int zendparse (void);

#endif /* !YY_ZEND_HOME_ENORKIN_KOS_TMP_PHP_SRC_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED  */



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
typedef yytype_int16 yy_state_t;

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
         || (defined ZENDSTYPE_IS_TRIVIAL && ZENDSTYPE_IS_TRIVIAL)))

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8387

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  179
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  175
/* YYNRULES -- Number of rules.  */
#define YYNRULES  590
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1116

#define YYUNDEFTOK  2
#define YYMAXUTOK   406


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,   177,     2,   178,    55,     2,     2,
     170,   171,    53,    51,   168,    52,    48,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    31,   172,
      44,    16,    46,    30,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   175,     2,   169,    36,     2,   176,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   173,    35,   174,    58,     2,     2,     2,
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
      15,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    32,    33,    34,    37,    38,    39,
      40,    41,    42,    43,    45,    47,    49,    50,    57,    59,
      60,    61,    62,    63,    64,    65,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167
};

#if ZENDDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   296,   296,   300,   300,   300,   300,   300,   300,   300,
     300,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   303,   303,   303,   303,   303,   303,   303,
     303,   303,   303,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   305,   305,   305,   305,   305,   305,
     305,   305,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   310,   311,   311,   311,   311,   311,   311,
     311,   315,   316,   320,   321,   329,   330,   335,   336,   341,
     342,   347,   348,   352,   353,   354,   355,   359,   361,   366,
     368,   373,   377,   378,   382,   383,   384,   385,   386,   390,
     391,   392,   393,   397,   400,   400,   403,   403,   406,   407,
     408,   409,   410,   414,   415,   419,   424,   429,   430,   434,
     436,   441,   443,   448,   450,   455,   456,   460,   462,   467,
     469,   474,   475,   479,   481,   487,   488,   489,   490,   497,
     498,   499,   500,   502,   504,   506,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   519,   523,   522,   526,
     527,   529,   530,   534,   536,   541,   542,   546,   547,   551,
     552,   556,   557,   561,   565,   566,   574,   581,   582,   586,
     587,   591,   591,   594,   594,   600,   601,   606,   607,   608,
     612,   612,   618,   618,   624,   624,   630,   631,   635,   640,
     641,   645,   646,   650,   651,   655,   656,   660,   661,   662,
     663,   667,   668,   672,   673,   677,   678,   682,   683,   684,
     685,   689,   690,   692,   697,   698,   703,   708,   709,   713,
     714,   718,   720,   725,   726,   731,   732,   737,   740,   746,
     747,   752,   755,   761,   762,   768,   769,   774,   776,   781,
     782,   786,   787,   791,   792,   793,   794,   798,   802,   810,
     811,   815,   816,   817,   818,   822,   823,   827,   828,   832,
     834,   839,   840,   847,   848,   849,   850,   854,   855,   856,
     860,   861,   865,   867,   872,   874,   879,   880,   884,   885,
     886,   890,   892,   897,   898,   900,   904,   905,   909,   915,
     916,   920,   921,   925,   927,   933,   936,   939,   943,   947,
     948,   949,   954,   955,   959,   960,   961,   965,   967,   972,
     973,   977,   982,   984,   988,   990,   995,   997,  1001,  1006,
    1007,  1011,  1012,  1016,  1017,  1022,  1023,  1028,  1029,  1030,
    1031,  1032,  1033,  1034,  1038,  1039,  1043,  1045,  1050,  1051,
    1055,  1059,  1063,  1064,  1067,  1071,  1072,  1076,  1077,  1081,
    1081,  1091,  1093,  1095,  1100,  1102,  1104,  1106,  1108,  1110,
    1111,  1113,  1115,  1117,  1119,  1121,  1123,  1125,  1127,  1129,
    1131,  1133,  1135,  1137,  1138,  1139,  1140,  1141,  1143,  1145,
    1147,  1149,  1151,  1152,  1153,  1154,  1155,  1156,  1157,  1158,
    1159,  1160,  1161,  1162,  1163,  1164,  1165,  1166,  1167,  1168,
    1170,  1172,  1174,  1176,  1178,  1180,  1182,  1184,  1186,  1188,
    1192,  1193,  1195,  1197,  1199,  1200,  1201,  1202,  1203,  1204,
    1205,  1206,  1207,  1208,  1209,  1210,  1211,  1212,  1213,  1214,
    1215,  1216,  1217,  1218,  1219,  1220,  1222,  1227,  1232,  1241,
    1245,  1249,  1253,  1257,  1261,  1262,  1266,  1267,  1271,  1272,
    1276,  1277,  1281,  1283,  1288,  1290,  1292,  1292,  1299,  1302,
    1306,  1307,  1308,  1312,  1313,  1317,  1319,  1320,  1325,  1326,
    1331,  1332,  1333,  1334,  1338,  1339,  1340,  1341,  1343,  1344,
    1345,  1346,  1350,  1351,  1352,  1353,  1354,  1355,  1356,  1357,
    1358,  1362,  1364,  1369,  1370,  1374,  1378,  1379,  1380,  1381,
    1385,  1386,  1390,  1391,  1392,  1396,  1398,  1400,  1402,  1404,
    1406,  1410,  1412,  1414,  1416,  1421,  1422,  1423,  1427,  1429,
    1434,  1436,  1438,  1440,  1442,  1444,  1446,  1451,  1452,  1453,
    1457,  1458,  1459,  1463,  1468,  1469,  1473,  1475,  1480,  1482,
    1484,  1486,  1488,  1490,  1493,  1499,  1501,  1503,  1505,  1510,
    1512,  1515,  1518,  1521,  1523,  1525,  1528,  1532,  1533,  1534,
    1535,  1540,  1541,  1542,  1544,  1546,  1548,  1550,  1555,  1556,
    1561
};
#endif

#if ZENDDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "\"'throw'\"",
  "PREC_ARROW_FUNCTION", "\"'include'\"", "\"'include_once'\"",
  "\"'require'\"", "\"'require_once'\"", "\"'or'\"", "\"'xor'\"",
  "\"'and'\"", "\"'print'\"", "\"'yield'\"", "\"'=>'\"",
  "\"'yield from'\"", "'='", "\"'+='\"", "\"'-='\"", "\"'*='\"",
  "\"'/='\"", "\"'.='\"", "\"'%='\"", "\"'&='\"", "\"'|='\"", "\"'^='\"",
  "\"'<<='\"", "\"'>>='\"", "\"'**='\"", "\"'?""?='\"", "'?'", "':'",
  "\"'?""?'\"", "\"'||'\"", "\"'&&'\"", "'|'", "'^'", "\"amp\"", "\"'&'\"",
  "\"'=='\"", "\"'!='\"", "\"'==='\"", "\"'!=='\"", "\"'<=>'\"", "'<'",
  "\"'<='\"", "'>'", "\"'>='\"", "'.'", "\"'<<'\"", "\"'>>'\"", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'!'", "\"'instanceof'\"", "'~'",
  "\"'(int)'\"", "\"'(double)'\"", "\"'(string)'\"", "\"'(array)'\"",
  "\"'(object)'\"", "\"'(bool)'\"", "\"'(unset)'\"", "'@'", "\"'**'\"",
  "\"'clone'\"", "T_NOELSE", "\"'elseif'\"", "\"'else'\"", "\"integer\"",
  "\"floating-point number\"", "\"identifier\"",
  "\"fully qualified name\"", "\"namespace-relative name\"",
  "\"namespaced name\"", "\"variable\"", "T_INLINE_HTML",
  "\"string content\"", "\"quoted string\"", "\"variable name\"",
  "\"number\"", "\"'eval'\"", "\"'new'\"", "\"'exit'\"", "\"'if'\"",
  "\"'endif'\"", "\"'echo'\"", "\"'do'\"", "\"'while'\"", "\"'endwhile'\"",
  "\"'for'\"", "\"'endfor'\"", "\"'foreach'\"", "\"'endforeach'\"",
  "\"'declare'\"", "\"'enddeclare'\"", "\"'as'\"", "\"'switch'\"",
  "\"'endswitch'\"", "\"'case'\"", "\"'default'\"", "\"'match'\"",
  "\"'break'\"", "\"'continue'\"", "\"'goto'\"", "\"'function'\"",
  "\"'fn'\"", "\"'const'\"", "\"'return'\"", "\"'try'\"", "\"'catch'\"",
  "\"'finally'\"", "\"'use'\"", "\"'insteadof'\"", "\"'global'\"",
  "\"'static'\"", "\"'abstract'\"", "\"'final'\"", "\"'private'\"",
  "\"'protected'\"", "\"'public'\"", "\"'readonly'\"", "\"'var'\"",
  "\"'unset'\"", "\"'isset'\"", "\"'empty'\"", "\"'__halt_compiler'\"",
  "\"'class'\"", "\"'trait'\"", "\"'interface'\"", "\"'enum'\"",
  "\"'extends'\"", "\"'implements'\"", "\"'namespace'\"", "\"'list'\"",
  "\"'array'\"", "\"'callable'\"", "\"'__LINE__'\"", "\"'__FILE__'\"",
  "\"'__DIR__'\"", "\"'__CLASS__'\"", "\"'__TRAIT__'\"",
  "\"'__METHOD__'\"", "\"'__FUNCTION__'\"", "\"'__NAMESPACE__'\"",
  "\"'#['\"", "\"'++'\"", "\"'--'\"", "\"'->'\"", "\"'?->'\"",
  "\"comment\"", "\"doc comment\"", "\"open tag\"", "\"'<?='\"",
  "\"'?>'\"", "\"whitespace\"", "\"heredoc start\"", "\"heredoc end\"",
  "\"'${'\"", "\"'{$'\"", "\"'::'\"", "\"'\\\\'\"", "\"'...'\"",
  "\"invalid character\"", "T_ERROR", "','", "']'", "'('", "')'", "';'",
  "'{'", "'}'", "'['", "'`'", "'\"'", "'$'", "$accept", "start",
  "reserved_non_modifiers", "semi_reserved", "ampersand", "identifier",
  "top_statement_list", "namespace_declaration_name", "namespace_name",
  "legacy_namespace_name", "name", "attribute_decl", "attribute_group",
  "attribute", "attributes", "attributed_statement", "top_statement",
  "$@1", "$@2", "use_type", "group_use_declaration",
  "mixed_group_use_declaration", "possible_comma",
  "inline_use_declarations", "unprefixed_use_declarations",
  "use_declarations", "inline_use_declaration",
  "unprefixed_use_declaration", "use_declaration", "const_list",
  "inner_statement_list", "inner_statement", "statement", "$@3",
  "catch_list", "catch_name_list", "optional_variable",
  "finally_statement", "unset_variables", "unset_variable",
  "function_name", "function_declaration_statement", "is_reference",
  "is_variadic", "class_declaration_statement", "@4", "@5",
  "class_modifiers", "class_modifier", "trait_declaration_statement", "@6",
  "interface_declaration_statement", "@7", "enum_declaration_statement",
  "@8", "enum_backing_type", "enum_case", "enum_case_expr", "extends_from",
  "interface_extends_list", "implements_list", "foreach_variable",
  "for_statement", "foreach_statement", "declare_statement",
  "switch_case_list", "case_list", "case_separator", "match",
  "match_arm_list", "non_empty_match_arm_list", "match_arm",
  "match_arm_cond_list", "while_statement", "if_stmt_without_else",
  "if_stmt", "alt_if_stmt_without_else", "alt_if_stmt", "parameter_list",
  "non_empty_parameter_list", "attributed_parameter",
  "optional_property_modifiers", "property_modifier", "parameter",
  "optional_type_without_static", "type_expr", "type",
  "union_type_element", "union_type", "intersection_type",
  "type_expr_without_static", "type_without_static",
  "union_type_without_static_element", "union_type_without_static",
  "intersection_type_without_static", "return_type", "argument_list",
  "non_empty_argument_list", "argument", "global_var_list", "global_var",
  "static_var_list", "static_var", "class_statement_list",
  "attributed_class_statement", "class_statement", "class_name_list",
  "trait_adaptations", "trait_adaptation_list", "trait_adaptation",
  "trait_precedence", "trait_alias", "trait_method_reference",
  "absolute_trait_method_reference", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "property_list", "property", "class_const_list", "class_const_decl",
  "const_decl", "echo_expr_list", "echo_expr", "for_exprs",
  "non_empty_for_exprs", "anonymous_class", "@9", "new_expr", "expr",
  "inline_function", "fn", "function", "backup_doc_comment",
  "backup_fn_flags", "backup_lex_pos", "returns_ref", "lexical_vars",
  "lexical_var_list", "lexical_var", "function_call", "@10", "class_name",
  "class_name_reference", "exit_expr", "backticks_expr", "ctor_arguments",
  "dereferenceable_scalar", "scalar", "constant", "class_constant",
  "optional_expr", "variable_class_name", "fully_dereferenceable",
  "array_object_dereferenceable", "callable_expr", "callable_variable",
  "variable", "simple_variable", "static_member", "new_variable",
  "member_name", "property_name", "array_pair_list", "possible_array_pair",
  "non_empty_array_pair_list", "array_pair", "encaps_list", "encaps_var",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "isset_variable", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    61,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
      63,    58,   284,   285,   286,   124,    94,   287,   288,   289,
     290,   291,   292,   293,    60,   294,    62,   295,    46,   296,
     297,    43,    45,    42,    47,    37,    33,   298,   126,   299,
     300,   301,   302,   303,   304,   305,    64,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,    44,    93,
      40,    41,    59,   123,   125,    91,    96,    34,    36
};
# endif

#define YYPACT_NINF (-919)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-562)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -919,    54,  1763,  -919,  6059,  6059,  6059,  6059,  6059,  6059,
    6059,  6059,  6059,  6059,  6059,  6059,  6059,  6059,  6059,  6059,
    6059,  6059,  6059,  6059,  6059,  -919,  -919,    62,  -919,  -919,
    -919,  -919,  -919,  -919,   -36,   168,   -13,     8,  6059,  4727,
      67,    80,   119,   126,   137,   152,  6059,  6059,    72,  -919,
    -919,    94,  6059,    39,   398,   -19,   275,  -919,  -919,   160,
     162,   236,   265,   267,  -919,  -919,  -919,  -919,  7519,   296,
     304,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,    44,
    7371,  7371,    65,  6059,  -919,  -919,  4875,   143,   189,   -23,
      30,  -919,   855,  -919,  -919,  -919,  -919,  -919,   377,  -919,
    -919,  -919,  -919,  -919,   147,  -919,   271,  -919,  -919,  6845,
    -919,   226,   226,  -919,   154,   453,  -919,   212,   428,   316,
     318,   317,  -919,   340,  1160,  -919,  -919,  -919,  -919,   246,
     160,   240,  8167,   226,  8167,  8167,  8167,  8167,  3836,  8257,
    3836,   118,   118,    29,   118,   118,   118,   118,   118,   118,
     118,   118,   118,  -919,  -919,  6059,  -919,  -919,  6059,  -919,
     -24,  -919,   357,   160,  -919,   462,  6059,  -919,  6059,   131,
    -919,  8167,   445,  6059,  6059,  6059,    94,  6059,  6059,  8167,
     375,   380,   385,   543,   175,  -919,   393,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,   -41,   481,   403,   231,  -919,   295,
    -919,  -919,   570,   353,  -919,  -919,  1143,  -919,  7371,  6059,
    6059,    57,   521,   525,   528,   541,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,   461,   448,
    4875,  4875,  -919,   468,   160,  6059,  4875,   471,  -919,  -919,
     467,   467,   127,   163,  -919,  5319,  7371,   121,  -919,  1306,
    1911,  -919,  -919,   474,  6059,  7371,  8069,   469,  -919,   478,
    -919,    48,   479,   217,    48,    58,  6059,  -919,  -919,   246,
    -919,  -919,  -919,  -919,  -919,  -919,   487,  4727,   488,   628,
     489,  6059,  6059,  6059,  5467,  6059,  6059,  6059,  6059,  6059,
    6059,  6059,  6059,  6059,  6059,  6059,  6059,  6059,  6059,  6059,
    6059,  6059,  6059,  6059,  6059,  6059,  6059,  6059,  6059,   216,
    6059,  -919,  -919,  -919,    25,  3842,  3842,    35,    35,  6059,
    6059,   160,  5023,  6059,  6059,  6059,  6059,  6059,  6059,  6059,
    6059,  6059,  6059,  6059,  6059,  6059,  -919,  -919,  -919,  6059,
    6894,   160,  6943,  -919,   -19,  -919,  -919,    35,    35,   -19,
    6059,  6059,   491,  6992,  6059,  -919,   493,  7041,   495,   505,
    8167,  7970,    12,  7090,  7139,  -919,  -919,  -919,  6059,    94,
    -919,  -919,  2059,   601,   503,     2,   506,   361,  -919,   481,
    -919,   -19,  -919,  6059,   602,  -919,  6059,  6059,  6059,  6059,
    6059,  6059,  5615,  6059,    74,   -36,   168,    22,   152,   650,
     652,     7,   160,   236,   265,   296,   304,   656,   660,   661,
     662,   665,   669,   670,   672,  5763,  -919,   673,   539,  -919,
    8167,   544,  -919,   327,  8167,   545,  -919,  7188,   537,   580,
    -919,   583,   696,  -919,   555,  -919,   559,   561,    44,   567,
    -919,  7237,   578,   675,   677,   410,  -919,  -919,   207,  6502,
     579,  -919,  -919,  -919,   459,   582,  -919,   855,  -919,  -919,
    -919,  4875,  8167,   392,  5171,   739,  4875,  -919,  -919,  6551,
    -919,   682,  6059,  -919,  6059,  -919,  -919,  8215,  7657,  3836,
    6059,  8118,  6206,  6355,  7788,  8289,  8320,  4923,  4923,  5071,
    5071,  5071,  5071,  5071,  1602,  1602,  1602,  1602,   762,   888,
     888,   432,   432,    29,    29,    29,  -919,   118,   588,  -919,
    -919,  -919,   590,  6059,   591,   592,   160,   591,   592,   160,
    -919,  6059,  -919,   160,   160,  6600,   594,  -919,  7371,  3836,
    3836,  3836,  3836,  3836,  3836,  3836,  3836,  3836,  3836,  3836,
    3836,  3836,  3836,  3836,  -919,   580,  -919,  -919,  -919,  -919,
    -919,  6649,   595,  -919,  3987,  -919,  6059,  4135,  6059,  6059,
    7920,  -919,    14,   597,  8167,  -919,  -919,  -919,   177,   598,
    -919,  -919,   676,  -919,  -919,  8167,  -919,  -919,  8167,  6059,
    1319,   605,  7371,   607,  6059,   609,  -919,  -919,    44,   633,
     599,    44,  -919,    77,   633,  -919,  1467,   767,  -919,  -919,
    -919,   615,  -919,  -919,  -919,   706,  -919,  -919,  -919,   622,
    -919,  6059,  -919,  -919,   619,  -919,   627,   629,  7371,  8167,
    6059,  -919,  -919,   580,  7286,  7335,  2207,  6206,  6059,   -61,
     630,   -61,  6698,  -919,  -919,  6747,  -919,  -919,  -919,  -919,
     467,   633,  -919,  -919,  -919,  -919,  7384,  -919,  -919,  -919,
     620,  8167,   631,  4875,  7371,    15,    23,  4283,   635,   636,
    -919,  5911,  -919,   464,   703,   454,   641,  -919,  -919,   454,
    8167,  6059,  -919,  -919,  -919,   648,  -919,  -919,  -919,    44,
    -919,  -919,   653,  -919,   651,   252,  -919,  -919,  -919,   252,
    -919,  -919,   332,   788,   795,   794,  -919,  -919,  1615,  -919,
    6059,  -919,  -919,  7433,   664,   767,  4875,   425,  3836,   633,
    4727,   802,   666,  6206,   686,   668,   679,  -919,   729,  -919,
     -61,   685,  -919,  -919,  -919,  3687,   687,  2355,  6059,  4875,
     671,    26,  7920,  4431,  -919,  -919,  -919,  -919,   402,  -919,
     -18,   680,   663,   689,  -919,   690,  8167,   691,   692,  -919,
     786,  -919,   177,   695,   711,  -919,  -919,   653,   698,   600,
      44,  -919,  -919,   826,    11,   252,   234,   234,   252,   707,
    -919,  3836,   712,  -919,   693,  -919,  -919,  -919,  -919,  -919,
     850,   -34,  -919,   198,  -919,  -919,  -919,  -919,   198,  -919,
     849,  -919,   365,   854,   856,   857,   721,   778,   722,  -919,
     724,   726,   727,    27,   731,  -919,  -919,  -919,  2503,   480,
     728,  6059,    18,   -14,  -919,  -919,   889,  -919,  5911,  -919,
    6059,   890,    44,  -919,  -919,  -919,  -919,   454,   735,  -919,
    -919,    44,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,   449,  -919,  -919,  -919,   100,   334,   621,  -919,  -919,
     924,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,   767,
     732,  3687,    77,   898,  -919,  -919,   876,    13,  -919,   749,
     198,   300,   300,   198,   850,   746,   850,  -919,  -919,  4579,
    -919,  4431,  2651,   747,   748,  -919,  6796,  -919,  -919,  -919,
    -919,  6059,  -919,  8167,  6059,    55,  -919,  2799,  -919,  -919,
     956,  7664,   225,  -919,   843,  7664,   226,  -919,  -919,   999,
    -919,  -919,  -919,  -919,  -919,   845,  -919,  -919,  -919,  -919,
    -919,  -919,   222,  -919,  1389,  -919,  -919,  -919,  -919,   752,
    -919,  -919,  -919,  3687,  8167,  8167,    44,  -919,   754,  -919,
    -919,   910,  -919,  6214,  -919,   911,   376,  -919,   912,   378,
    -919,  7664,  -919,  3909,  -919,  -919,   758,  -919,   858,   764,
    -919,   760,  -919,  2947,  -919,  3687,  -919,   765,  6059,   763,
     784,  -919,  -919,  6359,  -919,   777,   780,   863,   838,   804,
    6059,  -919,   843,  -919,  6059,  7664,  -919,  -919,  -919,  6059,
     941,  -919,  -919,   222,   798,  -919,   799,  -919,  8167,  -919,
    -919,  -919,  -919,  -919,  7809,    44,  7664,  8167,  -919,  8167,
    -919,   800,  8167,  6059,  3095,  -919,  -919,  3243,  -919,  3391,
    -919,  -919,  7664,   653,  -919,  -919,  -919,   -61,  -919,  8167,
    -919,  -919,  -919,  -919,   809,  -919,  -919,   850,  -919,   436,
    -919,  -919,  -919,  3539,  -919,  -919
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      86,     0,     2,     1,     0,     0,     0,     0,     0,     0,
     447,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   494,   495,    93,    95,    96,
      94,   535,   162,   492,     0,     0,   483,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   513,   513,     0,   460,
     459,     0,   513,     0,     0,     0,   478,   197,   198,   199,
       0,     0,     0,     0,   193,   200,   202,   204,   116,     0,
       0,   503,   504,   505,   510,   506,   507,   508,   509,     0,
       0,     0,     0,     0,   169,   144,   554,   485,     0,     0,
     502,   102,     0,   110,    85,   109,   104,   105,     0,   195,
     106,   107,   108,   456,   249,   150,     0,   151,   430,     0,
     452,   464,   464,   530,     0,   499,   444,   500,   501,     0,
     520,     0,   476,   531,   374,   525,   532,   434,    93,   478,
       0,     0,   451,   464,   583,   584,   586,   587,   446,   448,
     450,   415,   416,   417,   418,   435,   436,   437,   438,   439,
     440,   441,   443,   379,   172,     0,   478,   369,     0,   479,
       0,   372,   480,   488,   540,   481,   513,   442,     0,     0,
     363,   364,     0,     0,   365,     0,     0,     0,     0,   514,
       0,     0,     0,     0,     0,   142,     0,   144,    89,    92,
      90,   123,   124,    91,   139,     0,     0,     0,   134,     0,
     307,   308,   311,     0,   310,   454,     0,   473,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     3,     4,     6,
       7,     8,     9,    10,    46,    47,    11,    13,    16,    17,
      83,    88,     5,    12,    14,    15,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    49,    50,
      51,    52,    71,    53,    41,    42,    43,    70,    44,    45,
      30,    31,    32,    34,    35,    36,    74,    75,    76,    77,
      78,    79,    80,    37,    38,    39,    40,    61,    59,    60,
      72,    56,    57,    58,    48,    54,    55,    66,    67,    68,
      62,    63,    65,    64,    69,    73,    84,    87,   114,     0,
     554,   554,    99,   127,    97,     0,   554,   518,   521,   519,
     394,   396,   569,     0,   497,     0,     0,     0,   567,     0,
       0,    82,    81,     0,     0,     0,   559,     0,   557,   553,
     555,   486,     0,   487,     0,     0,     0,   537,   472,     0,
     199,   103,   111,   453,   191,   196,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   163,   465,   461,   461,     0,     0,     0,     0,     0,
     513,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   393,   395,   461,     0,
       0,   488,     0,   373,     0,   489,   371,     0,     0,     0,
       0,   513,     0,     0,     0,   161,     0,     0,     0,   366,
     368,     0,     0,     0,     0,   156,   157,   171,     0,     0,
     122,   158,     0,     0,     0,   139,     0,     0,   118,     0,
     120,     0,   159,     0,     0,   160,    33,     3,     4,     6,
       7,    46,   447,    13,    93,     5,    12,   483,    71,   460,
     459,    74,    80,    39,    40,    48,    54,   503,   504,   505,
     510,   506,   507,   508,   509,     0,   298,     0,   127,   301,
     303,   127,   181,   516,   590,   127,   588,     0,     0,   211,
     461,   213,   206,   113,     0,    86,     0,     0,   128,     0,
      98,     0,     0,     0,     0,     0,   496,   568,     0,     0,
     516,   566,   498,   565,   429,     0,   149,     0,   146,   143,
     145,   554,   562,   516,     0,   491,   554,   445,   493,     0,
     455,     0,     0,   250,     0,   144,   253,   399,   401,   400,
       0,     0,   433,   397,   398,   402,   405,   403,   404,   421,
     422,   419,   420,   427,   423,   424,   425,   426,   406,   413,
     414,   407,   408,   409,   411,   412,   428,   410,     0,   184,
     185,   461,     0,     0,   511,   538,     0,   512,   539,     0,
     550,     0,   552,   533,   534,     0,     0,   477,     0,   377,
     380,   381,   382,   384,   385,   386,   387,   388,   389,   390,
     391,   383,   392,   449,   585,   211,   482,   545,   543,   544,
     546,     0,     0,   484,     0,   362,     0,     0,   365,     0,
       0,   167,     0,     0,   461,   141,   173,   140,     0,     0,
     119,   121,   139,   133,   306,   312,   309,   300,   305,     0,
     128,     0,   128,     0,   128,     0,   582,   112,     0,   215,
       0,     0,   461,     0,   215,    86,     0,     0,   490,   100,
     101,   517,   491,   571,   572,     0,   577,   580,   578,     0,
     574,     0,   573,   576,     0,   147,     0,     0,     0,   558,
       0,   556,   536,   211,     0,     0,     0,   432,     0,   261,
       0,   261,     0,   474,   475,     0,   528,   529,   527,   526,
     378,   215,   542,   541,   144,   247,     0,   144,   245,   152,
       0,   367,     0,   554,     0,     0,   516,     0,   231,   231,
     155,   237,   361,   179,   137,     0,   127,   130,   135,     0,
     304,     0,   302,   299,   182,     0,   589,   581,   212,     0,
     461,   314,   214,   322,     0,     0,   276,   287,   288,     0,
     289,   207,   271,     0,   273,   274,   275,   461,     0,   117,
       0,   579,   570,     0,     0,   564,   554,   516,   376,   215,
       0,     0,     0,   431,   261,     0,   127,   257,   269,   260,
     261,     0,   548,   551,   461,   251,     0,     0,   365,   554,
       0,   516,     0,     0,   144,   225,   168,   231,     0,   231,
       0,   127,     0,   127,   239,   127,   243,     0,     0,   170,
       0,   136,   128,     0,   127,   132,   164,   216,     0,   343,
       0,   314,   272,     0,     0,     0,     0,     0,     0,     0,
     115,   375,     0,   148,     0,   461,   248,   144,   254,   259,
     296,   261,   255,     0,   265,   264,   263,   266,     0,   262,
     187,   270,   283,     0,   285,   286,     0,   466,     0,   153,
       0,     0,     0,   491,     0,   144,   223,   165,     0,     0,
       0,     0,     0,     0,   227,   128,     0,   236,   128,   238,
     128,     0,     0,   144,   138,   129,   126,   128,     0,   314,
     461,     0,   350,   351,   352,   349,   348,   347,   353,   342,
     201,   343,   318,   319,   313,   269,     0,   341,   345,   323,
     343,   278,   281,   277,   279,   280,   282,   314,   575,   563,
       0,   252,     0,     0,   258,   284,     0,     0,   188,   189,
       0,     0,     0,     0,   296,     0,   296,   314,   246,     0,
     219,     0,     0,     0,     0,   229,     0,   234,   235,   144,
     228,     0,   240,   244,     0,   177,   175,     0,   131,   125,
     343,     0,     0,   320,     0,     0,   464,   346,   203,   343,
     314,   297,   462,   291,   190,     0,   294,   290,   292,   293,
     295,   462,     0,   462,   343,   144,   221,   154,   166,     0,
     226,   230,   144,   233,   242,   241,     0,   178,     0,   180,
     194,   209,   324,     0,   321,   461,     0,   355,     0,     0,
     359,     0,   205,   343,   463,   461,     0,   470,     0,   127,
     469,     0,   370,     0,   224,   232,   176,     0,     0,     0,
      74,   325,   336,     0,   327,     0,     0,     0,   337,     0,
       0,   356,     0,   315,     0,     0,   316,   461,   192,     0,
     267,   144,   471,   128,     0,   144,     0,   144,   210,   208,
     326,   328,   329,   330,     0,     0,     0,   461,   354,   461,
     358,     0,   462,     0,     0,   468,   467,     0,   222,     0,
     332,   333,   335,   331,   338,   357,   360,   261,   458,   268,
     462,   462,   174,   334,     0,   186,   457,   296,   462,     0,
     339,   144,   462,     0,   317,   340
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -919,  -919,   -92,  -919,   -91,   -65,  -474,  -919,   -48,  -181,
     123,   475,  -919,   -49,    -2,     5,  -919,  -919,  -919,   930,
    -919,  -919,  -480,  -919,  -919,   801,   167,  -701,   546,   818,
    -177,  -919,    42,  -919,  -919,  -919,  -919,  -919,  -919,   345,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,   901,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -532,  -919,
    -607,   202,  -919,    49,  -919,  -919,  -682,    50,  -919,  -919,
    -919,   117,  -919,  -919,  -919,  -919,  -919,  -919,  -692,  -919,
     156,  -919,  -919,   228,    95,    81,  -523,  -187,  -919,   250,
    -919,  -736,  -290,  -919,   158,  -918,   -51,  -919,   364,  -919,
     568,  -919,   564,  -799,   112,  -919,  -730,  -919,  -919,   -15,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -871,  -919,
     -27,  -919,   -20,   611,  -919,   606,  -610,  -919,   877,  -919,
    -919,    56,     0,  -919,    -1,   -17,  -824,  -919,  -110,  -919,
    -919,   -22,  -919,  -919,    16,   657,  -919,  -919,   640,   -76,
    -919,   -68,   -64,   -25,  -919,  -919,  -919,  -919,  -919,   -45,
     456,  -919,  -919,   667,  -253,  -276,   516,  -919,  -919,   566,
     355,  -919,  -919,  -919,   400
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   295,   296,   325,   487,     2,   298,   734,   194,
      90,   302,   303,    91,   131,   528,    94,   504,   299,   735,
     446,   196,   509,   736,   824,   197,   737,   738,   198,   184,
     320,   529,   530,   727,   733,   965,  1008,   819,   491,   492,
     581,    96,   939,   985,    97,   541,   212,    98,    99,   100,
     213,   101,   214,   102,   215,   664,   912,  1039,   659,   662,
     750,   725,   997,   877,   806,   730,   808,   959,   103,   812,
     813,   814,   815,   719,   104,   105,   106,   107,   785,   786,
     787,   788,   859,   789,   860,   761,   762,   763,   764,   765,
     861,   766,   863,   864,   865,   933,   207,   488,   489,   199,
     200,   203,   204,   829,   913,   914,   752,  1014,  1043,  1044,
    1045,  1046,  1047,  1048,  1112,   915,   916,   917,   918,  1016,
    1017,  1019,  1020,   185,   169,   170,   428,   429,   161,   411,
     108,   109,   110,   111,   133,   582,  1024,  1059,   383,   946,
    1029,  1030,   113,   391,   114,   163,   167,   332,   416,   115,
     116,   117,   118,   180,   119,   120,   121,   122,   123,   124,
     125,   126,   165,   586,   593,   327,   328,   329,   330,   317,
     318,   679,   127,   495,   496
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      92,   112,   384,   297,   307,   307,   193,    93,   651,   791,
     442,   653,   308,   308,   445,   655,   309,   309,   720,   827,
     382,   382,   181,   408,   506,   507,   991,   186,   993,   802,
     512,   666,   920,   160,   821,   310,   311,  -217,   825,   338,
    -218,  -220,   382,   341,    95,   728,   977,   810,   838,   957,
     943,   162,   862,   -14,     3,    31,   205,   767,   443,    31,
     132,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   172,   341,   711,   881,   882,   379,    79,   881,   882,
    1006,   112,   343,   154,   171,   304,   380,   342,   866,   579,
     970,   443,   179,   179,   794,   -83,   157,   755,   179,   590,
    -256,   341,   415,    31,    79,    49,    50,   935,   128,    28,
      29,    30,   936,   444,    79,   879,   312,   883,   979,   205,
     853,   343,   307,  1007,   155,   594,   312,  -128,   521,   319,
     308,   422,   326,   312,   309,   313,   182,   193,   994,   580,
     336,   128,    28,    29,    30,    89,   884,   166,   159,    89,
     960,   779,   156,   493,   618,   619,   639,  1026,   183,  1031,
    -478,   972,   845,   -83,   128,    28,    29,    30,   168,   862,
     439,  1023,   921,   631,   983,   380,   803,   729,   871,  1108,
     958,   768,   166,  -479,  -217,   756,   968,  -218,  -220,   312,
     206,   521,   159,  1092,   986,   987,   987,   990,   591,   315,
     316,   410,   187,    89,   412,   757,   758,   346,   347,   315,
     316,   312,   179,   331,   423,   314,   315,   316,   498,   427,
     430,   431,   832,   433,   434,   538,   833,   173,   757,   758,
     307,   312,   128,    28,    29,    30,    31,   759,   308,   307,
     174,   188,   309,   510,   190,   686,   823,   308,  1098,   321,
     322,   309,   490,   321,   322,   494,   497,   312,   642,   334,
     858,   520,   128,    28,    29,    30,  1105,  1106,   513,   514,
     533,   522,   315,   316,  1109,   191,   156,   192,  1114,   175,
     128,    28,    29,    30,    31,   312,   176,   521,   157,   424,
    1027,   598,   515,   425,   315,   316,   852,   177,   128,    28,
      29,    30,   922,   923,   923,   926,    79,   385,   527,   112,
     584,   587,   178,   516,   315,   316,   128,    28,    29,    30,
     206,   886,   208,   889,   156,   891,   757,   758,   158,   540,
     597,   348,   349,   439,   898,  1093,    89,   440,    49,    50,
     315,   316,   756,   202,    49,    50,   326,   326,   339,   350,
     415,   511,   326,  -521,  -521,   596,   578,  -277,   696,   835,
     756,   519,   757,   758,   128,    28,    29,    30,   315,   316,
     532,   680,   681,    49,    50,  -521,   158,  -521,    79,   543,
     757,   758,   539,   830,    89,   162,   622,  1012,  1013,   449,
    -290,   193,   940,   450,   759,  1104,   209,   547,   548,   549,
     551,   552,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,   564,   565,   566,   567,   568,   569,   570,
     571,   572,   573,   574,   575,   210,   577,   211,   757,   758,
     527,   112,    49,   688,   975,   595,   179,   800,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
     611,   612,   675,   451,   160,   613,   300,   452,   387,   388,
     858,   205,   188,   189,   301,   190,   621,   179,   341,   386,
     171,  -515,   162,   660,   676,   376,   377,   378,   677,   379,
     389,   164,   390,   678,   634,  -183,    57,    58,  -183,   380,
     844,   340,   159,   880,   881,   882,   191,   344,   192,   645,
    -522,   201,   132,   134,   135,   136,   137,   138,   139,   153,
     414,   454,   307,   872,   304,   455,   112,   343,   188,   449,
     308,   190,   685,   641,   309,   703,   426,   795,   704,   724,
     797,   648,   706,   707,  1052,   337,  1055,   435,  1053,  1064,
    1056,   900,   436,   710,   307,   188,   189,   437,   190,   438,
    -561,  -561,   308,  -561,   700,   441,   309,   902,   903,   904,
     905,   906,   907,   908,   909,   448,   307,   817,   818,  -519,
    -519,   954,   881,   882,   308,   726,   453,   326,   309,   159,
     689,  -519,   326,  -560,  -560,   499,  -560,    79,   694,   500,
     695,  -519,   501,  -519,  -518,  -518,   697,   493,  1110,  1111,
    -517,  -517,   307,   417,   418,   502,  -518,   732,  -516,  -516,
     308,   505,  -517,  -524,   309,   419,  -518,   878,  -518,  -523,
    -516,   159,  -517,   503,  -517,   420,   508,   421,   535,   702,
    -516,  -524,  -516,   777,   531,   754,   536,   705,   307,   924,
     925,   988,   989,   333,   335,   537,   308,   542,   544,   545,
     309,   546,   623,   626,    92,   112,   715,   628,   517,   718,
     931,    93,   523,   629,   748,   637,   638,   753,   640,   801,
     202,   -43,   716,   -70,   430,   721,   517,   -66,   523,   517,
     523,   -67,   -68,   -62,   527,   112,   -63,   784,   952,   784,
     -65,   -64,   900,   -69,   649,   740,   490,   650,    95,   657,
     494,   724,   652,   654,   658,   901,   967,   661,   902,   903,
     904,   905,   906,   907,   908,   909,   307,   663,   665,  -344,
     667,  -344,   668,   828,   308,   341,   670,   773,   309,   902,
     903,   904,   905,   906,   907,   908,   778,   672,    79,   673,
     839,   674,   684,   683,   783,   690,   693,   726,   699,   853,
     701,  -547,  -549,   709,   713,   753,    92,   112,   749,   805,
     731,   739,   751,    93,   910,   443,   743,   868,   745,   326,
     747,   159,  1003,   770,   159,  -523,   760,   816,   784,   771,
     774,   772,   798,   527,   112,   527,   112,   648,   775,   776,
     790,   799,   820,   128,    28,    29,    30,   807,   809,   822,
      95,   372,   373,   374,   375,   376,   377,   378,  1033,   379,
     826,   830,   846,   836,   831,  1035,   841,   911,   930,   380,
     837,   838,   326,   847,    79,   164,   843,   887,   848,   850,
     873,   585,   588,   592,   592,   876,   919,   851,   885,   784,
     854,   855,   856,   857,   430,   326,   867,   888,   890,   869,
     894,   892,   341,   835,   929,   893,  1021,   757,   758,   896,
     617,   899,   159,   592,   592,   620,   527,   112,   760,   897,
     927,   932,   760,   971,  1084,   382,   928,   938,  1087,   941,
    1089,   942,   944,   945,   943,   947,   948,   949,   950,   858,
     955,  1028,   951,   961,   964,   980,  1011,   201,   966,   969,
    1018,   760,   982,   940,   984,   976,   992,   753,   911,  1000,
    1001,  1015,   164,  1025,  1034,  1037,  1038,  1050,  1054,   527,
     112,  1061,  1063,  1065,  1113,  1069,  1062,   956,  1067,   374,
     375,   376,   377,   378,   816,   379,   963,  -478,  1042,  1072,
     527,   112,  1073,   159,  1075,   380,  1057,  1083,   760,   760,
     760,   760,  1074,    49,    50,   527,   112,  1076,   911,  1086,
    1097,  1088,  1028,   339,    57,    58,   760,   911,  1042,   340,
    1107,   760,  1091,   669,   195,    64,    65,    66,    67,   895,
    1018,   996,   911,   876,   432,   643,   447,   744,  1051,   345,
     998,   527,   112,    79,   874,   962,  1002,   934,  1060,   834,
     974,  1094,   849,   981,   742,   159,   937,  1004,   646,   644,
    1005,   911,  1036,   973,   159,  1078,   900,  1103,  1071,  1049,
     625,   527,   112,   527,   112,  1080,   576,   413,   760,   901,
    1081,  1085,   902,   903,   904,   905,   906,   907,   908,   909,
     635,   615,   691,   589,   746,   760,     0,     0,   900,  1049,
    1095,     0,  1096,   760,   760,   760,   760,     0,     0,     0,
       0,   901,    79,     0,   902,   903,   904,   905,   906,   907,
     908,   909,   527,   112,     0,   527,   112,   527,   112,     0,
       0,   753,     0,     0,  1068,   784,     0,     0,   978,     0,
       0,   900,     0,     0,    79,     0,  1077,     0,     0,     0,
    1079,   527,   112,     0,   901,  1082,     0,   902,   903,   904,
     905,   906,   907,   908,   909,     0,     0,     0,     0,   159,
    1010,     0,     0,     0,     0,     0,   159,     0,     0,  1099,
       0,     0,     0,     0,     0,     0,   456,    79,   457,   458,
     459,   460,   221,   222,   223,   461,   462,     0,    11,     0,
       0,     0,     0,     0,     0,     0,   159,     0,     0,     0,
       0,     0,     0,  1022,     0,     0,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       0,     0,     0,     0,    12,    13,     0,     0,   159,    14,
     226,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,   463,     0,   228,   229,    25,    26,   464,    28,    29,
      30,    31,     0,     0,    33,     0,     0,   465,   466,   467,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   468,   253,   254,
     255,   469,   470,   258,   259,   260,   261,   262,   263,   264,
     265,   471,   267,   268,   269,   270,   271,   472,   273,   274,
     473,   474,     0,   277,   278,   279,   280,   281,   282,   283,
     475,   476,   286,   477,   478,   479,   480,   481,   482,   483,
     484,    79,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,     0,   485,   406,
     407,  -516,  -516,    83,   486,   351,   352,   353,    86,    87,
      88,    89,   456,  -516,   457,   458,   459,   460,   221,   222,
     223,   461,   462,  -516,    11,  -516,   354,     0,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,     0,   379,     0,     0,     0,     0,     0,     0,
      12,    13,     0,   380,     0,    14,   226,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,   463,     0,   228,
     229,    25,    26,   464,    28,    29,    30,    31,     0,     0,
      33,     0,     0,   465,   466,   467,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   468,   253,   254,   255,   469,   470,   258,
     259,   260,   261,   262,   263,   264,   265,   471,   267,   268,
     269,   270,   271,   472,   273,   274,   473,   474,     0,   277,
     278,   279,   280,   281,   282,   283,   475,   476,   286,   477,
     478,   479,   480,   481,   482,   483,   484,    79,    80,    81,
       4,     0,     5,     6,     7,     8,     0,   524,    82,     9,
      10,     0,    11,     0,   741,     0,     0,     0,     0,    83,
       0,   900,     0,     0,    86,    87,    88,    89,     0,     0,
       0,     0,     0,     0,   901,     0,     0,   902,   903,   904,
     905,   906,   907,   908,   909,     0,     0,     0,    12,    13,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,     0,    79,     0,    25,
      26,    27,    28,    29,    30,    31,    32,     0,    33,     0,
       0,    34,    35,    36,    37,     0,    38,    39,    40,     0,
      41,     0,    42,  1032,    43,     0,     0,    44,     0,     0,
       0,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,     0,    54,     0,    55,    56,    57,    58,     0,     0,
       0,    59,     0,    60,    61,    62,    63,    64,    65,    66,
      67,     0,     0,    68,    69,    70,     0,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,     4,     0,
       5,     6,     7,     8,     0,     0,    82,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,    83,     0,    84,
      85,   769,    86,    87,    88,    89,  -562,  -562,  -562,  -562,
     371,   372,   373,   374,   375,   376,   377,   378,     0,   379,
       0,     0,     0,     0,     0,     0,    12,    13,     0,   380,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,    33,     0,     0,    34,
      35,    36,    37,     0,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,     0,
      54,     0,    55,    56,    57,    58,     0,     0,     0,    59,
       0,    60,    61,    62,    63,    64,    65,    66,    67,     0,
       0,    68,    69,    70,     0,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,     4,     0,     5,     6,
       7,     8,     0,     0,    82,     9,    10,     0,    11,     0,
       0,     0,     0,     0,     0,    83,     0,    84,    85,   840,
      86,    87,    88,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,     0,     0,     0,    25,    26,    27,    28,    29,
      30,    31,    32,     0,    33,     0,     0,    34,    35,    36,
      37,     0,    38,    39,    40,     0,    41,     0,    42,     0,
      43,     0,     0,    44,     0,     0,     0,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     0,     0,    54,     0,
      55,    56,    57,    58,     0,     0,     0,    59,     0,    60,
      61,    62,    63,    64,    65,    66,    67,     0,     0,    68,
      69,    70,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,     4,     0,     5,     6,     7,     8,
       0,     0,    82,     9,    10,     0,    11,     0,     0,     0,
       0,     0,     0,    83,     0,    84,    85,     0,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
       0,     0,     0,    25,    26,    27,    28,    29,    30,    31,
      32,     0,    33,     0,     0,    34,    35,    36,    37,     0,
      38,    39,    40,     0,    41,     0,    42,     0,    43,     0,
       0,    44,     0,     0,     0,    45,    46,    47,    48,    49,
      50,     0,    52,    53,     0,     0,     0,     0,    55,    56,
      57,    58,     0,     0,     0,    59,     0,    60,    61,    62,
     525,    64,    65,    66,    67,     0,     0,     0,    69,    70,
       0,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,     4,     0,     5,     6,     7,     8,     0,     0,
      82,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,    83,     0,    84,    85,   526,    86,    87,    88,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,     0,     0,
       0,    25,    26,    27,    28,    29,    30,    31,    32,     0,
      33,     0,     0,    34,    35,    36,    37,     0,    38,    39,
      40,     0,    41,     0,    42,     0,    43,     0,     0,    44,
       0,     0,     0,    45,    46,    47,    48,    49,    50,     0,
      52,    53,     0,     0,     0,     0,    55,    56,    57,    58,
       0,     0,     0,    59,     0,    60,    61,    62,   525,    64,
      65,    66,    67,     0,     0,     0,    69,    70,     0,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
       4,     0,     5,     6,     7,     8,     0,     0,    82,     9,
      10,     0,    11,     0,     0,     0,     0,     0,     0,    83,
       0,    84,    85,   636,    86,    87,    88,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,     0,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,     0,    33,     0,
       0,    34,    35,    36,    37,   782,    38,    39,    40,     0,
      41,     0,    42,     0,    43,     0,     0,    44,     0,     0,
       0,    45,    46,    47,    48,    49,    50,     0,    52,    53,
       0,     0,     0,     0,    55,    56,    57,    58,     0,     0,
       0,    59,     0,    60,    61,    62,   525,    64,    65,    66,
      67,     0,     0,     0,    69,    70,     0,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,     4,     0,
       5,     6,     7,     8,     0,     0,    82,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,    83,     0,    84,
      85,     0,    86,    87,    88,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,    33,     0,     0,    34,
      35,    36,    37,     0,    38,    39,    40,   870,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,     0,    52,    53,     0,     0,
       0,     0,    55,    56,    57,    58,     0,     0,     0,    59,
       0,    60,    61,    62,   525,    64,    65,    66,    67,     0,
       0,     0,    69,    70,     0,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,     4,     0,     5,     6,
       7,     8,     0,     0,    82,     9,    10,     0,    11,     0,
       0,     0,     0,     0,     0,    83,     0,    84,    85,     0,
      86,    87,    88,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,     0,     0,     0,    25,    26,    27,    28,    29,
      30,    31,    32,     0,    33,     0,     0,    34,    35,    36,
      37,     0,    38,    39,    40,     0,    41,     0,    42,     0,
      43,   953,     0,    44,     0,     0,     0,    45,    46,    47,
      48,    49,    50,     0,    52,    53,     0,     0,     0,     0,
      55,    56,    57,    58,     0,     0,     0,    59,     0,    60,
      61,    62,   525,    64,    65,    66,    67,     0,     0,     0,
      69,    70,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,     4,     0,     5,     6,     7,     8,
       0,     0,    82,     9,    10,     0,    11,     0,     0,     0,
       0,     0,     0,    83,     0,    84,    85,     0,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
       0,     0,     0,    25,    26,    27,    28,    29,    30,    31,
      32,     0,    33,     0,     0,    34,    35,    36,    37,     0,
      38,    39,    40,     0,    41,     0,    42,   999,    43,     0,
       0,    44,     0,     0,     0,    45,    46,    47,    48,    49,
      50,     0,    52,    53,     0,     0,     0,     0,    55,    56,
      57,    58,     0,     0,     0,    59,     0,    60,    61,    62,
     525,    64,    65,    66,    67,     0,     0,     0,    69,    70,
       0,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,     4,     0,     5,     6,     7,     8,     0,     0,
      82,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,    83,     0,    84,    85,     0,    86,    87,    88,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,     0,     0,
       0,    25,    26,    27,    28,    29,    30,    31,    32,     0,
      33,     0,     0,    34,    35,    36,    37,     0,    38,    39,
      40,     0,    41,     0,    42,     0,    43,     0,     0,    44,
       0,     0,     0,    45,    46,    47,    48,    49,    50,     0,
      52,    53,     0,     0,     0,     0,    55,    56,    57,    58,
       0,     0,     0,    59,     0,    60,    61,    62,   525,    64,
      65,    66,    67,     0,     0,     0,    69,    70,     0,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
       4,     0,     5,     6,     7,     8,     0,     0,    82,     9,
      10,     0,    11,     0,     0,     0,     0,     0,     0,    83,
       0,    84,    85,  1009,    86,    87,    88,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,     0,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,     0,    33,     0,
       0,    34,    35,    36,    37,     0,    38,    39,    40,     0,
      41,  1066,    42,     0,    43,     0,     0,    44,     0,     0,
       0,    45,    46,    47,    48,    49,    50,     0,    52,    53,
       0,     0,     0,     0,    55,    56,    57,    58,     0,     0,
       0,    59,     0,    60,    61,    62,   525,    64,    65,    66,
      67,     0,     0,     0,    69,    70,     0,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,     4,     0,
       5,     6,     7,     8,     0,     0,    82,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,    83,     0,    84,
      85,     0,    86,    87,    88,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,    33,     0,     0,    34,
      35,    36,    37,     0,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,     0,    52,    53,     0,     0,
       0,     0,    55,    56,    57,    58,     0,     0,     0,    59,
       0,    60,    61,    62,   525,    64,    65,    66,    67,     0,
       0,     0,    69,    70,     0,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,     4,     0,     5,     6,
       7,     8,     0,     0,    82,     9,    10,     0,    11,     0,
       0,     0,     0,     0,     0,    83,     0,    84,    85,  1100,
      86,    87,    88,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,     0,     0,     0,    25,    26,    27,    28,    29,
      30,    31,    32,     0,    33,     0,     0,    34,    35,    36,
      37,     0,    38,    39,    40,     0,    41,     0,    42,     0,
      43,     0,     0,    44,     0,     0,     0,    45,    46,    47,
      48,    49,    50,     0,    52,    53,     0,     0,     0,     0,
      55,    56,    57,    58,     0,     0,     0,    59,     0,    60,
      61,    62,   525,    64,    65,    66,    67,     0,     0,     0,
      69,    70,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,     4,     0,     5,     6,     7,     8,
       0,     0,    82,     9,    10,     0,    11,     0,     0,     0,
       0,     0,     0,    83,     0,    84,    85,  1101,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
       0,     0,     0,    25,    26,    27,    28,    29,    30,    31,
      32,     0,    33,     0,     0,    34,    35,    36,    37,     0,
      38,    39,    40,     0,    41,     0,    42,     0,    43,     0,
       0,    44,     0,     0,     0,    45,    46,    47,    48,    49,
      50,     0,    52,    53,     0,     0,     0,     0,    55,    56,
      57,    58,     0,     0,     0,    59,     0,    60,    61,    62,
     525,    64,    65,    66,    67,     0,     0,     0,    69,    70,
       0,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,     4,     0,     5,     6,     7,     8,     0,     0,
      82,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,    83,     0,    84,    85,  1102,    86,    87,    88,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,     0,     0,
       0,    25,    26,    27,    28,    29,    30,    31,    32,     0,
      33,     0,     0,    34,    35,    36,    37,     0,    38,    39,
      40,     0,    41,     0,    42,     0,    43,     0,     0,    44,
       0,     0,     0,    45,    46,    47,    48,    49,    50,     0,
      52,    53,     0,     0,     0,     0,    55,    56,    57,    58,
       0,     0,     0,    59,     0,    60,    61,    62,   525,    64,
      65,    66,    67,     0,     0,     0,    69,    70,     0,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
       4,     0,     5,     6,     7,     8,     0,     0,    82,     9,
      10,     0,    11,     0,     0,     0,     0,     0,     0,    83,
       0,    84,    85,  1115,    86,    87,    88,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,     0,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,     0,    33,     0,
       0,    34,    35,    36,    37,     0,    38,    39,    40,     0,
      41,     0,    42,     0,    43,     0,     0,    44,     0,     0,
       0,    45,    46,    47,    48,    49,    50,     0,    52,    53,
       0,     0,     0,     0,    55,    56,    57,    58,     0,     0,
       0,    59,     0,    60,    61,    62,   525,    64,    65,    66,
      67,     0,     0,     0,    69,    70,     0,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,     0,     0,
       0,     0,     0,     0,     0,   216,    82,   217,   218,   219,
     220,   221,   222,   223,   224,   225,     0,    83,     0,    84,
      85,     0,    86,    87,    88,    89,   354,     0,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,     0,   379,     0,     0,     0,     0,     0,   226,
       0,     0,     0,   380,     0,     0,     0,     0,     0,     0,
     227,     0,   228,   229,     0,     0,   230,     0,     0,     0,
      31,     0,     0,     0,     0,     0,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,     0,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
       4,     0,     5,     6,     7,     8,     0,     0,     0,     9,
      10,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       0,   900,     0,     0,     0,   583,     0,     0,   714,     0,
      89,     0,     0,     0,   901,     0,     0,   902,   903,   904,
     905,   906,   907,   908,   909,     0,     0,     0,    12,    13,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,     0,    79,     0,    25,
      26,    27,    28,    29,    30,    31,    32,     0,    33,     0,
       0,    34,    35,    36,    37,     0,    38,    39,    40,     0,
      41,     0,    42,  1058,    43,     0,     0,    44,     0,     0,
       0,    45,    46,    47,    48,    49,    50,     0,    52,    53,
       0,     0,     0,     0,    55,    56,     0,     0,     0,     0,
       0,   130,     0,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,    69,    70,     0,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,     4,     0,
       5,     6,     7,     8,     0,     0,    82,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,    83,     0,    84,
      85,     0,    86,    87,    88,    89,   717,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,    33,     0,     0,    34,
      35,    36,    37,     0,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,     0,    52,    53,     0,     0,
       0,     0,    55,    56,     0,     0,     0,     0,     0,   130,
       0,    60,    61,    62,     0,     0,     0,     0,     0,     0,
       0,     0,    69,    70,     0,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,     4,     0,     5,     6,
       7,     8,     0,     0,    82,     9,    10,     0,    11,     0,
       0,     0,     0,     0,     0,    83,     0,    84,    85,     0,
      86,    87,    88,    89,   804,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,     0,     0,     0,    25,    26,    27,    28,    29,
      30,    31,    32,     0,    33,     0,     0,    34,    35,    36,
      37,     0,    38,    39,    40,     0,    41,     0,    42,     0,
      43,     0,     0,    44,     0,     0,     0,    45,    46,    47,
      48,    49,    50,     0,    52,    53,     0,     0,     0,     0,
      55,    56,     0,     0,     0,     0,     0,   130,     0,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
      69,    70,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,     4,     0,     5,     6,     7,     8,
       0,     0,    82,     9,    10,     0,    11,     0,     0,     0,
       0,     0,     0,    83,     0,    84,    85,     0,    86,    87,
      88,    89,   875,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
       0,     0,     0,    25,    26,    27,    28,    29,    30,    31,
      32,     0,    33,     0,     0,    34,    35,    36,    37,     0,
      38,    39,    40,     0,    41,     0,    42,     0,    43,     0,
       0,    44,     0,     0,     0,    45,    46,    47,    48,    49,
      50,     0,    52,    53,     0,     0,     0,     0,    55,    56,
       0,     0,     0,     0,     0,   130,     0,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,    69,    70,
       0,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,     4,     0,     5,     6,     7,     8,     0,     0,
      82,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,    83,     0,    84,    85,     0,    86,    87,    88,    89,
     995,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,     0,     0,
       0,    25,    26,    27,    28,    29,    30,    31,    32,     0,
      33,     0,     0,    34,    35,    36,    37,     0,    38,    39,
      40,     0,    41,     0,    42,     0,    43,     0,     0,    44,
       0,     0,     0,    45,    46,    47,    48,    49,    50,     0,
      52,    53,     0,     0,     0,     0,    55,    56,     0,     0,
       0,     0,     0,   130,     0,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,    69,    70,     0,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
       4,     0,     5,     6,     7,     8,     0,     0,    82,     9,
      10,     0,    11,     0,     0,     0,     0,     0,     0,    83,
       0,    84,    85,     0,    86,    87,    88,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,     0,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,     0,    33,     0,
       0,    34,    35,    36,    37,     0,    38,    39,    40,     0,
      41,     0,    42,     0,    43,     0,     0,    44,     0,     0,
       0,    45,    46,    47,    48,    49,    50,     0,    52,    53,
       0,     0,     0,     0,    55,    56,     0,     0,     0,     0,
       0,   130,     0,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,    69,    70,     0,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,     4,     0,
       5,     6,     7,     8,     0,     0,    82,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,    83,     0,    84,
      85,     0,    86,    87,    88,    89,     0,     0,     0,     0,
       0,     0,   321,   322,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,   128,
      28,    29,    30,    31,     0,     0,    33,     0,     0,    34,
      35,    36,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,    45,
     379,     0,     0,    49,    50,     0,     0,     0,     0,     0,
     380,     0,     0,   129,     0,     0,     0,     0,     0,   130,
       0,     0,    61,    62,     0,     0,     0,     0,     0,     0,
       0,     0,   323,    70,     0,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,     4,     0,     5,     6,
       7,     8,     0,     0,    82,     9,    10,     0,    11,     0,
     324,     0,     0,     0,     0,    83,     0,     0,     0,     0,
      86,    87,    88,    89,     0,     0,     0,     0,     0,     0,
     321,   322,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,     0,     0,     0,    25,    26,   128,    28,    29,
      30,    31,     0,     0,    33,     0,     0,    34,    35,    36,
    -562,  -562,  -562,  -562,  -562,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,    45,   379,     0,
       0,    49,    50,     0,     0,     0,     0,     0,   380,     0,
       0,   129,     0,     0,     0,     0,     0,   130,     0,     0,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
      69,    70,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,     4,     0,     5,     6,     7,     8,
       0,     0,    82,     9,    10,     0,    11,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,   321,   322,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
       0,     0,     0,    25,    26,   128,    28,    29,    30,    31,
       0,     0,    33,     0,     0,    34,    35,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,    49,
      50,     0,     0,     0,     0,     0,     0,     0,     0,   129,
       0,     0,     0,     0,     0,   130,     0,     0,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,   687,    70,
       0,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,     4,     0,     5,     6,     7,     8,     0,     0,
      82,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,    86,    87,    88,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,     0,     0,
       0,    25,    26,   128,    28,    29,    30,    31,     0,     0,
      33,   518,     0,    34,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,    49,    50,     0,
       0,     0,     0,     0,     0,     0,     0,   129,     0,     0,
       0,     0,     0,   130,     0,     0,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,    69,    70,     0,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
       4,     0,     5,     6,     7,     8,     0,     0,    82,     9,
      10,     0,    11,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,    86,    87,    88,    89,   550,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,     0,     0,     0,    25,
      26,   128,    28,    29,    30,    31,     0,     0,    33,     0,
       0,    34,    35,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,     0,    49,    50,     0,     0,     0,
       0,     0,     0,     0,     0,   129,     0,     0,     0,     0,
       0,   130,     0,     0,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,    69,    70,     0,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,     4,     0,
       5,     6,     7,     8,     0,     0,    82,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,    86,    87,    88,    89,   -47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,   128,
      28,    29,    30,    31,     0,     0,    33,     0,     0,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,    49,    50,     0,     0,     0,     0,     0,
       0,     0,     0,   129,     0,     0,     0,     0,     0,   130,
       0,     0,    61,    62,     0,     0,     0,     0,     0,     0,
       0,     0,    69,    70,     0,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,     4,     0,     5,     6,
       7,     8,     0,     0,    82,     9,    10,     0,    11,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
      86,    87,    88,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,     0,     0,     0,    25,    26,   128,    28,    29,
      30,    31,     0,     0,    33,     0,     0,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,    49,    50,     0,     0,     0,     0,     0,     0,     0,
       0,   129,     0,     0,     0,     0,     0,   130,     0,     0,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
      69,    70,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,     4,     0,     5,     6,     7,     8,
       0,     0,    82,     9,    10,     0,    11,     0,     0,     0,
       0,     0,     0,    83,   647,     0,     0,     0,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
       0,     0,     0,    25,    26,   128,    28,    29,    30,    31,
       0,     0,    33,     0,     0,    34,    35,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   811,    45,     0,     0,     0,    49,
      50,     0,     0,     0,     0,     0,     0,     0,     0,   129,
       0,     0,     0,     0,     0,   130,     0,     0,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,    69,    70,
       0,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,     4,     0,     5,     6,     7,     8,     0,     0,
      82,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,    86,    87,    88,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,     0,     0,
       0,    25,    26,   128,    28,    29,    30,    31,     0,     0,
      33,     0,     0,    34,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,    49,    50,     0,
       0,     0,     0,     0,     0,     0,     0,   129,     0,     0,
       0,     0,     0,   130,     0,     0,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,    69,    70,     0,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
       0,     0,     0,     0,     0,     0,     0,   216,    82,   217,
     218,   219,   220,   221,   222,   223,   224,   225,     0,    83,
       0,     0,     0,     0,    86,    87,    88,    89,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,     0,   379,     0,     0,     0,     0,     0,     0,
       0,   226,     0,   380,     0,     0,     0,     0,     0,     0,
       0,     0,   227,     0,   228,   229,     0,     0,   464,    28,
      29,    30,     0,     0,     0,     0,     0,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,  1040,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,     0,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   216,     0,   217,   218,   219,   220,   221,   222,
     223,   224,   225,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1041,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,     0,   379,     0,     0,     0,   226,     0,     0,     0,
       0,     0,   380,     0,     0,     0,     0,   227,     0,   228,
     229,     0,     0,   464,    28,    29,    30,     0,     0,     0,
       0,     0,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,  1040,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,     0,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,     0,     0,     0,
       0,   351,   352,   353,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   354,  1070,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,     0,   379,
     351,   352,   353,     0,     0,     0,     0,     0,     0,   380,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   354,     0,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,     0,   379,   351,
     352,   353,     0,     0,     0,     0,     0,     0,   380,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     354,     0,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,     0,   379,   351,   352,
     353,     0,     0,     0,     0,     0,     0,   380,     0,     0,
       0,     0,     0,     0,     0,     0,   682,     0,     0,   354,
       0,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,     0,   379,   351,   352,   353,
       0,     0,     0,     0,     0,     0,   380,     0,     0,     0,
       0,     0,     0,     0,     0,   692,     0,     0,   354,     0,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,     0,   379,   351,   352,   353,     0,
       0,     0,     0,     0,     0,   380,     0,     0,     0,     0,
       0,     0,     0,     0,   708,     0,     0,   354,     0,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,     0,   379,   351,   352,   353,     0,     0,
       0,     0,     0,     0,   380,     0,     0,     0,     0,     0,
       0,     0,     0,   712,     0,     0,   354,   957,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,     0,   379,   351,   352,   353,     0,     0,     0,
       0,     0,     0,   380,     0,     0,     0,     0,     0,     0,
       0,     0,   792,     0,     0,   354,     0,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,     0,   379,   351,   352,   353,     0,     0,     0,     0,
       0,     0,   380,     0,     0,     0,     0,     0,     0,     0,
       0,   793,     0,     0,   354,     0,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
       0,   379,   351,   352,   353,     0,     0,     0,     0,     0,
       0,   380,     0,     0,     0,     0,     0,     0,   958,     0,
       0,     0,     0,   354,     0,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,     0,
     379,   351,   352,   353,     0,     0,     0,     0,     0,     0,
     380,     0,     0,     0,     0,     0,     0,   381,     0,     0,
       0,     0,   354,     0,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,     0,   379,
     351,   352,   353,     0,     0,     0,     0,     0,     0,   380,
       0,     0,     0,     0,     0,   614,     0,     0,     0,     0,
       0,   354,     0,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,     0,   379,   351,
     352,   353,     0,     0,     0,     0,     0,     0,   380,     0,
       0,     0,     0,     0,   616,     0,     0,     0,     0,     0,
     354,     0,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,     0,   379,   351,   352,
     353,     0,     0,     0,     0,     0,     0,   380,     0,     0,
       0,     0,     0,   624,     0,     0,     0,     0,     0,   354,
       0,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,     0,   379,   351,   352,   353,
       0,     0,     0,     0,     0,     0,   380,     0,     0,     0,
       0,     0,   627,     0,     0,     0,     0,     0,   354,     0,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,     0,   379,   351,   352,   353,     0,
       0,     0,     0,     0,     0,   380,     0,     0,     0,     0,
       0,   632,     0,     0,     0,     0,     0,   354,     0,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,     0,   379,   351,   352,   353,     0,     0,
       0,     0,     0,     0,   380,     0,     0,     0,     0,     0,
     633,     0,     0,     0,     0,     0,   354,     0,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,     0,   379,   351,   352,   353,     0,     0,     0,
       0,     0,     0,   380,     0,     0,     0,     0,     0,   656,
       0,     0,     0,     0,     0,   354,     0,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,     0,   379,   351,   352,   353,     0,     0,     0,     0,
       0,     0,   380,     0,     0,     0,     0,     0,   671,     0,
       0,     0,     0,     0,   354,     0,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
       0,   379,   351,   352,   353,   128,    28,    29,    30,    31,
       0,   380,    33,     0,     0,     0,     0,   780,     0,     0,
       0,     0,     0,   354,     0,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   156,
     379,     0,     0,     0,     0,   130,     0,     0,     0,     0,
     380,     0,     0,     0,     0,     0,   781,     0,     0,    70,
       0,    71,    72,    73,    74,    75,    76,    77,    78,     0,
       0,     0,   216,     0,   217,   218,   219,   220,   221,   222,
     223,   224,   225,     0,     0,     0,     0,     0,     0,     0,
       0,   305,     0,     0,     0,     0,   306,     0,    88,    89,
       0,     0,     0,     0,     0,   796,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   226,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   227,     0,   228,
     229,     0,     0,   230,     0,     0,   231,     0,     0,     0,
       0,     0,   842,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,     0,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   216,   353,   217,
     218,   219,   220,   221,   222,   223,   224,   225,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   354,     0,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,     0,   379,     0,     0,     0,     0,     0,
       0,   226,     0,     0,   380,     0,     0,     0,     0,     0,
       0,     0,   227,     0,   228,   229,     0,     0,   230,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,     0,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   216,     0,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,     0,   379,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   380,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   226,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   227,     0,   228,
     229,     0,     0,  1090,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   902,   903,   904,
     905,   906,   907,   908,   273,   274,   275,   276,     0,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   321,   322,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   351,
     352,   353,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   128,    28,    29,    30,    31,     0,
     354,    33,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,     0,   379,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   380,   156,     0,
       0,     0,     0,     0,   130,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   722,    70,     0,
      71,    72,    73,    74,    75,    76,    77,    78,     0,   630,
       0,     0,     0,     0,     0,     0,     0,     0,   351,   352,
     353,     0,     0,   534,     0,     0,     0,     0,     0,     0,
     305,     0,     0,     0,     0,   723,     0,    88,    89,   354,
       0,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,     0,   379,   351,   352,   353,
       0,     0,     0,     0,     0,     0,   380,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   354,   698,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,     0,   379,   351,   352,   353,     0,
       0,     0,     0,     0,     0,   380,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   354,     0,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,     0,   379,   352,   353,     0,     0,     0,
       0,     0,     0,     0,   380,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   354,     0,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   409,   379,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   380,     0,     0,     0,     0,   354,     0,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,     0,   379,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   380,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,     0,   379,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   380,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,     0,   379,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   380
};

static const yytype_int16 yycheck[] =
{
       2,     2,   112,    68,    80,    81,    54,     2,   488,   701,
     187,   491,    80,    81,   195,   495,    80,    81,   628,   749,
     111,   112,    47,   133,   300,   301,   944,    52,   946,    14,
     306,   505,   831,    35,   735,    80,    81,    14,   739,    90,
      14,    14,   133,    92,     2,    31,   917,   729,    37,    31,
      37,    35,   788,    31,     0,    78,    56,   664,    99,    78,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    39,   131,   615,   102,   103,    57,   148,   102,   103,
      35,    92,    92,    31,    38,    79,    67,    92,   790,    74,
     899,    99,    46,    47,   711,    31,   130,    30,    52,    74,
     171,   160,   163,    78,   148,   108,   109,   853,    74,    75,
      76,    77,   858,   164,   148,   807,    78,   809,   927,   129,
      30,   131,   208,    78,   170,   388,    78,   171,    80,    83,
     208,   166,    86,    78,   208,    80,    74,   195,   947,   124,
     173,    74,    75,    76,    77,   178,   174,   170,    35,   178,
     174,   693,   118,   208,   417,   418,   164,   991,    74,   993,
     163,   901,   779,    99,    74,    75,    76,    77,   170,   915,
     168,   980,   171,   171,   171,    67,   171,   173,   798,  1107,
     172,   665,   170,   163,   171,   118,   897,   171,   171,    78,
     170,    80,    79,  1074,   940,   941,   942,   943,   173,   161,
     162,   155,   173,   178,   158,   138,   139,    70,    71,   161,
     162,    78,   166,    80,   168,   160,   161,   162,   171,   173,
     174,   175,   755,   177,   178,   177,   759,   170,   138,   139,
     316,    78,    74,    75,    76,    77,    78,   170,   316,   325,
     170,    74,   316,   304,    77,   531,   736,   325,  1082,    37,
      38,   325,   206,    37,    38,   209,   210,    78,   449,    80,
     170,   316,    74,    75,    76,    77,  1100,  1101,   151,   152,
     325,   160,   161,   162,  1108,   108,   118,   110,  1112,   170,
      74,    75,    76,    77,    78,    78,   170,    80,   130,   168,
      78,   392,   175,   172,   161,   162,   786,   170,    74,    75,
      76,    77,   835,   836,   837,   838,   148,   163,   320,   320,
     385,   386,   170,   160,   161,   162,    74,    75,    76,    77,
     170,   811,   170,   813,   118,   815,   138,   139,   170,   339,
     391,    70,    71,   168,   824,  1075,   178,   172,   108,   109,
     161,   162,   118,    78,   108,   109,   300,   301,   118,    88,
     411,   305,   306,   151,   152,   390,   383,    35,   545,    37,
     118,   315,   138,   139,    74,    75,    76,    77,   161,   162,
     324,   174,   175,   108,   109,   173,   170,   175,   148,   347,
     138,   139,   336,   168,   178,   379,   421,   172,   173,   168,
      35,   449,    37,   172,   170,  1097,   170,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   170,   380,   170,   138,   139,
     442,   442,   108,   534,   110,   389,   390,   723,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,    52,   168,   466,   409,   170,   172,   151,   152,
     170,   471,    74,    75,   170,    77,   420,   421,   527,   163,
     424,   163,   466,   500,    74,    53,    54,    55,    78,    57,
     173,    35,   175,    83,   438,   168,   119,   120,   171,    67,
     776,   124,   379,   101,   102,   103,   108,   130,   110,   453,
     170,    55,   456,   457,   458,   459,   460,   461,   462,   463,
     163,   168,   598,   799,   508,   172,   527,   527,    74,   168,
     598,    77,   527,   172,   598,   586,    91,   714,   589,   630,
     717,   485,   593,   594,   168,    89,   168,   172,   172,  1029,
     172,   102,   172,   598,   630,    74,    75,   172,    77,    16,
     168,   169,   630,   171,   581,   172,   630,   118,   119,   120,
     121,   122,   123,   124,   125,   172,   652,   113,   114,   151,
     152,   101,   102,   103,   652,   630,    16,   531,   652,   466,
     534,   163,   536,   168,   169,    74,   171,   148,   542,    74,
     544,   173,    74,   175,   151,   152,   550,   652,   172,   173,
     151,   152,   688,   151,   152,    74,   163,   634,   151,   152,
     688,   173,   163,   170,   688,   163,   173,   804,   175,   170,
     163,   508,   173,   172,   175,   173,   168,   175,   169,   583,
     173,   170,   175,   688,   170,   662,   168,   591,   724,   836,
     837,   941,   942,    87,    88,   176,   724,   170,   170,    31,
     724,   172,   171,   170,   666,   666,   624,   172,   313,   627,
     847,   666,   317,   168,   658,    74,   173,   661,   172,   724,
      78,    31,   626,    31,   628,   629,   331,    31,   333,   334,
     335,    31,    31,    31,   696,   696,    31,   699,   875,   701,
      31,    31,   102,    31,    31,   649,   650,   168,   666,   172,
     654,   802,   168,   168,   134,   115,   893,   134,   118,   119,
     120,   121,   122,   123,   124,   125,   802,    31,   173,   108,
     171,   110,   171,   750,   802,   784,   169,   681,   802,   118,
     119,   120,   121,   122,   123,   124,   690,   169,   148,    74,
     767,    74,   170,   174,   698,    16,    74,   802,   170,    30,
     170,   170,   170,   169,   169,   749,   768,   768,   135,   727,
     173,   173,   173,   768,   174,    99,   171,   794,   171,   723,
     171,   658,   959,    16,   661,   170,   663,   731,   790,    83,
     171,   169,   172,   795,   795,   797,   797,   741,   171,   170,
     170,   170,    99,    74,    75,    76,    77,   172,   172,   168,
     768,    49,    50,    51,    52,    53,    54,    55,   995,    57,
     172,   168,   780,    35,   173,  1002,   770,   829,   845,    67,
      35,    37,   776,    31,   148,   379,   172,   174,   172,   171,
     169,   385,   386,   387,   388,   803,   830,   168,   168,   851,
     121,   122,   123,   124,   798,   799,   171,   168,   168,   172,
      74,   170,   911,    37,   171,   173,   976,   138,   139,   174,
     414,   173,   749,   417,   418,   419,   878,   878,   755,   168,
     173,    31,   759,   900,  1061,   976,   174,    38,  1065,    35,
    1067,    35,   171,   115,    37,   173,   172,   171,   171,   170,
     172,   992,   171,    14,    14,   173,   971,   451,   892,   174,
     975,   788,    14,    37,   165,   916,   170,   901,   920,   172,
     172,    78,   466,    78,   172,   171,    16,    16,    16,   931,
     931,   173,   168,   173,  1111,   172,    78,   881,   173,    51,
      52,    53,    54,    55,   888,    57,   890,   163,  1013,   172,
     952,   952,   172,   830,   116,    67,  1021,    16,   835,   836,
     837,   838,    99,   108,   109,   967,   967,   163,   970,   171,
     170,   172,  1063,   118,   119,   120,   853,   979,  1043,   124,
     171,   858,  1074,   508,    54,   130,   131,   132,   133,   822,
    1055,   949,   994,   951,   176,   449,   195,   652,  1015,    98,
     951,  1003,  1003,   148,   802,   888,   956,   851,  1025,   759,
     915,  1076,   784,   932,   650,   892,   858,   961,   454,   451,
     964,  1023,  1006,   911,   901,  1052,   102,  1092,  1043,  1013,
     424,  1033,  1033,  1035,  1035,  1055,   379,   160,   915,   115,
    1057,  1063,   118,   119,   120,   121,   122,   123,   124,   125,
     439,   411,   536,   386,   654,   932,    -1,    -1,   102,  1043,
    1077,    -1,  1079,   940,   941,   942,   943,    -1,    -1,    -1,
      -1,   115,   148,    -1,   118,   119,   120,   121,   122,   123,
     124,   125,  1084,  1084,    -1,  1087,  1087,  1089,  1089,    -1,
      -1,  1075,    -1,    -1,  1038,  1097,    -1,    -1,   174,    -1,
      -1,   102,    -1,    -1,   148,    -1,  1050,    -1,    -1,    -1,
    1054,  1113,  1113,    -1,   115,  1059,    -1,   118,   119,   120,
     121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,  1006,
     174,    -1,    -1,    -1,    -1,    -1,  1013,    -1,    -1,  1083,
      -1,    -1,    -1,    -1,    -1,    -1,     3,   148,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1043,    -1,    -1,    -1,
      -1,    -1,    -1,   174,    -1,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,  1075,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    81,    -1,    -1,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,   165,   149,
     150,   151,   152,   170,   171,     9,    10,    11,   175,   176,
     177,   178,     3,   163,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   173,    15,   175,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    67,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    -1,    -1,
      81,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       3,    -1,     5,     6,     7,     8,    -1,   171,   159,    12,
      13,    -1,    15,    -1,   165,    -1,    -1,    -1,    -1,   170,
      -1,   102,    -1,    -1,   175,   176,   177,   178,    -1,    -1,
      -1,    -1,    -1,    -1,   115,    -1,    -1,   118,   119,   120,
     121,   122,   123,   124,   125,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    -1,   148,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    -1,
      -1,    84,    85,    86,    87,    -1,    89,    90,    91,    -1,
      93,    -1,    95,   174,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      -1,    -1,   115,    -1,   117,   118,   119,   120,    -1,    -1,
      -1,   124,    -1,   126,   127,   128,   129,   130,   131,   132,
     133,    -1,    -1,   136,   137,   138,    -1,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     3,    -1,
       5,     6,     7,     8,    -1,    -1,   159,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,
     173,   174,   175,   176,   177,   178,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    67,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    -1,    -1,    84,
      85,    86,    87,    -1,    89,    90,    91,    -1,    93,    -1,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
     115,    -1,   117,   118,   119,   120,    -1,    -1,    -1,   124,
      -1,   126,   127,   128,   129,   130,   131,   132,   133,    -1,
      -1,   136,   137,   138,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,     3,    -1,     5,     6,
       7,     8,    -1,    -1,   159,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,   172,   173,   174,
     175,   176,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    -1,    -1,    84,    85,    86,
      87,    -1,    89,    90,    91,    -1,    93,    -1,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,    -1,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    -1,    -1,   115,    -1,
     117,   118,   119,   120,    -1,    -1,    -1,   124,    -1,   126,
     127,   128,   129,   130,   131,   132,   133,    -1,    -1,   136,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   159,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    -1,   172,   173,    -1,   175,   176,
     177,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    -1,    -1,    84,    85,    86,    87,    -1,
      89,    90,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,   104,   105,   106,   107,   108,
     109,    -1,   111,   112,    -1,    -1,    -1,    -1,   117,   118,
     119,   120,    -1,    -1,    -1,   124,    -1,   126,   127,   128,
     129,   130,   131,   132,   133,    -1,    -1,    -1,   137,   138,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     3,    -1,     5,     6,     7,     8,    -1,    -1,
     159,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,   172,   173,   174,   175,   176,   177,   178,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    56,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    -1,    -1,    84,    85,    86,    87,    -1,    89,    90,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,   105,   106,   107,   108,   109,    -1,
     111,   112,    -1,    -1,    -1,    -1,   117,   118,   119,   120,
      -1,    -1,    -1,   124,    -1,   126,   127,   128,   129,   130,
     131,   132,   133,    -1,    -1,    -1,   137,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       3,    -1,     5,     6,     7,     8,    -1,    -1,   159,    12,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,   172,   173,   174,   175,   176,   177,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    -1,
      -1,    84,    85,    86,    87,    88,    89,    90,    91,    -1,
      93,    -1,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
      -1,    -1,    -1,    -1,   117,   118,   119,   120,    -1,    -1,
      -1,   124,    -1,   126,   127,   128,   129,   130,   131,   132,
     133,    -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     3,    -1,
       5,     6,     7,     8,    -1,    -1,   159,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,
     173,    -1,   175,   176,   177,   178,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    -1,    -1,    84,
      85,    86,    87,    -1,    89,    90,    91,    92,    93,    -1,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
     105,   106,   107,   108,   109,    -1,   111,   112,    -1,    -1,
      -1,    -1,   117,   118,   119,   120,    -1,    -1,    -1,   124,
      -1,   126,   127,   128,   129,   130,   131,   132,   133,    -1,
      -1,    -1,   137,   138,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,     3,    -1,     5,     6,
       7,     8,    -1,    -1,   159,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,   172,   173,    -1,
     175,   176,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    -1,    -1,    84,    85,    86,
      87,    -1,    89,    90,    91,    -1,    93,    -1,    95,    -1,
      97,    98,    -1,   100,    -1,    -1,    -1,   104,   105,   106,
     107,   108,   109,    -1,   111,   112,    -1,    -1,    -1,    -1,
     117,   118,   119,   120,    -1,    -1,    -1,   124,    -1,   126,
     127,   128,   129,   130,   131,   132,   133,    -1,    -1,    -1,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   159,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    -1,   172,   173,    -1,   175,   176,
     177,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    -1,    -1,    84,    85,    86,    87,    -1,
      89,    90,    91,    -1,    93,    -1,    95,    96,    97,    -1,
      -1,   100,    -1,    -1,    -1,   104,   105,   106,   107,   108,
     109,    -1,   111,   112,    -1,    -1,    -1,    -1,   117,   118,
     119,   120,    -1,    -1,    -1,   124,    -1,   126,   127,   128,
     129,   130,   131,   132,   133,    -1,    -1,    -1,   137,   138,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     3,    -1,     5,     6,     7,     8,    -1,    -1,
     159,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,   172,   173,    -1,   175,   176,   177,   178,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    56,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    -1,    -1,    84,    85,    86,    87,    -1,    89,    90,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,   105,   106,   107,   108,   109,    -1,
     111,   112,    -1,    -1,    -1,    -1,   117,   118,   119,   120,
      -1,    -1,    -1,   124,    -1,   126,   127,   128,   129,   130,
     131,   132,   133,    -1,    -1,    -1,   137,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       3,    -1,     5,     6,     7,     8,    -1,    -1,   159,    12,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,   172,   173,   174,   175,   176,   177,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    -1,
      -1,    84,    85,    86,    87,    -1,    89,    90,    91,    -1,
      93,    94,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
      -1,    -1,    -1,    -1,   117,   118,   119,   120,    -1,    -1,
      -1,   124,    -1,   126,   127,   128,   129,   130,   131,   132,
     133,    -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     3,    -1,
       5,     6,     7,     8,    -1,    -1,   159,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,
     173,    -1,   175,   176,   177,   178,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    -1,    -1,    84,
      85,    86,    87,    -1,    89,    90,    91,    -1,    93,    -1,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
     105,   106,   107,   108,   109,    -1,   111,   112,    -1,    -1,
      -1,    -1,   117,   118,   119,   120,    -1,    -1,    -1,   124,
      -1,   126,   127,   128,   129,   130,   131,   132,   133,    -1,
      -1,    -1,   137,   138,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,     3,    -1,     5,     6,
       7,     8,    -1,    -1,   159,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,   172,   173,   174,
     175,   176,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    -1,    -1,    84,    85,    86,
      87,    -1,    89,    90,    91,    -1,    93,    -1,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,    -1,   104,   105,   106,
     107,   108,   109,    -1,   111,   112,    -1,    -1,    -1,    -1,
     117,   118,   119,   120,    -1,    -1,    -1,   124,    -1,   126,
     127,   128,   129,   130,   131,   132,   133,    -1,    -1,    -1,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   159,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    -1,   172,   173,   174,   175,   176,
     177,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    -1,    -1,    84,    85,    86,    87,    -1,
      89,    90,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,   104,   105,   106,   107,   108,
     109,    -1,   111,   112,    -1,    -1,    -1,    -1,   117,   118,
     119,   120,    -1,    -1,    -1,   124,    -1,   126,   127,   128,
     129,   130,   131,   132,   133,    -1,    -1,    -1,   137,   138,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     3,    -1,     5,     6,     7,     8,    -1,    -1,
     159,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,   172,   173,   174,   175,   176,   177,   178,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    56,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    -1,    -1,    84,    85,    86,    87,    -1,    89,    90,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,   105,   106,   107,   108,   109,    -1,
     111,   112,    -1,    -1,    -1,    -1,   117,   118,   119,   120,
      -1,    -1,    -1,   124,    -1,   126,   127,   128,   129,   130,
     131,   132,   133,    -1,    -1,    -1,   137,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       3,    -1,     5,     6,     7,     8,    -1,    -1,   159,    12,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,   172,   173,   174,   175,   176,   177,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    -1,
      -1,    84,    85,    86,    87,    -1,    89,    90,    91,    -1,
      93,    -1,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
      -1,    -1,    -1,    -1,   117,   118,   119,   120,    -1,    -1,
      -1,   124,    -1,   126,   127,   128,   129,   130,   131,   132,
     133,    -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,   159,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,   170,    -1,   172,
     173,    -1,   175,   176,   177,   178,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    70,    71,    -1,    -1,    74,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
       3,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    12,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,    -1,    -1,   173,    -1,    -1,    31,    -1,
     178,    -1,    -1,    -1,   115,    -1,    -1,   118,   119,   120,
     121,   122,   123,   124,   125,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    -1,   148,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    -1,
      -1,    84,    85,    86,    87,    -1,    89,    90,    91,    -1,
      93,    -1,    95,   174,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
      -1,    -1,    -1,    -1,   117,   118,    -1,    -1,    -1,    -1,
      -1,   124,    -1,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     3,    -1,
       5,     6,     7,     8,    -1,    -1,   159,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,
     173,    -1,   175,   176,   177,   178,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    -1,    -1,    84,
      85,    86,    87,    -1,    89,    90,    91,    -1,    93,    -1,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
     105,   106,   107,   108,   109,    -1,   111,   112,    -1,    -1,
      -1,    -1,   117,   118,    -1,    -1,    -1,    -1,    -1,   124,
      -1,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   137,   138,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,     3,    -1,     5,     6,
       7,     8,    -1,    -1,   159,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,   172,   173,    -1,
     175,   176,   177,   178,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    -1,    -1,    84,    85,    86,
      87,    -1,    89,    90,    91,    -1,    93,    -1,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,    -1,   104,   105,   106,
     107,   108,   109,    -1,   111,   112,    -1,    -1,    -1,    -1,
     117,   118,    -1,    -1,    -1,    -1,    -1,   124,    -1,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   159,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    -1,   172,   173,    -1,   175,   176,
     177,   178,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    -1,    -1,    84,    85,    86,    87,    -1,
      89,    90,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,   104,   105,   106,   107,   108,
     109,    -1,   111,   112,    -1,    -1,    -1,    -1,   117,   118,
      -1,    -1,    -1,    -1,    -1,   124,    -1,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     3,    -1,     5,     6,     7,     8,    -1,    -1,
     159,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,   172,   173,    -1,   175,   176,   177,   178,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    56,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    -1,    -1,    84,    85,    86,    87,    -1,    89,    90,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,   105,   106,   107,   108,   109,    -1,
     111,   112,    -1,    -1,    -1,    -1,   117,   118,    -1,    -1,
      -1,    -1,    -1,   124,    -1,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   137,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       3,    -1,     5,     6,     7,     8,    -1,    -1,   159,    12,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,   172,   173,    -1,   175,   176,   177,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    -1,
      -1,    84,    85,    86,    87,    -1,    89,    90,    91,    -1,
      93,    -1,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
      -1,    -1,    -1,    -1,   117,   118,    -1,    -1,    -1,    -1,
      -1,   124,    -1,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     3,    -1,
       5,     6,     7,     8,    -1,    -1,   159,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,
     173,    -1,   175,   176,   177,   178,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    78,    -1,    -1,    81,    -1,    -1,    84,
      85,    86,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,   104,
      57,    -1,    -1,   108,   109,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   137,   138,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,     3,    -1,     5,     6,
       7,     8,    -1,    -1,   159,    12,    13,    -1,    15,    -1,
     165,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,
     175,   176,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    81,    -1,    -1,    84,    85,    86,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,   104,    57,    -1,
      -1,   108,   109,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   159,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,   175,   176,
     177,   178,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    81,    -1,    -1,    84,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,   108,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     3,    -1,     5,     6,     7,     8,    -1,    -1,
     159,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,    -1,    -1,    -1,   175,   176,   177,   178,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    56,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    78,    -1,    -1,
      81,    82,    -1,    84,    85,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,    -1,    -1,    -1,   108,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   137,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       3,    -1,     5,     6,     7,     8,    -1,    -1,   159,    12,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,    -1,    -1,    -1,   175,   176,   177,   178,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    -1,    -1,    81,    -1,
      -1,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,    -1,    -1,    -1,   108,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     3,    -1,
       5,     6,     7,     8,    -1,    -1,   159,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,
      -1,    -1,   175,   176,   177,   178,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    78,    -1,    -1,    81,    -1,    -1,    84,
      85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,   108,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   137,   138,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,     3,    -1,     5,     6,
       7,     8,    -1,    -1,   159,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,
     175,   176,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    81,    -1,    -1,    84,    85,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,
      -1,   108,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   159,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,   170,   171,    -1,    -1,    -1,   175,   176,
     177,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    81,    -1,    -1,    84,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,   104,    -1,    -1,    -1,   108,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     3,    -1,     5,     6,     7,     8,    -1,    -1,
     159,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,    -1,    -1,    -1,   175,   176,   177,   178,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    56,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    78,    -1,    -1,
      81,    -1,    -1,    84,    85,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,    -1,    -1,    -1,   108,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   137,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,   159,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,   170,
      -1,    -1,    -1,    -1,   175,   176,   177,   178,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    70,    71,    -1,    -1,    74,    75,
      76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,     3,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    68,    -1,    70,
      71,    -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,    -1,    -1,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,   174,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   174,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   174,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   174,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   174,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,   171,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
     171,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,   171,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,     9,    10,    11,    74,    75,    76,    77,    78,
      -1,    67,    81,    -1,    -1,    -1,    -1,   171,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,   118,
      57,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,   138,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,    -1,
      -1,    -1,     3,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,    -1,    -1,    -1,   175,    -1,   177,   178,
      -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,
      71,    -1,    -1,    74,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,   169,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,     3,    11,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    70,    71,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,     3,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,
      71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,    -1,
      30,    81,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,   118,    -1,
      -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,    -1,
     140,   141,   142,   143,   144,   145,   146,   147,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,    -1,   175,    -1,   177,   178,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    14,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   180,   185,     0,     3,     5,     6,     7,     8,    12,
      13,    15,    51,    52,    56,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    68,    72,    73,    74,    75,    76,
      77,    78,    79,    81,    84,    85,    86,    87,    89,    90,
      91,    93,    95,    97,   100,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   115,   117,   118,   119,   120,   124,
     126,   127,   128,   129,   130,   131,   132,   133,   136,   137,
     138,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   159,   170,   172,   173,   175,   176,   177,   178,
     189,   192,   193,   194,   195,   211,   220,   223,   226,   227,
     228,   230,   232,   247,   253,   254,   255,   256,   309,   310,
     311,   312,   313,   321,   323,   328,   329,   330,   331,   333,
     334,   335,   336,   337,   338,   339,   340,   351,    74,   118,
     124,   193,   310,   313,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,    31,   170,   118,   130,   170,   189,
     193,   307,   323,   324,   339,   341,   170,   325,   170,   303,
     304,   310,   211,   170,   170,   170,   170,   170,   170,   310,
     332,   332,    74,    74,   208,   302,   332,   173,    74,    75,
      77,   108,   110,   187,   188,   198,   200,   204,   207,   278,
     279,   339,    78,   280,   281,   311,   170,   275,   170,   170,
     170,   170,   225,   229,   231,   233,     3,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    57,    68,    70,    71,
      74,    77,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   181,   182,   184,   186,   197,
     170,   170,   190,   191,   323,   170,   175,   328,   330,   331,
     338,   338,    78,    80,   160,   161,   162,   348,   349,   310,
     209,    37,    38,   137,   165,   183,   310,   344,   345,   346,
     347,    80,   326,   348,    80,   348,   173,   339,   275,   118,
     124,   192,   194,   311,   130,   227,    70,    71,    70,    71,
      88,     9,    10,    11,    30,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    57,
      67,   172,   183,   317,   317,   163,   163,   151,   152,   173,
     175,   322,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,   149,   150,   317,    14,
     310,   308,   310,   307,   163,   275,   327,   151,   152,   163,
     173,   175,   332,   310,   168,   172,    91,   310,   305,   306,
     310,   310,   208,   310,   310,   172,   172,   172,    16,   168,
     172,   172,   209,    99,   164,   188,   199,   204,   172,   168,
     172,   168,   172,    16,   168,   172,     3,     5,     6,     7,
       8,    12,    13,    68,    74,    84,    85,    86,   104,   108,
     109,   118,   124,   127,   128,   137,   138,   140,   141,   142,
     143,   144,   145,   146,   147,   165,   171,   184,   276,   277,
     310,   217,   218,   338,   310,   352,   353,   310,   171,    74,
      74,    74,    74,   172,   196,   173,   344,   344,   168,   201,
     275,   310,   344,   151,   152,   175,   160,   349,    82,   310,
     338,    80,   160,   349,   171,   129,   174,   193,   194,   210,
     211,   170,   310,   338,    14,   169,   168,   176,   177,   310,
     311,   224,   170,   211,   170,    31,   172,   310,   310,   310,
      31,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   324,   310,   314,    74,
     124,   219,   314,   173,   184,   339,   342,   184,   339,   342,
      74,   173,   339,   343,   343,   310,   332,   275,   183,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   171,   327,   171,   339,   343,   343,
     339,   310,   332,   171,   171,   304,   170,   171,   172,   168,
      99,   171,   171,   171,   310,   302,   174,    74,   173,   164,
     172,   172,   188,   207,   279,   310,   281,   171,   310,    31,
     168,   201,   168,   201,   168,   201,   171,   172,   134,   237,
     314,   134,   238,    31,   234,   173,   185,   171,   171,   190,
     169,   171,   169,    74,    74,    52,    74,    78,    83,   350,
     174,   175,   174,   174,   170,   194,   344,   137,   183,   310,
      16,   345,   174,    74,   310,   310,   209,   310,    31,   170,
     314,   170,   310,   275,   275,   310,   275,   275,   174,   169,
     338,   237,   174,   169,    31,   211,   310,    31,   211,   252,
     305,   310,   137,   175,   183,   240,   338,   212,    31,   173,
     244,   173,   314,   213,   187,   198,   202,   205,   206,   173,
     310,   165,   277,   171,   218,   171,   353,   171,   323,   135,
     239,   173,   285,   323,   314,    30,   118,   138,   139,   170,
     189,   264,   265,   266,   267,   268,   270,   239,   185,   174,
      16,    83,   169,   310,   171,   171,   170,   338,   310,   237,
     171,   171,    88,   310,   193,   257,   258,   259,   260,   262,
     170,   257,   174,   174,   239,   209,   171,   209,   172,   170,
     344,   338,    14,   171,    31,   211,   243,   172,   245,   172,
     245,   103,   248,   249,   250,   251,   310,   113,   114,   216,
      99,   206,   168,   201,   203,   206,   172,   285,   314,   282,
     168,   173,   265,   265,   268,    37,    35,    35,    37,   314,
     174,   310,   169,   172,   344,   239,   211,    31,   172,   262,
     171,   168,   201,    30,   121,   122,   123,   124,   170,   261,
     263,   269,   270,   271,   272,   273,   257,   171,   314,   172,
      92,   305,   344,   169,   240,    31,   211,   242,   209,   245,
     101,   102,   103,   245,   174,   168,   201,   174,   168,   201,
     168,   201,   170,   173,    74,   205,   174,   168,   201,   173,
     102,   115,   118,   119,   120,   121,   122,   123,   124,   125,
     174,   193,   235,   283,   284,   294,   295,   296,   297,   323,
     282,   171,   265,   265,   266,   266,   265,   173,   174,   171,
     314,   209,    31,   274,   259,   270,   270,   273,    38,   221,
      37,    35,    35,    37,   171,   115,   318,   173,   172,   171,
     171,   171,   209,    98,   101,   172,   310,    31,   172,   246,
     174,    14,   250,   310,    14,   214,   323,   209,   206,   174,
     282,   314,   285,   283,   263,   110,   313,   297,   174,   282,
     173,   264,    14,   171,   165,   222,   270,   270,   271,   271,
     270,   274,   170,   274,   282,    31,   211,   241,   242,    96,
     172,   172,   246,   209,   310,   310,    35,    78,   215,   174,
     174,   184,   172,   173,   286,    78,   298,   299,   184,   300,
     301,   317,   174,   282,   315,    78,   315,    78,   183,   319,
     320,   315,   174,   209,   172,   209,   323,   171,    16,   236,
     118,   174,   184,   287,   288,   289,   290,   291,   292,   323,
      16,   314,   168,   172,    16,   168,   172,   184,   174,   316,
     314,   173,    78,   168,   201,   173,    94,   173,   310,   172,
     174,   288,   172,   172,    99,   116,   163,   310,   299,   310,
     301,   314,   310,    16,   209,   320,   171,   209,   172,   209,
      74,   181,   297,   285,   184,   314,   314,   170,   315,   310,
     174,   174,   174,   184,   257,   315,   315,   171,   274,   315,
     172,   173,   293,   209,   315,   174
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   179,   180,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   182,   182,   182,   182,   182,   182,   182,
     182,   183,   183,   184,   184,   185,   185,   186,   186,   187,
     187,   188,   188,   189,   189,   189,   189,   190,   190,   191,
     191,   192,   193,   193,   194,   194,   194,   194,   194,   195,
     195,   195,   195,   195,   196,   195,   197,   195,   195,   195,
     195,   195,   195,   198,   198,   199,   200,   201,   201,   202,
     202,   203,   203,   204,   204,   205,   205,   206,   206,   207,
     207,   208,   208,   209,   209,   210,   210,   210,   210,   211,
     211,   211,   211,   211,   211,   211,   211,   211,   211,   211,
     211,   211,   211,   211,   211,   211,   211,   212,   211,   211,
     211,   211,   211,   213,   213,   214,   214,   215,   215,   216,
     216,   217,   217,   218,   219,   219,   220,   221,   221,   222,
     222,   224,   223,   225,   223,   226,   226,   227,   227,   227,
     229,   228,   231,   230,   233,   232,   234,   234,   235,   236,
     236,   237,   237,   238,   238,   239,   239,   240,   240,   240,
     240,   241,   241,   242,   242,   243,   243,   244,   244,   244,
     244,   245,   245,   245,   246,   246,   247,   248,   248,   249,
     249,   250,   250,   251,   251,   252,   252,   253,   253,   254,
     254,   255,   255,   256,   256,   257,   257,   258,   258,   259,
     259,   260,   260,   261,   261,   261,   261,   262,   262,   263,
     263,   264,   264,   264,   264,   265,   265,   266,   266,   267,
     267,   268,   268,   269,   269,   269,   269,   270,   270,   270,
     271,   271,   272,   272,   273,   273,   274,   274,   275,   275,
     275,   276,   276,   277,   277,   277,   278,   278,   279,   280,
     280,   281,   281,   282,   282,   283,   283,   283,   283,   284,
     284,   284,   285,   285,   286,   286,   286,   287,   287,   288,
     288,   289,   290,   290,   290,   290,   291,   291,   292,   293,
     293,   294,   294,   295,   295,   296,   296,   297,   297,   297,
     297,   297,   297,   297,   298,   298,   299,   299,   300,   300,
     301,   302,   303,   303,   304,   305,   305,   306,   306,   308,
     307,   309,   309,   309,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   311,   311,   312,
     313,   314,   315,   316,   317,   317,   318,   318,   319,   319,
     320,   320,   321,   321,   321,   321,   322,   321,   323,   323,
     324,   324,   324,   325,   325,   326,   326,   326,   327,   327,
     328,   328,   328,   328,   329,   329,   329,   329,   329,   329,
     329,   329,   330,   330,   330,   330,   330,   330,   330,   330,
     330,   331,   331,   332,   332,   333,   334,   334,   334,   334,
     335,   335,   336,   336,   336,   337,   337,   337,   337,   337,
     337,   338,   338,   338,   338,   339,   339,   339,   340,   340,
     341,   341,   341,   341,   341,   341,   341,   342,   342,   342,
     343,   343,   343,   344,   345,   345,   346,   346,   347,   347,
     347,   347,   347,   347,   347,   348,   348,   348,   348,   349,
     349,   349,   349,   349,   349,   349,   349,   350,   350,   350,
     350,   351,   351,   351,   351,   351,   351,   351,   352,   352,
     353
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     4,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     3,     0,     6,     0,     5,     3,     4,
       3,     4,     3,     1,     1,     6,     6,     0,     1,     3,
       1,     3,     1,     3,     1,     1,     2,     1,     3,     1,
       3,     3,     1,     2,     0,     1,     1,     2,     4,     3,
       1,     1,     5,     7,     9,     5,     3,     3,     3,     3,
       3,     3,     1,     2,     6,     7,     9,     0,     6,     1,
       6,     3,     2,     0,     9,     1,     3,     0,     1,     0,
       4,     1,     3,     1,     1,     1,    13,     0,     1,     0,
       1,     0,    10,     0,     9,     1,     2,     1,     1,     1,
       0,     7,     0,     8,     0,     9,     0,     2,     5,     0,
       2,     0,     2,     0,     2,     0,     2,     1,     2,     4,
       3,     1,     4,     1,     4,     1,     4,     3,     4,     4,
       5,     0,     5,     4,     1,     1,     7,     0,     2,     1,
       3,     4,     4,     1,     3,     1,     4,     5,     6,     1,
       3,     6,     7,     3,     6,     2,     0,     1,     3,     2,
       1,     0,     2,     1,     1,     1,     1,     6,     8,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     0,     2,     2,     4,
       3,     1,     3,     1,     3,     2,     3,     1,     1,     3,
       1,     1,     3,     2,     0,     4,     4,    12,     1,     1,
       2,     3,     1,     3,     1,     2,     3,     1,     2,     2,
       2,     3,     3,     3,     4,     3,     1,     1,     3,     1,
       3,     1,     1,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     4,     3,     1,
       4,     4,     3,     1,     1,     0,     1,     3,     1,     0,
       9,     3,     2,     3,     1,     6,     5,     3,     4,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     5,     4,     3,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     3,     2,     1,     2,     4,
       2,     2,     1,     2,     2,     3,     1,    13,    12,     1,
       1,     0,     0,     0,     0,     1,     0,     5,     3,     1,
       1,     2,     2,     2,     4,     4,     0,     3,     1,     1,
       1,     1,     3,     0,     3,     0,     1,     1,     0,     1,
       4,     3,     1,     3,     1,     1,     3,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     0,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     3,     1,     1,     4,     4,     4,     4,
       1,     1,     1,     3,     3,     1,     4,     2,     3,     3,
       1,     4,     4,     3,     3,     3,     3,     1,     3,     1,
       1,     3,     1,     1,     0,     1,     3,     1,     3,     1,
       4,     2,     2,     6,     4,     2,     2,     1,     2,     1,
       4,     3,     3,     3,     3,     6,     3,     1,     1,     2,
       1,     5,     4,     2,     2,     4,     2,     2,     1,     3,
       1
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
#if ZENDDEBUG

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
#else /* !ZENDDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !ZENDDEBUG */


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
  switch (yytype)
    {
    case 72: /* "integer"  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3552 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 73: /* "floating-point number"  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3558 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 74: /* "identifier"  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3564 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 75: /* "fully qualified name"  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3570 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 76: /* "namespace-relative name"  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3576 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 77: /* "namespaced name"  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3582 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 78: /* "variable"  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3588 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 79: /* T_INLINE_HTML  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3594 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 80: /* "string content"  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3600 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 81: /* "quoted string"  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3606 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 82: /* "variable name"  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3612 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 83: /* "number"  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3618 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 184: /* identifier  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3624 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 185: /* top_statement_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3630 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 186: /* namespace_declaration_name  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3636 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 187: /* namespace_name  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3642 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 188: /* legacy_namespace_name  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3648 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 189: /* name  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3654 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 190: /* attribute_decl  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3660 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 191: /* attribute_group  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3666 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 192: /* attribute  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3672 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 193: /* attributes  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3678 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 194: /* attributed_statement  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3684 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 195: /* top_statement  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3690 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 199: /* group_use_declaration  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3696 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 200: /* mixed_group_use_declaration  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3702 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 202: /* inline_use_declarations  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3708 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 203: /* unprefixed_use_declarations  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3714 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 204: /* use_declarations  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3720 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 205: /* inline_use_declaration  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3726 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 206: /* unprefixed_use_declaration  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3732 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 207: /* use_declaration  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3738 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 208: /* const_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3744 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 209: /* inner_statement_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3750 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 210: /* inner_statement  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3756 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 211: /* statement  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3762 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 213: /* catch_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3768 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 214: /* catch_name_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3774 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 215: /* optional_variable  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3780 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 216: /* finally_statement  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3786 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 217: /* unset_variables  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3792 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 218: /* unset_variable  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3798 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 219: /* function_name  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3804 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 220: /* function_declaration_statement  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3810 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 223: /* class_declaration_statement  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3816 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 228: /* trait_declaration_statement  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3822 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 230: /* interface_declaration_statement  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3828 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 232: /* enum_declaration_statement  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3834 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 234: /* enum_backing_type  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3840 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 235: /* enum_case  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3846 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 236: /* enum_case_expr  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3852 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 237: /* extends_from  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3858 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 238: /* interface_extends_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3864 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 239: /* implements_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3870 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 240: /* foreach_variable  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3876 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 241: /* for_statement  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3882 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 242: /* foreach_statement  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3888 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 243: /* declare_statement  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3894 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 244: /* switch_case_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3900 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 245: /* case_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3906 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 247: /* match  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3912 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 248: /* match_arm_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3918 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 249: /* non_empty_match_arm_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3924 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 250: /* match_arm  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3930 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 251: /* match_arm_cond_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3936 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 252: /* while_statement  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3942 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 253: /* if_stmt_without_else  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3948 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 254: /* if_stmt  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3954 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 255: /* alt_if_stmt_without_else  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3960 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 256: /* alt_if_stmt  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3966 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 257: /* parameter_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3972 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 258: /* non_empty_parameter_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3978 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 259: /* attributed_parameter  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3984 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 262: /* parameter  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3990 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 263: /* optional_type_without_static  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3996 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 264: /* type_expr  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4002 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 265: /* type  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4008 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 266: /* union_type_element  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4014 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 267: /* union_type  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4020 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 268: /* intersection_type  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4026 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 269: /* type_expr_without_static  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4032 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 270: /* type_without_static  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4038 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 271: /* union_type_without_static_element  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4044 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 272: /* union_type_without_static  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4050 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 273: /* intersection_type_without_static  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4056 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 274: /* return_type  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4062 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 275: /* argument_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4068 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 276: /* non_empty_argument_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4074 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 277: /* argument  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4080 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 278: /* global_var_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4086 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 279: /* global_var  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4092 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 280: /* static_var_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4098 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 281: /* static_var  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4104 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 282: /* class_statement_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4110 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 283: /* attributed_class_statement  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4116 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 284: /* class_statement  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4122 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 285: /* class_name_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4128 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 286: /* trait_adaptations  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4134 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 287: /* trait_adaptation_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4140 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 288: /* trait_adaptation  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4146 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 289: /* trait_precedence  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4152 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 290: /* trait_alias  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4158 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 291: /* trait_method_reference  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4164 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 292: /* absolute_trait_method_reference  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4170 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 293: /* method_body  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4176 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 298: /* property_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4182 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 299: /* property  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4188 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 300: /* class_const_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4194 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 301: /* class_const_decl  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4200 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 302: /* const_decl  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4206 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 303: /* echo_expr_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4212 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 304: /* echo_expr  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4218 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 305: /* for_exprs  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4224 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 306: /* non_empty_for_exprs  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4230 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 307: /* anonymous_class  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4236 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 309: /* new_expr  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4242 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 310: /* expr  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4248 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 311: /* inline_function  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4254 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 314: /* backup_doc_comment  */
#line 52 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { if (((*yyvaluep).str)) zend_string_release_ex(((*yyvaluep).str), 0); }
#line 4260 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 318: /* lexical_vars  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4266 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 319: /* lexical_var_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4272 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 320: /* lexical_var  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4278 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 321: /* function_call  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4284 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 323: /* class_name  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4290 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 324: /* class_name_reference  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4296 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 325: /* exit_expr  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4302 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 326: /* backticks_expr  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4308 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 327: /* ctor_arguments  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4314 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 328: /* dereferenceable_scalar  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4320 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 329: /* scalar  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4326 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 330: /* constant  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4332 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 331: /* class_constant  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4338 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 332: /* optional_expr  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4344 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 333: /* variable_class_name  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4350 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 334: /* fully_dereferenceable  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4356 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 335: /* array_object_dereferenceable  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4362 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 336: /* callable_expr  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4368 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 337: /* callable_variable  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4374 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 338: /* variable  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4380 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 339: /* simple_variable  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4386 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 340: /* static_member  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4392 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 341: /* new_variable  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4398 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 342: /* member_name  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4404 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 343: /* property_name  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4410 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 344: /* array_pair_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4416 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 345: /* possible_array_pair  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4422 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 346: /* non_empty_array_pair_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4428 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 347: /* array_pair  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4434 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 348: /* encaps_list  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4440 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 349: /* encaps_var  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4446 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 350: /* encaps_var_offset  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4452 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 351: /* internal_functions_in_yacc  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4458 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 352: /* isset_variables  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4464 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

    case 353: /* isset_variable  */
#line 51 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
            { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4470 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

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
      yychar = yylex (&yylval);
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
#line 296 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { CG(ast) = (yyvsp[0].ast); (void) zendnerrs; }
#line 4744 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 83:
#line 320 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 4750 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 84:
#line 321 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                               {
			zval zv;
			if (zend_lex_tstring(&zv, (yyvsp[0].ident)) == FAILURE) { YYABORT; }
			(yyval.ast) = zend_ast_create_zval(&zv);
		}
#line 4760 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 85:
#line 329 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                 { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4766 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 86:
#line 330 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                       { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }
#line 4772 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 87:
#line 335 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 4778 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 88:
#line 336 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 4784 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 89:
#line 341 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 4790 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 90:
#line 342 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 4796 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 91:
#line 347 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 4802 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 92:
#line 348 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 4808 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 93:
#line 352 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                                                { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_NOT_FQ; }
#line 4814 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 94:
#line 353 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                                        { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_NOT_FQ; }
#line 4820 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 95:
#line 354 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                                { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_FQ; }
#line 4826 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 96:
#line 355 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                                        { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_RELATIVE; }
#line 4832 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 97:
#line 360 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_ATTRIBUTE, (yyvsp[0].ast), NULL); }
#line 4838 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 98:
#line 362 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_ATTRIBUTE, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4844 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 99:
#line 367 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ATTRIBUTE_GROUP, (yyvsp[0].ast)); }
#line 4850 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 100:
#line 369 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4856 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 101:
#line 373 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = (yyvsp[-2].ast); }
#line 4862 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 102:
#line 377 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ATTRIBUTE_LIST, (yyvsp[0].ast)); }
#line 4868 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 103:
#line 378 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4874 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 104:
#line 382 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 4880 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 105:
#line 383 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 4886 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 106:
#line 384 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 4892 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 107:
#line 385 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 4898 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 108:
#line 386 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 4904 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 109:
#line 390 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 4910 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 110:
#line 391 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 4916 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 111:
#line 392 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }
#line 4922 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 112:
#line 394 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_HALT_COMPILER,
			      zend_ast_create_zval_from_long(zend_get_scanned_file_offset()));
			  zend_stop_lexing(); }
#line 4930 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 113:
#line 398 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[-1].ast), NULL);
			  RESET_DOC_COMMENT(); }
#line 4937 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 114:
#line 400 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                       { RESET_DOC_COMMENT(); }
#line 4943 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 115:
#line 402 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4949 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 116:
#line 403 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                            { RESET_DOC_COMMENT(); }
#line 4955 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 117:
#line 405 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, NULL, (yyvsp[-1].ast)); }
#line 4961 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 118:
#line 406 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 4967 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 119:
#line 407 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }
#line 4973 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 120:
#line 408 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                                { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_SYMBOL_CLASS; }
#line 4979 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 121:
#line 409 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }
#line 4985 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 122:
#line 410 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 4991 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 123:
#line 414 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.num) = ZEND_SYMBOL_FUNCTION; }
#line 4997 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 124:
#line 415 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.num) = ZEND_SYMBOL_CONST; }
#line 5003 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 125:
#line 420 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }
#line 5009 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 126:
#line 425 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-5].ast), (yyvsp[-2].ast));}
#line 5015 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 129:
#line 435 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5021 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 130:
#line 437 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }
#line 5027 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 131:
#line 442 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5033 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 132:
#line 444 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }
#line 5039 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 133:
#line 449 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5045 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 134:
#line 451 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }
#line 5051 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 135:
#line 455 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                           { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_SYMBOL_CLASS; }
#line 5057 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 136:
#line 456 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = (yyvsp[-1].num); }
#line 5063 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 137:
#line 461 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[0].ast), NULL); }
#line 5069 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 138:
#line 463 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5075 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 139:
#line 468 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[0].ast), NULL); }
#line 5081 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 140:
#line 470 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5087 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 141:
#line 474 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                          { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5093 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 142:
#line 475 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                           { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CONST_DECL, (yyvsp[0].ast)); }
#line 5099 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 143:
#line 480 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 5105 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 144:
#line 482 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }
#line 5111 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 145:
#line 487 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                          { (yyval.ast) = (yyvsp[0].ast); }
#line 5117 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 146:
#line 488 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5123 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 147:
#line 489 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }
#line 5129 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 148:
#line 491 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = NULL; zend_throw_exception(zend_ce_compile_error,
			      "__HALT_COMPILER() can only be used from the outermost scope", 0); YYERROR; }
#line 5136 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 149:
#line 497 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                             { (yyval.ast) = (yyvsp[-1].ast); }
#line 5142 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 150:
#line 498 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5148 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 151:
#line 499 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                            { (yyval.ast) = (yyvsp[0].ast); }
#line 5154 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 152:
#line 501 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_WHILE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5160 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 153:
#line 503 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_DO_WHILE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }
#line 5166 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 154:
#line 505 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_FOR, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5172 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 155:
#line 507 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_SWITCH, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5178 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 156:
#line 508 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = zend_ast_create(ZEND_AST_BREAK, (yyvsp[-1].ast)); }
#line 5184 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 157:
#line 509 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = zend_ast_create(ZEND_AST_CONTINUE, (yyvsp[-1].ast)); }
#line 5190 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 158:
#line 510 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = zend_ast_create(ZEND_AST_RETURN, (yyvsp[-1].ast)); }
#line 5196 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 159:
#line 511 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 5202 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 160:
#line 512 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 5208 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 161:
#line 513 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 5214 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 162:
#line 514 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                              { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[0].ast)); }
#line 5220 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 163:
#line 515 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = (yyvsp[-1].ast); }
#line 5226 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 164:
#line 516 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                   { (yyval.ast) = (yyvsp[-3].ast); }
#line 5232 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 165:
#line 518 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[-4].ast), (yyvsp[-2].ast), NULL, (yyvsp[0].ast)); }
#line 5238 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 166:
#line 521 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[-6].ast), (yyvsp[-2].ast), (yyvsp[-4].ast), (yyvsp[0].ast)); }
#line 5244 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 167:
#line 523 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { if (!zend_handle_encoding_declaration((yyvsp[-1].ast))) { YYERROR; } }
#line 5250 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 168:
#line 525 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_DECLARE, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 5256 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 169:
#line 526 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                              { (yyval.ast) = NULL; }
#line 5262 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 170:
#line 528 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_TRY, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 5268 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 171:
#line 529 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                    { (yyval.ast) = zend_ast_create(ZEND_AST_GOTO, (yyvsp[-1].ast)); }
#line 5274 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 172:
#line 530 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                             { (yyval.ast) = zend_ast_create(ZEND_AST_LABEL, (yyvsp[-1].ast)); }
#line 5280 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 173:
#line 535 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_CATCH_LIST); }
#line 5286 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 174:
#line 537 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-8].ast), zend_ast_create(ZEND_AST_CATCH, (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast))); }
#line 5292 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 175:
#line 541 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                           { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_NAME_LIST, (yyvsp[0].ast)); }
#line 5298 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 176:
#line 542 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                               { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5304 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 177:
#line 546 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                       { (yyval.ast) = NULL; }
#line 5310 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 178:
#line 547 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                           { (yyval.ast) = (yyvsp[0].ast); }
#line 5316 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 179:
#line 551 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                       { (yyval.ast) = NULL; }
#line 5322 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 180:
#line 552 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                       { (yyval.ast) = (yyvsp[-1].ast); }
#line 5328 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 181:
#line 556 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                               { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 5334 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 182:
#line 557 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                   { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5340 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 183:
#line 561 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = zend_ast_create(ZEND_AST_UNSET, (yyvsp[0].ast)); }
#line 5346 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 184:
#line 565 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 5352 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 185:
#line 566 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                           {
			zval zv;
			if (zend_lex_tstring(&zv, (yyvsp[0].ident)) == FAILURE) { YYABORT; }
			(yyval.ast) = zend_ast_create_zval(&zv);
		}
#line 5362 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 186:
#line 576 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                { (yyval.ast) = zend_ast_create_decl(ZEND_AST_FUNC_DECL, (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-12].num), (yyvsp[-9].str),
		      zend_ast_get_str((yyvsp[-10].ast)), (yyvsp[-7].ast), NULL, (yyvsp[-2].ast), (yyvsp[-5].ast), NULL); CG(extra_fn_flags) = (yyvsp[-4].num); }
#line 5369 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 187:
#line 581 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.num) = 0; }
#line 5375 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 188:
#line 582 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_PARAM_REF; }
#line 5381 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 189:
#line 586 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                       { (yyval.num) = 0; }
#line 5387 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 190:
#line 587 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                            { (yyval.num) = ZEND_PARAM_VARIADIC; }
#line 5393 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 191:
#line 591 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.num) = CG(zend_lineno); }
#line 5399 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 192:
#line 593 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, (yyvsp[-9].num), (yyvsp[-7].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-6].ast)), (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL, NULL); }
#line 5405 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 193:
#line 594 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.num) = CG(zend_lineno); }
#line 5411 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 194:
#line 596 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, 0, (yyvsp[-7].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-6].ast)), (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL, NULL); }
#line 5417 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 195:
#line 600 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.num) = (yyvsp[0].num); }
#line 5423 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 196:
#line 602 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.num) = zend_add_class_modifier((yyvsp[-1].num), (yyvsp[0].num)); if (!(yyval.num)) { YYERROR; } }
#line 5429 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 197:
#line 606 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.num) = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
#line 5435 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 198:
#line 607 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.num) = ZEND_ACC_FINAL; }
#line 5441 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 199:
#line 608 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.num) = ZEND_ACC_READONLY_CLASS|ZEND_ACC_NO_DYNAMIC_PROPERTIES; }
#line 5447 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 200:
#line 612 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.num) = CG(zend_lineno); }
#line 5453 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 201:
#line 614 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_TRAIT, (yyvsp[-5].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-4].ast)), NULL, NULL, (yyvsp[-1].ast), NULL, NULL); }
#line 5459 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 202:
#line 618 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                            { (yyval.num) = CG(zend_lineno); }
#line 5465 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 203:
#line 620 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_INTERFACE, (yyvsp[-6].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-5].ast)), NULL, (yyvsp[-4].ast), (yyvsp[-1].ast), NULL, NULL); }
#line 5471 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 204:
#line 624 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                       { (yyval.num) = CG(zend_lineno); }
#line 5477 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 205:
#line 626 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_ENUM|ZEND_ACC_FINAL, (yyvsp[-7].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-6].ast)), NULL, (yyvsp[-4].ast), (yyvsp[-1].ast), NULL, (yyvsp[-5].ast)); }
#line 5483 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 206:
#line 630 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = NULL; }
#line 5489 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 207:
#line 631 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                              { (yyval.ast) = (yyvsp[0].ast); }
#line 5495 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 208:
#line 636 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_ENUM_CASE, (yyvsp[-2].ast), (yyvsp[-1].ast), ((yyvsp[-3].str) ? zend_ast_create_zval_from_str((yyvsp[-3].str)) : NULL), NULL); }
#line 5501 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 209:
#line 640 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = NULL; }
#line 5507 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 210:
#line 641 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 5513 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 211:
#line 645 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = NULL; }
#line 5519 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 212:
#line 646 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5525 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 213:
#line 650 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = NULL; }
#line 5531 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 214:
#line 651 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 5537 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 215:
#line 655 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = NULL; }
#line 5543 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 216:
#line 656 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 5549 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 217:
#line 660 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 5555 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 218:
#line 661 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create(ZEND_AST_REF, (yyvsp[0].ast)); }
#line 5561 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 219:
#line 662 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                               { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_LIST; }
#line 5567 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 220:
#line 663 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; }
#line 5573 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 221:
#line 667 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                          { (yyval.ast) = (yyvsp[0].ast); }
#line 5579 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 222:
#line 668 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                      { (yyval.ast) = (yyvsp[-2].ast); }
#line 5585 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 223:
#line 672 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                          { (yyval.ast) = (yyvsp[0].ast); }
#line 5591 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 224:
#line 673 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                          { (yyval.ast) = (yyvsp[-2].ast); }
#line 5597 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 225:
#line 677 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                          { (yyval.ast) = (yyvsp[0].ast); }
#line 5603 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 226:
#line 678 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                          { (yyval.ast) = (yyvsp[-2].ast); }
#line 5609 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 227:
#line 682 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 5615 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 228:
#line 683 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 5621 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 229:
#line 684 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[-2].ast); }
#line 5627 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 230:
#line 685 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[-2].ast); }
#line 5633 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 231:
#line 689 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                       { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_SWITCH_LIST); }
#line 5639 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 232:
#line 691 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-4].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5645 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 233:
#line 693 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-3].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, NULL, (yyvsp[0].ast))); }
#line 5651 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 236:
#line 704 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_MATCH, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 5657 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 237:
#line 708 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                       { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_MATCH_ARM_LIST); }
#line 5663 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 238:
#line 709 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 5669 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 239:
#line 713 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                          { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_MATCH_ARM_LIST, (yyvsp[0].ast)); }
#line 5675 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 240:
#line 714 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                       { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5681 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 241:
#line 719 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_MATCH_ARM, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 5687 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 242:
#line 721 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_MATCH_ARM, NULL, (yyvsp[0].ast)); }
#line 5693 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 243:
#line 725 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                     { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_EXPR_LIST, (yyvsp[0].ast)); }
#line 5699 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 244:
#line 726 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                             { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5705 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 245:
#line 731 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                          { (yyval.ast) = (yyvsp[0].ast); }
#line 5711 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 246:
#line 732 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[-2].ast); }
#line 5717 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 247:
#line 738 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5724 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 248:
#line 741 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-5].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5731 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 249:
#line 746 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                    { (yyval.ast) = (yyvsp[0].ast); }
#line 5737 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 250:
#line 748 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[0].ast))); }
#line 5743 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 251:
#line 753 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-3].ast), (yyvsp[0].ast))); }
#line 5750 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 252:
#line 756 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-6].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-3].ast), (yyvsp[0].ast))); }
#line 5757 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 253:
#line 761 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                     { (yyval.ast) = (yyvsp[-2].ast); }
#line 5763 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 254:
#line 763 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-5].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[-2].ast))); }
#line 5770 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 255:
#line 768 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 5776 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 256:
#line 769 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_PARAM_LIST); }
#line 5782 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 257:
#line 775 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PARAM_LIST, (yyvsp[0].ast)); }
#line 5788 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 258:
#line 777 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5794 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 259:
#line 781 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }
#line 5800 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 260:
#line 782 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5806 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 261:
#line 786 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = 0; }
#line 5812 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 262:
#line 788 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.num) = zend_add_member_modifier((yyvsp[-1].num), (yyvsp[0].num)); if (!(yyval.num)) { YYERROR; } }
#line 5818 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 263:
#line 791 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_PUBLIC; }
#line 5824 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 264:
#line 792 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_PROTECTED; }
#line 5830 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 265:
#line 793 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_PRIVATE; }
#line 5836 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 266:
#line 794 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_READONLY; }
#line 5842 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 267:
#line 800 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[-5].num) | (yyvsp[-3].num) | (yyvsp[-2].num), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL,
					NULL, (yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL); }
#line 5849 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 268:
#line 804 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[-7].num) | (yyvsp[-5].num) | (yyvsp[-4].num), (yyvsp[-6].ast), (yyvsp[-3].ast), (yyvsp[0].ast),
					NULL, (yyvsp[-2].str) ? zend_ast_create_zval_from_str((yyvsp[-2].str)) : NULL); }
#line 5856 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 269:
#line 810 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = NULL; }
#line 5862 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 270:
#line 811 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 5868 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 271:
#line 815 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 5874 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 272:
#line 816 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr |= ZEND_TYPE_NULLABLE; }
#line 5880 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 273:
#line 817 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 5886 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 274:
#line 818 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5892 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 275:
#line 822 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5898 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 276:
#line 823 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_STATIC); }
#line 5904 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 277:
#line 827 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 5910 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 278:
#line 828 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                           { (yyval.ast) = (yyvsp[-1].ast); }
#line 5916 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 279:
#line 833 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_TYPE_UNION, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5922 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 280:
#line 835 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5928 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 281:
#line 839 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                          { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_TYPE_INTERSECTION, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5934 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 282:
#line 840 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                                 { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5940 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 283:
#line 847 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5946 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 284:
#line 848 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr |= ZEND_TYPE_NULLABLE; }
#line 5952 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 285:
#line 849 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 5958 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 286:
#line 850 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 5964 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 287:
#line 854 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_ARRAY); }
#line 5970 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 288:
#line 855 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_CALLABLE); }
#line 5976 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 289:
#line 856 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 5982 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 290:
#line 860 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                    { (yyval.ast) = (yyvsp[0].ast); }
#line 5988 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 291:
#line 861 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                          { (yyval.ast) = (yyvsp[-1].ast); }
#line 5994 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 292:
#line 866 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_TYPE_UNION, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6000 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 293:
#line 868 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6006 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 294:
#line 873 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_TYPE_INTERSECTION, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6012 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 295:
#line 875 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6018 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 296:
#line 879 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = NULL; }
#line 6024 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 297:
#line 880 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 6030 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 298:
#line 884 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); }
#line 6036 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 299:
#line 885 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                               { (yyval.ast) = (yyvsp[-2].ast); }
#line 6042 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 300:
#line 886 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                   { (yyval.ast) = zend_ast_create(ZEND_AST_CALLABLE_CONVERT); }
#line 6048 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 301:
#line 891 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARG_LIST, (yyvsp[0].ast)); }
#line 6054 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 302:
#line 893 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6060 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 303:
#line 897 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 6066 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 304:
#line 899 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_NAMED_ARG, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6072 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 305:
#line 900 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create(ZEND_AST_UNPACK, (yyvsp[0].ast)); }
#line 6078 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 306:
#line 904 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                               { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6084 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 307:
#line 905 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                           { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 6090 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 308:
#line 910 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                { (yyval.ast) = zend_ast_create(ZEND_AST_GLOBAL, zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast))); }
#line 6096 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 309:
#line 915 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                               { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6102 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 310:
#line 916 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                           { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 6108 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 311:
#line 920 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[0].ast), NULL); }
#line 6114 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 312:
#line 921 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6120 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 313:
#line 926 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6126 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 314:
#line 928 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }
#line 6132 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 315:
#line 934 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_GROUP, (yyvsp[-2].ast), (yyvsp[-1].ast), NULL);
			  (yyval.ast)->attr = (yyvsp[-3].num); }
#line 6139 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 316:
#line 937 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_CLASS_CONST_GROUP, (yyvsp[-1].ast), NULL);
			  (yyval.ast)->attr = (yyvsp[-3].num); }
#line 6146 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 317:
#line 941 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_decl(ZEND_AST_METHOD, (yyvsp[-9].num) | (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-10].num), (yyvsp[-7].str),
				  zend_ast_get_str((yyvsp[-8].ast)), (yyvsp[-5].ast), NULL, (yyvsp[-1].ast), (yyvsp[-3].ast), NULL); CG(extra_fn_flags) = (yyvsp[-2].num); }
#line 6153 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 318:
#line 943 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                          { (yyval.ast) = (yyvsp[0].ast); }
#line 6159 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 319:
#line 947 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                           { (yyval.ast) = (yyvsp[0].ast); }
#line 6165 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 320:
#line 948 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                      { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }
#line 6171 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 321:
#line 950 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_USE_TRAIT, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6177 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 322:
#line 954 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                           { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_NAME_LIST, (yyvsp[0].ast)); }
#line 6183 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 323:
#line 955 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                               { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6189 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 324:
#line 959 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                                { (yyval.ast) = NULL; }
#line 6195 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 325:
#line 960 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.ast) = NULL; }
#line 6201 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 326:
#line 961 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 6207 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 327:
#line 966 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_TRAIT_ADAPTATIONS, (yyvsp[0].ast)); }
#line 6213 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 328:
#line 968 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6219 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 329:
#line 972 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 6225 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 330:
#line 973 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 6231 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 331:
#line 978 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                { (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_PRECEDENCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6237 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 332:
#line 983 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_ALIAS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6243 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 333:
#line 985 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { zval zv;
			  if (zend_lex_tstring(&zv, (yyvsp[0].ident)) == FAILURE) { YYABORT; }
			  (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_ALIAS, (yyvsp[-2].ast), zend_ast_create_zval(&zv)); }
#line 6251 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 334:
#line 989 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[-1].num), (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 6257 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 335:
#line 991 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[0].num), (yyvsp[-2].ast), NULL); }
#line 6263 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 336:
#line 996 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, NULL, (yyvsp[0].ast)); }
#line 6269 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 337:
#line 997 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 6275 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 338:
#line 1002 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6281 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 339:
#line 1006 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = NULL; }
#line 6287 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 340:
#line 1007 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 6293 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 341:
#line 1011 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = (yyvsp[0].num); }
#line 6299 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 342:
#line 1012 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.num) = ZEND_ACC_PUBLIC; }
#line 6305 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 343:
#line 1016 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.num) = ZEND_ACC_PUBLIC; }
#line 6311 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 344:
#line 1018 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.num) = (yyvsp[0].num); if (!((yyval.num) & ZEND_ACC_PPP_MASK)) { (yyval.num) |= ZEND_ACC_PUBLIC; } }
#line 6317 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 345:
#line 1022 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.num) = (yyvsp[0].num); }
#line 6323 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 346:
#line 1024 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.num) = zend_add_member_modifier((yyvsp[-1].num), (yyvsp[0].num)); if (!(yyval.num)) { YYERROR; } }
#line 6329 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 347:
#line 1028 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_PUBLIC; }
#line 6335 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 348:
#line 1029 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_PROTECTED; }
#line 6341 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 349:
#line 1030 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_PRIVATE; }
#line 6347 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 350:
#line 1031 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_STATIC; }
#line 6353 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 351:
#line 1032 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_ABSTRACT; }
#line 6359 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 352:
#line 1033 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_FINAL; }
#line 6365 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 353:
#line 1034 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.num) = ZEND_ACC_READONLY; }
#line 6371 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 354:
#line 1038 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                           { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6377 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 355:
#line 1039 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PROP_DECL, (yyvsp[0].ast)); }
#line 6383 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 356:
#line 1044 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[-1].ast), NULL, ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }
#line 6389 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 357:
#line 1046 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }
#line 6395 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 358:
#line 1050 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                      { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6401 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 359:
#line 1051 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                 { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLASS_CONST_DECL, (yyvsp[0].ast)); }
#line 6407 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 360:
#line 1055 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                               { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }
#line 6413 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 361:
#line 1059 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                             { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }
#line 6419 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 362:
#line 1063 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                             { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6425 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 363:
#line 1064 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                          { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 6431 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 364:
#line 1067 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
             { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[0].ast)); }
#line 6437 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 365:
#line 1071 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = NULL; }
#line 6443 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 366:
#line 1072 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6449 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 367:
#line 1076 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                             { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6455 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 368:
#line 1077 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                     { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_EXPR_LIST, (yyvsp[0].ast)); }
#line 6461 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 369:
#line 1081 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                { (yyval.num) = CG(zend_lineno); }
#line 6467 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 370:
#line 1082 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                                             {
			zend_ast *decl = zend_ast_create_decl(
				ZEND_AST_CLASS, ZEND_ACC_ANON_CLASS, (yyvsp[-7].num), (yyvsp[-3].str), NULL,
				(yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL, NULL);
			(yyval.ast) = zend_ast_create(ZEND_AST_NEW, decl, (yyvsp[-6].ast));
		}
#line 6478 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 371:
#line 1092 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_NEW, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6484 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 372:
#line 1094 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6490 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 373:
#line 1096 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { zend_ast_with_attributes((yyvsp[0].ast)->child[0], (yyvsp[-1].ast)); (yyval.ast) = (yyvsp[0].ast); }
#line 6496 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 374:
#line 1101 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 6502 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 375:
#line 1103 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyvsp[-3].ast)->attr = ZEND_ARRAY_SYNTAX_LIST; (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 6508 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 376:
#line 1105 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyvsp[-3].ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 6514 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 377:
#line 1107 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6520 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 378:
#line 1109 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN_REF, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 6526 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 379:
#line 1110 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                             { (yyval.ast) = zend_ast_create(ZEND_AST_CLONE, (yyvsp[0].ast)); }
#line 6532 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 380:
#line 1112 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_ADD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6538 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 381:
#line 1114 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_SUB, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6544 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 382:
#line 1116 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_MUL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6550 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 383:
#line 1118 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_POW, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6556 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 384:
#line 1120 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6562 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 385:
#line 1122 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_CONCAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6568 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 386:
#line 1124 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6574 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 387:
#line 1126 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_BW_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6580 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 388:
#line 1128 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_BW_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6586 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 389:
#line 1130 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_BW_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6592 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 390:
#line 1132 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_SL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6598 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 391:
#line 1134 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_assign_op(ZEND_SR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6604 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 392:
#line 1136 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN_COALESCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6610 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 393:
#line 1137 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                               { (yyval.ast) = zend_ast_create(ZEND_AST_POST_INC, (yyvsp[-1].ast)); }
#line 6616 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 394:
#line 1138 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                               { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_INC, (yyvsp[0].ast)); }
#line 6622 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 395:
#line 1139 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                               { (yyval.ast) = zend_ast_create(ZEND_AST_POST_DEC, (yyvsp[-1].ast)); }
#line 6628 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 396:
#line 1140 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                               { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_DEC, (yyvsp[0].ast)); }
#line 6634 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 397:
#line 1142 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6640 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 398:
#line 1144 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6646 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 399:
#line 1146 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6652 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 400:
#line 1148 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6658 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 401:
#line 1150 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_BOOL_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6664 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 402:
#line 1151 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6670 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 403:
#line 1152 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6676 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 404:
#line 1153 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6682 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 405:
#line 1154 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6688 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 406:
#line 1155 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_concat_op((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6694 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 407:
#line 1156 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_ADD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6700 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 408:
#line 1157 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_SUB, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6706 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 409:
#line 1158 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_MUL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6712 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 410:
#line 1159 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_POW, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6718 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 411:
#line 1160 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6724 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 412:
#line 1161 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6730 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 413:
#line 1162 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_SL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6736 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 414:
#line 1163 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_binary_op(ZEND_SR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6742 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 415:
#line 1164 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                   { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_PLUS, (yyvsp[0].ast)); }
#line 6748 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 416:
#line 1165 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                   { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_MINUS, (yyvsp[0].ast)); }
#line 6754 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 417:
#line 1166 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BOOL_NOT, (yyvsp[0].ast)); }
#line 6760 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 418:
#line 1167 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BW_NOT, (yyvsp[0].ast)); }
#line 6766 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 419:
#line 1169 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_IDENTICAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6772 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 420:
#line 1171 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_IDENTICAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6778 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 421:
#line 1173 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6784 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 422:
#line 1175 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6790 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 423:
#line 1177 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6796 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 424:
#line 1179 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER_OR_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6802 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 425:
#line 1181 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6808 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 426:
#line 1183 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6814 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 427:
#line 1185 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_binary_op(ZEND_SPACESHIP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6820 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 428:
#line 1187 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_INSTANCEOF, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6826 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 429:
#line 1188 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                             {
			(yyval.ast) = (yyvsp[-1].ast);
			if ((yyval.ast)->kind == ZEND_AST_CONDITIONAL) (yyval.ast)->attr = ZEND_PARENTHESIZED_CONDITIONAL;
		}
#line 6835 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 430:
#line 1192 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 6841 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 431:
#line 1194 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6847 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 432:
#line 1196 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[-3].ast), NULL, (yyvsp[0].ast)); }
#line 6853 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 433:
#line 1198 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_COALESCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6859 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 434:
#line 1199 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                           { (yyval.ast) = (yyvsp[0].ast); }
#line 6865 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 435:
#line 1200 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create_cast(IS_LONG, (yyvsp[0].ast)); }
#line 6871 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 436:
#line 1201 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create_cast(IS_DOUBLE, (yyvsp[0].ast)); }
#line 6877 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 437:
#line 1202 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create_cast(IS_STRING, (yyvsp[0].ast)); }
#line 6883 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 438:
#line 1203 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create_cast(IS_ARRAY, (yyvsp[0].ast)); }
#line 6889 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 439:
#line 1204 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create_cast(IS_OBJECT, (yyvsp[0].ast)); }
#line 6895 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 440:
#line 1205 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create_cast(_IS_BOOL, (yyvsp[0].ast)); }
#line 6901 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 441:
#line 1206 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create_cast(IS_NULL, (yyvsp[0].ast)); }
#line 6907 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 442:
#line 1207 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create(ZEND_AST_EXIT, (yyvsp[0].ast)); }
#line 6913 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 443:
#line 1208 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = zend_ast_create(ZEND_AST_SILENCE, (yyvsp[0].ast)); }
#line 6919 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 444:
#line 1209 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                       { (yyval.ast) = (yyvsp[0].ast); }
#line 6925 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 445:
#line 1210 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                       { (yyval.ast) = zend_ast_create(ZEND_AST_SHELL_EXEC, (yyvsp[-1].ast)); }
#line 6931 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 446:
#line 1211 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                             { (yyval.ast) = zend_ast_create(ZEND_AST_PRINT, (yyvsp[0].ast)); }
#line 6937 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 447:
#line 1212 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, NULL, NULL); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }
#line 6943 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 448:
#line 1213 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                             { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[0].ast), NULL); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }
#line 6949 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 449:
#line 1214 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                 { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[0].ast), (yyvsp[-2].ast)); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }
#line 6955 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 450:
#line 1215 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                  { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD_FROM, (yyvsp[0].ast)); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }
#line 6961 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 451:
#line 1216 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                             { (yyval.ast) = zend_ast_create(ZEND_AST_THROW, (yyvsp[0].ast)); }
#line 6967 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 452:
#line 1217 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 6973 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 453:
#line 1218 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                           { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }
#line 6979 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 454:
#line 1219 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                         { (yyval.ast) = (yyvsp[0].ast); ((zend_ast_decl *) (yyval.ast))->flags |= ZEND_ACC_STATIC; }
#line 6985 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 455:
#line 1221 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-2].ast)); ((zend_ast_decl *) (yyval.ast))->flags |= ZEND_ACC_STATIC; }
#line 6991 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 456:
#line 1222 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                      { (yyval.ast) = (yyvsp[0].ast); }
#line 6997 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 457:
#line 1229 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLOSURE, (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-12].num), (yyvsp[-10].str),
				  zend_string_init("{closure}", sizeof("{closure}") - 1, 0),
				  (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-2].ast), (yyvsp[-5].ast), NULL); CG(extra_fn_flags) = (yyvsp[-4].num); }
#line 7005 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 458:
#line 1234 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_decl(ZEND_AST_ARROW_FUNC, (yyvsp[-10].num) | (yyvsp[0].num), (yyvsp[-11].num), (yyvsp[-9].str),
				  zend_string_init("{closure}", sizeof("{closure}") - 1, 0), (yyvsp[-7].ast), NULL, (yyvsp[-1].ast), (yyvsp[-5].ast), NULL);
				  ((zend_ast_decl *) (yyval.ast))->lex_pos = (yyvsp[-2].ptr);
				  CG(extra_fn_flags) = (yyvsp[-3].num); }
#line 7014 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 459:
#line 1241 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
             { (yyval.num) = CG(zend_lineno); }
#line 7020 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 460:
#line 1245 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                   { (yyval.num) = CG(zend_lineno); }
#line 7026 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 461:
#line 1249 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
               { (yyval.str) = CG(doc_comment); CG(doc_comment) = NULL; }
#line 7032 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 462:
#line 1253 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                         { (yyval.num) = CG(extra_fn_flags); CG(extra_fn_flags) = 0; }
#line 7038 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 463:
#line 1257 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
               { (yyval.ptr) = LANG_SCNG(yy_text); }
#line 7044 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 464:
#line 1261 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.num) = 0; }
#line 7050 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 465:
#line 1262 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.num) = ZEND_ACC_RETURN_REFERENCE; }
#line 7056 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 466:
#line 1266 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                       { (yyval.ast) = NULL; }
#line 7062 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 467:
#line 1267 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                              { (yyval.ast) = (yyvsp[-2].ast); }
#line 7068 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 468:
#line 1271 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                 { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7074 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 469:
#line 1272 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                            { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLOSURE_USES, (yyvsp[0].ast)); }
#line 7080 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 470:
#line 1276 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7086 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 471:
#line 1277 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_BIND_REF; }
#line 7092 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 472:
#line 1282 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7098 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 473:
#line 1283 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                         {
			zval zv;
			if (zend_lex_tstring(&zv, (yyvsp[-1].ident)) == FAILURE) { YYABORT; }
			(yyval.ast) = zend_ast_create(ZEND_AST_CALL, zend_ast_create_zval(&zv), (yyvsp[0].ast));
		}
#line 7108 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 474:
#line 1289 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7114 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 475:
#line 1291 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7120 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 476:
#line 1292 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                              { (yyval.num) = CG(zend_lineno); }
#line 7126 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 477:
#line 1292 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                           { 
			(yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[-2].ast), (yyvsp[0].ast)); 
			(yyval.ast)->lineno = (yyvsp[-1].num);
		}
#line 7135 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 478:
#line 1300 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { zval zv; ZVAL_INTERNED_STR(&zv, ZSTR_KNOWN(ZEND_STR_STATIC));
			  (yyval.ast) = zend_ast_create_zval_ex(&zv, ZEND_NAME_NOT_FQ); }
#line 7142 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 479:
#line 1302 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                     { (yyval.ast) = (yyvsp[0].ast); }
#line 7148 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 480:
#line 1306 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7154 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 481:
#line 1307 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 7160 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 482:
#line 1308 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 7166 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 483:
#line 1312 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = NULL; }
#line 7172 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 484:
#line 1313 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 7178 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 485:
#line 1318 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); }
#line 7184 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 486:
#line 1319 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                          { (yyval.ast) = (yyvsp[0].ast); }
#line 7190 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 487:
#line 1320 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                            { (yyval.ast) = (yyvsp[0].ast); }
#line 7196 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 488:
#line 1325 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); }
#line 7202 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 489:
#line 1326 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                              { (yyval.ast) = (yyvsp[0].ast); }
#line 7208 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 490:
#line 1331 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_LONG; }
#line 7214 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 491:
#line 1332 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; }
#line 7220 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 492:
#line 1333 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7226 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 493:
#line 1334 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 7232 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 494:
#line 1338 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 7238 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 495:
#line 1339 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 7244 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 496:
#line 1340 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 7250 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 497:
#line 1342 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); }
#line 7256 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 498:
#line 1343 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                          { (yyval.ast) = (yyvsp[-1].ast); }
#line 7262 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 499:
#line 1344 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7268 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 500:
#line 1345 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7274 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 501:
#line 1346 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 7280 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 502:
#line 1350 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create(ZEND_AST_CONST, (yyvsp[0].ast)); }
#line 7286 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 503:
#line 1351 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_LINE); }
#line 7292 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 504:
#line 1352 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FILE); }
#line 7298 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 505:
#line 1353 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_DIR); }
#line 7304 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 506:
#line 1354 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_TRAIT_C); }
#line 7310 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 507:
#line 1355 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_METHOD_C); }
#line 7316 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 508:
#line 1356 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FUNC_C); }
#line 7322 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 509:
#line 1357 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_NS_C); }
#line 7328 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 510:
#line 1358 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_CLASS_C); }
#line 7334 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 511:
#line 1363 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_class_const_or_name((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7340 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 512:
#line 1365 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_class_const_or_name((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7346 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 513:
#line 1369 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = NULL; }
#line 7352 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 514:
#line 1370 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[0].ast); }
#line 7358 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 515:
#line 1374 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                      { (yyval.ast) = (yyvsp[0].ast); }
#line 7364 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 516:
#line 1378 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7370 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 517:
#line 1379 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 7376 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 518:
#line 1380 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7382 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 519:
#line 1381 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 7388 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 520:
#line 1385 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7394 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 521:
#line 1386 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7400 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 522:
#line 1390 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 7406 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 523:
#line 1391 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 7412 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 524:
#line 1392 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7418 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 525:
#line 1397 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 7424 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 526:
#line 1399 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 7430 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 527:
#line 1401 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_DIM, ZEND_DIM_ALTERNATIVE_SYNTAX, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 7436 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 528:
#line 1403 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7442 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 529:
#line 1405 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_NULLSAFE_METHOD_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7448 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 530:
#line 1406 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                              { (yyval.ast) = (yyvsp[0].ast); }
#line 7454 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 531:
#line 1411 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7460 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 532:
#line 1413 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7466 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 533:
#line 1415 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7472 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 534:
#line 1417 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_NULLSAFE_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7478 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 535:
#line 1421 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 7484 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 536:
#line 1422 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[-1].ast); }
#line 7490 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 537:
#line 1423 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 7496 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 538:
#line 1428 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7502 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 539:
#line 1430 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7508 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 540:
#line 1435 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 7514 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 541:
#line 1437 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 7520 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 542:
#line 1439 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_DIM, ZEND_DIM_ALTERNATIVE_SYNTAX, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 7526 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 543:
#line 1441 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7532 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 544:
#line 1443 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_NULLSAFE_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7538 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 545:
#line 1445 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7544 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 546:
#line 1447 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7550 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 547:
#line 1451 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                           { (yyval.ast) = (yyvsp[0].ast); }
#line 7556 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 548:
#line 1452 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 7562 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 549:
#line 1453 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 7568 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 550:
#line 1457 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                         { (yyval.ast) = (yyvsp[0].ast); }
#line 7574 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 551:
#line 1458 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 7580 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 552:
#line 1459 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 7586 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 553:
#line 1464 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { /* allow single trailing comma */ (yyval.ast) = zend_ast_list_rtrim((yyvsp[0].ast)); }
#line 7592 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 554:
#line 1468 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                       { (yyval.ast) = NULL; }
#line 7598 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 555:
#line 1469 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                            { (yyval.ast) = (yyvsp[0].ast); }
#line 7604 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 556:
#line 1474 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7610 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 557:
#line 1476 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARRAY, (yyvsp[0].ast)); }
#line 7616 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 558:
#line 1481 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[0].ast), (yyvsp[-2].ast)); }
#line 7622 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 559:
#line 1483 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[0].ast), NULL); }
#line 7628 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 560:
#line 1485 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[0].ast), (yyvsp[-3].ast)); }
#line 7634 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 561:
#line 1487 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[0].ast), NULL); }
#line 7640 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 562:
#line 1489 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_UNPACK, (yyvsp[0].ast)); }
#line 7646 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 563:
#line 1491 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyvsp[-1].ast)->attr = ZEND_ARRAY_SYNTAX_LIST;
			  (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[-1].ast), (yyvsp[-5].ast)); }
#line 7653 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 564:
#line 1494 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyvsp[-1].ast)->attr = ZEND_ARRAY_SYNTAX_LIST;
			  (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[-1].ast), NULL); }
#line 7660 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 565:
#line 1500 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7666 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 566:
#line 1502 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7672 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 567:
#line 1504 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ENCAPS_LIST, (yyvsp[0].ast)); }
#line 7678 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 568:
#line 1506 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_ENCAPS_LIST, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7684 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 569:
#line 1511 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 7690 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 570:
#line 1513 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-3].ast)), (yyvsp[-1].ast)); }
#line 7697 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 571:
#line 1516 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_PROP,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-2].ast)), (yyvsp[0].ast)); }
#line 7704 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 572:
#line 1519 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_NULLSAFE_PROP,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-2].ast)), (yyvsp[0].ast)); }
#line 7711 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 573:
#line 1522 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_VAR, ZEND_ENCAPS_VAR_DOLLAR_CURLY_VAR_VAR, (yyvsp[-1].ast)); }
#line 7717 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 574:
#line 1524 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_VAR, ZEND_ENCAPS_VAR_DOLLAR_CURLY, (yyvsp[-1].ast)); }
#line 7723 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 575:
#line 1526 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_DIM, ZEND_ENCAPS_VAR_DOLLAR_CURLY,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-4].ast)), (yyvsp[-2].ast)); }
#line 7730 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 576:
#line 1528 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                          { (yyval.ast) = (yyvsp[-1].ast); }
#line 7736 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 577:
#line 1532 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = (yyvsp[0].ast); }
#line 7742 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 578:
#line 1533 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = (yyvsp[0].ast); }
#line 7748 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 579:
#line 1534 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                        { (yyval.ast) = zend_negate_num_string((yyvsp[0].ast)); }
#line 7754 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 580:
#line 1535 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 7760 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 581:
#line 1540 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                                               { (yyval.ast) = (yyvsp[-2].ast); }
#line 7766 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 582:
#line 1541 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                                     { (yyval.ast) = zend_ast_create(ZEND_AST_EMPTY, (yyvsp[-1].ast)); }
#line 7772 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 583:
#line 1543 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE, (yyvsp[0].ast)); }
#line 7778 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 584:
#line 1545 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE_ONCE, (yyvsp[0].ast)); }
#line 7784 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 585:
#line 1547 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_EVAL, (yyvsp[-1].ast)); }
#line 7790 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 586:
#line 1549 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE, (yyvsp[0].ast)); }
#line 7796 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 587:
#line 1551 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE_ONCE, (yyvsp[0].ast)); }
#line 7802 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 588:
#line 1555 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                               { (yyval.ast) = (yyvsp[0].ast); }
#line 7808 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 589:
#line 1557 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                        { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7814 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;

  case 590:
#line 1561 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"
                     { (yyval.ast) = zend_ast_create(ZEND_AST_ISSET, (yyvsp[0].ast)); }
#line 7820 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"
    break;


#line 7824 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.c"

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
#line 1564 "/home/enorkin/kos/tmp/php-src/Zend/zend_language_parser.y"


/* Over-ride Bison formatting routine to give better token descriptions.
   Copy to YYRES the contents of YYSTR for use in yyerror.
   YYSTR is taken from yytname, from the %token declaration.
   If YYRES is null, do not copy; instead, return the length of what
   the result would have been.  */
static YYSIZE_T zend_yytnamerr(char *yyres, const char *yystr)
{
	const char *toktype = yystr;
	size_t toktype_len = strlen(toktype);

	/* CG(parse_error) states:
	 * 0 => yyres = NULL, yystr is the unexpected token
	 * 1 => yyres = NULL, yystr is one of the expected tokens
	 * 2 => yyres != NULL, yystr is the unexpected token
	 * 3 => yyres != NULL, yystr is one of the expected tokens
	 */
	if (yyres && CG(parse_error) < 2) {
		CG(parse_error) = 2;
	}

	if (CG(parse_error) % 2 == 0) {
		/* The unexpected token */
		char buffer[120];
		const unsigned char *tokcontent, *tokcontent_end;
		size_t tokcontent_len;

		CG(parse_error)++;

		if (LANG_SCNG(yy_text)[0] == 0 &&
			LANG_SCNG(yy_leng) == 1 &&
			strcmp(toktype, "\"end of file\"") == 0) {
			if (yyres) {
				yystpcpy(yyres, "end of file");
			}
			return sizeof("end of file")-1;
		}

		/* Prevent the backslash getting doubled in the output (eugh) */
		if (strcmp(toktype, "\"'\\\\'\"") == 0) {
			if (yyres) {
				yystpcpy(yyres, "token \"\\\"");
			}
			return sizeof("token \"\\\"")-1;
		}

		/* We used "amp" as a dummy label to avoid a duplicate token literal warning. */
		if (strcmp(toktype, "\"amp\"") == 0) {
			if (yyres) {
				yystpcpy(yyres, "token \"&\"");
			}
			return sizeof("token \"&\"")-1;
		}

		/* Avoid unreadable """ */
		/* "'" would theoretically be just as bad, but is never currently parsed as a separate token */
		if (strcmp(toktype, "'\"'") == 0) {
			if (yyres) {
				yystpcpy(yyres, "double-quote mark");
			}
			return sizeof("double-quote mark")-1;
		}

		/* Strip off the outer quote marks */
		if (toktype_len >= 2 && *toktype == '"') {
			toktype++;
			toktype_len -= 2;
		}

		/* If the token always has one form, the %token line should have a single-quoted name */
		/* The parser rules also include single-character un-named tokens which will be single-quoted here */
		/* We re-format this with double quotes here to ensure everything's consistent */
		if (toktype_len > 0 && *toktype == '\'') {
			if (yyres) {
				snprintf(buffer, sizeof(buffer), "token \"%.*s\"", (int)toktype_len-2, toktype+1);
				yystpcpy(yyres, buffer);
			}
			return toktype_len + sizeof("token ")-1;
		}

		/* Fetch the content of the last seen token from global lexer state */
		tokcontent = LANG_SCNG(yy_text);
		tokcontent_len = LANG_SCNG(yy_leng);

		/* For T_BAD_CHARACTER, the content probably won't be a printable char */
		/* Also, "unexpected invalid character" sounds a bit redundant */
		if (tokcontent_len == 1 && strcmp(yystr, "\"invalid character\"") == 0) {
			if (yyres) {
				snprintf(buffer, sizeof(buffer), "character 0x%02hhX", *tokcontent);
				yystpcpy(yyres, buffer);
			}
			return sizeof("character 0x00")-1;
		}

		/* Truncate at line end to avoid messing up log formats */
		tokcontent_end = memchr(tokcontent, '\n', tokcontent_len);
		if (tokcontent_end != NULL) {
			tokcontent_len = (tokcontent_end - tokcontent);
		}

		/* Try to be helpful about what kind of string was found, before stripping the quotes */
		if (tokcontent_len > 0 && strcmp(yystr, "\"quoted string\"") == 0) {
			if (*tokcontent == '"') {
				toktype = "double-quoted string";
				toktype_len = sizeof("double-quoted string")-1;
			}
			else if (*tokcontent == '\'') {
				toktype = "single-quoted string";
				toktype_len = sizeof("single-quoted string")-1;
			}
		}

		/* For quoted strings, strip off another layer of quotes to avoid putting quotes inside quotes */
		if (tokcontent_len > 0 && (*tokcontent == '\'' || *tokcontent=='"'))  {
			tokcontent++;
			tokcontent_len--;
		}
		if (tokcontent_len > 0 && (tokcontent[tokcontent_len-1] == '\'' || tokcontent[tokcontent_len-1] == '"'))  {
			tokcontent_len--;
		}

		/* Truncate to 30 characters and add a ... */
		if (tokcontent_len > 30 + sizeof("...")-1) {
			if (yyres) {
				snprintf(buffer, sizeof(buffer), "%.*s \"%.*s...\"", (int)toktype_len, toktype, 30, tokcontent);
				yystpcpy(yyres, buffer);
			}
			return toktype_len + 30 + sizeof(" \"...\"")-1;
		}

		if (yyres) {
			snprintf(buffer, sizeof(buffer), "%.*s \"%.*s\"", (int)toktype_len, toktype, (int)tokcontent_len, tokcontent);
			yystpcpy(yyres, buffer);
		}
		return toktype_len + tokcontent_len + sizeof(" \"\"")-1;
	}

	/* One of the expected tokens */

	/* Prevent the backslash getting doubled in the output (eugh) */
	if (strcmp(toktype, "\"'\\\\'\"") == 0) {
		if (yyres) {
			yystpcpy(yyres, "\"\\\"");
		}
		return sizeof("\"\\\"")-1;
	}

	/* Strip off the outer quote marks */
	if (toktype_len >= 2 && *toktype == '"') {
		toktype++;
		toktype_len -= 2;
	}

	if (yyres) {
		YYSIZE_T yyn = 0;

		for (; yyn < toktype_len; ++yyn) {
			/* Replace single quotes with double for consistency */
			if (toktype[yyn] == '\'') {
				yyres[yyn] = '"';
			}
			else {
				yyres[yyn] = toktype[yyn];
			}
		}
		yyres[toktype_len] = '\0';
	}

	return toktype_len;
}
