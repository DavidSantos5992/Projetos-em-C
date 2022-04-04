#include<locale.h>
#include<stdio.h>
//função recebe nada e retorna algo 
int numeropositivo()
{
	int num;
	do{
		printf("informe um numero positivo: ");
		scanf("%i",&num);
	}while(num<0);
}
int main()
{
	setlocale(LC_ALL,"");
	
	int a, b;
	
	a=numeropositivo;
	b=numeropositivo;

	printf("soma %i "a+b);

	return 0;
}
