#include<stdio.h>
#include<locale.h>


/*Crie uma aplica��o que dever� calcular o novo valor da menslidade, a 
aplica��o dever� solicitar do usu�rio o valor da mensalidade e tamb�m o 
dia em que ele deseja realizar o pagamento. Baseado nestas informa��es, 
caso o dia de pagamento esteja entre os dias 1~5 n�o dever� ocorrer nenhum 
ajuste de valor, se o dia de pagamento estiver entre 6~10 dever� ser 
calculado um acrescimo de 5% e se o dia estiver entre 11~20 dever� 
calcular 8%, e por fim, se o dia estiver entre 21~31 dever� ser calculado 
10% de juros. A aplica��o dever� apresentar no final do processamento, o 
valor original, o valor correspondente ao juros e tamb�m o valor final 
acrescido dos juros.*/

float PagamentoAluguel(int dia, float valor){


float valortotal=0;

	if(dia >=1 && dia <= 5)
	{
		printf("\nSem ajustes! ");
		valortotal=valor;
		printf("\nValor a ser pago: %.2f", valortotal);
	}
		
		if(dia>=6 && dia<=10)
		{
			printf("\nSua mensalidade ter� um acrescimo de 5%. ");
			valortotal=valor+(valor*0.05);
			printf("Valor a ser pago: %.2f", valortotal);
			
		}
		
				if(dia>=11 && dia<=200)
				{
					printf("\nSua mensalidade ter� um acrescimo de 5%. ");
					valortotal=valor+(valor*0.08);
					printf("\nValor a ser pago: %.2f", valortotal);
					}
					
							if(dia>=21 && dia<=31)
							{
								printf("\nSua mensalidade ter� um acrescimo de 5%. ");
								valortotal=valor+(valor*0.10);
								printf("\nValor a ser pago: %.2f", valortotal);
							}
}

int main ()
{
	setlocale(LC_ALL,"");
	
	int dia;
	float valor=0, valortotal=0;
	
	printf("Informe o valor da mensalidade: ");
	scanf("%f", &valor);
	
	printf("Informe o dia que deseja pagar: ");
	scanf("%i", &dia);
	
	valortotal =PagamentoAluguel(dia,valor);
	return 0;
}
