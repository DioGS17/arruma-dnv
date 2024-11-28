#include <stdio.h>

int main(){
    int x, y, m, n, i, f;

    printf("\nDigite um numero: ");
    scanf("%d", &m);
    printf("\nDigite um numero: ");
    scanf("%d", &n);

    printf("\nValores para x:");
    for (i = 1; i <= m; i++){
        x = i;
        printf("\n%d", x);
    }
    printf("\nValores para y:");
    for (i = 1; i <= n; i++){
        y = i;
        printf("\n%d", y);
    }

    f = x*y - x*x + y;

    printf("\nValor maximo de xy - x^2 + y = %d", f);
}