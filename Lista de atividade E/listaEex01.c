#include<stdio.h>
#include<locale.h>
/*
	1- Fa�a um programa que utilize uma fun��o chamada subtracao, esta fun��o deve receber 2
	n�meros inteiros e retornar o resultado da subtra��o dos n�meros passados. O programa
	principal deve exibir o resultado da fun��o.
*/
	//receber 2 inteiros e retornar o resultado
	int subtracao(int a, int b)
	{
		int resultado;
		resultado = a - b;
		return resultado;
	}
int main()
{
	setlocale(LC_ALL,"");
	int sub,a,b;
	
	printf("Digite valor do primeiro numero: ");
	scanf("%i",&a);
	
	printf("Digite valor do primeiro numero: ");
	scanf("%i",&b);
	
	sub = subtracao(a,b);
	
	printf("%i",sub);
	return 0;
}


