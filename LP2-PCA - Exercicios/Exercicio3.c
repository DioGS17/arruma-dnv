#include <stdio.h>

float main()
{
    float conta, garcom;

    printf("Valor da conta: ");
    scanf("%f", &conta);

    garcom = conta/10;

    printf("Valor para garcom: %f", garcom);
    return 0;
}