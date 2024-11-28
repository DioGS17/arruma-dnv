#include <stdio.h>
#include <stdlib.h>
#define n 100

int matrizXmatriz(int m1[n][n], int m2[n][n], int m3[n][n], int linhaM1, int colunaM1, int linhaM2, int colunaM2){
    int i, j, k;

    if(colunaM1 != linhaM2){
        return 0;
    }else{
        for(i = 0; i < linhaM1; i++){
            for(j = 0; j < colunaM2; j++){
                m3[i][j] = 0;
            }
        }
        
        
        for(i = 0; i < linhaM1; i++){
            for(j = 0; j < colunaM2; j++){
                for(k = 0; k < colunaM1; k++){
                    m3[i][j] += m1[i][k]*m2[k][j];  
                }
                
            }
            
        }

        return 1;   
    }
    
    
    
}

int main(){
    int i, j, m1[n][n], m2[n][n], m3[n][n], linhaM1, colunaM1, linhaM2, colunaM2, aux;

    printf("\nDigite o numero de linhas e colunas da matriz 1: ");
    scanf("%d %d", &linhaM1, &colunaM1);

    printf("\nDigite o numero de linhas e colunas da matriz 2: ");
    scanf("%d %d", &linhaM2, &colunaM2);

    printf("\nDigite os numeros da matriz 1:");
    for (i = 0; i < linhaM1; i++){
        for(j = 0; j < colunaM1; j++){
            printf("\n%do numero da linha %d: ", j+1, i+1);
            scanf("%d", &m1[i][j]);
        }
    }

    printf("\nDigite os numeros da matriz 2:");
    for (i = 0; i < linhaM2; i++){
        for(j = 0; j < colunaM2; j++){
            printf("\n%do numero da linha %d: ", j+1, i+1);
            scanf("%d", &m2[i][j]);
        }
    }

    aux = matrizXmatriz(m1, m2, m3, linhaM1, colunaM1, linhaM2, colunaM2);

    if(aux == 0){
        printf("\nNao eh possivel multiplicar as matrizes");
    }else if(aux == 1){
        printf("\nResultado:\n");
        printf("\n");
        for(i = 0; i < linhaM1; i++){
            printf("|\t");
            for(j = 0; j < colunaM2; j++){
                printf("%d\t", m3[i][j]);
            }
        printf("|");
        printf("\n");
        }
    }
}