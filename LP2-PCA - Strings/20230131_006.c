#include <stdio.h>
#include <stdlib.h>
#define max 100
#include <string.h>

int main(){
    char frase[max];
    int i, tam_str, cont = 0;

    printf("\nDigite uma palavra ou frase: ");
    gets(frase);

    tam_str = strlen(frase);
    
    for(i = 0; i < tam_str ; i++){
        if(frase[i] != ' '){
            frase[cont] = frase[i];
            cont++;
        }
    }
    
    frase[cont] = '\0';
    
    tam_str = strlen(frase);

    for(i = 0; i < tam_str; i++){
        if(frase[i] >= 'A' && frase[i] <= 'Z'){
            frase[i] += 32;
        }    
    }
    
    for(i = 0; i < tam_str/2 ; i++){
        if(frase[i] != frase[tam_str-1-i]){
            printf("\nA palavra/frase nao eh um palindromo");
            return 0;
        }
        
    }
    printf("\nA palavra/frase eh um palindromo");
    
}