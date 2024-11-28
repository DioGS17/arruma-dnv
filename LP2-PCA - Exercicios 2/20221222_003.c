#include <stdio.h>

int main(){
    int num = 0, pares = 0, impares = 0;

    while(num < 1001){
        printf("\nDigite um numero inteiro positivo: ");
        scanf("%d", &num);
        if(num % 2 == 0){
            pares += num;
        }else if(num % 2 !=0){
            impares += num;
        }
    }
    printf("\nA soma de todos pares eh %d", pares);
    printf("\nA soma de todos impares eh %d", impares);
}