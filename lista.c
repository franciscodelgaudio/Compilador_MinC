#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"
#include "parser.tab.h"

const char* ClasseParaString(Classe classe) {
    switch(classe) {
        case PALAVRA_CHAVE: return "PALAVRA_CHAVE";
        case IDENTIFICADOR: return "IDENTIFICADOR";
        case NUMERO_INTEIRO: return "NUMERO_INTEIRO";
        case NUMERO_REAL: return "NUMERO_REAL";
        case OPERADOR_ARITMETICO: return "OPERADOR_ARITMETICO";
        case OPERADOR_RELACIONAL: return "OPERADOR_RELACIONAL";
        case OPERADOR_LOGICO: return "OPERADOR_LOGICO";
        case OPERADOR_ATRIBUICAO: return "OPERADOR_ATRIBUICAO";
        case DELIMITADOR: return "DELIMITADOR";
        case PONTUACAO: return "PONTUACAO";
        case STRING: return "STRING";
        case CARACTERE: return "CARACTERE";
        case COMENTARIO: return "COMENTARIO";
        case MACROS: return "MACROS";
        default: return "DESCONHECIDO";
    }
}

int Vazio(Lista *l){
    return l == NULL;
}

Lista* Inserir(Lista * l, Classe classe, char * lexema, int linha, int coluna)
{
    if (Vazio(l)) {
        Lista * aux = malloc(sizeof(Lista));
        aux->classe = classe;
        strcpy(aux->lexema, lexema);
        aux->linha = linha;
        aux->coluna = coluna;
        aux->prox = NULL;
        return aux;
    }

    // Verifica se o lexema já existe
    if (strcmp(l->lexema, lexema) == 0) {
        return l; // já existe, não insere
    }

    l->prox = Inserir(l->prox, classe, lexema, linha, coluna);
    return l;
}

void ImprimirLista(Lista * l)
{
    if (l != NULL){
        printf("%s: ", ClasseParaString(l->classe));
        printf("%s", l->lexema);
        printf("\n");
        ImprimirLista(l->prox);
    }
    return;
}
