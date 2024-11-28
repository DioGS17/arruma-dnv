#include <stdio.h>

void main(){
    int i, j, m[5][5], sL1 = 0, sL2 = 0, sL3 = 0, sL4 = 0, sL5 = 0, sC1 = 0, sC2 = 0, sC3 = 0, sC4 = 0, sC5 = 0;
    int sDP = 0, sDS = 0;

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

    printf("\nSoma da diagonal principal da matriz: ");
    for(i = 0; i < 5; i++){
        sDP += m[i][i];
    }
    printf("%d", sDP);

    printf("\n");

    printf("\nSoma da diagonal secundaria da matriz: ");
    for(i = 0; i < 5; i++){
        sDS += m[i][4-i];
    }
    printf("%d", sDP);

    printf("\n");
    
    for(i = 0; i < 5; i++){
        sL1 += m[0][i];
        sL2 += m[1][i];
        sL3 += m[2][i];
        sL4 += m[3][i];
        sL5 += m[4][i];
        
    }
    if(sL1 == sL2 && sL2 == sL3 && sL3 == sL4 && sL4 == sL5){
       printf("\nA soma de cada linha eh %d", sL1);
    }else{
        printf("\nA soma de cada linha eh diferente");
    }

    printf("\n");

    for(i = 0; i < 5; i++){
        sC1 += m[i][0];
        sC2 += m[i][1];
        sC3 += m[i][2];
        sC4 += m[i][3];
        sC5 += m[i][4];
        
    }
    if(sC1 == sC2 && sC2 == sC3 && sC3 == sC4 && sC4 == sC5){
       printf("\nA soma de cada coluna eh %d", sC1);
    }else{
        printf("\nA soma de cada coluna eh diferente");
    }

    printf("\n");

    if(sDP == sDS && sDS == sL1 && sL1 == sC1){
        printf("\nA matriz eh um quadrado magico");
    }else{
        printf("\nA matriz nao eh um quadrado magico");
    }
    
    
    
    
}   
