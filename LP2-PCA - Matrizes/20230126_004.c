#include <stdio.h>

int main(){
    int i, j, m[3][3], x, linha = -1, coluna;

    printf("\nDigite os numeros da matriz:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("\n%do numero da linha %d: ", j+1, i+1);
            scanf("%d", &m[i][j]);
        }
    }
    printf("\nDigite um numero a ser encontrado na matriz: ");
    scanf("%d", &x);

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(m[i][j] == x){
                linha = i+1;
                coluna = j+1;
            }
            
        }
        
    }
    if(linha == -1){
        printf("\nNumero nao encontrado");
    }else{
        printf("\nO numero %d esta esta nas coordernadas: linha %d, coluna %d", x, linha, coluna);
    }
    
    
}