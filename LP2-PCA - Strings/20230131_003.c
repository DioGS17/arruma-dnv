#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main(){
    char data[11], sDia[3], sMes[3], sAno[5];
    int nDia, nMes, nAno, i;

    printf("\nDigite uma data no formato DD/MM/AAAA: ");
    scanf("%s", &data);

    if(strlen(data) != 10 || data[2] != '/' || data[5] != '/' || !isdigit(data[0]) || !isdigit(data[1]) || !isdigit(data[3])
        || !isdigit(data[4]) || !isdigit(data[6]) || !isdigit(data[7]) || !isdigit(data[8]) || !isdigit(data[9])){
        printf("\nO formato digitado esta errado");
    }else{
        sDia[0] = data[0];
        sDia[1] = data[1];
        sDia[2] = '\0';

        sMes[0] = data[3];
        sMes[1] = data[4];
        sMes[2] = '\0';

        sAno[0] = data[6];
        sAno[1] = data[7];
        sAno[2] = data[8];
        sAno[3] = data[9];
        sAno[4] = '\0';

        nDia = atoi(sDia);
        nMes = atoi(sMes);
        nAno = atoi(sAno);

        if(nMes < 1 || nMes > 12){
            printf("\nEsta data nao existe");
        }else{
            if(nMes == 2){
                if(nDia < 0 || nDia > 28){
                    printf("\nEsta data nao existe");
                }else{
                    printf("\nDia: %d, Mes: %d, Ano: %d", nDia, nMes, nAno);
                }
                
            }else if(nMes == 1 || nMes == 3 || nMes == 5 || nMes == 7 || nMes == 8 || nMes == 10 || nMes == 12){
                if(nDia < 0 || nDia > 31){
                    printf("\nEsta data nao existe");
                }else{
                    printf("\nDia: %d, Mes: %d, Ano: %d", nDia, nMes, nAno);
                }
                   
            }else if(nMes == 4 || nMes == 6 || nMes == 9 || nMes == 11){
                if(nDia < 0 || nDia > 31){
                    printf("\nEsta data nao existe");
                }else{
                    printf("\nDia: %d, Mes: %d, Ano: %d", nDia, nMes, nAno);
                }
            }        
        }
    }
}