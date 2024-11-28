#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 120

void listaNomes(char nomes[21][max], int tam_lista){
    int i;

    printf("\nLista de nomes:");
    for (i = 0; i < tam_lista; i++){
        printf("\n%s", nomes[i]);
        
    }
}

void retirarNome(char nomes[21][max], int tam_lista){
    int i, j, aux = 0;
    char nome[max];

    printf("\nDigite o nome que deseja retirar da lista: ");
    gets(nome);

    for (i = 0; i < tam_lista; i++){
        if(strcmp(nomes[i], nome) == 0){
            for (j = strlen(nomes[i]); j >= 0; j--){
                nomes[i][j] = 0;
                if(j == 0){
                    i += 1;
                }
                
            }
            aux = 1;   
        }
    }
    if (aux == 0){
        printf("\nNome nao encontrado");
    }else{
        for (i = 0; i < tam_lista; i++){
            printf("\n%s", nomes[i]);
        }
    }
}

void ordemAlfabetica(char nomes[21][max], int tam_lista){
    int i, j;
    char aux[max], alpha[21][max];

    for(i = 0; i < tam_lista; i++){
        strcpy(alpha[i], nomes[i]);
    }
    

    for(i = 0; i < tam_lista; i++){
        for (j = 0; j < tam_lista; j++){
            if(strcmp(alpha[j], alpha[j+1]) > 0){
                strcpy(aux, alpha[j]);
                strcpy(alpha[j], alpha[j+1]);
                strcpy(alpha[j+1], aux);
            }
        }
    }

    printf("\nLista de ordem alfabetica:");
    for (i = 0; i < tam_lista; i++){
        printf("\n%s", alpha[i]);
    }
    
    
}

void main(){
    char nomes[21][max], opcao[15];
    int i, tam_lista = 0, aux1 = 1, aux2 = 1;

    printf("\nInsira no maximo 20 nomes (Digite ''fechar'' se quiser parar):\n");
    for(i = 0; i < 20; i++){
        printf("\nNome(%d): ", i+1);
        gets(nomes[i]);
        if(strcmp(nomes[i], "fechar") == 0){
            i = 20;
        }else{
            tam_lista++;
        }
         
    }

    do{
        printf("\nSelecione uma das opcoes abaixo (Digite a letra correspondente):\n");
        printf("\na) Imprimir a listar de nomes");
        printf("\nb) Retirar um nome da lista");
        printf("\nc) Organizar a lista de nomes em ordem alfabetica");
        printf("\nd) Encerrar o programa\n");
        
        printf("\nNOTA: Qualquer outra resposta nao fara que o programa avance.");
        while(aux1 != 0){
            printf("\nResposta: ");
            gets(opcao);
            if(strcmp(opcao, "a") == 0 || strcmp(opcao, "b") == 0 || strcmp(opcao, "c") == 0 || strcmp(opcao, "d") == 0){
                aux1 = 0;
            }
        }
        aux1 = 1;
        
        if(strcmp(opcao, "a") == 0){
            listaNomes(nomes, tam_lista);

        }else if(strcmp(opcao, "b") == 0){
            retirarNome(nomes, tam_lista);

        }else if(strcmp(opcao, "c") == 0){
            ordemAlfabetica(nomes, tam_lista);

        }else if(strcmp(opcao, "d") == 0){
            aux2 = 0;
            continue;

        }

        printf("\n");

        while(strcmp(opcao, "sim") != 0 && strcmp(opcao, "nao") != 0 && aux2 != 0){
            printf("\nProsseguir?(sim/nao): ");
            gets(opcao);
            if(strcmp(opcao, "nao") == 0){
                aux2 = 0;
            }
            
        }
        
    }while (aux2 != 0);
    
    printf("\nPrograma encerrado.");

}