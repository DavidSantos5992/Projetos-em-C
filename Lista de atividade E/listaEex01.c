#include<stdio.h>
#include<locale.h>
/*
	1- Faça um programa que utilize uma função chamada subtracao, esta função deve receber 2
	números inteiros e retornar o resultado da subtração dos números passados. O programa
	principal deve exibir o resultado da função.
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


