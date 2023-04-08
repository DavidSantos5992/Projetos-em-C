#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#define QTD 2

struct aluno{
	int ra;
	char nome[10];
};
//variaveis para fila
struct aluno VetorRA[QTD];
int Vinicio = -1;
int Vfinal = -1;
int vetortotal = 0;
//variaveis auxiliares para manipulação
int Vtamanho = QTD;

void inicializar(struct aluno *VetorRA) {
	int i = 0;

	for (i = 0; i < Vtamanho; i++) {
		VetorRA[i].ra = -1;
		strcpy(VetorRA[i].nome, "NULL");
	}
}
void enfileirar(struct aluno *VetorRA, int RA, char nome[10]){
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
		
		VetorRA[Vfinal].ra = RA;
		strcpy(VetorRA[Vfinal].nome, nome);
		vetortotal = vetortotal +1;
		printf("ALUNO enfileirado! \n");
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
void imprimir(struct aluno *VetorRA) {
	int p = Vinicio;
	int i = 0;
	
	printf("Inicio fila   : %d; \n", Vinicio);
	printf("Final fila    : %d; \n", Vfinal);
	printf("Quantidades de ra : %d; \n\n", vetortotal);
	
	for (i = 0; i<Vtamanho; i++){
		printf("POSICAO %d: RA: %d - NOME: %s; \n", p, VetorRA[p].ra, VetorRA[p].nome);
		
		if (p == (Vtamanho -1)){
			p = 0;
		} else {
			p = p +1;
		}
	}
}
int main(int argc, char *argv[])
{
	setlocale(LC_ALL,"");
	int opc;
	int VRA;
	char Vnome[10];
	inicializar(VetorRA);
	
	while(opc!=99){
	printf("\n\n");
	printf("****** MENU DE LIVROS ******** \n\n");
	printf("1-) ENFILEIRAR \n");
	printf("2-) DESEMFILEIRAR \n"); 
	printf("3-) Imprimir \n"); 
	printf("99-) Sair \n\n");
	printf("Digite a opção desejada: ");
	scanf("%i",&opc);
	printf("\n");
	
	
	if(opc==1){
		printf("Digite o ra: ");
		scanf("%i", &VRA);
		printf("Digite o nome: ");
		scanf("%s", &Vnome);
		
		enfileirar(VetorRA, VRA, Vnome);
	}
		else if(opc==2){
			desenfileirar();
		}
			else if(opc==3){
				imprimir(VetorRA);
				
		}
	}

}




