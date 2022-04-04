#include<stdio.h>
#include<locale.h>
#define QTD 11
/*
3- Para ir à feira, uma dona de casa relacionou 10 produtos a serem comprados. Elabore um
programa que solicite o valor de cada produto, guarde estes valores em um vetor, e no final leia
este vetor e exiba o valor total da compra para a dona de casa.
*/
int main()
{
	setlocale(LC_ALL,"");
	int produto[QTD],c;
	float soma=0;

	
	printf("Digite o valor de cada produto comprado\n\n");
	
	
	for(c=1; c<QTD; c++)
	{
		printf("Digite o valor do produto %i: ",c );
		scanf("%i",&produto[c]);
		soma+=produto[c];
	}
	printf("\n");
	printf("total da compra: R$ %.2f",soma);
	

	
	
	
	return 0;
}
