#include <stdio.h>

void troca(float *valor1, float *valor2){
    float aux;
    float *paux;

    paux = &aux;
    
    *paux = *valor1;
    *valor1 = *valor2;
    *valor2 = *paux;
    
}

void main(){
    float valor1 = 10.25, valor2 = 12.33;

    troca(&valor1, &valor2);

    printf("\nValor1 = %.2f; Valor2 = %.2f", valor1, valor2);
}