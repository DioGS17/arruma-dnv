#include <stdio.h>

void main(){
    int n, *pn;
    float r, *pr;
    char s, *ps;

    pn = &n;
    pr = &r;
    ps = &s;

    printf("\nDigite um inteiro: ");
    scanf("%d", &n);

    printf("\nDigite um real: ");
    scanf("%f", &r);

    printf("\nDigite um caractere: ");
    scanf(" %c", &s);

    printf("\nDigitados:");
    printf("\nInteiro = %d; endereco = %d;", n, &n);
    printf("\nReal = %.2f; endereco = %d;", r, &r);
    printf("\nCaractere = %c; endereco = %d;", s, &s);

    printf("\n");
    printf("\nModifique o inteiro: ");
    scanf("%d", pn);

    printf("\nModifique o real: ");
    scanf("%f", pr);

    printf("\nModifique o caractere: ");
    scanf(" %c", ps);

    printf("\nModificacoes:");
    printf("\nInteiro = %d; Enderco = %d;", *pn, pn);
    printf("\nReal = %.2f; Enderco = %d;", *pr, pr);
    printf("\nCaractere = %c; Enderco = %d;", *ps, ps);
}