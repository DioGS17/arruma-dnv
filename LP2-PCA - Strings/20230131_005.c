#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 100

int main(){
    char string[max];
    int tam_string, i;

    printf("\nDigite uma frase: ");
    gets(string);

    tam_string = strlen(string);

    for(i = 0; i < tam_string; i++){
        if(string[i] == 'x'){
            string[i] = 'a';
        }else if(string[i] == 'y'){
            string[i] = 'b';
        }else if(string[i] == 'z'){
            string[i] = 'c';
        }else if(string[i] != ' '){
            string[i] += 3;
        }
        

        if(string[i] >= 'a' && string[i] <= 'z'){
            string[i] -= 32;
        }
        
        printf("%c", string[i]);
    }
    
    
}