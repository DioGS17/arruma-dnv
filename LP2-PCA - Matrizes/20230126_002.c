#include <stdio.h>
#include <stdlib.h>
#define n 100

void somaMatriz(int ordem){
    int i, j, m1[n][n], m2[n][n], msoma[n][n];

    printf("\nDigite os numeros da matriz 1:");
    for (i = 0; i < ordem; i++){
        for(j = 0; j < ordem; j++){
            printf("\n%do numero da linha %d: ", j+1, i+1);
            scanf("%d", &m1[i][j]);
        }
    }

    printf("\nDigite os numeros da matriz 2:");
    for (i = 0; i < ordem; i++){
        for(j = 0; j < ordem; j++){
            printf("\n%do numero da linha %d: ", j+1, i+1);
            scanf("%d", &m2[i][j]);
        }
    }

    for (i = 0; i < ordem; i++){
        for(j = 0; j < ordem; j++){
            msoma[i][j] = m1[i][j] + m2[i][j];
        }  
    }

    printf("\nA soma da matriz 1 com a matriz 2\n");
    for(i = 0; i < ordem; i++){
        for(j = 0; j < ordem; j++){
            printf("%d\t", msoma[i][j]);
        }
        printf("\n");   
    }
}

int main(){
    int ordem;
    
    printf("\nDefina a ordem das duas matrizes: ");
    scanf("%d", &ordem);

    somaMatriz(ordem);
    
}