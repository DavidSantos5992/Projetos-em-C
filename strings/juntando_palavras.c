#include<stdio.h>
#include<locale.h>
#include<string.h>//biblioteca de string
//juntando duas strings
int main()
{
	setlocale(LC_ALL, "");
	
	int i;
	char palavra1[40], palavra2[20];
	
	
	printf("Informe seu primeiro nome");
	gets(palavra1);//não precisa"" para fazer a leitura dentro do ()
	
	printf("Informe seu sobrenome: ");
	gets(palavra2);
	
	printf("Tamanho da palavra 1 %i\n", strlen(palavra1));//strlen serve para saber quantas letras existe dentro da variavel

	printf("Palavra 1 antes: %s\n", palavra1);//mostrando o como era a a palavra antes
	
	//STRing ConcATanate significa juntar dois pedaços 
	strcat(palavra1, " ");//dando espaço da palavra 1 para a palavra 2
	
	strcat(palavra1, palavra2); //aqui seria a mesma coisa que palavra1 = palavra1 + palavra2
	
	printf("Tamanho da palavra 1 %i\n", strlen(palavra1));//leitura do tamanho da palavra1
	printf("Palavra 1 depois: %s\n", palavra1);//aqui ja esta sendo mostrado a palavra um apos receber a palavra1+a palavra2

	return 0;
}
