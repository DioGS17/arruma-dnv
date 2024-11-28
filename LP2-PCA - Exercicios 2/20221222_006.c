#include <stdio.h>

int main(){
    int num, i, soma = 0;

    printf("\nDigite um numero: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++){
        if(num % i == 0){
            soma += i;   
        }
    }
    if(soma == num){
        printf("\n%d eh um numero perfeito", num);
    }else{
        printf("\n%d nao eh um numero perfeito", num);
    }   
}