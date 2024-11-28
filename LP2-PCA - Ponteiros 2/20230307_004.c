#include <stdio.h>

void main(){
    int vetor[] = {3, 4, 10, 5, 17, 15, 22, 45, 121, 2};
    int *pi, *pf, *pvet;

    pi = &vetor[0];
    pf = &vetor[9];

    printf("\nDobro de cada elemento do vetor:");
    for (pvet = pi; pvet <= pf; pvet++){
        printf(" %d", *pvet * 2);
    }

    printf("\n");
    printf("\nEndereco dos elementos pares do vetor:");
    for (pvet = pi; pvet <= pf; pvet++){
        if (*pvet % 2 == 0){
            printf("\nEndereco de [%d] = %d", *pvet, pvet);
        }
    }
}