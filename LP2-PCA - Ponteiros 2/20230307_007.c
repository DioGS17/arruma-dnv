#include <stdio.h>

void minXmax(int vetor[10], int *min, int *max){
    int *pvet;

    for (pvet = &vetor[0]; pvet <= &vetor[9]; pvet++){
        if (pvet == &vetor[0]){
            *min = *pvet;
            *max = *pvet;
        }else{
            if (*min > *pvet){
                *min = *pvet;

            }else if (*max < *pvet){
                *max = *pvet;

            }
            
        }
        
    }

}

void main(){
    int vetor[] = {30, 14, 47, 3290, -12, 0, 203, 10, -1293, 435};
    int min, max;

    minXmax(vetor, &min, &max);

    printf("\nValor minimo do vetor = %d \nValor maximo do vetor = %d", min, max);
}