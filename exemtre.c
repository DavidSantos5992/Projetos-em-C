#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#define QTD 2

struct aluno{
	int ra;
	char nome[10];
	char curso[10];
	int assunto;
};

struct aluno controle[QTD];

int Vinicio = -1;
int Vfinal = -1;
int vetortotal = 0;
//variaveis auxiliares para manipulação
int Vtamanho = QTD;

void inicializar(struct aluno *controle) {
	int i = 0;

	for (i = 0; i < Vtamanho; i++) {
		controle[i].ra = -1;
		strcpy(controle[i].nome, "NULL");
		strcpy(controle[i].curso, "NULL");
		controle[i].assunto;
	}
}

int main(int argc, char *argv[])
{
	setlocale(LC_ALL,"");
	int opc;
	int Vra;
	char Vnome[10];
	char Vcurso[10];
	int Vassunto;
	inicializar(controle);
	
	while(opc!=99){
	printf("\n\n");
	printf("****** MENU DE LIVROS ******** \n\n");
	printf("1-) ADICIONAR \n");
	printf("2-) ATENDER \n"); 
	printf("3-) IMPRIMIR \n"); 
	printf("4-) NUMERO ALUNOS POR ASSUNTO \n"); 
	printf("5-) ASSUNTO COM MAIOR NUMERO DE ALUNOS \n"); 
	printf("99-) Sair \n\n");
	printf("Digite a opção desejada: ");
	scanf("%i",&opc);
	printf("\n");
	
	if(opc==1){
		printf("Digite o ra: ");
		scanf("%i", &Vra);
		printf("Digite o nome: ");
		scanf("%s", &Vnome);
		getchar();
		printf("Digite o nome do curso: ");
		scanf("%s", &Vcurso);
		printf("Selecione o assunto a ser traado\n");
		printf("\n1-)Matricula\n");
		printf("2-)Financeiro\n");
		printf("3-)Protocolo\n");
		scanf("%i", &Vassunto);
		
	//	enfileirar(Vra, Vnome, Vcurso,Vassuto);
	}
		else if(opc==2){
		//	desenfileirar();
		}
			else if(opc==3){
		//		imprimir(VetorRA);
				
		}
	}

}


