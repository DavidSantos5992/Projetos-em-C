/*A padaria Docinho de Coco vende uma certa quantidade de p�es franceses e uma quantidade de broas a cada dia. 
Cada p�ozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou com a 
venda dos p�es e broas (juntos), e quanto deve guardar numa conta poupan�a (10% do total arrecadado). 
Voc� foi contratado para fazer os c�lculos para o dono. Com base nestes fatos, fa�a um programa para ler as 
quantidades de p�es e de broas, e depois calcular os dados solicitados.*/

#include<stdio.h>
#include<locale.h>


int main()
{
	setlocale(LC_ALL,"");
	float pao, broa, soma, poupar;
	
	printf("Quantos p�es foram vendidos ? \n");
	scanf("%f", &pao);
	
	printf("Quantas broas foram vendidas ? \n");
	scanf("%f", &broa);
	
	soma = pao*0.12 + broa*1.5;

	poupar = 0.1 *soma; // perguntar o pq de desta forma n�o ir 10/100*soma
	
	printf("A padaria Docinho de Coco lucrou R$%.2f entre p�es e broas \n", soma);
	
	
	printf("Voc� deve investir deste valor um total de R$%.2f\n", poupar);
	
	 
	
	
	
	return 0;
}
 
