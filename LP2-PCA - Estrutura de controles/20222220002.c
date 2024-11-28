#include <stdio.h>

int main()
{
    int num, soma = 0, cont;
    for(cont = 0; cont < 50; cont++){
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &num);
        if(num % 2 != 0){
            soma += num;
        }
    }
    printf("\nSoma = %d", soma);
    return 0;
}