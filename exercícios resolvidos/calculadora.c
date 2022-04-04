#include<stdio.h>
#include<locale.h>
/*Elabore um programa que leia dois números reais do usuário e o tipo de operação desejada
para estes números, conforme tabela abaixo. Feito isso o programa deve utilizar uma 
função chamada calcular, que possuirá 3 parâmetros, os dois primeiros são números reais 
e o último é o tipo de operação desejada, a função deve retornar o resultado do cálculo escolhido.
O programa principal deve exibir o resultado da função.
Compatibilidade com o leitor de tela ativada.*/
int main()
{
	setlocale(LC_ALL,"");
	int operacao;
	float resultado, n1,n2;
	
	printf("Calculadora\n\n");
	
	
	printf("Numero a ser calculado: ");
	scanf("%f",&n1);
	printf("Numero a ser calculado: ");
	scanf("%f",&n2);
	printf("\n");
	
	
	printf("Menu de operaçoes\n\n");
	printf("Escolha a operação que sera realizada\n");
	
	printf("1-) Soma\n");
	printf("2-) Subtração\n");
	printf("3-) Divisão\n");
	printf("4-) Multiplicação\n\n");
	
	printf("Digite a operação: ");
	scanf("%i",&operacao);
	printf("\n");
	
	switch(operacao){
		//Soma
		case 1:
			resultado = n1+n2;
			printf("%.0f + %.0f = %.2f",n1,n2,resultado);
			
		break;
		
		//Subtração
		case 2:
			resultado = n1-n2;
			printf("%.0f - %.0f = %.2f",n1,n2,resultado);
		break;
		
		//Divisão
		case 3:   
			resultado = n1/n2;
			printf("%.0f / %.0f = %.2f",n1,n2,resultado);
		break;
		
		//Multiplicação
		case 4:
			resultado = n1*n2;
			printf("%.0f x %.0f = %.2f",n1,n2,resultado);
		break;	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

