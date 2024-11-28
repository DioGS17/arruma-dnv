#include <stdio.h>
#include <math.h>

int main(){
    int y, cont = 0;
    float e = 0.1, x, xi, raiz1, raiz2;

    printf("\nDigite um numero interio positivo: ");
    scanf("%d", &y);

    x = y/2;
    
    while(fabs(xi - x) > e){
        if(cont != 0){
            x = xi;
        }
        
        xi = x - ((x*x-y)/(2*x));
        cont++;
    }

    raiz1 = sqrt(y);
    raiz2 = xi;

    printf("\n%f\n", raiz1);
    printf("\n%f\n", raiz2);
}