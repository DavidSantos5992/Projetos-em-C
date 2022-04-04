#include<stdio.h>
#include<locale.h>
/*Elabore um programa que leia dois n�meros reais do usu�rio e o tipo de opera��o desejada
para estes n�meros, conforme tabela abaixo. Feito isso o programa deve utilizar uma 
fun��o chamada calcular, que possuir� 3 par�metros, os dois primeiros s�o n�meros reais 
e o �ltimo � o tipo de opera��o desejada, a fun��o deve retornar o resultado do c�lculo escolhido.
O programa principal deve exibir o resultado da fun��o.
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
	
	
	printf("Menu de opera�oes\n\n");
	printf("Escolha a opera��o que sera realizada\n");
	
	printf("1-) Soma\n");
	printf("2-) Subtra��o\n");
	printf("3-) Divis�o\n");
	printf("4-) Multiplica��o\n\n");
	
	printf("Digite a opera��o: ");
	scanf("%i",&operacao);
	printf("\n");
	
	switch(operacao){
		//Soma
		case 1:
			resultado = n1+n2;
			printf("%.0f + %.0f = %.2f",n1,n2,resultado);
			
		break;
		
		//Subtra��o
		case 2:
			resultado = n1-n2;
			printf("%.0f - %.0f = %.2f",n1,n2,resultado);
		break;
		
		//Divis�o
		case 3:   
			resultado = n1/n2;
			printf("%.0f / %.0f = %.2f",n1,n2,resultado);
		break;
		
		//Multiplica��o
		case 4:
			resultado = n1*n2;
			printf("%.0f x %.0f = %.2f",n1,n2,resultado);
		break;	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

