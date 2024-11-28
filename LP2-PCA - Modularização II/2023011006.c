#include <stdio.h>
#include <math.h>

void decimal(int n){
    int pot = 0, aux = 1;

    while(pot < n){
        aux++;
        pot = pow(2,aux);
    }
    aux--;
    pot = pow(2,aux);
    
    printf("\n%d em binario eh ", n);
    while(aux > -1){
        if(pot <= n){
            n = n - pot;
            printf("1");
        }else if(pot > n){
            printf("0");
        }
        aux--;
        pot = pow(2,aux);
    }    
}

int main(){
    int n, bin;
    printf("\nDigite um numero: ");
    scanf("%d", &n);

    decimal(n);
}