#include<stdio.h>
#include<locale.h>
#include<string.h>//biblioteca para colocar fun�oes

int main()
{
	setlocale(LC_ALL, "");
	
	int i;
	char palavra[20];
	

	printf("Informe o nome do professor: ");
	gets(palavra);
	
	if (strcmp(palavra,"cesar tofanini")==0)//aqui seria a msm coisa que colocar palavra=="cesar" 
	//este comando serve para fazer este tipo de compara��o se o retorno disto for 0 elas s�o iguais 
	{
		printf("Acertou o nome do professor!\n");
	}
	else
	{
		printf("Errou o nome do professor!\n");
	}

	return 0;
}
