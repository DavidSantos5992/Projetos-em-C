#include<stdio.h>
#include<locale.h>

/*
Em um determinado mercado o pre�o normal de venda de um produto � dado pelo valor de custo acrescido de 40%.
Cada produto possui um tipo (1 - Perec�vel, 2 - N�o perec�vel). 
Al�m disso, o mercado trabalha com promo��es, conforme descriminado abaixo:

PRODUTOS PEREC�VEIS

Promo��o 1
Crit�rio: Valor de venda maior que R$20,00
Desconto: 20%

Promo��o 2
Crit�rio: Valor de venda maior que R$10,00 e menor ou igual a R$20,00
Desconto: 10%

Promo��o 3
Crit�rio: Outros valores de venda
Desconto: 15%

PRODUTOS N�O PEREC�VEIS

Promo��o 4
Crit�rio: Valor de venda maior que R$50,00
Desconto: 5%

Escreva um programa que leia o valor de custo de um produto e seu tipo. 
Atrav�s das informa��es acima, calcule e imprima o valor total do produto e a promo��o que ele se enquadrou. 
Caso o produto n�o se enquadre nas promo��es acima, imprima �Promo��o 0�.
*/

int main()
{
	setlocale(LC_ALL,"");
	
	int produto;
	float preco, custo, venda, promo1,promo2,promo3,promo4;
	
	printf("Digite qual tipo de produto voc� comprou\n");
	printf("1) Perec�vel\n");
	printf("2) N�o perec�vel\n\n");
	scanf("%i",&produto);

	printf("\n");

	printf("Digite o valor de custo do produto: ");
	scanf("%f",&custo);
	printf("\n");
//	valor de venda � o valor de custo +40%
	
	venda = custo * 0.4 + custo;
	
	
	// Promo��o 1 PEREC�VEIS Valor de venda maior que R$20,00 Desconto: 20%
	if(venda>20 && produto==1)
	{
		promo1= venda*0.2;
		venda= venda-promo1;
		printf("Valor de venda do produto: %.2f\n", venda);
		printf("Se enquadrando dentro da promo��o 1");	
	}
	else{
		// Promo��o 2 Valor venda maior que R$10,00 e menor ou igual a R$20,00 Desconto: 10%
		if(venda>10 && venda<=20 && produto==1) 
		{
			promo2=venda*0.1;
			venda=venda-promo2;
			printf("Valor de venda do produto: %.2f\n", venda);
			printf("Se enquadrando dentro da promo��o 2");
		}
		else
		{
			//	Promo��o 3 Outros valores de venda Desconto: 15%
			if(produto==1)
			{
				promo3=venda/100*15;
				venda=venda-promo3;
				printf("Valor de venda do produto: %.2f\n", venda);
				printf("Se enquadrando dentro da promo��o 3");
			}
			else
			{
					//Promo��o 4 N�O PEREC�VEIS Valor venda maior que R$50,00 Desconto: 5%
					if(venda>50&&venda<2147483648 && produto==2)
				{
					promo4=venda/100*5;
					venda=venda-promo4;
					printf("Valor de venda do produto: %.2f\n", venda);
					printf("Se enquadrando dentro da promo��o 4");
				}
				else
				{
					if(produto==2)
						{
						printf("Valor de venda do produto: %.2f\n", venda);
						printf("Promo��o: 0");
						}
						else
						{
								{
							printf("Tipo de produto invalido");
						}
						}
				}
			}
		}
	
	}
		
		
	return 0;
}
