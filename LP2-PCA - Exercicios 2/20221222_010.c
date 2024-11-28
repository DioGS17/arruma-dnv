#include <stdio.h>

int main(){
    int num, i, cont, impar;
    
    printf("\nDigite um numero: ");
    scanf("%d", &num);

    cont = (num*num)-num;
    printf("\nOs impares consecutivos cujo a soma eh igual a %d^3 sao:", num);
    for(i = 1; i <= num*2; i++){
        cont++;
        if(cont % 2 != 0){
            impar = cont;
            printf("\n%d", impar);
        }   
    }           
}    