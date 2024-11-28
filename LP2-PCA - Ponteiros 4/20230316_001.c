#include <stdio.h>
#include <stdlib.h>

void menorEmaior(int *vetor, int *maior, int *menor, int qtdElem){
    int i;

    for (i = 0; i < qtdElem; i++){
        if (i == 0){
            *maior = *(vetor+i);
            *menor = *(vetor+i);

        }else{
            if (*(vetor+i) > *maior){
                *maior = *(vetor+i);

            }else if (*(vetor+i) < *menor){
                *menor = *(vetor+i);
            }
                
        }
        
    }
    
}

void main(){
    int *vetor, qtdElem, maior_valor, menor_valor, i;

    printf("\nDigite quantos elementos o vetor armazenara: ");
    scanf("%d", &qtdElem);

    vetor = (int*) malloc(qtdElem*sizeof(int));

    printf("\nDigite os elementos:");
    for (i = 0; i < qtdElem; i++){
        printf("\nElemento [%d]: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    menorEmaior(vetor, &maior_valor, &menor_valor, qtdElem);

    printf("\nMaior valor do vetor = %d", maior_valor);
    printf("\nMenor valor do vetor = %d", menor_valor);

    free(vetor);
}