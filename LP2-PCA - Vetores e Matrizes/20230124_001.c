#include <stdio.h>
#include <stdlib.h>
#define n 100

int main(){
    int vetor[n], i;

    for (i = 0; i < n; i++){
        printf("\nDigite um numero: ");
        scanf("%d", &vetor[i]);
    }

    for(i = n-1; i >= 0; i--){
        printf("\nvetor[%d] = %d", i+1, vetor[i]);
    }
    
    
}