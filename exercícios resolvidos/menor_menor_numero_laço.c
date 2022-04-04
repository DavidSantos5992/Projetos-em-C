#include<stdio.h>
#include<locale.h>
#include<string.h>
/*
Escreva um programa que leia 10 números informados pelo usuário e imprima o maior e o menor deles.
*/
int main()
{
	setlocale(LC_ALL, "");
	
	int n1, maior,menor, c;
	maior=0;
	menor=555555555;
	for(c=0; c<10; c++)
	
	{
		printf("Digite um numero inteiro: ");
		scanf("%i",&n1);
		
		if(n1>maior)	
		{
			maior=n1;
		}
		
			if(n1<menor)
			{
				menor=n1;
			}
	}
	
	
		printf("Maior Numero: %i\n",maior);
		
		printf("Menor Numero:%i",menor);
		
	
	
	
	

	return 0;
}
