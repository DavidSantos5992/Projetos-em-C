#include<stdio.h>
#include<locale.h>
/*
2- Elabore um programa que leia 7 números e os guarde em um vetor. Depois leia os valores
digitados e mostre a soma total.
*/

int main()
{
	setlocale(LC_ALL,"");
	int c, valor[7],soma;
	soma=0;
	for(c=0; c<7; c++)
	{
	printf("Digite um numero inteiro: ");
	scanf("%i",&valor[c]);
	soma=soma+valor[c];
	}
	printf("%i",soma);
	
	
	
	return 0;
}

