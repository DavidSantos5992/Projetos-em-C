/*adicionar os impostos
e também margem de lucro sobre o valor de fábrica do veículo
solicitar 
o ANO de fabricação do veículo, o preço de fábrica e então acrescentar os impostos
e também o percentual de lucro, o preço final deverá estar acrescido dos 
itens mencionados.
a aplicação deverá exibir o valor original, 
o valor referente a cada imposto e também o valor de lucro, e por fim, deverá exibir o preço 
final(Todos os valores
 deverão ser calculados sobre o preço original do veículo.)
*/
#include<stdio.h>
#include<locale.h>

//usei void na linha de baixo pois n retorna valor assim posso manipular a função com comandos de fora
//nesta função vamos processar todas as porcentagens IPI, ICMS, LUCRO
//E MANDAR TODAS PARA O ARRAY DO TIPO FLOAT DECLARADO NO MAIN
//para ficar mais claro bom consultar o main,
// IPI[0]
// ICMS[1]
// LUCRO[2]
void calculartaxa(int ano_fabricacao,float porcentagem_taxa[]) 
{
	float teste;
	if(ano_fabricacao<=2000){
		porcentagem_taxa[0]=0.1; //IPI 10%
		porcentagem_taxa[1]=0.05; //ICMS 5%
		porcentagem_taxa[2]=0.25; //LUCRO 25%
	} 
		else if(ano_fabricacao>2000 & ano_fabricacao <=2010){
			porcentagem_taxa[0]=0.11; //IPI 11%
			porcentagem_taxa[1]=0.07; //ICMS 7%
			porcentagem_taxa[2]=0.20; //LUCRO 20%
		}
			else if(ano_fabricacao>2011){
			porcentagem_taxa[0]=0.13; //IPI 13%
			porcentagem_taxa[1]=0.07; //ICMS 7%
			porcentagem_taxa[2]=0.20; //LUCRO 20%
		}
}

int main()
{
	setlocale(LC_ALL,"");
	
	int anofab;
	float valorfab, taxa[3],ipi,icms,lucro, total;
	
	//entrada de dados
	printf("Digite o ano de fabricação: ");
	scanf("%i",&anofab);
	printf("\n");
	
	printf("Digite o custo de fabrica: ");
	scanf("%f",&valorfab);
	printf("\n");
	
	//após esta parte vai para a função usando um arrey para manipular
	calculartaxa(anofab,taxa);
	
	/*
		a aplicação deverá exibir o valor original, 
		o valor referente a cada imposto e também o valor de lucro, e por fim, deverá exibir o preço 
		final
	*/
	
	
	ipi = taxa[0]*valorfab;
	icms = taxa[1]*valorfab;
	lucro = taxa[2]*valorfab;

	printf("Valor de fabrica:%f",valorfab);
	printf("\n");
	printf("Valor de IPI:%f ",ipi);
	printf("\n");
	printf("Valor de ICMS:%f ",icms);
	printf("\n");
	printf("Valor de LUCRO:%f ",lucro);
	printf("\n");
	total=valorfab+ipi+icms+lucro;
	printf("Valor de venda:%.2f",total);
	return 0;
}
