#include <stdio.h>
#include <stdlib.h>
#define n 100

void vetorPar(){
    int vetor[n], i;

    for(i = 0; i < n; i++){
        printf("\nDigite um numero: ");
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < n; i++){
        if(vetor[i] %2 == 0){
            printf("\nvetor[%d] = %d", i+1, vetor[i]);
        }
    }
  
}

int main(){
    vetorPar();
}