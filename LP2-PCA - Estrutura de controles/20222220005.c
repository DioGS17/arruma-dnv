#include <stdio.h>

int main(){
    int i = 0, num, maior, menor;
    while(i < 5){
        printf("\ncont = %d", i);
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &num);
        if(i == 0){
            if(num < 0){
                printf("\nNAO SAO ACEITOS NUMEROS NEGATIVOS\n");
            
            }
            else{
                maior = num;
                menor = num;
                i += 1;
            }
        }else{
            if (num < 0){
                printf("\nNAO SAO ACEITOS NUMEROS NEGATIVOS\n");

            }else{ 
                if(num > maior){
                    maior = num;
                    i += 1;
                }
                else if (num < menor){
                    menor = num;
                    i +=1;
                }
                else{
                    i += 1;
                }
            }
        }
    }
    printf("\nMaior = %d", maior);
    printf("\nMenor = %d", menor);
    return 0;
}