#include <stdio.h>

void escalarXmatriz(){
    int i, j, k, m[3][3], num;
    
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &k);

    printf("\nDigite os numeros da matriz:");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("\n%do numero da linha %d: ", j+1, i+1);
            scanf("%d", &num);
            m[i][j] = num*k;
        }
        
    }
    printf("\nO produto de %d com a matriz eh:\n", k);
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
        
    }
    
}

int main(){

    escalarXmatriz();

}