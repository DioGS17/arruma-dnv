#include <stdio.h>
#include <math.h>

int x = 0, y = 0;

void scanIntIntervalo(){
    while(x <= 0 || x >= 1000 && y <= 0 || y >= 1000){
        printf("\nDigite 2 numeros inteiros do intervalo entre 0 a 1000: ");
        scanf("%d %d", &x, &y);
        if(x <= 0 || x >= 1000 || y <= 0 || y >= 1000 ){
            printf("\nColoque numeros que estao dentro do intervalo");
        }
        
    }
}

float percentual(){
    float maior, menor;
    float porcento;
    if(x > y){
        maior = x;
        menor = y;
    }else if(x < y){
        maior = y;
        menor = x;
    }

    porcento = 100*(menor/maior);
    return porcento;
}

int absdif(int maior, int menor){
    int modulo;
    
    modulo = fabs(maior - menor);

    return modulo;
}

int main(){
    float porcento;
    int modulo; 

    scanIntIntervalo();

    porcento = percentual();

    modulo = absdif(x, y);

    printf("\n%.2f%%", porcento);
    printf("\n%d", modulo);
}