#include<stdio.h>
#include<locale.h>
/*Criar um algoritmo que leia um n�mero inteiro entre 1 e 12 e escrever o m�s correspondente. 
Caso o usu�rio digite um n�mero fora desse intervalo,
 dever� aparecer uma mensagem informando que n�o existe m�s com este n�mero.
*/
int main()
{
	setlocale(LC_ALL,"");
	int mes;
	
	printf("Digite um numero correspondente a um m�s, sabendo que Janeiro � Um : ");
	scanf("%i",&mes);
	switch(mes)
	{
		case 1:
			printf("Janeiro");
			break;
		case 2:
			printf("Fevereiro");
			break;
		case 3:
			printf("Mar�o");
			break;		
		case 4:
			printf("Abril");
			break;	
		case 5:
			printf("Maio");
			break;	
		case 6:
			printf("Junho");
			break;	
		case 7:
			printf("Julho");
			break;	
		case 8:
			printf("Agosto");
			break;	
		case 9:
			printf("Setembro");
			break;	
		case 10:
			printf("Outubro");
			break;	
		case 11:
			printf("Novembro");
			break;	
		case 12:
			printf("Dezembro");
			break;	
		default:
			printf("Numero digitado invalido");	
			
			
	}
	
	return 0;
}
