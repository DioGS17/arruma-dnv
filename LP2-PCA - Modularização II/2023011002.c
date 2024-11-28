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
    int n1 = -1, n2 = -1, d, dig1, dig2;

    while(n1 < 0 && n2 < 0){
        printf("\nDigite dois numeros inteiros positivos: ");
        scanf("%d %d", &n1, &n2);
    }
    for(d = 0; d <= 9; d++){
        dig1 = digitos(n1, d);
        dig2 = digitos(n2, d);

        if(dig1 != dig2){
            printf("\n%d nao eh permutacao de %d", n2, n1);
            break;
        }else if(d == 9){
        printf("\n%d eh permutacao de %d", n2, n1);
        }
    }    
}