#include <stdio.h>
#include <stdlib.h>
#define n 3

void produtoEscalar(){
    int x[n], y[n], i, prod_esc = 0;

    printf("\nDigite os numeros do vetor x");
    for (i = 0; i < n; i++){
        printf("\n%do numero: ", i+1);
        scanf("%d", &x[i]);
    }
    printf("\nDigite os numeros do vetor y");
    for (i = 0; i < n; i++){
        printf("\n%do numero: ", i+1);
        scanf("%d", &y[i]);
    }
    for (i = 0; i < n; i++){
        prod_esc += x[i]*y[i];
    }

    printf("\nO produto escalar dos vetores x e y eh %d", prod_esc);   
}

int main(){
    produtoEscalar();
}