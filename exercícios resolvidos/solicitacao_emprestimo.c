/*A prefeitura de Algoritmol�ndia abriu uma linha de cr�dito para os funcion�rios estatut�rios.
O valor da presta��o n�o poder� ultrapassar 30% do sal�rio bruto. 
Fazer um algoritmo que permita entrar com o sal�rio bruto e o valor da presta��o, 
e informar se o empr�stimo pode ou n�o ser concedido*/

#include<stdio.h>
#include<locale.h>

int main()
{
	
	// presta��o n�o pode passar de 30% do salario 
	
	
	
	setlocale(LC_ALL,"");
	
	float salario, prestacao, maximo;
	
	printf("Digite o valor do salario: ");
	scanf("%f", &salario);
	
	printf("Digite o valor da presta��o: ");
	scanf("%f", &prestacao);
	
	maximo = salario*0.3;
	
	if (prestacao<=maximo)  // presta��o n�o pode passar de 30% do salario 
		{
			printf("Seu empr�stimo foi aprovado ");
		}
	else
		{
			printf("Empr�stimo negado ");
		}
	
	

	return 0;
}
