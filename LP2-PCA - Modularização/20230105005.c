#include <stdio.h>

int fibonacci(int n){
    int f, f1 = 1, f2 = 1, i;
    if(n == 1 || n == 2){
        return 1;
    }else{
        for (i = 3; i <= n; i++){
            f = f1 + f2;
            f2 = f1;
            f1 = f; 
        }
        return f;
    }
}

int main(){
    int n, f;

    printf("\nDigite um numero: ");
    scanf("%d", &n);

    f = fibonacci(n);

    printf("\nFn = %d\n", f);
}