#include <stdio.h>

int fatorial(int num){
    int f = 1, i;

    for (i = 1; i <= num; i++){
        f = f*i; 
    }
    return f;
}

int main(){
    int num, f;

    printf("\nDigite um numero inteiro positivo: ");
    scanf("%d", &num);

    f = fatorial(num);

    printf("\n%d! = %d", num, f);
}