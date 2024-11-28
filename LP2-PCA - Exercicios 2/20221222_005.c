#include <stdio.h>

int main(){
    int i;
    float soma = 0, x = 1, y = 1;

    for (i = 1; i <= 50; i++){
        soma += x/y;
        x += 2;
        y += 1;
    }
    printf("\nSoma = %f", soma);
}