/*
14- Na fábrica Rosca Feliz, recolheu-se uma amostra de 1000 parafusos para medição e pesagem.
Escreva um programa que permita:
1. Ler os valores do peso e do comprimento de cada parafuso da amostra;
2. Calcular o peso médio e o comprimento médio dos parafusos da amostra;
3. Calcular a percentagem de parafusos com peso superior à média da amostra;
4. Calcular a diferença entre o parafuso mais comprido e o mais curto.
*/
#include<stdio.h>
#include<locale.h>
#define QTD 3
typedef struct
{
	float peso;
	float tamanho;
}parafuso;

int main()
{
	setlocale(LC_ALL,"");
	
	parafuso amostra[QTD];
	int i;
	float acumulapeso=0,acumulatamanho=0;
	//1 ler os valores do peso e do comprimento
	//de cada parafuso
	
	for(i=0; i<QTD; i++)
	{
		printf("Parafuso %i de %i\n",i+1, QTD);
		printf("Peso: ");
		scanf("%f",&amostra[i].peso);
		printf("Tamanho: ");
		scanf("%f", &amostra[i].tamanho);
		printf("\n");
	}
	
	// 2 calcular o peso medio e o comprimento medio
	// dos parafusos da amostra 
	for(i=0; i<QTD; i++)
	{
		acumulapeso += amostra[i].peso;
		acumulatamanho += amostra[i].tamanho;
	}
	
	printf("Peso medio da amostra: %f\n",acumulapeso/QTD);
	printf("tamanho medio da amostra: %f",acumulatamanho/QTD);
	return 0;
}
