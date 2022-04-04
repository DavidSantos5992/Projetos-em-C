/*6- Considere um pequeno programa para controle de um estacionamento.
a) Escreva uma estrutura para armazenar os dados de uma entrada. Ela deve ser capaz de
armazenar a placa do carro (8 caracteres), a marca (15 caracteres) e a hora de entrada
(5 caracteres). Dê a ela o nome de entrada.
b) Escreva uma instrução que defina uma matriz do tipo entrada chamada vagas, com 50
linhas.
c) Escreva uma função chamada ObterDadosDaVaga. Esta função deve obter os dados de
uma entrada (estrutura definida no item a) e retornar uma variável do tipo entrada
contendo os dados informados.
d) Escreva um programa que utilize a estrutura entrada, o vetor vagas e a função
ObterDadosDaVaga para preencher toda a matriz (os dados devem ser informados pelo
usuário).*/
#include<stdio.h>
#include<locale.h>
#define QTD 1
// estrutura para armazenar os dados de uma entrada
//placa do carro c[8]
//marca (15 caracteres)
//hora de entrada (5 caracteres)
typedef struct
{
	char placa[8];
	char marca[15];
	char hora[5];	
}entrada;

void ObterDadosDaVaga(entrada vaga[])
{
	int c;
	for(c=0; c<QTD; c++){
		printf("Digite a placa do carro %i: ",c+1);
		gets(vaga[c].placa);
		
		printf("Digite a marca do carro %i: ",c+1);
		gets(vaga[c].marca);
		
		printf("Digite o horario de entrada do carro %i: ",c+1);
		gets(vaga[c].hora);
		printf("\n");
		system("cls");
	}
}

void imprimirdados(entrada vaga[])
{
	int c;
	for(c=0; c<QTD; c++)
	{
		printf("Dados carro %i\n\n",c+1);
		printf("Placa: ");
		puts(vaga[c].placa);
		printf("Marca: ");
		puts(vaga[c].marca);
		printf("Horario: ");
		puts(vaga[c].hora);
		
		printf("\n");
	}
}

int main()
{
	setlocale(LC_ALL,"");
	
	entrada vaga[QTD];

	ObterDadosDaVaga(vaga);
	
	imprimirdados(vaga);
	return 0;
}
