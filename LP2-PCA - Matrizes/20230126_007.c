#include <stdio.h>
#include <stdlib.h>
#define n 100

void main(){
    int i, j, m[n][n], origem, destino, custo = 0, cidade, nCidades;

    printf("\nDigite o numero de cidades: ");
    scanf("%d", &cidade);
    
    printf("\nDigite o custo de cada itinerario:\n");
    for(i = 0; i < cidade; i++){
        for(j = i; j < cidade; j++){
            if(i == j){
                m[i][j] = 0;
            }else{
            printf("\nItinerario: cidade %d - cidade %d: ", i+1, j+1);
            scanf("%d", &m[i][j]);
            m[j][i] = m[i][j];
            }
        }
    }
    
    printf("\nDigite o numero de cidades a serem percorridas: ");
    scanf("%d", &nCidades);

    printf("\nDigite a ordem dos itinerarios a serem percorridos");
    for(i = 1; i < nCidades; i++){
        if(i == 1){
            printf("\nCidade origem: ");
            scanf("%d", &origem);
        }
        printf("\nCidade destino(%d): ", i);
        scanf("%d", &destino);

        custo += m[origem-1][destino-1];

        origem = destino;
    }
    
    printf("\nO custo do itinerario eh: %d", custo);

}