/*ED-L1-EX08 [COMBUST�VEL]
calcular o valor total a ser pago na compra de 
combust�vel levando em considera��o que o pre�o do �lcool comprado acima 
de 20 litros tem desconto de 3% e acima 40 litros desconto de 5% por litro 
e que a gasolina comprando acima de 15 litros ter� 3% de desconto e acima 
de 35 litros 6% de desconto.*/
#include<stdio.h>
#include<locale.h>

int main()
{

 		setlocale(LC_ALL,"");
	
		int combustivel;
		float valor_litro,desconto,qtd_litro;
		
	printf("Selecione o combustivel que foi usado para abastecer\n\n");
	printf("1-) Alcool \n");
	printf("2-) Gasolina \n\n");
	scanf("%i",&combustivel);
	
	printf("\n");
	
	printf("Qual valor pago por litro ?: ");
	scanf("%f",&valor_litro);
	
	printf("Qual total de litros colocado?: ");
	scanf("%f",&qtd_litro);
	
	//alcool comprado acimda de 20 litros tem desconto de 3%
	if(combustivel == 1 & qtd_litro>20 & qtd_litro<=40 ){
		desconto = valor_litro * 0.03;
		valor_litro = valor_litro - desconto;
		printf("Total a pagar por litro: %f",valor_litro);	
	}

		//acima de 40 litros desconto de 5%
		else if(combustivel == 1 & qtd_litro>40){
			desconto = (valor_litro * 0.05);
			valor_litro = valor_litro - desconto;
			printf("Total a pagar por litro: %f",valor_litro);
		}
			//gasolina acima de 15 litros desconto de 3%
			else if(combustivel == 2 & qtd_litro>15 & qtd_litro<=35){
					desconto = valor_litro * 0.03;
					valor_litro = valor_litro - desconto;
					printf("Total a pagar por litro: %f",valor_litro);	
					}
					
						//acima de 35 litros 6% 
						else if(combustivel == 2 & qtd_litro>35){
						desconto = valor_litro * 0.06;
						valor_litro = valor_litro - desconto;
						printf("Total a pagar por litro: %.2f",valor_litro);	
						}
			
							else{
								printf("Esta quantidade de litros n�o possue descontos");
							}
}
