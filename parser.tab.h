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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    T_INT = 258,                   /* T_INT  */
    T_FLOAT = 259,                 /* T_FLOAT  */
    T_DOUBLE = 260,                /* T_DOUBLE  */
    T_CHAR = 261,                  /* T_CHAR  */
    T_VOID = 262,                  /* T_VOID  */
    T_IF = 263,                    /* T_IF  */
    T_ELSE = 264,                  /* T_ELSE  */
    T_FOR = 265,                   /* T_FOR  */
    T_WHILE = 266,                 /* T_WHILE  */
    T_SWITCH = 267,                /* T_SWITCH  */
    T_CASE = 268,                  /* T_CASE  */
    T_COUT = 269,                  /* T_COUT  */
    T_CIN = 270,                   /* T_CIN  */
    T_ENDL = 271,                  /* T_ENDL  */
    T_RETURN = 272,                /* T_RETURN  */
    T_IDENTIFICADOR = 273,         /* T_IDENTIFICADOR  */
    T_NUMERO_INTEIRO = 274,        /* T_NUMERO_INTEIRO  */
    T_NUMERO_REAL = 275,           /* T_NUMERO_REAL  */
    T_OPERADOR_RELACIONAL = 276,   /* T_OPERADOR_RELACIONAL  */
    T_OPERADOR_LOGICO = 277,       /* T_OPERADOR_LOGICO  */
    T_STRING = 278,                /* T_STRING  */
    T_CARACTERE = 279,             /* T_CARACTERE  */
    T_MACRO = 280                  /* T_MACRO  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
