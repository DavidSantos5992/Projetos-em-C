#include<stdio.h>
#include<locale.h>
#define QTD 7
/*
	4- Rescreva o programa do exerc�cio 2 da lista D e transforme em uma fun��o a parte que faz
	a somat�ria dos valores informados pelo usu�rio. A fun��o deve receber um vetor e retornar a
	soma dos n�meros contidos nele. O programa principal deve exibir o resultado da fun��o.
*/
float somar(float numero[QTD])
{
	int c;
	float soma;
	for(c=0; c<QTD; c++)
	{
		numero[c];
	
		soma=soma+numero[c];
	}
	printf("soma total: %.2f",soma);
	
	return soma;
}
int main()
{
	setlocale(LC_ALL,"");
	
	int c;
	float numero[QTD];
	
//	leia 7 n�meros e os guarde em um vetor
	printf("Digite 7 numeros: \n");
	
	for(c=0; c<QTD; c++){
		scanf("%f",&numero[c]);
	}
	
	somar(numero);
	return 0;
}
