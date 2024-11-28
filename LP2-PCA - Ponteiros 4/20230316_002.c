#include <stdio.h>
#include <stdlib.h>

void main(){
    int **matriz, linha, coluna;
    int i, j;

    printf("\nDigite o numero de linhas da matriz: ");
    scanf("%d", &linha);
    printf("\nDigite o numero da coluna da matriz: ");
    scanf("%d", &coluna);

    printf("\nDigite os elementos da matriz:");
    matriz = (int**) malloc(linha*sizeof(int));

    for (i = 0; i < linha; i++){
        *(matriz+i) = (int*) malloc(coluna*sizeof(int));

        for (j = 0; j < coluna; j++){
            printf("\nLinha %d, Coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
        
    }
    printf("\nMatriz digitada(Usando indexes):\n");

    for (i = 0; i < linha; i++){
        printf("|\t");

        for (j = 0; j < coluna; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("|\n");
    }

    printf("\nMatriz digitada(Usando aritmetica de ponteiros):\n");

    for (i = 0; i < linha; i++){
        printf("|\t");

        for (j = 0; j < coluna; j++){
            printf("%d\t", *(*(matriz+i)+j));
        }
        printf("|\n");
    }

    free(matriz);
    
}