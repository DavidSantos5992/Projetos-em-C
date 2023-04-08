#include<stdio.h>
#include<locale.h>
#define QTD 5

int PilhaLivros[QTD];
int tamanhovetor = QTD;
int topopilha = -1;

struct livro{
	int codigo;
	int titulo;
	float preco;
};

struct livro livros[QTD];
int c=-1;//precisa ser iniciado como -1 para ficar de acordo com topopilha

void iniciar()
{
	int	i;

	for(i=0; i<QTD; i++){
		livros[i].codigo=0;
		livros[i].titulo=0;
		livros[i].preco=0;
	}
}
void adicionar(struct livro *livros)
{
	int resp;
		
	c++;
		
	livros[c].codigo = livros[c-1].codigo+1; //exemplo posi 3 = posi [3-1ou seja posi 2]+1
	
	printf("\nSelecione o genero\n");	
	printf("\n1-) Terror \n");	
	printf("2-) Romance \n");
	printf("3-) Drama \n\n");
	scanf("%i",&livros[c].titulo);
		
	printf("\nDigite valor: ");
	scanf("%f",&livros[c].preco);
}
void empilhar(struct livro *livros)
{
	if(topopilha == tamanhovetor -1){
		printf("Pilha cheia");
	}
	else{
		adicionar(livros);//chamando a função adicionar 
		
		topopilha = topopilha+1;
		livros[topopilha].titulo;
		livros[topopilha].preco;
		livros[topopilha].codigo;
		printf("Empilhado na posição: %i\n",topopilha);
	}
}
void desempilhar (struct livro *livros)
{
	if(topopilha==-1){
		printf("Pilha vazia");
	}else{
		topopilha = topopilha-1;
		printf("Desempilhado posição: %i \n",topopilha);
	}
}
void imprimir_pilha(struct livro *livros)
{
	int teto=-1;
	
	if(topopilha==-1){
		printf("Pilha vazia");
	}
	else{
	  	for(teto=topopilha; teto>=0; teto--){
	  		printf(" \nPosi %i Genero %i\n", teto, livros[teto].titulo);
	  	 	printf(" Posi %i Codigo %i\n", teto, livros[teto].codigo);
		 	printf(" Posi %i valor %f\n\n", teto, livros[teto].preco);
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
