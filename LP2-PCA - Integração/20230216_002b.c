#include <stdio.h>
#include <stdlib.h>
#define max 100

void interseccao(int v[max][max], int inter[max], int n){
    int i, j, k, l = 0, auxN = 0, auxM[max][max];

    for (i = 0; i < n; i++){
        for (j = 1; j <= v[i][0] ; j++){
            if(i == 0){    
                for (k = 1; k <= v[i+1][0]; k++){
                    if(v[i][j] == v[i+1][k]){
                        auxN++;
                        auxM[i][auxN] = v[i][j];
                    } 
                }
                auxM[i][0] = auxN;
                auxN = 0;
                i = 1;

            }else{
                for (k = 1; k <= auxM[l][0]; i++){
                    if(v[i][j] == auxM[l][k]){
                        auxN++;
                        auxM[l][auxN] = v[i][j];
                    }
                }
                auxM[l][0] = auxN;
                auxN = 0;
                l++;
            }
        }
    }

    for(i = 1; i <= auxM[l-1][0] ; i++){
        auxN++;
        inter[i] = auxM[l-1][i];

    }
    inter[0] = auxN;
    
}

void main(){
    int v[max][max], i, j, n, inter[max];

    printf("\nQuantos conjuntos de numeros inteiros serao formados: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        printf("\nNumero de elementos do conjunto %d: ", i+1);
        scanf("%d", &v[i][0]);
    }

    for (i = 0; i < n; i++){
        for (j = 1; j <= v[i][0]; j++){
            printf("\n%do elemento do conjunto %d: ", j, i+1);
            scanf("%d", &v[i][j]);
        }
    }
    
    interseccao(v, inter, n);

    printf("\nInterseccao entre todos os vetores eh:");
    for (i = 1; i <= inter[0]; i++){
        printf(" %d", inter[i]);
    }
    
    
}