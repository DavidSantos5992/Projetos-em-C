/*adicionar os impostos
e tamb�m margem de lucro sobre o valor de f�brica do ve�culo
solicitar 
o ANO de fabrica��o do ve�culo, o pre�o de f�brica e ent�o acrescentar os impostos
e tamb�m o percentual de lucro, o pre�o final dever� estar acrescido dos 
itens mencionados.
a aplica��o dever� exibir o valor original, 
o valor referente a cada imposto e tamb�m o valor de lucro, e por fim, dever� exibir o pre�o 
final(Todos os valores
 dever�o ser calculados sobre o pre�o original do ve�culo.)
*/
#include<stdio.h>
#include<locale.h>

//usei void na linha de baixo pois n retorna valor assim posso manipular a fun��o com comandos de fora
//nesta fun��o vamos processar todas as porcentagens IPI, ICMS, LUCRO
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
	printf("Digite o ano de fabrica��o: ");
	scanf("%i",&anofab);
	printf("\n");
	
	printf("Digite o custo de fabrica: ");
	scanf("%f",&valorfab);
	printf("\n");
	
	//ap�s esta parte vai para a fun��o usando um arrey para manipular
	calculartaxa(anofab,taxa);
	
	/*
		a aplica��o dever� exibir o valor original, 
		o valor referente a cada imposto e tamb�m o valor de lucro, e por fim, dever� exibir o pre�o 
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
