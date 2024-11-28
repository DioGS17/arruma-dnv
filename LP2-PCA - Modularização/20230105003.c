#include <stdio.h>

int num = 0;

void par(){
    printf("\nDigite um numero inteiro positivo par e diferente de zero: ");
    while(num % 2 != 0 || num <= 0){
        scanf("%d", &num);
        if(num % 2 != 0 || num <= 0){
            printf("\nPor favor, digite um numero inteiro positivo par e diferente de zero: ");
        }
        
    }
    
}

void perfeito(){
    int i, perfeito = 0;
    
    for(i = 1; i < num; i++){
        if(num % i == 0){
            perfeito += i;
        }
        
    }
    if(perfeito == num){
     printf("\nO numero digitado eh perfeito");   
    }else{
       printf("\nO numero digitado nao eh perfeito");  
    }
}

int main(){

    par();
    perfeito();
}