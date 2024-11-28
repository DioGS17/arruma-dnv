#include <stdio.h>

int main(){
    float num, maior, menor;
    int i;

    for (i = 1; i <= 15; i++){
        printf("\nDigite um numero inteiro: ");
        scanf("%f", &num);

        if(i==1){
            maior = num;
            menor = num;
        }else{
            if(num > maior){
                maior = num;
            }else if(num < menor){
                menor = num;
            }   
        }   
    }
    printf("\nO maior numero digitado eh %f\n", maior);
    printf("\nO menor numero digitado eh %f\n", menor);
}