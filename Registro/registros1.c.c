
//usando registros 
#include<stdio.h>
#include<locale.h>
//criando uma "função" estruturada
	typedef struct
	{
		char nome[51];
		int ra;
		float nota1;
		float nota2;
		
	}aluno;
	
int main()
{
	setlocale(LC_ALL,"");
	float media;
	aluno a1; //chamando a função criada a1 você entra dentro do menu dela 
	
	printf("Digite seu nome: ");
	gets(a1.nome); //digitando a1. vc abre o menu da sua função e escolhe o que deseja realizar
	
	printf("Digite seu R.A: ");
	scanf("%i",&a1.ra);
	
	printf("Digite sua primeira nota: ");
	scanf("%f",&a1.nota1);
	
	printf("Digite sua segunda nota: ");
	scanf("%f",&a1.nota1);
	
	media= a1.nota1 + a1.nota2;
	
	media/2;
	
	printf("Sua media foi de: %f",media);
	return 0;
}
