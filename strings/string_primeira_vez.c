#include<stdio.h>
#include<locale.h>
#define QTD 10
int main()
{
	setlocale(LC_ALL,"");
// inserindo um nome 
	int c;
	char nome[QTD];
	
	printf("Digite seu nome: ");
	scanf("%s",nome);// aqui estamos usando uma string, e string não precisa de & para funcionar 
	
	//imprimento o vetor de caractere sem precisar de loop
	printf("%s",nome);
	
 return 0;
}
