#ifndef LISTA_H
#define LISTA_H

typedef enum 
{
    PALAVRA_CHAVE,
    IDENTIFICADOR,
    NUMERO_INTEIRO,
    NUMERO_REAL,
    OPERADOR_ARITMETICO,
    OPERADOR_RELACIONAL,
    OPERADOR_LOGICO,
    OPERADOR_ATRIBUICAO,
    DELIMITADOR,
    PONTUACAO,
    STRING,
    CARACTERE,
    COMENTARIO,
    MACROS,
    INCREMENTO,
    SHL,
    SHR
} Classe;

typedef struct no
{
    Classe classe;
    char lexema [100];
    int linha;
    int coluna;
    struct no * prox;
} Lista;

Lista* Inserir(Lista * l, Classe classe, char * lexema, int linha, int coluna);
void ImprimirLista(Lista * l);

#endif