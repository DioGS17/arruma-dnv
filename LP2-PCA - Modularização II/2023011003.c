#include <stdio.h>

int intPositvo(int x, int y){
    int resto1, resto2, aux = 1;

    while(y != 0){
        resto1 = x % 10;
        x = x / 10;
        resto2 = y % 10;
        y = y / 10;
        if(resto1 != resto2){
            aux = 0;
            break;
        }   
    }
    return aux;
}

int main(){
    int x = -1, y = -1, funcao;

    while(x < 0 && y < 0){
        printf("\nDigite dois numeros inteiros positivos: ");
        scanf("%d %d", &x, &y);
    }

    funcao = intPositvo(x, y);

    if(funcao == 1){
        printf("\nCorresponde");
    }else{
        printf("\nNao corresponde");
    }
    
}