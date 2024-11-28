#include <stdio.h>

int main()
{
    int soma = 0, cont;
    for(cont = 100; cont < 200; cont++){
        if(cont % 2 != 0){
            soma += cont;
        }
    }
    printf("\nSoma = %d", soma);
    return 0;
}