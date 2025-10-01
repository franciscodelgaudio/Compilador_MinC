%{
  #include <stdio.h>
  #include "arvore.h"
  int yylex(void);
  void yyerror(const char *s);

  Pilha *p = NULL;
%}

%define parse.error detailed
%locations

%union {
    int ival;     
    double dval;  
    char *sval;  
}

%token <sval> T_IDENTIFICADOR
%token <ival> T_NUMERO_INTEIRO
%token <dval> T_NUMERO_REAL
%token <sval> T_STRING
%token <ival> T_CARACTERE

%token T_INT
%token T_FLOAT
%token T_DOUBLE
%token T_CHAR
%token T_VOID
%token T_IF
%token T_ELSE
%token T_FOR
%token T_WHILE
%token T_RETURN

%token T_MAIN
%token T_PRINTF
%token T_SCANF

%token T_INCLUDE
%token T_DEFINE

%token T_MAIS
%token T_MENOS
%token T_MULTI
%token T_DIV
%token T_MOD

%token T_IGUAL
%token T_LE
%token T_ME
%token T_DIF
%token T_M
%token T_L
%token T_INC

%token T_OR
%token T_AND
%token T_NOT
%token T_ATRIBUICAO

%token T_ACHA
%token T_FCHA
%token T_ACOL
%token T_FCOL
%token T_APAR
%token T_FPAR

%token T_PONTOVIRG
%token T_VIRG
%token T_PONTO

%%
programa
  : preambulo func_main                               { p = insere(p, "programa", 2); }
  ;

preambulo
  : include define                                    { p = insere(p, "preambulo", 2); }
  ;

include
  : include_kw menor identificador ponto identificador maior
    { p = insere(p, "Include", 6); }
  ;

define
  : define_kw identificador numero_inteiro            { p = insere(p, "Define", 3); }
  ;

func_main
  : void_kw main_kw apar fpar bloco opt_pontovirg     { p = insere(p, "FuncMain", 6); }
  ;

bloco
  : acha lista_comandos fcha                          { p = insere(p, "Bloco", 3); }
  ;

opt_pontovirg
  : vazio                                             { p = insere(p, "Vazio", 0); }
  | pvirg_opt                                         { p = insere(p, "PontoVirgulaOpt", 1); }
  ;

lista_comandos
  : vazio                                             { p = insere(p, "ListaComandos", 0); }
  | lista_comandos comando                            { p = insere(p, "ListaComandos", 2); }
  ;

comando
  : decl_var pvirg                                    { p = insere(p, "ComandoDecl", 2); }
  | for_stmt                                          { p = insere(p, "ComandoFor", 1); }
  | while_stmt
  | if_stmt                                           { p = insere(p, "ComandoIf", 1); }
  | atribuicao pvirg                                  { p = insere(p, "ComandoAtrib", 2); }
  | chamada_funcao pvirg                              { p = insere(p, "ComandoChamada", 2); }
  | string_lit pvirg                                  { p = insere(p, "ComandoString", 2); }
  | return_kw pvirg                                   { p = insere(p, "ComandoReturn", 2); }
  | printf_stmt                                       { p = insere(p, "ComandoPrintf", 1); }
  | scanf_stmt                                        { p = insere(p, "ComandoScanf", 1); }
  | bloco opt_pontovirg                               { p = insere(p, "ComandoBloco", 2); }
  ;

  printf_stmt
  : printf_kw apar printf_args fpar pvirg
    { p = insere(p, "Printf", 5); }
  ;

scanf_stmt
  : scanf_kw apar scanf_args fpar pvirg
    { p = insere(p, "Scanf", 5); }
  ;

printf_args
  : string_lit                                        { p = insere(p, "PrintfArgs", 1); }
  | string_lit virg lista_args                        { p = insere(p, "PrintfArgs", 3); }
  ;

scanf_args
  : string_lit                                        { p = insere(p, "ScanfArgs", 1); }
  | string_lit virg lista_args                        { p = insere(p, "ScanfArgs", 3); }
  ;

decl_var
  : int_kw identificador                              { p = insere(p, "DeclVarInt", 2); }
  | int_kw identificador atrib_tok expressao          { p = insere(p, "DeclVarIntInit", 4); }
  ;

for_stmt
  : for_kw apar atribuicao pvirg expressao pvirg incremento fpar bloco
    { p = insere(p, "For", 9); }
  ;

while_stmt
  : while_kw apar expressao fpar bloco                { p = insere(p, "While", 9); }

atribuicao
  : identificador atrib_tok expressao                 { p = insere(p, "Atribuicao", 3); }
  ;

incremento
  : identificador inc_tok                             { p = insere(p, "PosInc", 2); }
  | inc_tok identificador                             { p = insere(p, "PreInc", 2); }
  ;

if_stmt
  : if_kw apar expressao fpar bloco else_kw bloco opt_pontovirg
    { p = insere(p, "IfElse", 8); }
  ;

chamada_funcao
  : identificador apar opt_args fpar                  { p = insere(p, "ChamadaFuncao", 4); }
  ;

opt_args
  : vazio                                             { p = insere(p, "ArgsVazio", 0); }
  | lista_args                                        { p = insere(p, "Args", 1); }
  ;

lista_args
  : expressao                                         { p = insere(p, "ListaArgs", 1); }
  | lista_args virg expressao                         { p = insere(p, "ListaArgs", 3); }
  ;

expressao
  : expressao or_tok  expressao                       { p = insere(p, "OR", 3); }
  | expressao and_tok expressao                       { p = insere(p, "AND", 3); }
  | expressao igual_tok expressao                     { p = insere(p, "EQ", 3); }
  | expressao dif_tok   expressao                     { p = insere(p, "NE", 3); }
  | expressao le_tok    expressao                     { p = insere(p, "LE", 3); }
  | expressao me_tok    expressao                     { p = insere(p, "GE", 3); }
  | expressao m_tok     expressao                     { p = insere(p, "GT", 3); }
  | expressao l_tok     expressao                     { p = insere(p, "LT", 3); }
  | expressao mais_tok  expressao                     { p = insere(p, "ADD", 3); }
  | expressao menos_tok expressao                     { p = insere(p, "SUB", 3); }
  | expressao multi_tok expressao                     { p = insere(p, "MUL", 3); }
  | expressao div_tok   expressao                     { p = insere(p, "DIV", 3); }
  | expressao mod_tok   expressao                     { p = insere(p, "MOD", 3); }
  | not_tok expressao                                 { p = insere(p, "NOT", 2); }
  | apar expressao fpar                               { p = insere(p, "Grupo", 3); }
  | atribuicao                                         { p = insere(p, "ExprAtrib", 1); }
  | identificador mais_tok atrib_tok expressao        { p = insere(p, "AddAssign", 4); }
  | primario                                          { p = insere(p, "ExprPrim", 1); }
  ;

primario
  : identificador                                     { p = insere(p, "PrimId", 1); }
  | numero_inteiro                                    { p = insere(p, "PrimInt", 1); }
  | T_NUMERO_REAL                                     { p = insereDouble(p, $1, 0); p = insere(p, "Num", 1); p = insere(p, "PrimReal", 1); }
  | string_lit                                        { p = insere(p, "PrimStr", 1); }
  | chamada_funcao                                    { p = insere(p, "PrimCall", 1); }
  ;

identificador
  : T_IDENTIFICADOR                                   { p = insere(p, $1, 0); p = insere(p, "Identificador", 1); }
  ;

numero_inteiro
  : T_NUMERO_INTEIRO                                  { p = insereInt(p, $1, 0); p = insere(p, "Num", 1); }
  ;

string_lit
  : T_STRING                                          { p = insere(p, $1, 0); p = insere(p, "String", 1); }
  ;

include_kw
  : T_INCLUDE                                         { p = insere(p, "#include", 0); }
  ;

define_kw
  : T_DEFINE                                          { p = insere(p, "#define", 0); }
  ;

void_kw
  : T_VOID                                            { p = insere(p, "void", 0); }
  ;

main_kw
  : T_MAIN                                            { p = insere(p, "main", 0); }
  ;

printf_kw
  : T_PRINTF
  ;

scanf_kw
  : T_SCANF
  ;

for_kw
  : T_FOR                                             { p = insere(p, "for", 0); }
  ;

while_kw
  : T_WHILE                                           { p = insere(p, "while", 0); }
  ;

if_kw
  : T_IF                                              { p = insere(p, "if", 0); }
  ;

else_kw
  : T_ELSE                                            { p = insere(p, "else", 0); }
  ;

return_kw
  : T_RETURN                                          { p = insere(p, "return", 0); }
  ;

apar
  : T_APAR                                            { p = insere(p, "(", 0); }
  ;

fpar
  : T_FPAR                                            { p = insere(p, ")", 0); }
  ;

acha
  : T_ACHA                                            { p = insere(p, "{", 0); }
  ;

fcha
  : T_FCHA                                            { p = insere(p, "}", 0); }
  ;

pvirg
  : T_PONTOVIRG                                       { p = insere(p, ";", 0); }
  ;

pvirg_opt
  : T_PONTOVIRG                                       { p = insere(p, ";", 0); }
  ;

virg
  : T_VIRG                                            { p = insere(p, ",", 0); }
  ;

ponto
  : T_PONTO                                           { p = insere(p, ".", 0); }
  ;

menor
  : T_L                                               { p = insere(p, "<", 0); }
  ;

maior
  : T_M                                               { p = insere(p, ">", 0); }
  ;

mais_tok
  : T_MAIS                                            { p = insere(p, "+", 0); }
  ;

menos_tok
  : T_MENOS                                           { p = insere(p, "-", 0); }
  ;

multi_tok
  : T_MULTI                                           { p = insere(p, "*", 0); }
  ;

div_tok
  : T_DIV                                             { p = insere(p, "/", 0); }
  ;

mod_tok
  : T_MOD                                             { p = insere(p, "%", 0); }
  ;

igual_tok
  : T_IGUAL                                           { p = insere(p, "==", 0); }
  ;

dif_tok
  : T_DIF                                             { p = insere(p, "!=", 0); }
  ;

le_tok
  : T_LE                                              { p = insere(p, "<=", 0); }
  ;

me_tok
  : T_ME                                              { p = insere(p, ">=", 0); }
  ;

m_tok
  : T_M                                               { p = insere(p, ">", 0); }
  ;

l_tok
  : T_L                                               { p = insere(p, "<", 0); }
  ;

or_tok
  : T_OR                                              { p = insere(p, "||", 0); }
  ;

and_tok
  : T_AND                                             { p = insere(p, "&&", 0); }
  ;

not_tok
  : T_NOT                                             { p = insere(p, "!", 0); }
  ;

atrib_tok
  : T_ATRIBUICAO                                      { p = insere(p, "=", 0); }
  ;

inc_tok
  : T_INC                                             { p = insere(p, "++", 0); }
  ;

int_kw
  : T_INT                                             { p = insere(p, "int", 0); }
  ;

vazio
  :                                                   { p = insere(p, "Vazio", 0); }
  ;
%%

extern YYLTYPE yylloc;

void yyerror(const char *s) {
  fprintf(stderr, "Erro sintatico [linha %d, coluna %d] %s\n",
          yylloc.first_line, yylloc.first_column, s);
}
