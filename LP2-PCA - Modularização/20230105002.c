#include <stdio.h>

int peso, semanas, meses;

void pesoFeto(){
    printf("\nQual eh o peso (em gramas) do feto?: ");
    scanf("%d", &peso);
    printf("\nQuantas semanas o feto possui?: ");
    scanf("%d", &semanas);
    meses = semanas/4;
}

void parto(){
    printf("\nO feto esta com %d gramas e possui %d meses.\n", peso, meses);
    if(peso < 100 || semanas < 28){
        printf("\nParto nao devera ser realizado, reavaliar clinicamente.");
    }else if(peso > 2500 && meses > 7){
        printf("\nParto normal.");
    }else if(peso < 2500 && meses <= 7){
        printf("\nParto cesariana.");
    }else if(peso > 1500 || peso < 2000 && meses > 9){
        printf("\nParto normal");
    }else{
        printf("\nParto cesariana");
    }   
}

int main(){
    pesoFeto();
    parto();
}