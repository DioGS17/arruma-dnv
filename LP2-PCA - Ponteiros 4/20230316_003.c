#include <stdio.h>
#include <stdlib.h>

void main(){
    int i, j, linha, coluna;
    double **m1, **m2, **m3;

    printf("\nDigite a quantidade linhas das matrizes: ");
    scanf("%d", &linha);
    printf("\nDigite a quantidade de colunas das matrizes: ");
    scanf("%d", &coluna);

    printf("\nDigite os elementos da matriz 1:");
    m1 = (double**) malloc(linha*sizeof(double));
    for (i = 0; i < linha; i++){
        *(m1+i) = (double*) malloc(linha*sizeof(double));
        for (j = 0; j < coluna; j++){
            printf("\nLinha %d, Coluna %d: ", i+1, j+1);
            scanf("%lf", &m1[i][j]);
        }
        
    }

    printf("\nDigite os elementos da matriz 2:");
    m2 = (double**) malloc(linha*sizeof(double));
    for (i = 0; i < linha; i++){
        *(m2+i) = (double*) malloc(linha*sizeof(double));
        for (j = 0; j < coluna; j++){
            printf("\nLinha %d, Coluna %d: ", i+1, j+1);
            scanf("%lf", &m2[i][j]);
        }
        
    }
    m3 = (double**) malloc(linha*sizeof(double));
    for (i = 0; i < linha; i++){
        *(m3+i) = (double*) malloc(linha*sizeof(double));
        for (j = 0; j < coluna; j++){
            *(*(m3+i)+j) = *(*(m1+i)+j) + *(*(m2+i)+j);
        }
        
    }

    printf("\nSoma das matrizes:\n");
    
    for (i = 0; i < linha; i++){
        printf("|\t");
        for (j = 0; j < coluna; j++){
            printf("%.2lf\t", *(*(m3+i)+j));
        }
        printf("|\n");
        
    }
    
    free(m1);
    free(m2);
    free(m3);
    
}