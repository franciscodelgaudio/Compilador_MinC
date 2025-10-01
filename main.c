#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "arvore.h"

extern FILE *yyin;
extern Lista *palavrasReservadas;
extern Lista *simbolos;
extern Pilha *p;

extern int yyparse(void);
extern int linha, coluna;

int main (){
    char arquivo[100];
    char saida[200];
    int c;

    printf("Digite o nome do arquivo: ");
    scanf("%s", arquivo);

    yyin = fopen(arquivo, "r");
    if (yyin == NULL){
        printf("Nome de arquivo invalido!");
        exit(1);
    }

    yyparse();

    snprintf(saida, sizeof(saida), "arquivo_%s", arquivo);
    imprimirPorNivel(saida, p->token);
    
    printf("0 - Sair\n");
    printf("1 - Imprimir lista de palavras reservadas\n");
    printf("2 - Imprimir lista de simbolos\n");
    printf("3 - Abrir arquivo diferente\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &c);
    printf("\n\n");
    while(c != 0){
        switch(c)
        {
            case 1:
            ImprimirLista(palavrasReservadas);
            printf("\n");
            break;

            case 2:
            ImprimirLista(simbolos);
            printf("\n");
            break;

            case 3:
            fclose(yyin);
            printf("Digite o nome do arquivo: ");
            scanf("%s", arquivo);
            yyin = fopen(arquivo, "r");
            if (yyin == NULL){
                printf("Nome de arquivo invalido!");
                c = 4;
            } else {
                palavrasReservadas = NULL;
                simbolos = NULL;
                p = NULL;
                imprimirPorNivel("arquivo.txt", p->token);
                yyparse();
            }
            break;

            default:
            printf("Opcao invalida\n");
        }
        printf("\n0 - Sair\n");
        printf("1 - Imprimir lista de palavras reservadas\n");
        printf("2 - Imprimir lista de simbolos\n");
        printf("3 - Abrir arquivo diferente\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &c);
        printf("\n");
    }

    fclose(yyin);
    return 0;
}