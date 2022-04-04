#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int i;
	char palavra[20];
	
	// leitura do vetor de caracteres sem loop
	printf("Informe seu nome: ");
	scanf("%s", palavra);
	
	for(i=0;i<20;i++)
	{
		//quando o texto chega ao fim é apresentado \0 nele aqui estamos declarando isso
		//para qunado chegarmos nesse ponto o nosso loop ser interrompido 
		if (palavra[i]=='\0')//em string usamos aspas simples
			break;
		printf("Letra informada: %c\n", palavra[i]);
	}
	
	// mostrar o vetor de caracteres sem usar loop
	printf("Texto informado: %s", palavra);
	
	return 0;
}
