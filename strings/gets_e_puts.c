#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int i;
	char palavra[20];//ainda precisamos definir o tamanho da palavra
	

	printf("Informe seu nome: ");
	gets(palavra); //� como se fosse um scanf, mas � especifico para string


	puts("Texto informado: ");//com o puts n�o consigo usar junto com a palavra precisa ser separado
	
	
	
	puts(palavra); //� um printf specifico para string 
	
	return 0;
}
