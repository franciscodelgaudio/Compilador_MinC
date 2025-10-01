%{
#include <stdio.h>
#include <string.h>
#include "lista.h"
#include "sintatico.tab.h"

Lista * palavrasReservadas = NULL;
Lista * simbolos = NULL;

int linha = 1;
int coluna = 1;

#define YY_USER_ACTION do { \
  yylloc.first_line = yylloc.last_line = linha; \
  yylloc.first_column = coluna; \
  yylloc.last_column = coluna + yyleng - 1; \
} while(0);

%}

PALAVRA_CHAVE (int|float|double|char|void|if|else|for|while|return)
IDENTIFICADOR [_a-zA-Z]+[_a-zA-Z0-9]*
NUMERO_INTEIRO [\+\-]?[0-9]+
NUMERO_REAL {NUMERO_INTEIRO}"."[0-9]+
OPERADOR_ARITMETICO [+\-*/%]
OPERADOR_RELACIONAL (==|<=|>=|!=|>|<)
OPERADOR_LOGICO (\|\||&&|!)
OPERADOR_ATRIBUICAO (=)
INCREMENTO (\+\+|\-\-)
DELIMITADOR [\{\}\[\]\(\)]
PONTUACAO (;|,|\.)
STRING \"[^\"]*\"
CARACTERE \'.\'
COMENTARIO (\/\/[^\n]*)
MACROS \#[a-zA-Z_]+

IDENTIFICADOR_INVALIDO {NUMERO_INTEIRO}{IDENTIFICADOR}
NUMERO_REAL_INVALIDO {NUMERO_INTEIRO}"."[^0-9|^\n]+
STRING_INVALIDO \"[^\"]*\n
CARACTERE_INVALIDO \'[^\']*\n

%%

{PALAVRA_CHAVE}         {
                            palavrasReservadas = Inserir(palavrasReservadas, PALAVRA_CHAVE, yytext, linha, coluna);
                            coluna += yyleng;
                            if (!strcmp(yytext,"int"))       return T_INT;
                            if (!strcmp(yytext,"float"))     return T_FLOAT;
                            if (!strcmp(yytext,"double"))    return T_DOUBLE;
                            if (!strcmp(yytext,"char"))      return T_CHAR;
                            if (!strcmp(yytext,"void"))      return T_VOID;
                            if (!strcmp(yytext,"if"))        return T_IF;
                            if (!strcmp(yytext,"else"))      return T_ELSE;
                            if (!strcmp(yytext,"for"))       return T_FOR;
                            if (!strcmp(yytext,"while"))     return T_WHILE;
                            if (!strcmp(yytext,"return"))     return T_RETURN;
                        }
{IDENTIFICADOR}         {
                            simbolos = Inserir(simbolos, IDENTIFICADOR, yytext, linha, coluna);
                            coluna += yyleng;
                            yylval.sval = strdup(yytext);
                            if (!strcmp(yytext,"main"))         return T_MAIN;
                            if (!strcmp(yytext,"printf"))       return T_PRINTF;
                            if (!strcmp(yytext,"scanf"))        return T_SCANF;
                            return T_IDENTIFICADOR;
                        }
{NUMERO_INTEIRO}        {
                            simbolos = Inserir(simbolos, NUMERO_INTEIRO, yytext, linha, coluna);
                            coluna += yyleng;
                            yylval.ival = atoi(yytext);
                            return T_NUMERO_INTEIRO;
                        }
{NUMERO_REAL}           {
                            simbolos = Inserir(simbolos, NUMERO_REAL, yytext, linha, coluna);
                            coluna += yyleng;
                            yylval.dval = atof(yytext);
                            return T_NUMERO_REAL;
                        }
{OPERADOR_ARITMETICO}   {
                            palavrasReservadas = Inserir(palavrasReservadas, OPERADOR_ARITMETICO, yytext, linha, coluna);
                            coluna += yyleng;
                            if (!strcmp(yytext,"+"))    return T_MAIS;
                            if (!strcmp(yytext,"-"))    return T_MENOS;
                            if (!strcmp(yytext,"*"))    return T_MULTI;
                            if (!strcmp(yytext,"/"))    return T_DIV;
                            if (!strcmp(yytext,"%"))    return T_MOD;
                        }
{OPERADOR_RELACIONAL}   {
                            palavrasReservadas = Inserir(palavrasReservadas, OPERADOR_RELACIONAL, yytext, linha, coluna);
                            coluna += yyleng;
                            if (!strcmp(yytext,"=="))    return T_IGUAL;
                            if (!strcmp(yytext,"<="))    return T_LE;
                            if (!strcmp(yytext,">="))    return T_ME;
                            if (!strcmp(yytext,"!="))    return T_DIF;
                            if (!strcmp(yytext,">"))     return T_M;
                            if (!strcmp(yytext,"<"))     return T_L;
                        }
{INCREMENTO}            {
                            palavrasReservadas = Inserir(palavrasReservadas, INCREMENTO, yytext, linha, coluna); 
                            coluna += yyleng;
                            yylval.sval = strdup(yytext); 
                            return T_INC;
                        }
{OPERADOR_LOGICO}       {
                            palavrasReservadas = Inserir(palavrasReservadas, OPERADOR_LOGICO, yytext, linha, coluna);
                            coluna += yyleng;
                            if (!strcmp(yytext,"||"))    return T_OR;
                            if (!strcmp(yytext,"&&"))    return T_AND;
                            if (!strcmp(yytext,"!"))     return T_NOT;
                        }
{OPERADOR_ATRIBUICAO}   {
                            palavrasReservadas = Inserir(palavrasReservadas, OPERADOR_ATRIBUICAO, yytext, linha, coluna);
                            coluna += yyleng;
                            return T_ATRIBUICAO;
                        }
{DELIMITADOR}           {
                            palavrasReservadas = Inserir(palavrasReservadas, DELIMITADOR, yytext, linha, coluna);
                            coluna += yyleng;
                            if (!strcmp(yytext,"{"))    return T_ACHA;
                            if (!strcmp(yytext,"}"))    return T_FCHA;
                            if (!strcmp(yytext,"["))    return T_ACOL;
                            if (!strcmp(yytext,"]"))    return T_FCOL;
                            if (!strcmp(yytext,"("))    return T_APAR;
                            if (!strcmp(yytext,")"))    return T_FPAR; 
                        }
{PONTUACAO}             {
                            palavrasReservadas = Inserir(palavrasReservadas, PONTUACAO, yytext, linha, coluna);
                            coluna += yyleng;
                            if (!strcmp(yytext,";"))    return T_PONTOVIRG;
                            if (!strcmp(yytext,","))    return T_VIRG;
                            if (!strcmp(yytext,"."))    return T_PONTO;
                        }
{STRING}        {
                            simbolos = Inserir(simbolos, STRING, yytext, linha, coluna);
                            coluna += yyleng;
                            yylval.sval = strdup(yytext);
                            return T_STRING;
                        }
{CARACTERE}     {
                            simbolos = Inserir(simbolos, CARACTERE, yytext, linha, coluna);
                            coluna += yyleng;
                            yylval.ival = yytext[1];
                            return T_CARACTERE;
                        }
{COMENTARIO}            {
                            coluna += yyleng;
                        }

{MACROS}                {
                            palavrasReservadas = Inserir(palavrasReservadas, MACROS, yytext, linha, coluna);
                            coluna += yyleng;
                            if (!strcmp(yytext,"#include"))     return T_INCLUDE;
                            if (!strcmp(yytext,"#define"))      return T_DEFINE;
                        }
{IDENTIFICADOR_INVALIDO}    {
                                printf("Erro lexico [linha %d, coluna %d] %s malformado: %s\n", linha, coluna, "IDENTIFICADOR", yytext);
                                coluna += yyleng;
                            }
{NUMERO_REAL_INVALIDO}      {
                                printf("Erro lexico [linha %d, coluna %d] %s malformado: %s\n", linha, coluna, "NUMERO_REAL", yytext);
                                coluna += yyleng;
                            }
{STRING_INVALIDO}           {
                                printf("Erro lexico [linha %d, coluna %d] %s malformado: %s", linha, coluna, "STRING", yytext);
                                coluna += yyleng;
                            }
{CARACTERE_INVALIDO}        {
                                printf("Erro lexico [linha %d, coluna %d] %s malformado: %s", linha, coluna, "CARACTERE", yytext);
                                coluna += yyleng;
                            }
.                           {
                                coluna += yyleng;
                            }

\n                          {
                                linha++;
                                coluna = 1;
                            }
%%

int yywrap(){
    return 1;
}