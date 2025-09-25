%{
  #include <stdio.h>
  int yylex(void);
  void yyerror(const char *s);
%}

%define parse.error detailed
%locations

/* Precedência básica para evitar conflitos ao expandir expressões */
%left T_OPERADOR_LOGICO
%left T_OPERADOR_RELACIONAL
%left '+' '-'
%left '*' '/'

%token T_INT T_FLOAT T_DOUBLE T_CHAR T_VOID 
%token T_IF T_ELSE T_FOR T_WHILE T_SWITCH T_CASE T_COUT T_CIN 
%token T_ENDL T_RETURN

%token T_IDENTIFICADOR
%token T_NUMERO_INTEIRO T_NUMERO_REAL
%token T_OPERADOR_RELACIONAL T_OPERADOR_LOGICO
%token T_STRING T_CARACTERE
%token T_MACRO

%start program

%%

/* 1) programa com múltiplas unidades (declarações, funções, comandos soltos) */
program
  : /* vazio */
  | program decl_ou_stmt
  ;

/* 2) unidade: declaração; 3) comando; 4) recuperação até ';' */
decl_ou_stmt
  : declaracao ';'
  | func_def
  | func_decl ';'
  | comando
  | error ';'
  ;

/* ---------- Declarações ---------- */

/* 5) tipos */
tipo
  : T_INT
  | T_FLOAT
  | T_DOUBLE
  | T_CHAR
  | T_VOID
  ;

/* 6) declaração simples; 7) array; 8) lista de declaradores com possível inicialização */
declaracao
  : tipo T_IDENTIFICADOR
  | tipo T_IDENTIFICADOR '[' T_NUMERO_INTEIRO ']'
  | tipo init_declarator_list
  ;

/* 9) lista de declaradores */
init_declarator_list
  : init_declarator
  | init_declarator_list ',' init_declarator
  ;

/* 10) declarador com/sem inicialização */
init_declarator
  : T_IDENTIFICADOR
  | T_IDENTIFICADOR '=' expressao
  ;

/* ---------- Funções ---------- */

/* 11) declaração de função (protótipo) */
func_decl
  : tipo T_IDENTIFICADOR '(' param_list_opt ')'
  ;

/* 12) definição de função (com corpo em bloco) */
func_def
  : tipo T_IDENTIFICADOR '(' param_list_opt ')' bloco
  ;

/* 13) parâmetros opcionais; 14) lista de parâmetros; 15) parâmetro */
param_list_opt
  : /* vazio */
  | param_list
  ;

param_list
  : param
  | param_list ',' param
  ;

param
  : tipo T_IDENTIFICADOR
  | tipo
  ;

/* ---------- Comandos ---------- */

/* 16) comandos possíveis */
comando
  : bloco
  | atribuicao ';'             /* 17) atribuição */
  | expr_stmt ';'              /* 18) expressão solta */
  | if_stmt                    /* 19) if/else */
  | while_stmt                 /* 20) while */
  | for_stmt                   /* 21) for */
  | switch_stmt                /* 22) switch/case */
  | return_stmt ';'            /* 23) return (com/sem expr) */
  | cout_stmt ';'              /* 24) cout simplificado */
  | cin_stmt  ';'              /* 25) cin simplificado */
  | macro_stmt                 /* 26) linha de macro/preprocessador */
  ;

/* 27) bloco com lista de comandos (e recuperação local) */
bloco
  : '{' lista_comandos '}'
  ;

lista_comandos
  : /* vazio */
  | lista_comandos comando
  | lista_comandos declaracao ';'
  | lista_comandos error ';'
  ;

/* ---------- Seleção/Iteração/Retorno ---------- */

if_stmt
  : T_IF '(' expressao ')' comando
  | T_IF '(' expressao ')' comando T_ELSE comando
  ;

while_stmt
  : T_WHILE '(' expressao ')' comando
  ;

for_stmt
  : T_FOR '(' for_init_opt ';' for_cond_opt ';' for_iter_opt ')' comando
  ;

for_init_opt
  : /* vazio */
  | atribuicao
  | declaracao
  ;

for_cond_opt
  : /* vazio */
  | expressao
  ;

for_iter_opt
  : /* vazio */
  | atribuicao
  | expressao
  ;

switch_stmt
  : T_SWITCH '(' expressao ')' '{' case_list_opt '}'
  ;

case_list_opt
  : /* vazio */
  | case_list
  ;

case_list
  : case_list case_item
  | case_item
  ;

case_item
  : T_CASE T_NUMERO_INTEIRO ':' lista_comandos
  ;

/* 23) retorno */
return_stmt
  : T_RETURN
  | T_RETURN expressao
  ;

/* ---------- IO simplificado (sem '<<'/'>>') ---------- */

/* 24) cout << a << b << endl;  (aqui modelado como COUT exprs [ENDL]) */
cout_stmt
  : T_COUT out_list opt_endl
  ;

out_list
  : expressao
  | out_list ',' expressao
  ;

opt_endl
  : /* vazio */
  | T_ENDL
  ;

/* 25) cin >> a >> b; (modelado como CIN ids) */
cin_stmt
  : T_CIN in_list
  ;

in_list
  : T_IDENTIFICADOR
  | in_list ',' T_IDENTIFICADOR
  ;

/* 26) macro/preprocessador (forma reduzida; ';' opcional) */
macro_stmt
  : T_MACRO T_IDENTIFICADOR
  | T_MACRO T_IDENTIFICADOR T_NUMERO_INTEIRO
  | T_MACRO T_IDENTIFICADOR T_STRING
  ;

/* ---------- Atribuições/Expressões ---------- */

/* 17) atribuição a variável ou elemento de vetor */
atribuicao
  : T_IDENTIFICADOR '=' expressao
  | T_IDENTIFICADOR '[' expressao ']' '=' expressao   /* 28) atribuição em vetor */
  ;

/* 18) expressão solta (para usar como comando) */
expr_stmt
  : expressao
  ;

/* 29+) Expressões com aritmética, chamadas, indexação, parênteses, relacionais, lógicas */
expressao
  : primario
  | expressao '+' expressao
  | expressao '-' expressao
  | expressao '*' expressao
  | expressao '/' expressao
  | expressao T_OPERADOR_RELACIONAL expressao   /* ==, <=, >=, !=, >, < */
  | expressao T_OPERADOR_LOGICO     expressao   /* &&, || */
  | T_OPERADOR_LOGICO expressao                 /* !expr (token lógico unário) */
  | expressao '<' expressao
  | expressao '>' expressao
  ;

/* primários: números, id, string/char, chamada, indexação e parênteses */
primario
  : T_NUMERO_INTEIRO
  | T_NUMERO_REAL
  | T_IDENTIFICADOR
  | T_STRING
  | T_CARACTERE
  | '(' expressao ')'
  | T_IDENTIFICADOR '(' arg_list_opt ')'        /* 30) chamada de função */
  | T_IDENTIFICADOR '[' expressao ']'           /* 31) indexação de vetor */
  ;

arg_list_opt
  : /* vazio */
  | arg_list
  ;

arg_list
  : expressao
  | arg_list ',' expressao
  ;

%%

extern YYLTYPE yylloc;

void yyerror(const char *s) {
  fprintf(stderr, "Erro sintatico [linha %d, coluna %d] %s\n",
          yylloc.first_line, yylloc.first_column, s);
}
