/*ED-L1-EX09 [IMC]
Crie uma aplica��o que calcula o IMC, a aplica��o dever� solicitar o Peso 
e a Altura, e apresentar o resultado da opera��o.*/

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
	
	printf("Seu IMC corporal �: %.2f",imc);
	
}
