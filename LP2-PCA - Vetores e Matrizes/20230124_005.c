#include <stdio.h>
#include <stdlib.h>
#define n 3

void vetorFatorial(){
    int vetor[n], i, j,f = 1, num = -1;

    for (i = 0; i < n; i++){
        while(num < 0){
            printf("\nDigite um numero inteiro postivo(%d): ", i+1);
            scanf("%d", &num);
        }
        if(num == 0){
            vetor[i] = 1;
        }else{
            for(j = 1; j <= num; j++){
                f = f*j;
            }
            vetor[i] = f;
        }
        f = 1;
        num = -1;
    }
    for(i = 0; i < n; i++){
        printf("\nVetor[%d] = %d", i+1, vetor[i]);
    }
    
}

int main(){
    vetorFatorial();
}