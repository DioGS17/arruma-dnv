#include <stdio.h>

int ordemCrescente(int um, int dois, int tres){
    int *menor, *meio, *maior;
    
    if (um == dois && um == tres){
        printf("\n");
        printf("\nOs numeros sao iguais");
        return 1;
    }else{
        if (um < dois && um < tres){
            menor = &um;
            if (dois <= tres){
                meio = &dois;
                maior = &tres;
            }else if (tres < dois){
                meio = &tres;
                maior = &dois;
            }
            
        }else if (dois < um && dois < tres){
            menor = &dois;
            if (um <= tres){
                meio = &um;
                maior = &tres;
            }else if (tres < um){
                meio = &tres;
                maior = &um;
            }

        }else if (tres < um && tres < dois){
            menor = &tres;
            if (um <= dois){
                meio = &um;
                maior = &dois;
            }else if (dois < um){
                meio = &dois;
                maior = &um;
            }

        }

        printf("\nNumeros na ordem crescente: %d %d %d", *menor, *meio, *maior);

        return 0;
    }
    
}

void main(){
    int num1, num2, num3;

    printf("\nDigite tres numeros inteiros:");
    printf("\nN1 = ");
    scanf("%d", &num1);
    printf("\nN2 = ");
    scanf("%d", &num2);
    printf("\nN3 = ");
    scanf("%d", &num3);

    ordemCrescente(num1, num2, num3);
}