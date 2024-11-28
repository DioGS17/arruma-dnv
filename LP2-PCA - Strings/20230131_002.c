#include <stdio.h>
#include <stdlib.h>
#define max 10

int main(){
    char carro[5][max];
    int i, j, maior, eco;
    float custo, fuel[5];

    printf("\nDigite 5 modelos de carro:");
    for(i = 0; i < 5; i++){
        printf("\nModelo %d: ", i+1);
        scanf("%s", &carro[i]);
    }

    printf("\nDigite quantos quilometros cada modelo de carro consegue percorrer com 1 litro de gasolina");
    for (i = 0; i < 5; i++){
        printf("\n%s: ", carro[i]);
        scanf("%f", &fuel[i]);

        if(i == 0){
            maior = fuel[i];
            eco = i;
        }else if(fuel[i] > maior){
            maior = fuel[i];
            eco = i;
        }
    }
    printf("\nCarro mais economico eh o %s", carro[eco]);

    printf("\n");

    printf("\nCada carro ao percorrer 1000 km gasta:");
    for(i = 0; i < 5; i++){
        custo = 1000/fuel[i];
        printf("\n%s: %.3fL", carro[i], custo);
    }
    
}