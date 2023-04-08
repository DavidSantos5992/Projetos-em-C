#include<stdio.h>
#include<locale.h>
#include<string.h>
#define QTD 2

struct livro{
	int codigo;
	char titulo[20];
	float preco;
};
struct livro livros[QTD];
int topopilha = -1, cont = 0;

void iniciar()
{
	int	i;

	for(i=0; i<QTD; i++){
		livros[i].codigo=0;
		strcpy(livros[i].titulo,"NULL");//todas posi recebem null
		livros[i].preco=0;
	}
}
void empilhar(struct livro *livros){
	if (topopilha == QTD - 1) {
		printf("Pilha cheia \n");
	} else {
		cont = cont + 1;
		topopilha = topopilha + 1;
		livros[topopilha].codigo=cont;
		
		printf("Livro Codigo: %i \n", livros[topopilha].codigo);
		getchar();// se não vai ver duas linhas
		
		printf("Insira o titulo do livro: ");
		gets(livros[topopilha].titulo);
		
		printf("Insira o preço do livro: ");
		scanf("%f", &livros[topopilha].preco);
	}
}
void desempilhar(struct livro *livros) {
	
	if (topopilha == -1) {
		printf("Pilha vazia \n");
	} else {
		printf("Removido da Posição %i", topopilha);
		topopilha -= 1;
	}
}
void imprimir_pilha(struct livro *livros){
	if (topopilha == -1) {
		printf("Pilha vazia \n");
	} else {
		int i;
		for (i = topopilha; i > -1; i--) {
			printf("Código: %i \n", livros[i].codigo);
			printf("Título do livro: ");
			puts(livros[i].titulo);
			printf("Preço: %.2f", livros[i].preco);
		}
	}
}
int main(int argc, char *argv[])
{
	setlocale(LC_ALL,"");
	iniciar(livros);
	int opc;

	while(opc!=99){
	printf("\n\n");
	printf("** MENU DE LIVROS **** \n\n");
	printf("1-) Empilhar \n");
	printf("2-) Desempilhar \n"); 
	printf("3-) Imprimir \n"); 
	printf("99-) Sair \n\n");
	printf("Digite a opção desejada: ");
	scanf("%i",&opc);
	printf("\n");
	
if(opc==1){
	empilhar(livros);
}
	else if(opc==2){
		desempilhar(livros);
	}
		else if(opc==3){
			imprimir_pilha(livros);
		}	
	}
}
