#include <stdio.h>
#include <stdlib.h>
#define max 100

void deTrasPraFrente(char palavra[max], int tamanho){
    int i;

    printf("\nPalavra digitada de tras para frente: ");
    for(i = tamanho-1; i >= 0 ; i--){
        printf("%c", palavra[i]);
    }
    
}

void semVogais(char palavra[max], int tamanho){
    int i;
    char noVogals[max];

    printf("\nPalavra digitada sem as suas vogais: ");
    for(i = 0; i < tamanho; i++){
        noVogals[i] = palavra[i];
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
            noVogals[i] = 95;
        }else if(palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U'){
            palavra[i] = 95;
        }
        printf("%c", noVogals[i]);
    }
}

void maiusculo(char palavra[max], int tamanho){
    int i;
    char m[max];

    printf("\nPalavra digitada com suas letras em maiusculo: ");
    for(i = 0; i < tamanho; i++){
        m[i] = palavra[i];
        if(palavra[i] >= 'a' && palavra[i] <= 'z'){
            m[i] -= 32;
        }
        
        printf("%c", m[i]);
    }
}

int charOcorrente(char palavra[max], int tamanho){
    int i, ocorrente = 0;
    char letra[1];

    printf("\nQual letra voce deseja saber a sua ocorrencia: ");
    scanf("%s", &letra);

    for(i = 0; i < tamanho; i++){
        if(palavra[i] == letra[0]){
            ocorrente++;
        }
    }
    printf("\nA letra ''%c'' aparece em ''%s'' %d vezes", letra[0], palavra, ocorrente);

    return ocorrente;
}

void charOcorrenteApagar(char palavra[max], int tamanho){
    int i;
    char letra[1], palavraSemLetra[max];

    printf("\nQual letra voce quer apagar: ");
    scanf("%s", &letra);

    printf("\n");
    for(i = 0; i < tamanho; i++){
        palavraSemLetra[i] = palavra[i];
        if(palavraSemLetra[i] == letra[0]){
            palavraSemLetra[i] = 95;
        }
     printf("%c", palavraSemLetra[i]);   
    }
}

void main(){
    char palavra[max];
    int i, tamanho, ocorrente;

    printf("\nDigite uma palavra: ");
    scanf("%s", &palavra);

    for(i = 0; i <= sizeof(palavra); i++){
        if(palavra[i] == '\0'){
            tamanho = i;
            break;
        }
    }

    deTrasPraFrente(palavra, tamanho);
    printf("\n");
    semVogais(palavra, tamanho);
    printf("\n");
    maiusculo(palavra, tamanho);
    printf("\n");
    ocorrente = charOcorrente(palavra, tamanho);
    printf("\n");
    charOcorrenteApagar(palavra,tamanho);

}