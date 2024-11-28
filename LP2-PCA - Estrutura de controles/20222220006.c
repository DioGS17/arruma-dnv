#include <stdio.h>

int main(){
    int num1, num2, resultado1, resultado2;
    for (num2 = 1; num2 <= 9; num2++){
        printf("\nCasa do %d\n", num2);
        for(num1 = 1; num1 <= 10; num1++){
            if (num1 == 1){
                printf("\nAdicao\t");
                printf("\tSubtracao");
                printf("\tMultiplicacao");
                printf("\tDivisao");
            }
            
            resultado1 = num1 + num2;
            printf("\n%d + %d = %d", num1, num2, resultado1);
            
            resultado2 = resultado1 - num2;
            printf("\t%d - %d = %d", resultado1, num2, resultado2);

            resultado1 = num1 * num2;
            printf("\t%d x %d = %d", num1, num2, resultado1);

            resultado2 = resultado1 / num2;
            printf("\t%d : %d = %d", resultado1, num2, resultado2);
        }
        printf("\n");
    }
}    