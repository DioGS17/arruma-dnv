#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 100

void buscar(char equipe[5][4][max]){
    char nome[max];
    int i, j;

    printf("\nDigite o nome e sobrenome de um integrante de uma das equipes: ");
    gets(nome);

    for(i = 0; i < 5; i++){
        for(j = 0; j < 4; j++){
            if(strcmp(equipe[i][j], nome) == 0){
                printf("\nEquipe %d", i+1);
            }
            
        }
        
    }
    
}

void main(){
    char equipe[5][4][max];
    int i, j;

    printf("\nDigite os nomes dos integrantes de cada equipe (nome e sobrenome):\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 4; j++){    
            printf("\nIntegrante %d da equipe %d: ", j+1, i+1);
            gets(equipe[i][j]);
        }
    }

    buscar(equipe);
}
