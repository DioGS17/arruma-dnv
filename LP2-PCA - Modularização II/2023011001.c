#include <stdio.h>

int digitos(int n, int d){
    int cont = 0, resto;

    while(n != 0){
        resto = n % 10;
        n = n / 10;
        if(resto == d){
            cont++;
        }
        
    }
    return cont;
}

int main(){
    int n, d = -1, dig;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &n);

    while(d < 0 || d > 9){
        printf("\nDigite um algarismo(0 a 9): ");
        scanf("%d", &d);
    }

    dig = digitos(n, d);

    printf("\nNo numero %d, o digito %d aparece %d vez(es)", n, d, dig);
}