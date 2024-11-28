#include <stdio.h>

int main(){
    int m1[3][5], m2[3][5], num, i, j;

    printf("\nDigite os numero da matriz 1:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            printf("\n%do numero da linha %d: ", j+1, i+1);
            scanf("%d", &num);

            m1[i][j] = num;
        }
    }

    printf("\nDigite os numero da matriz 2:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            printf("\n%do numero da linha %d: ", j+1, i+1);
            scanf("%d", &num);

            m2[i][j] = num;
        } 
    }
    printf("\nSoma da matriz 1 e matriz 2 eh:\n");
    for(i = 0; i < 3; i++){
        printf("|");
        for(j = 0; j < 5; j++){
            printf("\t%d ", m1[i][j] + m2[i][j]);
        }
        printf("|");
        printf("\n");
    }
}