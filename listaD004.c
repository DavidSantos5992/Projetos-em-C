#include<stdio.h>
#include<locale.h>
#include<string.h>
/*
4- A tabuada de um determinado n�mero � uma tabela de produtos deste n�mero com os
n�meros de 1 a 9. Escreva um programa que pe�a um n�mero ao usu�rio, calcule a tabuada deste
n�mero guardando os valores em um vetor. Depois leia este vetor 2 vezes, na primeira imprima a
tabuada de 1 a 9 e na segunda imprima a tabuada de 9 � 1.
*/
int main()
{
	setlocale(LC_ALL, "");
	
	int n1, resultado[9], c;
	
	printf("Digite um numero: ");
	scanf("%i",&n1);
	
	for(c=0; c<9; c++)
	{
		resultado[c]=n1*(c+1);
		printf("%i X %i = %i \n",c+1,n1, resultado[c]);
	}
	
	printf("\n\n");
	
	
	for(c=8; c>=0; c--)
	{
		printf("%i X %i = %i \n",c+1,n1, resultado[c]);
	}

	
	
	

	return 0;
}
