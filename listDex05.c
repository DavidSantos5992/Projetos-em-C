#include<stdio.h>
#include<locale.h>
#include<string.h>
#include <ctype.h> 
#define QTD 2 // um time de basquete tem 5 jogadores 
/*
	5- Escreva um programa que leia a idade, o sexo e o peso dos jogadores de um time de basquete
	misto, guarde estes valores em 3 vetores. No final leia os vetores e imprima a m�dia de idade e a
	m�dia de peso deste time, separando entre mulheres e homens.
*/
int main()
{
	setlocale(LC_ALL,"");
		int idade[QTD];
		float peso[QTD];
		char sexo[QTD];
		int c;
		float mediaIM, mediaPM, mediaIF, mediaPF;
		
		printf("Programa aceita apenas letras minusculas\n\n");
		
		for(c=0; c<QTD; c++){
			printf("Digite a idade da pessoa %i: ",c+1);
			scanf("%i", &idade[c]);
			
			printf("\n");
			
			printf("Digite o sexo da pessoa %i [F] ou [M]: ",c+1);
			scanf("%s",&sexo[c]);
			getchar();
			
			printf("\n");
			
			printf("Digite o peso da pessoa %i: ",c+1);
			scanf("%f", &peso[c]);
			printf("\n");
			
			if(sexo[c]!='m'&& sexo[c]!='f'){
				printf("Letra referente a sexo da pessoa %i invalida fa�a novamente\n\n",c+1);
				break;
			}
		}
		
			for(c=0; c<QTD; c++){
				//descobrindo media masculina
				if(tolower(sexo[c])=='m'){//tolower transforma em minusculo
				mediaIM+=idade[c];//media idade 
				mediaPM+=peso[c];// media peso
				}
					else{ //media femenina 
					mediaIF+=idade[c];//media idade 
					mediaPF+=peso[c];// media peso
					}
			}
			printf("M�dia de idade masculina: %.2f\n",mediaIM/QTD);
			printf("M�dia de peso masculina: %.2f\n",mediaPM/QTD);
			printf("M�dia de idade femenina: %.2f\n",mediaIF/QTD);
			printf("M�dia de peso femenina: %.2f\n",mediaPF/QTD);
			
			
			
		
			
	return 0; 
}

