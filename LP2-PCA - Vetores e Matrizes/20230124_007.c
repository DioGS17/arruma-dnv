#include <stdio.h>
#include <stdlib.h>
#define n 6

int main(){
    int vetor[n], i, num, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0;

    printf("\nO dado foi lancado %d vezes.", n);
    for (i = 0; i < n; i++){
        while(num < 1 || num > 6){
            printf("\nLancamento %d", i+1);
            printf("\nDigite o numero da face virada para cima (De 1 a 6): ");
            scanf("%d", &num);
        }
        vetor[i] = num;
        num = 0;
    }
    for (i = 0; i < n; i++){
        if(vetor[i] == 1){
            n1++;
        }else if(vetor[i] == 2){
            n2++;
        }else if(vetor[i] == 3){
            n3++;
        }else if(vetor[i] == 4){
            n4++;
        }else if(vetor[i] == 5){
            n5++;
        }else if(vetor[i] == 6){
            n6++;
        }
    }
    printf("\nA face de numero 1 teve %d ocorrencia(s)", n1);
    printf("\nA face de numero 2 teve %d ocorrencia(s)", n2);
    printf("\nA face de numero 3 teve %d ocorrencia(s)", n3);
    printf("\nA face de numero 4 teve %d ocorrencia(s)", n4);
    printf("\nA face de numero 5 teve %d ocorrencia(s)", n5);
    printf("\nA face de numero 6 teve %d ocorrencia(s)", n6);
    
}