/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SINTATICO_TAB_H_INCLUDED
# define YY_YY_SINTATICO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_IDENTIFICADOR = 258,         /* T_IDENTIFICADOR  */
    T_NUMERO_INTEIRO = 259,        /* T_NUMERO_INTEIRO  */
    T_NUMERO_REAL = 260,           /* T_NUMERO_REAL  */
    T_STRING = 261,                /* T_STRING  */
    T_CARACTERE = 262,             /* T_CARACTERE  */
    T_INT = 263,                   /* T_INT  */
    T_FLOAT = 264,                 /* T_FLOAT  */
    T_DOUBLE = 265,                /* T_DOUBLE  */
    T_CHAR = 266,                  /* T_CHAR  */
    T_VOID = 267,                  /* T_VOID  */
    T_IF = 268,                    /* T_IF  */
    T_ELSE = 269,                  /* T_ELSE  */
    T_FOR = 270,                   /* T_FOR  */
    T_WHILE = 271,                 /* T_WHILE  */
    T_RETURN = 272,                /* T_RETURN  */
    T_MAIN = 273,                  /* T_MAIN  */
    T_PRINTF = 274,                /* T_PRINTF  */
    T_SCANF = 275,                 /* T_SCANF  */
    T_INCLUDE = 276,               /* T_INCLUDE  */
    T_DEFINE = 277,                /* T_DEFINE  */
    T_MAIS = 278,                  /* T_MAIS  */
    T_MENOS = 279,                 /* T_MENOS  */
    T_MULTI = 280,                 /* T_MULTI  */
    T_DIV = 281,                   /* T_DIV  */
    T_MOD = 282,                   /* T_MOD  */
    T_IGUAL = 283,                 /* T_IGUAL  */
    T_LE = 284,                    /* T_LE  */
    T_ME = 285,                    /* T_ME  */
    T_DIF = 286,                   /* T_DIF  */
    T_M = 287,                     /* T_M  */
    T_L = 288,                     /* T_L  */
    T_INC = 289,                   /* T_INC  */
    T_OR = 290,                    /* T_OR  */
    T_AND = 291,                   /* T_AND  */
    T_NOT = 292,                   /* T_NOT  */
    T_ATRIBUICAO = 293,            /* T_ATRIBUICAO  */
    T_ACHA = 294,                  /* T_ACHA  */
    T_FCHA = 295,                  /* T_FCHA  */
    T_ACOL = 296,                  /* T_ACOL  */
    T_FCOL = 297,                  /* T_FCOL  */
    T_APAR = 298,                  /* T_APAR  */
    T_FPAR = 299,                  /* T_FPAR  */
    T_PONTOVIRG = 300,             /* T_PONTOVIRG  */
    T_VIRG = 301,                  /* T_VIRG  */
    T_PONTO = 302                  /* T_PONTO  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "sintatico.y"

    int ival;     
    double dval;  
    char *sval;  

#line 117 "sintatico.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_SINTATICO_TAB_H_INCLUDED  */
