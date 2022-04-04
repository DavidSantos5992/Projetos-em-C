#include<stdio.h>
#include<locale.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int i;
	char palavra1[40], palavra2[20];
	
	// leitura do vetor de caracteres sem loop
	printf("Informe seu primeiro nome: ");
	gets(palavra1);
	
	printf("Informe seu sobrenome: ");
	gets(palavra2);
	
	
	// sobrescreve a palavra 1
	strcpy(palavra1, palavra2); //mesmo que dizer palavra1 = palavra2
	
	puts(palavra1);
	puts(palavra2);
	

	return 0;
}
