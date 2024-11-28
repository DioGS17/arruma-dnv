#include <stdio.h>
#include <stdlib.h>
#define n 3

void ordenarVetor(){
    int vetor[n], i, j, aux;

    printf("\nDigite os numeros do vetor");
    for(i = 0; i < n; i++){
        printf("\n%do numero: ", i+1);
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < n; i++){
        for(j = i; j < n; j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }   
        }   
    }
    printf("\nVetor: ");
    for(i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
}

int main(){
    ordenarVetor();
}