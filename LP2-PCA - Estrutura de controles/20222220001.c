#include <stdio.h>

int main()
{
    int soma = 0, i, num;
    for(i = 0; i < 5; i++){
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &num);
        soma += num;
    }
    
    printf("\nSoma = %d", soma);
    return 0;
}