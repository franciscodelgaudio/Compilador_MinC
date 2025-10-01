/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "sintatico.y"

  #include <stdio.h>
  #include "arvore.h"
  int yylex(void);
  void yyerror(const char *s);

  Pilha *p = NULL;

#line 80 "sintatico.tab.c"

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

#include "sintatico.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_IDENTIFICADOR = 3,            /* T_IDENTIFICADOR  */
  YYSYMBOL_T_NUMERO_INTEIRO = 4,           /* T_NUMERO_INTEIRO  */
  YYSYMBOL_T_NUMERO_REAL = 5,              /* T_NUMERO_REAL  */
  YYSYMBOL_T_STRING = 6,                   /* T_STRING  */
  YYSYMBOL_T_CARACTERE = 7,                /* T_CARACTERE  */
  YYSYMBOL_T_INT = 8,                      /* T_INT  */
  YYSYMBOL_T_FLOAT = 9,                    /* T_FLOAT  */
  YYSYMBOL_T_DOUBLE = 10,                  /* T_DOUBLE  */
  YYSYMBOL_T_CHAR = 11,                    /* T_CHAR  */
  YYSYMBOL_T_VOID = 12,                    /* T_VOID  */
  YYSYMBOL_T_IF = 13,                      /* T_IF  */
  YYSYMBOL_T_ELSE = 14,                    /* T_ELSE  */
  YYSYMBOL_T_FOR = 15,                     /* T_FOR  */
  YYSYMBOL_T_WHILE = 16,                   /* T_WHILE  */
  YYSYMBOL_T_RETURN = 17,                  /* T_RETURN  */
  YYSYMBOL_T_MAIN = 18,                    /* T_MAIN  */
  YYSYMBOL_T_PRINTF = 19,                  /* T_PRINTF  */
  YYSYMBOL_T_SCANF = 20,                   /* T_SCANF  */
  YYSYMBOL_T_INCLUDE = 21,                 /* T_INCLUDE  */
  YYSYMBOL_T_DEFINE = 22,                  /* T_DEFINE  */
  YYSYMBOL_T_MAIS = 23,                    /* T_MAIS  */
  YYSYMBOL_T_MENOS = 24,                   /* T_MENOS  */
  YYSYMBOL_T_MULTI = 25,                   /* T_MULTI  */
  YYSYMBOL_T_DIV = 26,                     /* T_DIV  */
  YYSYMBOL_T_MOD = 27,                     /* T_MOD  */
  YYSYMBOL_T_IGUAL = 28,                   /* T_IGUAL  */
  YYSYMBOL_T_LE = 29,                      /* T_LE  */
  YYSYMBOL_T_ME = 30,                      /* T_ME  */
  YYSYMBOL_T_DIF = 31,                     /* T_DIF  */
  YYSYMBOL_T_M = 32,                       /* T_M  */
  YYSYMBOL_T_L = 33,                       /* T_L  */
  YYSYMBOL_T_INC = 34,                     /* T_INC  */
  YYSYMBOL_T_OR = 35,                      /* T_OR  */
  YYSYMBOL_T_AND = 36,                     /* T_AND  */
  YYSYMBOL_T_NOT = 37,                     /* T_NOT  */
  YYSYMBOL_T_ATRIBUICAO = 38,              /* T_ATRIBUICAO  */
  YYSYMBOL_T_ACHA = 39,                    /* T_ACHA  */
  YYSYMBOL_T_FCHA = 40,                    /* T_FCHA  */
  YYSYMBOL_T_ACOL = 41,                    /* T_ACOL  */
  YYSYMBOL_T_FCOL = 42,                    /* T_FCOL  */
  YYSYMBOL_T_APAR = 43,                    /* T_APAR  */
  YYSYMBOL_T_FPAR = 44,                    /* T_FPAR  */
  YYSYMBOL_T_PONTOVIRG = 45,               /* T_PONTOVIRG  */
  YYSYMBOL_T_VIRG = 46,                    /* T_VIRG  */
  YYSYMBOL_T_PONTO = 47,                   /* T_PONTO  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_programa = 49,                  /* programa  */
  YYSYMBOL_preambulo = 50,                 /* preambulo  */
  YYSYMBOL_include = 51,                   /* include  */
  YYSYMBOL_define = 52,                    /* define  */
  YYSYMBOL_func_main = 53,                 /* func_main  */
  YYSYMBOL_bloco = 54,                     /* bloco  */
  YYSYMBOL_opt_pontovirg = 55,             /* opt_pontovirg  */
  YYSYMBOL_lista_comandos = 56,            /* lista_comandos  */
  YYSYMBOL_comando = 57,                   /* comando  */
  YYSYMBOL_printf_stmt = 58,               /* printf_stmt  */
  YYSYMBOL_scanf_stmt = 59,                /* scanf_stmt  */
  YYSYMBOL_printf_args = 60,               /* printf_args  */
  YYSYMBOL_scanf_args = 61,                /* scanf_args  */
  YYSYMBOL_decl_var = 62,                  /* decl_var  */
  YYSYMBOL_for_stmt = 63,                  /* for_stmt  */
  YYSYMBOL_while_stmt = 64,                /* while_stmt  */
  YYSYMBOL_atribuicao = 65,                /* atribuicao  */
  YYSYMBOL_incremento = 66,                /* incremento  */
  YYSYMBOL_if_stmt = 67,                   /* if_stmt  */
  YYSYMBOL_chamada_funcao = 68,            /* chamada_funcao  */
  YYSYMBOL_opt_args = 69,                  /* opt_args  */
  YYSYMBOL_lista_args = 70,                /* lista_args  */
  YYSYMBOL_expressao = 71,                 /* expressao  */
  YYSYMBOL_primario = 72,                  /* primario  */
  YYSYMBOL_identificador = 73,             /* identificador  */
  YYSYMBOL_numero_inteiro = 74,            /* numero_inteiro  */
  YYSYMBOL_string_lit = 75,                /* string_lit  */
  YYSYMBOL_include_kw = 76,                /* include_kw  */
  YYSYMBOL_define_kw = 77,                 /* define_kw  */
  YYSYMBOL_void_kw = 78,                   /* void_kw  */
  YYSYMBOL_main_kw = 79,                   /* main_kw  */
  YYSYMBOL_printf_kw = 80,                 /* printf_kw  */
  YYSYMBOL_scanf_kw = 81,                  /* scanf_kw  */
  YYSYMBOL_for_kw = 82,                    /* for_kw  */
  YYSYMBOL_while_kw = 83,                  /* while_kw  */
  YYSYMBOL_if_kw = 84,                     /* if_kw  */
  YYSYMBOL_else_kw = 85,                   /* else_kw  */
  YYSYMBOL_return_kw = 86,                 /* return_kw  */
  YYSYMBOL_apar = 87,                      /* apar  */
  YYSYMBOL_fpar = 88,                      /* fpar  */
  YYSYMBOL_acha = 89,                      /* acha  */
  YYSYMBOL_fcha = 90,                      /* fcha  */
  YYSYMBOL_pvirg = 91,                     /* pvirg  */
  YYSYMBOL_pvirg_opt = 92,                 /* pvirg_opt  */
  YYSYMBOL_virg = 93,                      /* virg  */
  YYSYMBOL_ponto = 94,                     /* ponto  */
  YYSYMBOL_menor = 95,                     /* menor  */
  YYSYMBOL_maior = 96,                     /* maior  */
  YYSYMBOL_mais_tok = 97,                  /* mais_tok  */
  YYSYMBOL_menos_tok = 98,                 /* menos_tok  */
  YYSYMBOL_multi_tok = 99,                 /* multi_tok  */
  YYSYMBOL_div_tok = 100,                  /* div_tok  */
  YYSYMBOL_mod_tok = 101,                  /* mod_tok  */
  YYSYMBOL_igual_tok = 102,                /* igual_tok  */
  YYSYMBOL_dif_tok = 103,                  /* dif_tok  */
  YYSYMBOL_le_tok = 104,                   /* le_tok  */
  YYSYMBOL_me_tok = 105,                   /* me_tok  */
  YYSYMBOL_m_tok = 106,                    /* m_tok  */
  YYSYMBOL_l_tok = 107,                    /* l_tok  */
  YYSYMBOL_or_tok = 108,                   /* or_tok  */
  YYSYMBOL_and_tok = 109,                  /* and_tok  */
  YYSYMBOL_not_tok = 110,                  /* not_tok  */
  YYSYMBOL_atrib_tok = 111,                /* atrib_tok  */
  YYSYMBOL_inc_tok = 112,                  /* inc_tok  */
  YYSYMBOL_int_kw = 113,                   /* int_kw  */
  YYSYMBOL_vazio = 114                     /* vazio  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   208

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  186

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      45,    46,    47
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    75,    75,    79,    83,    88,    92,    96,   100,   101,
     105,   106,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   124,   129,   134,   135,   139,   140,   144,
     145,   149,   154,   157,   161,   162,   166,   171,   175,   176,
     180,   181,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     206,   207,   208,   209,   210,   214,   218,   222,   226,   230,
     234,   238,   242,   246,   250,   254,   258,   262,   266,   270,
     274,   278,   282,   286,   290,   294,   298,   302,   306,   310,
     314,   318,   322,   326,   330,   334,   338,   342,   346,   350,
     354,   358,   362,   366,   370,   374,   378
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  static const char *const yy_sname[] =
  {
  "end of file", "error", "invalid token", "T_IDENTIFICADOR",
  "T_NUMERO_INTEIRO", "T_NUMERO_REAL", "T_STRING", "T_CARACTERE", "T_INT",
  "T_FLOAT", "T_DOUBLE", "T_CHAR", "T_VOID", "T_IF", "T_ELSE", "T_FOR",
  "T_WHILE", "T_RETURN", "T_MAIN", "T_PRINTF", "T_SCANF", "T_INCLUDE",
  "T_DEFINE", "T_MAIS", "T_MENOS", "T_MULTI", "T_DIV", "T_MOD", "T_IGUAL",
  "T_LE", "T_ME", "T_DIF", "T_M", "T_L", "T_INC", "T_OR", "T_AND", "T_NOT",
  "T_ATRIBUICAO", "T_ACHA", "T_FCHA", "T_ACOL", "T_FCOL", "T_APAR",
  "T_FPAR", "T_PONTOVIRG", "T_VIRG", "T_PONTO", "$accept", "programa",
  "preambulo", "include", "define", "func_main", "bloco", "opt_pontovirg",
  "lista_comandos", "comando", "printf_stmt", "scanf_stmt", "printf_args",
  "scanf_args", "decl_var", "for_stmt", "while_stmt", "atribuicao",
  "incremento", "if_stmt", "chamada_funcao", "opt_args", "lista_args",
  "expressao", "primario", "identificador", "numero_inteiro", "string_lit",
  "include_kw", "define_kw", "void_kw", "main_kw", "printf_kw", "scanf_kw",
  "for_kw", "while_kw", "if_kw", "else_kw", "return_kw", "apar", "fpar",
  "acha", "fcha", "pvirg", "pvirg_opt", "virg", "ponto", "menor", "maior",
  "mais_tok", "menos_tok", "multi_tok", "div_tok", "mod_tok", "igual_tok",
  "dif_tok", "le_tok", "me_tok", "m_tok", "l_tok", "or_tok", "and_tok",
  "not_tok", "atrib_tok", "inc_tok", "int_kw", "vazio", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-116)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -10,  -116,    21,    16,    10,     3,  -116,  -116,  -116,    19,
    -116,  -116,    35,  -116,    35,  -116,    -3,  -116,    37,    -5,
    -116,    -1,  -116,  -116,  -116,    35,  -116,     5,    15,  -116,
       4,  -116,  -116,  -116,  -116,  -116,  -116,  -116,   108,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,     4,
    -116,  -116,  -116,    13,  -116,  -116,    13,  -116,    13,   -23,
      13,    -3,    -3,    -3,    -3,    -3,    13,  -116,    35,  -116,
    -116,  -116,  -116,  -116,  -116,    59,    59,  -116,    53,    53,
      35,    59,    59,  -116,    28,  -116,  -116,  -116,  -116,    -1,
      41,   172,  -116,    -4,  -116,  -116,    59,    59,  -116,   172,
      -1,    41,    -1,    41,    13,    28,   150,   150,    59,  -116,
    -116,    59,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    28,   150,
     172,    13,    59,    13,    59,    59,     5,     5,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,    59,  -116,  -116,    41,  -116,    41,   127,
    -116,    74,   172,    14,  -116,     5,  -116,    -1,    56,    35,
       4,     5,  -116,  -116,  -116,  -116
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    68,     0,     0,     0,     0,     1,    70,     2,     0,
      69,     3,     0,    87,     0,    71,     0,    65,     0,     0,
      79,     0,    66,     5,    86,     0,    80,     0,     0,    81,
     106,   106,    88,     4,    84,     6,     9,     8,     0,    10,
      67,   105,    76,    74,    75,    78,    72,    73,    82,   106,
      11,    20,    21,     0,    13,    14,     0,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     0,    22,
      83,    12,    16,    17,   103,   106,     0,    18,     0,     0,
       0,     0,     0,    19,    29,    62,   102,    57,    64,     0,
      39,    40,    59,    60,    61,    63,     0,     0,    38,    33,
       0,    25,     0,    27,     0,     0,     0,     0,     0,    37,
      85,     0,    89,    90,    91,    92,    93,    94,    96,    97,
      95,    98,    99,   100,   101,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,     0,     0,     0,     0,     0,     0,     0,    30,    41,
      50,    51,    52,    53,    54,    44,    45,    46,    47,    48,
      49,    42,    43,     0,    56,    23,    26,    24,    28,     0,
      32,     0,    58,     0,    77,     0,   104,     0,     0,     0,
     106,     0,    34,    35,    36,    31
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -116,  -116,  -116,  -116,  -116,  -116,   -37,   -46,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,   -26,  -116,  -116,
      54,  -116,  -115,   -51,  -116,   -12,    77,   -28,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,     8,
     -84,  -116,  -116,   -52,  -116,   -68,  -116,  -116,  -116,     6,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,   -77,   -81,  -116,   -22
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    11,     8,    30,    35,    38,    50,
      51,    52,   100,   102,    53,    54,    55,    87,   177,    57,
      88,    89,    90,    91,    92,    93,    94,    95,     5,    12,
       9,    16,    61,    62,    63,    64,    65,   175,    66,    96,
      27,    31,    67,    71,    36,   111,    25,    14,    33,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,    97,    76,   179,    68,    37
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      18,    49,    19,    69,    72,   109,    73,   108,    77,    39,
      60,     1,    56,    28,    83,    74,   141,    17,   143,   112,
      20,     6,   146,   147,    21,    99,    59,   166,     7,   168,
     106,   107,    10,   142,    74,   144,    13,    15,    17,    20,
      20,    22,    24,    26,    29,   139,   140,    32,   176,    34,
     101,   103,   145,    98,   104,   164,    84,   148,    70,    40,
     149,   163,    17,    22,    85,    40,    74,    75,   105,    78,
      79,    80,    81,    82,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   110,   174,   165,
     176,   167,    58,   181,   169,    23,    86,   182,     0,   138,
       0,    75,    20,     0,     0,     0,     0,     0,     0,   170,
     171,    17,   172,     0,    40,     0,    41,   173,     0,     0,
       0,    42,     0,    43,    44,    45,     0,    46,    47,     0,
       0,     0,     0,     0,   184,     0,     0,     0,   180,     0,
       0,     0,     0,     0,   185,     0,     0,    29,    48,     0,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   178,   123,   124,     0,     0,     0,   183,     0,     0,
       0,     0,    70,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,     0,   123,   124,     0,     0,     0,
       0,     0,     0,     0,    26,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,     0,   123,   124
};

static const yytype_int16 yycheck[] =
{
      12,    38,    14,    49,    56,    89,    58,    84,    60,    31,
      38,    21,    38,    25,    66,    38,   100,     3,   102,    23,
      43,     0,   106,   107,    16,    76,    38,   142,    12,   144,
      81,    82,    22,   101,    38,   103,    33,    18,     3,    43,
      43,     4,    47,    44,    39,    96,    97,    32,    34,    45,
      78,    79,   104,    75,    80,   139,    68,   108,    45,     6,
     111,   138,     3,     4,     5,     6,    38,    59,    80,    61,
      62,    63,    64,    65,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,    46,    14,   141,
      34,   143,    38,   177,   145,    18,    37,   178,    -1,    93,
      -1,    93,    43,    -1,    -1,    -1,    -1,    -1,    -1,   146,
     147,     3,   163,    -1,     6,    -1,     8,   169,    -1,    -1,
      -1,    13,    -1,    15,    16,    17,    -1,    19,    20,    -1,
      -1,    -1,    -1,    -1,   180,    -1,    -1,    -1,   175,    -1,
      -1,    -1,    -1,    -1,   181,    -1,    -1,    39,    40,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,   173,    35,    36,    -1,    -1,    -1,   179,    -1,    -1,
      -1,    -1,    45,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    35,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    49,    50,    51,    76,     0,    12,    53,    78,
      22,    52,    77,    33,    95,    18,    79,     3,    73,    73,
      43,    87,     4,    74,    47,    94,    44,    88,    73,    39,
      54,    89,    32,    96,    45,    55,    92,   114,    56,   114,
       6,     8,    13,    15,    16,    17,    19,    20,    40,    54,
      57,    58,    59,    62,    63,    64,    65,    67,    68,    73,
      75,    80,    81,    82,    83,    84,    86,    90,   113,    55,
      45,    91,    91,    91,    38,    87,   111,    91,    87,    87,
      87,    87,    87,    91,    73,     5,    37,    65,    68,    69,
      70,    71,    72,    73,    74,    75,    87,   110,   114,    71,
      60,    75,    61,    75,    65,    73,    71,    71,   111,    88,
      46,    93,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    35,    36,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    97,    71,
      71,    88,    93,    88,    93,    91,    88,    88,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,   111,    88,    91,    70,    91,    70,    71,
      54,    54,    71,    91,    14,    85,    34,    66,    73,   112,
      54,    88,   112,    73,    55,    54
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    51,    52,    53,    54,    55,    55,
      56,    56,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    58,    59,    60,    60,    61,    61,    62,
      62,    63,    64,    65,    66,    66,    67,    68,    69,    69,
      70,    70,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      72,    72,    72,    72,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     6,     3,     6,     3,     1,     1,
       1,     2,     2,     1,     1,     1,     2,     2,     2,     2,
       1,     1,     2,     5,     5,     1,     3,     1,     3,     2,
       4,     9,     5,     3,     2,     2,     8,     4,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif



static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yystrlen (yysymbol_name (yyarg[yyi]));
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp = yystpcpy (yyp, yysymbol_name (yyarg[yyi++]));
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* programa: preambulo func_main  */
#line 75 "sintatico.y"
                                                      { p = insere(p, "programa", 2); }
#line 1660 "sintatico.tab.c"
    break;

  case 3: /* preambulo: include define  */
#line 79 "sintatico.y"
                                                      { p = insere(p, "preambulo", 2); }
#line 1666 "sintatico.tab.c"
    break;

  case 4: /* include: include_kw menor identificador ponto identificador maior  */
#line 84 "sintatico.y"
    { p = insere(p, "Include", 6); }
#line 1672 "sintatico.tab.c"
    break;

  case 5: /* define: define_kw identificador numero_inteiro  */
#line 88 "sintatico.y"
                                                      { p = insere(p, "Define", 3); }
#line 1678 "sintatico.tab.c"
    break;

  case 6: /* func_main: void_kw main_kw apar fpar bloco opt_pontovirg  */
#line 92 "sintatico.y"
                                                      { p = insere(p, "FuncMain", 6); }
#line 1684 "sintatico.tab.c"
    break;

  case 7: /* bloco: acha lista_comandos fcha  */
#line 96 "sintatico.y"
                                                      { p = insere(p, "Bloco", 3); }
#line 1690 "sintatico.tab.c"
    break;

  case 8: /* opt_pontovirg: vazio  */
#line 100 "sintatico.y"
                                                      { p = insere(p, "Vazio", 0); }
#line 1696 "sintatico.tab.c"
    break;

  case 9: /* opt_pontovirg: pvirg_opt  */
#line 101 "sintatico.y"
                                                      { p = insere(p, "PontoVirgulaOpt", 1); }
#line 1702 "sintatico.tab.c"
    break;

  case 10: /* lista_comandos: vazio  */
#line 105 "sintatico.y"
                                                      { p = insere(p, "ListaComandos", 0); }
#line 1708 "sintatico.tab.c"
    break;

  case 11: /* lista_comandos: lista_comandos comando  */
#line 106 "sintatico.y"
                                                      { p = insere(p, "ListaComandos", 2); }
#line 1714 "sintatico.tab.c"
    break;

  case 12: /* comando: decl_var pvirg  */
#line 110 "sintatico.y"
                                                      { p = insere(p, "ComandoDecl", 2); }
#line 1720 "sintatico.tab.c"
    break;

  case 13: /* comando: for_stmt  */
#line 111 "sintatico.y"
                                                      { p = insere(p, "ComandoFor", 1); }
#line 1726 "sintatico.tab.c"
    break;

  case 15: /* comando: if_stmt  */
#line 113 "sintatico.y"
                                                      { p = insere(p, "ComandoIf", 1); }
#line 1732 "sintatico.tab.c"
    break;

  case 16: /* comando: atribuicao pvirg  */
#line 114 "sintatico.y"
                                                      { p = insere(p, "ComandoAtrib", 2); }
#line 1738 "sintatico.tab.c"
    break;

  case 17: /* comando: chamada_funcao pvirg  */
#line 115 "sintatico.y"
                                                      { p = insere(p, "ComandoChamada", 2); }
#line 1744 "sintatico.tab.c"
    break;

  case 18: /* comando: string_lit pvirg  */
#line 116 "sintatico.y"
                                                      { p = insere(p, "ComandoString", 2); }
#line 1750 "sintatico.tab.c"
    break;

  case 19: /* comando: return_kw pvirg  */
#line 117 "sintatico.y"
                                                      { p = insere(p, "ComandoReturn", 2); }
#line 1756 "sintatico.tab.c"
    break;

  case 20: /* comando: printf_stmt  */
#line 118 "sintatico.y"
                                                      { p = insere(p, "ComandoPrintf", 1); }
#line 1762 "sintatico.tab.c"
    break;

  case 21: /* comando: scanf_stmt  */
#line 119 "sintatico.y"
                                                      { p = insere(p, "ComandoScanf", 1); }
#line 1768 "sintatico.tab.c"
    break;

  case 22: /* comando: bloco opt_pontovirg  */
#line 120 "sintatico.y"
                                                      { p = insere(p, "ComandoBloco", 2); }
#line 1774 "sintatico.tab.c"
    break;

  case 23: /* printf_stmt: printf_kw apar printf_args fpar pvirg  */
#line 125 "sintatico.y"
    { p = insere(p, "Printf", 5); }
#line 1780 "sintatico.tab.c"
    break;

  case 24: /* scanf_stmt: scanf_kw apar scanf_args fpar pvirg  */
#line 130 "sintatico.y"
    { p = insere(p, "Scanf", 5); }
#line 1786 "sintatico.tab.c"
    break;

  case 25: /* printf_args: string_lit  */
#line 134 "sintatico.y"
                                                      { p = insere(p, "PrintfArgs", 1); }
#line 1792 "sintatico.tab.c"
    break;

  case 26: /* printf_args: string_lit virg lista_args  */
#line 135 "sintatico.y"
                                                      { p = insere(p, "PrintfArgs", 3); }
#line 1798 "sintatico.tab.c"
    break;

  case 27: /* scanf_args: string_lit  */
#line 139 "sintatico.y"
                                                      { p = insere(p, "ScanfArgs", 1); }
#line 1804 "sintatico.tab.c"
    break;

  case 28: /* scanf_args: string_lit virg lista_args  */
#line 140 "sintatico.y"
                                                      { p = insere(p, "ScanfArgs", 3); }
#line 1810 "sintatico.tab.c"
    break;

  case 29: /* decl_var: int_kw identificador  */
#line 144 "sintatico.y"
                                                      { p = insere(p, "DeclVarInt", 2); }
#line 1816 "sintatico.tab.c"
    break;

  case 30: /* decl_var: int_kw identificador atrib_tok expressao  */
#line 145 "sintatico.y"
                                                      { p = insere(p, "DeclVarIntInit", 4); }
#line 1822 "sintatico.tab.c"
    break;

  case 31: /* for_stmt: for_kw apar atribuicao pvirg expressao pvirg incremento fpar bloco  */
#line 150 "sintatico.y"
    { p = insere(p, "For", 9); }
#line 1828 "sintatico.tab.c"
    break;

  case 32: /* while_stmt: while_kw apar expressao fpar bloco  */
#line 154 "sintatico.y"
                                                      { p = insere(p, "While", 9); }
#line 1834 "sintatico.tab.c"
    break;

  case 33: /* atribuicao: identificador atrib_tok expressao  */
#line 157 "sintatico.y"
                                                      { p = insere(p, "Atribuicao", 3); }
#line 1840 "sintatico.tab.c"
    break;

  case 34: /* incremento: identificador inc_tok  */
#line 161 "sintatico.y"
                                                      { p = insere(p, "PosInc", 2); }
#line 1846 "sintatico.tab.c"
    break;

  case 35: /* incremento: inc_tok identificador  */
#line 162 "sintatico.y"
                                                      { p = insere(p, "PreInc", 2); }
#line 1852 "sintatico.tab.c"
    break;

  case 36: /* if_stmt: if_kw apar expressao fpar bloco else_kw bloco opt_pontovirg  */
#line 167 "sintatico.y"
    { p = insere(p, "IfElse", 8); }
#line 1858 "sintatico.tab.c"
    break;

  case 37: /* chamada_funcao: identificador apar opt_args fpar  */
#line 171 "sintatico.y"
                                                      { p = insere(p, "ChamadaFuncao", 4); }
#line 1864 "sintatico.tab.c"
    break;

  case 38: /* opt_args: vazio  */
#line 175 "sintatico.y"
                                                      { p = insere(p, "ArgsVazio", 0); }
#line 1870 "sintatico.tab.c"
    break;

  case 39: /* opt_args: lista_args  */
#line 176 "sintatico.y"
                                                      { p = insere(p, "Args", 1); }
#line 1876 "sintatico.tab.c"
    break;

  case 40: /* lista_args: expressao  */
#line 180 "sintatico.y"
                                                      { p = insere(p, "ListaArgs", 1); }
#line 1882 "sintatico.tab.c"
    break;

  case 41: /* lista_args: lista_args virg expressao  */
#line 181 "sintatico.y"
                                                      { p = insere(p, "ListaArgs", 3); }
#line 1888 "sintatico.tab.c"
    break;

  case 42: /* expressao: expressao or_tok expressao  */
#line 185 "sintatico.y"
                                                      { p = insere(p, "OR", 3); }
#line 1894 "sintatico.tab.c"
    break;

  case 43: /* expressao: expressao and_tok expressao  */
#line 186 "sintatico.y"
                                                      { p = insere(p, "AND", 3); }
#line 1900 "sintatico.tab.c"
    break;

  case 44: /* expressao: expressao igual_tok expressao  */
#line 187 "sintatico.y"
                                                      { p = insere(p, "EQ", 3); }
#line 1906 "sintatico.tab.c"
    break;

  case 45: /* expressao: expressao dif_tok expressao  */
#line 188 "sintatico.y"
                                                      { p = insere(p, "NE", 3); }
#line 1912 "sintatico.tab.c"
    break;

  case 46: /* expressao: expressao le_tok expressao  */
#line 189 "sintatico.y"
                                                      { p = insere(p, "LE", 3); }
#line 1918 "sintatico.tab.c"
    break;

  case 47: /* expressao: expressao me_tok expressao  */
#line 190 "sintatico.y"
                                                      { p = insere(p, "GE", 3); }
#line 1924 "sintatico.tab.c"
    break;

  case 48: /* expressao: expressao m_tok expressao  */
#line 191 "sintatico.y"
                                                      { p = insere(p, "GT", 3); }
#line 1930 "sintatico.tab.c"
    break;

  case 49: /* expressao: expressao l_tok expressao  */
#line 192 "sintatico.y"
                                                      { p = insere(p, "LT", 3); }
#line 1936 "sintatico.tab.c"
    break;

  case 50: /* expressao: expressao mais_tok expressao  */
#line 193 "sintatico.y"
                                                      { p = insere(p, "ADD", 3); }
#line 1942 "sintatico.tab.c"
    break;

  case 51: /* expressao: expressao menos_tok expressao  */
#line 194 "sintatico.y"
                                                      { p = insere(p, "SUB", 3); }
#line 1948 "sintatico.tab.c"
    break;

  case 52: /* expressao: expressao multi_tok expressao  */
#line 195 "sintatico.y"
                                                      { p = insere(p, "MUL", 3); }
#line 1954 "sintatico.tab.c"
    break;

  case 53: /* expressao: expressao div_tok expressao  */
#line 196 "sintatico.y"
                                                      { p = insere(p, "DIV", 3); }
#line 1960 "sintatico.tab.c"
    break;

  case 54: /* expressao: expressao mod_tok expressao  */
#line 197 "sintatico.y"
                                                      { p = insere(p, "MOD", 3); }
#line 1966 "sintatico.tab.c"
    break;

  case 55: /* expressao: not_tok expressao  */
#line 198 "sintatico.y"
                                                      { p = insere(p, "NOT", 2); }
#line 1972 "sintatico.tab.c"
    break;

  case 56: /* expressao: apar expressao fpar  */
#line 199 "sintatico.y"
                                                      { p = insere(p, "Grupo", 3); }
#line 1978 "sintatico.tab.c"
    break;

  case 57: /* expressao: atribuicao  */
#line 200 "sintatico.y"
                                                       { p = insere(p, "ExprAtrib", 1); }
#line 1984 "sintatico.tab.c"
    break;

  case 58: /* expressao: identificador mais_tok atrib_tok expressao  */
#line 201 "sintatico.y"
                                                      { p = insere(p, "AddAssign", 4); }
#line 1990 "sintatico.tab.c"
    break;

  case 59: /* expressao: primario  */
#line 202 "sintatico.y"
                                                      { p = insere(p, "ExprPrim", 1); }
#line 1996 "sintatico.tab.c"
    break;

  case 60: /* primario: identificador  */
#line 206 "sintatico.y"
                                                      { p = insere(p, "PrimId", 1); }
#line 2002 "sintatico.tab.c"
    break;

  case 61: /* primario: numero_inteiro  */
#line 207 "sintatico.y"
                                                      { p = insere(p, "PrimInt", 1); }
#line 2008 "sintatico.tab.c"
    break;

  case 62: /* primario: T_NUMERO_REAL  */
#line 208 "sintatico.y"
                                                      { p = insereDouble(p, (yyvsp[0].dval), 0); p = insere(p, "Num", 1); p = insere(p, "PrimReal", 1); }
#line 2014 "sintatico.tab.c"
    break;

  case 63: /* primario: string_lit  */
#line 209 "sintatico.y"
                                                      { p = insere(p, "PrimStr", 1); }
#line 2020 "sintatico.tab.c"
    break;

  case 64: /* primario: chamada_funcao  */
#line 210 "sintatico.y"
                                                      { p = insere(p, "PrimCall", 1); }
#line 2026 "sintatico.tab.c"
    break;

  case 65: /* identificador: T_IDENTIFICADOR  */
#line 214 "sintatico.y"
                                                      { p = insere(p, (yyvsp[0].sval), 0); p = insere(p, "Identificador", 1); }
#line 2032 "sintatico.tab.c"
    break;

  case 66: /* numero_inteiro: T_NUMERO_INTEIRO  */
#line 218 "sintatico.y"
                                                      { p = insereInt(p, (yyvsp[0].ival), 0); p = insere(p, "Num", 1); }
#line 2038 "sintatico.tab.c"
    break;

  case 67: /* string_lit: T_STRING  */
#line 222 "sintatico.y"
                                                      { p = insere(p, (yyvsp[0].sval), 0); p = insere(p, "String", 1); }
#line 2044 "sintatico.tab.c"
    break;

  case 68: /* include_kw: T_INCLUDE  */
#line 226 "sintatico.y"
                                                      { p = insere(p, "#include", 0); }
#line 2050 "sintatico.tab.c"
    break;

  case 69: /* define_kw: T_DEFINE  */
#line 230 "sintatico.y"
                                                      { p = insere(p, "#define", 0); }
#line 2056 "sintatico.tab.c"
    break;

  case 70: /* void_kw: T_VOID  */
#line 234 "sintatico.y"
                                                      { p = insere(p, "void", 0); }
#line 2062 "sintatico.tab.c"
    break;

  case 71: /* main_kw: T_MAIN  */
#line 238 "sintatico.y"
                                                      { p = insere(p, "main", 0); }
#line 2068 "sintatico.tab.c"
    break;

  case 74: /* for_kw: T_FOR  */
#line 250 "sintatico.y"
                                                      { p = insere(p, "for", 0); }
#line 2074 "sintatico.tab.c"
    break;

  case 75: /* while_kw: T_WHILE  */
#line 254 "sintatico.y"
                                                      { p = insere(p, "while", 0); }
#line 2080 "sintatico.tab.c"
    break;

  case 76: /* if_kw: T_IF  */
#line 258 "sintatico.y"
                                                      { p = insere(p, "if", 0); }
#line 2086 "sintatico.tab.c"
    break;

  case 77: /* else_kw: T_ELSE  */
#line 262 "sintatico.y"
                                                      { p = insere(p, "else", 0); }
#line 2092 "sintatico.tab.c"
    break;

  case 78: /* return_kw: T_RETURN  */
#line 266 "sintatico.y"
                                                      { p = insere(p, "return", 0); }
#line 2098 "sintatico.tab.c"
    break;

  case 79: /* apar: T_APAR  */
#line 270 "sintatico.y"
                                                      { p = insere(p, "(", 0); }
#line 2104 "sintatico.tab.c"
    break;

  case 80: /* fpar: T_FPAR  */
#line 274 "sintatico.y"
                                                      { p = insere(p, ")", 0); }
#line 2110 "sintatico.tab.c"
    break;

  case 81: /* acha: T_ACHA  */
#line 278 "sintatico.y"
                                                      { p = insere(p, "{", 0); }
#line 2116 "sintatico.tab.c"
    break;

  case 82: /* fcha: T_FCHA  */
#line 282 "sintatico.y"
                                                      { p = insere(p, "}", 0); }
#line 2122 "sintatico.tab.c"
    break;

  case 83: /* pvirg: T_PONTOVIRG  */
#line 286 "sintatico.y"
                                                      { p = insere(p, ";", 0); }
#line 2128 "sintatico.tab.c"
    break;

  case 84: /* pvirg_opt: T_PONTOVIRG  */
#line 290 "sintatico.y"
                                                      { p = insere(p, ";", 0); }
#line 2134 "sintatico.tab.c"
    break;

  case 85: /* virg: T_VIRG  */
#line 294 "sintatico.y"
                                                      { p = insere(p, ",", 0); }
#line 2140 "sintatico.tab.c"
    break;

  case 86: /* ponto: T_PONTO  */
#line 298 "sintatico.y"
                                                      { p = insere(p, ".", 0); }
#line 2146 "sintatico.tab.c"
    break;

  case 87: /* menor: T_L  */
#line 302 "sintatico.y"
                                                      { p = insere(p, "<", 0); }
#line 2152 "sintatico.tab.c"
    break;

  case 88: /* maior: T_M  */
#line 306 "sintatico.y"
                                                      { p = insere(p, ">", 0); }
#line 2158 "sintatico.tab.c"
    break;

  case 89: /* mais_tok: T_MAIS  */
#line 310 "sintatico.y"
                                                      { p = insere(p, "+", 0); }
#line 2164 "sintatico.tab.c"
    break;

  case 90: /* menos_tok: T_MENOS  */
#line 314 "sintatico.y"
                                                      { p = insere(p, "-", 0); }
#line 2170 "sintatico.tab.c"
    break;

  case 91: /* multi_tok: T_MULTI  */
#line 318 "sintatico.y"
                                                      { p = insere(p, "*", 0); }
#line 2176 "sintatico.tab.c"
    break;

  case 92: /* div_tok: T_DIV  */
#line 322 "sintatico.y"
                                                      { p = insere(p, "/", 0); }
#line 2182 "sintatico.tab.c"
    break;

  case 93: /* mod_tok: T_MOD  */
#line 326 "sintatico.y"
                                                      { p = insere(p, "%", 0); }
#line 2188 "sintatico.tab.c"
    break;

  case 94: /* igual_tok: T_IGUAL  */
#line 330 "sintatico.y"
                                                      { p = insere(p, "==", 0); }
#line 2194 "sintatico.tab.c"
    break;

  case 95: /* dif_tok: T_DIF  */
#line 334 "sintatico.y"
                                                      { p = insere(p, "!=", 0); }
#line 2200 "sintatico.tab.c"
    break;

  case 96: /* le_tok: T_LE  */
#line 338 "sintatico.y"
                                                      { p = insere(p, "<=", 0); }
#line 2206 "sintatico.tab.c"
    break;

  case 97: /* me_tok: T_ME  */
#line 342 "sintatico.y"
                                                      { p = insere(p, ">=", 0); }
#line 2212 "sintatico.tab.c"
    break;

  case 98: /* m_tok: T_M  */
#line 346 "sintatico.y"
                                                      { p = insere(p, ">", 0); }
#line 2218 "sintatico.tab.c"
    break;

  case 99: /* l_tok: T_L  */
#line 350 "sintatico.y"
                                                      { p = insere(p, "<", 0); }
#line 2224 "sintatico.tab.c"
    break;

  case 100: /* or_tok: T_OR  */
#line 354 "sintatico.y"
                                                      { p = insere(p, "||", 0); }
#line 2230 "sintatico.tab.c"
    break;

  case 101: /* and_tok: T_AND  */
#line 358 "sintatico.y"
                                                      { p = insere(p, "&&", 0); }
#line 2236 "sintatico.tab.c"
    break;

  case 102: /* not_tok: T_NOT  */
#line 362 "sintatico.y"
                                                      { p = insere(p, "!", 0); }
#line 2242 "sintatico.tab.c"
    break;

  case 103: /* atrib_tok: T_ATRIBUICAO  */
#line 366 "sintatico.y"
                                                      { p = insere(p, "=", 0); }
#line 2248 "sintatico.tab.c"
    break;

  case 104: /* inc_tok: T_INC  */
#line 370 "sintatico.y"
                                                      { p = insere(p, "++", 0); }
#line 2254 "sintatico.tab.c"
    break;

  case 105: /* int_kw: T_INT  */
#line 374 "sintatico.y"
                                                      { p = insere(p, "int", 0); }
#line 2260 "sintatico.tab.c"
    break;

  case 106: /* vazio: %empty  */
#line 378 "sintatico.y"
                                                      { p = insere(p, "Vazio", 0); }
#line 2266 "sintatico.tab.c"
    break;


#line 2270 "sintatico.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 380 "sintatico.y"


extern YYLTYPE yylloc;

void yyerror(const char *s) {
  fprintf(stderr, "Erro sintatico [linha %d, coluna %d] %s\n",
          yylloc.first_line, yylloc.first_column, s);
}
