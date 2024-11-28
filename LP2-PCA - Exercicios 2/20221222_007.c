#include <stdio.h>

int main(){
    float massa, massa_inicial, massa_final;
    int h = 0, min = 0, seg = 0;

    printf("\nDigite a massa inicial: ");
    scanf("%f", &massa_inicial);

    massa = massa_inicial;

    while(massa > 0.5){
        massa_final = massa/2;
        massa = massa_final;
        seg += 50;   
    }
    if(seg > 60){
        min = seg / 60;
        seg = seg % 60;
        if(min > 60){
            h = min / 60;
            min = min % 60;
        }
        
    }      
    printf("\nA massa inicial era %f", massa_inicial);
    printf("\nA massa final eh %f", massa_final);
    printf("\nO tempo calculado foi de %d hora(s), %d minutos(s) e %d segundos", h, min, seg);
}