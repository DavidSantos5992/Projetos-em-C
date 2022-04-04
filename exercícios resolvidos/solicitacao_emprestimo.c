/*A prefeitura de Algoritmolândia abriu uma linha de crédito para os funcionários estatutários.
O valor da prestação não poderá ultrapassar 30% do salário bruto. 
Fazer um algoritmo que permita entrar com o salário bruto e o valor da prestação, 
e informar se o empréstimo pode ou não ser concedido*/

#include<stdio.h>
#include<locale.h>

int main()
{
	
	// prestação não pode passar de 30% do salario 
	
	
	
	setlocale(LC_ALL,"");
	
	float salario, prestacao, maximo;
	
	printf("Digite o valor do salario: ");
	scanf("%f", &salario);
	
	printf("Digite o valor da prestação: ");
	scanf("%f", &prestacao);
	
	maximo = salario*0.3;
	
	if (prestacao<=maximo)  // prestação não pode passar de 30% do salario 
		{
			printf("Seu empréstimo foi aprovado ");
		}
	else
		{
			printf("Empréstimo negado ");
		}
	
	

	return 0;
}
