#include <stdio.h>

int main(){
    int i, num, maior, menor;
    for(i = 1; i <= 20; i++){
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &num);
        if(i == 1){
            maior = num;
            menor = num;
        }
        else{
            if(num > maior){
                maior = num;
            }
            else if (num < menor)
            {
                menor = num;
            }
 
        }
    }
    printf("\nMaior = %d", maior);
    printf("\nMenor = %d", menor);
    return 0;
}