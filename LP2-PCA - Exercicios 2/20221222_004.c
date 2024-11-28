#include <stdio.h>

int main(){
    int num, cont = 0, i;
    printf("\nDigite um numero: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        if(num % i == 0){
            cont++;
        }
    }
    
    if(cont == 2){
       printf("\nO numero %d eh primo", num); 
    }else{
        printf("\nO numero %d nao eh primo", num);
    }
}