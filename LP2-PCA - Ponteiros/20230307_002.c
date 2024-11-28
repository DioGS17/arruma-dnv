#include <stdio.h>

int *findValue(int *endeI, int *endeF, int valor){
    int *pvet, *value, aux = 0;

    for (pvet = endeI; pvet <= endeF; pvet++){
        if(*pvet == valor){
            value = pvet;
            aux = 1;
            printf("\nEndereco do elemento no vetor: %d", pvet);
        }
        
    }
    if(aux == 1){
       return value;
    }else{
        return NULL;
    }
}

void main(){
    int vetor1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, valor;
    int vetor2[] = {2, 5, 9, 20, 2, 4, 2, 11, 43, 54}, valor2 = 2;
    int *teste;

    printf("\n'''Testando funcao'''\n");
    printf("\nDigite um numero: ");
    scanf("%d", &valor);

    teste = findValue(&vetor1[0], &vetor1[9], valor);

    if(teste == NULL){
        printf("\nElemento nao encontrado.");

    }else{
        printf("\nElemento encontrado.");

    }
    
    printf("\n------------------------\n");

    findValue(&vetor2[0], &vetor2[9], valor2);
}