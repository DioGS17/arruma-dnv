#include <stdio.h>

int main(){
    int i, j, m[5][5], somaL4 = 0, somaC2 = 0;

    printf("\nDigite os numeros da matriz:");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("\n%do numero da linha %d: ", j+1, i+1);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\n");

    printf("\nMatriz:\n");
    for(i = 0; i < 5; i++){
        printf("|\t");
        for(j = 0; j < 5; j++){
            printf("%d\t", m[i][j]);
        }
        printf("|");
        printf("\n");
    }

    printf("\n");

    printf("\nDiagonal princpal da matriz: ");
    for(i = 0; i < 5; i++){
        printf("%d ", m[i][i]);   
    }

    printf("\n");

    printf("\nDiagonal secundaria da matriz: ");
    for(i = 0; i < 5; i++){
        printf("%d ", m[i][4-i]);
    }

    printf("\n");
    
    printf("\nSoma da linha 4: ");
    for(i = 0; i < 5; i++){
        somaL4 += m[3][i];
    }
    printf("%d", somaL4);

    printf("\n");
    
    printf("\nSoma da coluna 2: ");
    for(i = 0; i < 5; i++){
        somaC2 += m[i][1];
    }
    printf("%d", somaC2);

    printf("\n");
    
    printf("\nMatriz sem a diagonal principal:\n");
    for(i = 0; i < 5; i++){
        printf("|\t");
        for(j = 0; j < 5; j++){
            if(i != j){
                printf("%d\t", m[i][j]);
            }else{
                printf("\t");
            }
            
        }
        printf("|");
        printf("\n");
        
    }
}