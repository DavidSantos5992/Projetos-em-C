#include<stdio.h>
#include<locale.h>
#include<string.h>

int LerNumeroPositivo()
{
	int num;
	do
	{
		printf("Informe um n�mero positivo: ");
		scanf("%i", &num);
	} while (num<0);
	return num;
}

float LerNumeroDecimal(char msg[50])
{
	float num;
	do
	{
		printf("%s", msg);
		scanf("%f", &num);
	} while (num<0);
	return num;
}

int main()
{
	setlocale(LC_ALL, "");

	int a, b;
	float x, y;
	
	a = LerNumeroPositivo();
	b = LerNumeroPositivo();
	printf("Soma: %i\n", a+b);
	
	x = LerNumeroDecimal("Primeiro n�mero decimal positivo: ");
	y = LerNumeroDecimal("Segundo n�mero decimal positivo: ");
	printf("Soma: %f\n", x+y);
	
	return 0;
}


