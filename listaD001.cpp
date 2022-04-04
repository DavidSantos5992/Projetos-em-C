#include<stdio.h>
#include<locale.h>
#define QTD 3 
//1- Escreva um programa que leia um texto com 10 letras e exiba este texto em ordem invertida na
//tela.
int main()
{
	setlocale(LC_ALL,"");
	int c;
	char letra[QTD];
	
	
	printf("Informe um texto com 10 letras: ");
	scanf("%s",letra);//string não precisa de & 
	
	for(c=0; c<QTD; c++)
	{
		printf("%c", letra[c]);
	}
	
		printf("\n");
	
	for(c=QTD; c>=0; c--)
	{
		printf("%c", letra[c]);
	}
	
	return 0;
}
