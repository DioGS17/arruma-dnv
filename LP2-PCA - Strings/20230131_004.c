#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 20

void lerString(char stringS1[max]){
    printf("\nDigite uma string: ");
    gets(stringS1);
}

void lenString(char stringS1[max]){
    int tam_str;

    tam_str = strlen(stringS1);

    printf("\nO tamanho da string eh %d", tam_str);
}

void compararStr(char stringS1[max], char stringS2[max]){
    int cmp;
    
    printf("\nDigite a nova string: ");
    gets(stringS2);

    cmp = strcmp(stringS1, stringS2);

    if(cmp == 0){
        printf("\nA string 1 e a string 2 sao iguais");
    }else{
        printf("\nA string 1 e a string 2 nao sao iguais");
    }
}

void concaternarStr(char strinS1[max], char stringS2[max]){
    char str3[max];

    strcpy(str3, strinS1);

    printf("\nDigite uma nova string: ");
    gets(stringS2);

    strcat(str3, stringS2);

    printf("\nResultado da concatenacao: %s", str3);
}

void strReversa(char stringS1[max]){
    int i, tam_str;

    tam_str = strlen(stringS1);

    printf("\nString reversa: ");
    for(i = tam_str-1; i >= 0; i--){
        printf("%c", stringS1[i]);
    }
}

void charOcorrente(char stringS1[max]){
    int ocorrente = 0, i, tam_str;
    char letra[2];

    printf("\nDigite o caractere o qual deseja saber sua ocorrencia: ");
    gets(letra);

    tam_str = strlen(stringS1);

    for (i = 0; i < tam_str; i++){
        if(stringS1[i] == letra[0]){
            ocorrente++;
        }
    }

    printf("\nO caractere ''%s'' aparece %d vez(es)", letra, ocorrente);
}

void subtituirChar(char stringS1[max]){
    int i, tam_str;
    char letra1[2], letra2[2];

    tam_str = strlen(stringS1);

    printf("\nQual caractere da string voce deseja substituir?: ");
    gets(letra1);

    printf("\nDigte o caractere substituto: ");
    gets(letra2);

    printf("\nResultado: ");
    for(i = 0; i < tam_str; i++){
        if(stringS1[i] == letra1[0]){
            stringS1[i] = letra2[0];
        }
        printf("%c", stringS1[i]);
    }   
}

void substring(char stringS1[max], char stringS2[max]){
    int i, j = 0, tam_str1, tam_str2, aux;

    tam_str1 = strlen(stringS1);

    printf("\nDigite uma nova string: ");
    gets(stringS2);

    tam_str2 = strlen(stringS2);

    for(i = 0; i < tam_str1; i++){
        if(stringS1[i] == stringS2[j]){
            j++;
            tam_str2--;
        }else if(tam_str2 == 0){
            continue;
        }else{
            tam_str2 = strlen(stringS2);
        }   
    }
    
    if(tam_str2 == 0){
        printf("\nString 2 eh uma substring de string 1");
    }else{
        printf("\nString 2 nao eh uma substring de string 1");
    }   
}

void criarSubstring(char stringS1[max]){
    int i, tam_str, tam_substr = -1, posicao = 0, aux;

    tam_str = strlen(stringS1);
    
    while (posicao <= 0 || posicao > tam_str){
        printf("\nDigite a posicao que a substring comeca: ");
        scanf("%d", &posicao);
        if(posicao <= 0 || posicao > tam_str ){
            printf("\nULTRAPASSOU O LIMITE");
        }
    }

    aux = tam_str - posicao + 1;

    while(tam_substr <= 0 || tam_substr > aux){
        printf("\nDigite o tamanho da substring: ");
        scanf("%d", &tam_substr);
        if(tam_str <= 0 || tam_substr > aux){
            printf("\nULTRAPASSOU O LIMITE");
        }
        
    }
    
    printf("\nResultado: ");
    for (i = posicao - 1; i < posicao + tam_substr - 1; i++){
        printf("%c", stringS1[i]);
    }
    scanf("%c");
}

void main(){
    char opcao[max], resposta[max], stringS1[max], stringS2[max];
    int i = 0, aux = 1;

    do{
        if(i == 0){
            printf("\nOla! Bem-vindo ao menu.");
            printf("\nPara prosseguir, digite: continuar");
            printf("\nSe deseja fechar o menu, digite: fechar\n");
            printf("\nResposta: ");
            gets(resposta);
            
            i++;
            aux = strcmp(resposta, "fechar");

        }else if(aux != 0){
                if(i == 1){
                    lerString(stringS1);
                    i++;
                    printf("\nSe quiser usar uma outra string, reinicie o menu\n");
                }
                printf("\nSelecione uma das opcoes abaixo (Digite a letra correspondente a opcao):\n");
                printf("\na) Imprimir o tamanho da string.");
                printf("\nb) Comparar a string digitada com uma nova string.");
                printf("\nc) Concatenar a string digitada com uma nova string.");
                printf("\nd) Imprimir a string de forma de reversa.");
                printf("\ne) Contar quantas vezes um determinado caractere aparece na string.");
                printf("\nf) Substituir um caractere por outro.");
                printf("\ng) Verificar se uma nova string eh uma substring da primeira.");
                printf("\nh) Retornar uma substring da string digitada.\n");
                printf("\nResposta: ");
                gets(opcao);

                if(strcmp(opcao,"a") == 0){
                    lenString(stringS1);

                }else if(strcmp(opcao,"b") == 0){
                    compararStr(stringS1, stringS2);

                }else if(strcmp(opcao,"c") == 0){
                    concaternarStr(stringS1, stringS2);

                }else if(strcmp(opcao,"d") == 0){
                    strReversa(stringS1);

                }else if(strcmp(opcao,"e") == 0){
                    charOcorrente(stringS1);

                }else if(strcmp(opcao,"f") == 0){
                    subtituirChar(stringS1);

                }else if(strcmp(opcao,"g") == 0){
                    substring(stringS1, stringS2);

                }else if(strcmp(opcao,"h") == 0){
                    criarSubstring(stringS1);
                    
                }
                
                printf("\n");

                printf("\nDeseja continuar? (sim/nao): ");
                gets(resposta);
                
                aux = strcmp(resposta, "nao");
        }
        
    }while(aux != 0);
    
    printf("\nAte a proxima.");
    
}