#include <stdio.h>

void printVet_endereco(float *endeI, float *endeF){
    float *pvet;

    for (pvet = endeI; pvet <= endeF; pvet++){
        printf("%.2f ", *pvet);
    }
    
}

void main(){
    float vetor1[] = {1, 2, 3 ,4 ,5}, vetor2[] = {2, 4, 6}, vetor3[] = {1, 3};

    printf("\nVetor 1: ");
    printVet_endereco(&vetor1[0], &vetor1[4]);

    printf("\nVetor 2: ");
    printVet_endereco(&vetor2[0], &vetor2[2]);

    printf("\nVetor 3: ");
    printVet_endereco(&vetor3[0], &vetor3[1]);

    printf("\n------------------------");

    printf("\nVetor 1[1]:");
    printVet_endereco(&vetor1[0], &vetor1[2]);
    printf("\nVetor 1[2]:");
    printVet_endereco(&vetor1[3], &vetor1[4]);
    
    printf("\n");
    printf("\nVetor 2[1]:");
    printVet_endereco(&vetor2[0], &vetor2[1]);
    printf("\nVetor 2[2]:");
    printVet_endereco(&vetor2[2], &vetor2[2]);

    printf("\n");
    printf("\nVetor 3[1]:");
    printVet_endereco(&vetor3[0], &vetor3[0]);
    printf("\nVetor 3[2]:");
    printVet_endereco(&vetor3[1], &vetor3[1]);

}