/*
Escreve um programa que usa uma função que recebe um vetor de 
notas das provas de uma turma e retorna a média da classe.
*/

#include <stdio.h>
#include <locale.h>
#define QTD 5

float CalcularMedia(float v[], int tam)
{
	int i;
	float a=0;
	for(i=0;i<tam;i++)
		a += v[i]; // a = a + v[i];
	return a / tam;
}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "");
	
	float notas[QTD], media;
	int i;
	
	for(i=0;i<QTD;i++)
	{
		printf("Informe a nota %i: ", i+1);
		scanf("%f", &notas[i]);
	}
	
	media = CalcularMedia(notas, QTD);
	printf("Média da turma: %.2f\n", media);
	
	return 0;
}
