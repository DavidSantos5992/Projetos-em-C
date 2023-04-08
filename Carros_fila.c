#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#define QTD 2

struct carros{
char placa[8];
char modelo[15];
float preco;
};

//variaveis para fila
struct carros veiculos[QTD];
int Vinicio = -1;
int Vfinal = -1;
int vetortotal = 0;
//variaveis auxiliares para manipulação
int Vtamanho = QTD;//
////////////////////

void inicializar(struct carros *veiculos){
	int i = 0;

	for (i = 0; i < Vtamanho; i++){
		veiculos[i].preco = -1;
		strcpy(veiculos[i].placa, "NULL");//todos nomes receberam null
		strcpy(veiculos[i].modelo, "NULL");
	}
}
void enfileirar(struct carros *veiculos, char placa[8], char modelo[15],float preco){	
//	 Primeiro If Confirma se a Fila está cheia ou não:
	if(vetortotal == Vtamanho){
	    printf("Fila cheia! \n");
	} else {
		if(Vfinal == -1){
			   Vfinal = 0;
			   Vinicio = 0;
		} else {
			if (Vfinal == (Vtamanho-1)){
				Vfinal = 0;
			} else {
				Vfinal = Vfinal+1;
			}
		}
		
			veiculos[Vfinal].preco = preco;
			strcpy(veiculos[Vfinal].placa,placa);
			strcpy(veiculos[Vfinal].modelo,modelo);
			vetortotal = vetortotal +1;
			printf("Carro enfileirado! \n");
		}
	}
void desenfileirar(){
	if(vetortotal == 0){
	   printf("Fila vazia! \n");
	} else {
		if (Vinicio == (Vtamanho-1)){
			Vinicio =0;
		} else {
			Vinicio = Vinicio +1;
		} 
		
		vetortotal = vetortotal -1;
		
		if(vetortotal == 0){
			Vinicio = -1;
			Vfinal = -1;
		}
		
		printf("ALUNO desenfileirado! \n");
	}
}
void imprimir(struct carros *veiculos){
	
	int p = Vinicio;
	int i = 0;

	printf("Inicio fila   : %i; \n", Vinicio);
	printf("Final fila    : %i; \n", Vfinal);
	printf("Quantidade de carros: %d; \n\n", vetortotal);
	printf("\n");
	
	for (i = 0; i < Vtamanho; i++) {
			printf("\nPOSICAO %d: \nPlaca: %s:  \nModelo: %s: \nPreço: %.2f \n", p, veiculos[p].placa, veiculos[p].modelo, veiculos[p].preco);
		
		if (p == (veiculos[p].preco - 1)) {
			p = 0;
		} else {
			p = p + 1;
		}
	}
	
}
void maiorValor(){
	int i, posi;
	float maior = -1;
	
	for (i = 0; i < Vtamanho; i++) {
	if (veiculos[i].preco > maior){
		maior = veiculos[i].preco;
		posi = i;
	}
 }
	printf("O maior valor do vetor pertence a posição %i e é de R$ %.2f \n", posi, maior);
}
void soma (){
	int i;
	float total;
	
	for (i = 0; i < Vtamanho; i++) { 
		total = total + veiculos[i].preco;
	}
	printf("O valor total é de R$%.2f", total);
}
void pesquisaPlaca(){
	char placa[8];
	int i;
	
	printf("Insira a placa que deseja procurar: ");
	gets(placa);
	
	for (i = 0; i < Vtamanho; i++) {
		if (strcmp(placa, veiculos[i].placa) == 0){
			printf("Placa encontrada na posição: %i \n", i);
		}
	}
}
int main(int argc, char *argv[])
{
	setlocale(LC_ALL,"");
	int opc;
	char placa[8];
	char modelo[15];
	float preco;
	inicializar(veiculos);	
	
	while(opc!=99){
	printf("\n\n");
	printf("****** MENU DE CARROS ******** \n\n");
	printf("1-) ENFILEIRAR \n");
	printf("2-) DESEMFILEIRAR \n"); 
	printf("3-) IMPRIMIR \n");
	printf("4-) IMPRIMIR MAIOR VALOR\n");
	printf("5-) SOMAR VALORES\n");
	printf("6-) Pesquisar placa \n");
	printf("9-) Sair do programa \n");
	printf("99-) Sair \n\n");
	printf("Digite a opção desejada: ");
	scanf("%i",&opc);
	printf("\n");
	
	if(opc==1){
		printf("Digite a placa: ");
		scanf("%s", &placa);
		printf("Digite o modelo: ");
		scanf("%s", &modelo);
		printf("Digite o Preço: ");
       	scanf("%f", &preco);
		
		enfileirar(veiculos,placa,modelo,preco);
    	}
		  else if(opc == 2){
			desenfileirar(veiculos);
		}
		  else if(opc == 3){
				imprimir(veiculos);
		} else if(opc == 4){
				maiorValor();
		} else if(opc == 5){
			       soma();
		} else if(opc == 6){
		    pesquisaPlaca();
		}
	}
}





