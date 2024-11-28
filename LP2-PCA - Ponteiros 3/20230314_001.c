#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediaDesvio(float *media, float *desvio, float *vetor, int alunos){
    int i;
    float variancia = 0;

    for (i = 0; i < alunos; i++){
        *media = *media + *(vetor+i);
        
    }

    *media = *media/alunos;

    for (i = 0; i < alunos; i++){
        variancia = variancia + pow(*(vetor+i) - *media, 2);

    }

    variancia = variancia/alunos;

    *desvio = sqrt(variancia);
}

void main(){
    float *vetor;
    float media = 0, desvio;
    int alunos, i;

    do{
        printf("\nDigite o numero de alunos: ");
        scanf("%d", &alunos);
        if (alunos < 1){
            printf("\nDigite um numero maior que 0");
        }
        
    }while(alunos < 1);

    vetor = (float*) malloc (alunos*sizeof(float));

    for (i = 0; i < alunos; i++){
        printf("\nNota %d = ", i+1);
        scanf("%f", &vetor[i]);
    }
    
    mediaDesvio(&media, &desvio, vetor, alunos);

    printf("\nMedia = %.2f", media);
    printf("\nDesvio padrao = %.2f", desvio);

    free(vetor);
    
}