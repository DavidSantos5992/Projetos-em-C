#include<stdio.h>
#include<locale.h>
#define QTD 3
/*
	5- Rescreva o programa do exercício 3 da lista D e transforme em uma função a parte que
	calcula o valor total da compra. A função deve receber um vetor e retornar a soma dos
	números contidos nele. O programa principal deve exibir o resultado da função.
*/
float soma(float produtos[QTD])
{
	int c;
	float soma;
	
		for(c=0; c<QTD; c++)
	{
		soma+=produtos[c];
	}
	printf("total da compra: R$ %.2f",soma);
}
int main()
{
	setlocale(LC_ALL,"");
	int c;
	float produto[QTD];
	
	printf("Digite o valor de cada produto comprado\n\n");
	
	for(c=0; c<QTD;c++){
	scanf("%f",&produto[c]);
	}
	
	soma(produto);
	return 0;
}
