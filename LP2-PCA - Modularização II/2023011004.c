#include <stdio.h>

int intPositvo(int x, int y){
    int resto1, resto2, aux = 0, aux2;

    aux2 = x;
    while(y != 0){
        resto1 = y % 10;
        y = y / 10;
        
        if(x % 10 == resto1){
            resto2 = x % 10;
            x = x / 10;
            while(resto1 == resto2 || y != 0){
                resto1 = y % 10;
                y = y / 10;
                resto2 = x % 10;
                x = x / 10;
                if(resto1 != resto2){
                    x = aux2;
                }
                if(x == 0){
                    aux = 1;
                    break;
                }
                
            }
            if(resto1 != resto2){
                break;
            }
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
        printf("\n%d eh um segmento de %d", x, y);
    }else{
        printf("\n%d nao eh um segmento de %d", x, y);
    }
  
}