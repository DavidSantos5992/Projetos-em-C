#include<locale.h>
#include<stdio.h>
void exibirmenu()// void é função que n retorna nada
{
	mostrarlinha('=', 30);
	printf("1) cadastrar cliente\n");
	mostrarlinha('-',20);//caracter é '-' e o QTD o numero
	printf("2) alterar cliente\n");
	mostrarlinha('-',20);
	printf("3) excluir cliente\n");
	mostrarlinha('-',20);
	printf("4) consultar cliente\n");
	mostrarlinha('=', 30);
}

void mostrarlinha(char caracter, int QTD)// mostrando linha no menu
{
	int c;
	for(c=0; c<QTD; c++)//loop controlador de tamanho de linha
	printf("%c",caracter);
	printf("\n");
}
int main()
{
	setlocale(LC_ALL,"");
	char nome[50];
	
	exibirmenu();//função que n tem retorno 
	//apos menu, Digite o nome do usuario 
	printf("Digite o seu nome: ");
	gets(nome);
	
	printf("%s\n", nome);// \n para mostrar o sublinhado em baixo
	mostrarlinha('_', strlen(nome)); //strelen para mostrar a linha com a quantidade de caracter tem seu nome 
	
	return 0;
}
