#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int i;
	char palavra[20];//ainda precisamos definir o tamanho da palavra
	

	printf("Informe seu nome: ");
	gets(palavra); //é como se fosse um scanf, mas é especifico para string


	puts("Texto informado: ");//com o puts não consigo usar junto com a palavra precisa ser separado
	
	
	
	puts(palavra); //é um printf specifico para string 
	
	return 0;
}
