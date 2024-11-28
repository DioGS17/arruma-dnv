#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void findChar(char *string, char c, int *tam, int *vetor){
    int i;

    for (i = 0; i < 100; i++){
        if (string[i] == c){
            vetor[*tam] = i;
            *tam = *tam + 1;
    
        }

        if (string[i] == '\0'){
            break;
        }
        
    }
    
}

void main(){
    char string[50], caractere;
    int vetor[50], i, qtd = 0;

    printf("\nDigite uma palavra: ");
    for (i = 0; i < 50; i++)
    {
        scanf("%c", &string[i]);

        if (string[i] == '\n'){
            string[i] = '\0';
            break;
        }
        
    }
    
    printf("\nDigite um caractere: ");
    scanf(" %c", &caractere);

    findChar(string, caractere, &qtd, vetor);

    printf("\nQuantidade de vezes que o caractere aparece na string: %d", qtd);
    printf("\nPosicoes do caractere na string:");
    for (i = 0; i < qtd; i++){
        printf("\nPosicao: %d", vetor[i]);
    }
    
}