#include <stdio.h>

int main()
{
	int x, y, area;
	
	printf("\nBase do triangulo: ");
	scanf("%d", &x);

	printf("\nAltura do triangulo: ");
	scanf("%d", &y);

	area = x*y/2;
	
	printf("\nArea do triangulo = %d", area);
	return 0;
}