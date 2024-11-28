#include <stdio.h>
#include <stdlib.h>

int somarArray(int *array1, int *array2, int *array3, int tam1, int tam2){
    int i, j;

    if (tam1 != tam2){
        printf("\nNao eh possivel somar as arrays por terem o numero de elementos diferentes");

        return 0;

    }else{
        for (i = 0; i < tam1; i++){
            *(array3+i) = *(array2+i) + *(array1+i);
        }
        
        return 1;

    }
    
}

void main(){
    int *array1, *array2, *array3, i, j, tam1, tam2, aux;

    for (i = 0; i < 2; i++){
        if(i == 0){
            do{
                printf("\nQuantos numeros o array %d possui: ", i+1);
                scanf("%d", &tam1);

                if (tam1 < 1){
                    printf("\nPor favor, digite um numero maior do que 0");

                }
                
            } while (tam1 < 1 );
            array1 = (int*) malloc(tam1 * sizeof(int));

            for (j = 0; j < tam1; j++){            
                printf("%do elemento: ", j+1);
                scanf("%d", &array1[j]);
            }
            
        }else if (i == 1){
            do{
                printf("\nQuantos numeros o array %d possui: ", i+1);
                scanf("%d", &tam2);

                if (tam2 < 1){
                    printf("\nPor favor, digite um numero maior do que 0");

                }
                
            } while (tam2 < 1 );
            array2 = (int*) malloc(tam2 * sizeof(int));

            for (j = 0; j < tam2; j++){            
                printf("%do elemento: ", j+1);
                scanf("%d", &array2[j]);

            }

        }

    }

    array3 = (int*) malloc(tam1 * sizeof(int));

    aux = somarArray(array1, array2, array3, tam1, tam2);

    if (aux == 1){
        printf("\nSoma dos array1 e array2:");
        printf("\nArray3: ");
        for (i = 0; i < tam1; i++){
            printf("%d ", array3[i]);
        }
        
    }
    
    free(array1);
    free(array2);
    free(array3);
}