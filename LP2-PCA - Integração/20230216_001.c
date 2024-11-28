#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 51

void time(char goleiro[4][max], char atacante[6][max], char zagueiro[8][max], char meioCampo[9][max], int nota_goleiro[3], int nota_atacante[5], int nota_zagueiro[7], int nota_meioCampo[8]){
    int i;

    printf("\nDigite o nomes dos jogadores e deh a eles uma avaliacao:");
    for(i = 0; i < 3; i++){
        printf("\nGoleiro[%d]: ", i+1);
        scanf(" %[^\n]s", &goleiro[i]);
        printf("\nAvaliacao: ");
        scanf("%d", &nota_goleiro[i]);
        printf("\n");
    }

    for(i = 0; i < 7; i++){
        printf("\nZagueiro[%d]: ", i+1);
        scanf(" %[^\n]s", &zagueiro[i]);
        printf("\nAvaliacao: ");
        scanf("%d", &nota_zagueiro[i]);
        printf("\n");
    }

    for(i = 0; i < 8; i++){
        printf("\nMeio-campo[%d]: ", i+1);
        scanf(" %[^\n]s", &meioCampo[i]);
        printf("\nAvaliacao: ");
        scanf("%d", &nota_meioCampo[i]);
        printf("\n");
    }

    for(i = 0; i < 5; i++){
        printf("\nAtacante[%d]: ", i+1);
        scanf(" %[^\n]s", &atacante[i]);
        printf("\nAvaliacao: ");
        scanf("%d", &nota_atacante[i]);
    }
    
}

void ordenarPorMaiorNota(char goleiro[4][max], char atacante[6][max], char zagueiro[8][max], char meioCampo[9][max], int nota_goleiro[3], int nota_atacante[5], int nota_zagueiro[7], int nota_meioCampo[8]){
    int i, j, auxN;
    char auxC[max];

    for (i = 0; i < 3; i++){
        for (j = i; j < 3; j++){
            if(nota_goleiro[i] < nota_goleiro[j]){
                auxN = nota_goleiro[i];
                strcpy(auxC, goleiro[i]);

                nota_goleiro[i] = nota_goleiro[j];
                strcpy(goleiro[i], goleiro[j]);

                nota_goleiro[j] = auxN;
                strcpy(goleiro[j], auxC);
            }   
        }
    }

    for (i = 0; i < 7; i++){
        for (j = i; j < 7; j++){
            if(nota_zagueiro[i] < nota_zagueiro[j]){
                auxN = nota_zagueiro[i];
                strcpy(auxC, zagueiro[i]);

                nota_zagueiro[i] = nota_zagueiro[j];
                strcpy(zagueiro[i], zagueiro[j]);

                nota_zagueiro[j] = auxN;
                strcpy(zagueiro[j], auxC);
            }   
        } 
    }

    for (i = 0; i < 8; i++){
        for (j = i; j < 8; j++){
            if(nota_meioCampo[i] < nota_meioCampo[j]){
                auxN = nota_meioCampo[i];
                strcpy(auxC, meioCampo[i]);

                nota_meioCampo[i] = nota_meioCampo[j];
                strcpy(meioCampo[i], meioCampo[j]);

                nota_meioCampo[j] = auxN;
                strcpy(meioCampo[j], auxC);
            }   
        } 
    }

    for (i = 0; i < 5; i++){
        for (j = i; j < 5; j++){
            if(nota_atacante[i] < nota_atacante[j]){
                auxN = nota_atacante[i];
                strcpy(auxC, atacante[i]);

                nota_atacante[i] = nota_atacante[j];
                strcpy(atacante[i], atacante[j]);

                nota_atacante[j] = auxN;
                strcpy(atacante[j], auxC);
            }   
        } 
    }
    
}

void main(){
    char goleiro[4][max], atacante[6][max], zagueiro[8][max], meioCampo[9][max];
    int nota_goleiro[3], nota_atacante[5], nota_zagueiro[7], nota_meioCampo[8], i;

    time(goleiro, atacante, zagueiro, meioCampo, nota_goleiro, nota_atacante, nota_zagueiro, nota_meioCampo);
    ordenarPorMaiorNota(goleiro, atacante, zagueiro, meioCampo, nota_goleiro, nota_atacante, nota_zagueiro, nota_meioCampo);

    printf("\nFormacao do time:\n");
    printf("\n%s", goleiro[0]);

    printf("\n");
    for(i = 0; i < 4; i++){
        printf("\n%s", zagueiro[i]);
    }
    printf("\n");
    for(i = 0; i < 4; i++){
        printf("\n%s", meioCampo[i]);
    }
    printf("\n");
    for(i = 0; i < 2; i++){
        printf("\n%s", atacante[i]);
    }
    
}