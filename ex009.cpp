/*ED-L1-EX09 [IMC]
Crie uma aplicação que calcula o IMC, a aplicação deverá solicitar o Peso 
e a Altura, e apresentar o resultado da operação.*/

#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float altura, peso, imc;
	
	printf("Digite sua altura: ");
	scanf("%f",&altura);
	
	printf("Digite seu peso: ");
	scanf("%f",&peso);
	
	imc = peso/(altura*altura);
	
	printf("Seu IMC corporal é: %.2f",imc);
	
}
