/*
3- Rescreva o programa do exercício 1 da lista D e transforme
em uma função a parte que exibe o nome de forma invertida. A 
função deve receber o vetor com o texto informado pelo usuário 
e exibirá este texto invertido, esta função não possui retorno.

1- Escreva um programa que leia um texto com 10 letras e exiba 
este texto em ordem  invertida na tela.
*/

#include<stdio.h>
#include<locale.h>

void imprimir_invertido(char vetor[])
{
	int i;
	for(i=strlen(vetor)-1;i>=0;i--)
	{
		printf("%c", vetor[i]);
	}
}

int main()
{
	char texto[10];
	
	printf("Entre com um texto: ");
	gets(texto);
	
	imprimir_invertido(texto);
	
	return 0;
}
