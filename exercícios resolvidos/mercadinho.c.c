#include<stdio.h>
#include<locale.h>

/*
Em um determinado mercado o preço normal de venda de um produto é dado pelo valor de custo acrescido de 40%.
Cada produto possui um tipo (1 - Perecível, 2 - Não perecível). 
Além disso, o mercado trabalha com promoções, conforme descriminado abaixo:

PRODUTOS PERECÍVEIS

Promoção 1
Critério: Valor de venda maior que R$20,00
Desconto: 20%

Promoção 2
Critério: Valor de venda maior que R$10,00 e menor ou igual a R$20,00
Desconto: 10%

Promoção 3
Critério: Outros valores de venda
Desconto: 15%

PRODUTOS NÃO PERECÍVEIS

Promoção 4
Critério: Valor de venda maior que R$50,00
Desconto: 5%

Escreva um programa que leia o valor de custo de um produto e seu tipo. 
Através das informações acima, calcule e imprima o valor total do produto e a promoção que ele se enquadrou. 
Caso o produto não se enquadre nas promoções acima, imprima “Promoção 0”.
*/

int main()
{
	setlocale(LC_ALL,"");
	
	int produto;
	float preco, custo, venda, promo1,promo2,promo3,promo4;
	
	printf("Digite qual tipo de produto você comprou\n");
	printf("1) Perecível\n");
	printf("2) Não perecível\n\n");
	scanf("%i",&produto);

	printf("\n");

	printf("Digite o valor de custo do produto: ");
	scanf("%f",&custo);
	printf("\n");
//	valor de venda é o valor de custo +40%
	
	venda = custo * 0.4 + custo;
	
	
	// Promoção 1 PERECÍVEIS Valor de venda maior que R$20,00 Desconto: 20%
	if(venda>20 && produto==1)
	{
		promo1= venda*0.2;
		venda= venda-promo1;
		printf("Valor de venda do produto: %.2f\n", venda);
		printf("Se enquadrando dentro da promoção 1");	
	}
	else{
		// Promoção 2 Valor venda maior que R$10,00 e menor ou igual a R$20,00 Desconto: 10%
		if(venda>10 && venda<=20 && produto==1) 
		{
			promo2=venda*0.1;
			venda=venda-promo2;
			printf("Valor de venda do produto: %.2f\n", venda);
			printf("Se enquadrando dentro da promoção 2");
		}
		else
		{
			//	Promoção 3 Outros valores de venda Desconto: 15%
			if(produto==1)
			{
				promo3=venda/100*15;
				venda=venda-promo3;
				printf("Valor de venda do produto: %.2f\n", venda);
				printf("Se enquadrando dentro da promoção 3");
			}
			else
			{
					//Promoção 4 NÃO PERECÍVEIS Valor venda maior que R$50,00 Desconto: 5%
					if(venda>50&&venda<2147483648 && produto==2)
				{
					promo4=venda/100*5;
					venda=venda-promo4;
					printf("Valor de venda do produto: %.2f\n", venda);
					printf("Se enquadrando dentro da promoção 4");
				}
				else
				{
					if(produto==2)
						{
						printf("Valor de venda do produto: %.2f\n", venda);
						printf("Promoção: 0");
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
