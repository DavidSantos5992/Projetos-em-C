/*
3- Rescreva o programa do exerc�cio 1 da lista D e transforme
em uma fun��o a parte que exibe o nome de forma invertida. A 
fun��o deve receber o vetor com o texto informado pelo usu�rio 
e exibir� este texto invertido, esta fun��o n�o possui retorno.

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
