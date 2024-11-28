#include <stdio.h>
#include <math.h>

int binario(int n){
  int pot, resto, exp = 0, soma = 0;

  while(n != 0){
    resto = n % 10;
    n = n / 10;
    pot = pow(2, exp);
    soma += resto*pot;
    exp++;
  }
  return soma;
}

int main(){
    int n, bin;

    printf("\nDigite um numero binario: ");
    scanf("%d", &n);

    bin = binario(n);

    printf("\nO numero binario %d eh igual a %d", n, bin);
}