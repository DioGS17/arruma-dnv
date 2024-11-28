#include <stdio.h>

float main()
{
    float salario, novoSalario;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    novoSalario = salario + salario/10;

    printf("Seu novo salario é %f", novoSalario);
    return 0;
}