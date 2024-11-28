#include <stdio.h>
#include <stdlib.h>
#define max 101

void interseccao(int v1[max], int v2[max], int v3[max]){
    int i, j, k = 0;

    for (i = 1; i <= v1[0]; i++){
        for (j = 1; j <= v2[0]; j++){
            if(v1[i] == v2[j]){
                k++;
                v3[k] = v1[i];
            }
            
        }
        
    }
    v3[0] = k;

    printf("\nA interseccao entre o vetor 1 e o vetor 2 eh:\n");
    printf("\nVetor 3 =");
    for (i = 1; i <= v3[0]; i++){
        printf(" %d", v3[i]);
    }
    
}

void main(){
    int v1[max], v2[max], v3[max], i;

    printf("\nQual o tamanho do vetor 1: ");
    scanf("%d", &v1[0]);

    printf("\nQual o tamanho do vetor 2: ");
    scanf("%d", &v2[0]);

    printf("\nDigite os elementos do vetor 1:");
    for (i = 1; i <= v1[0]; i++){
        printf("\nElemento %d: ", i);
        scanf("%d", &v1[i]);
    }
    
    printf("\nDigite os elementos do vetor 2:");
    for (i = 1; i <= v2[0]; i++){
        printf("\nElemento %d: ", i);
        scanf("%d", &v2[i]);
    }

    interseccao(v1, v2, v3);
}