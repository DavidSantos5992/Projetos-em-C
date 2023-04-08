#include<stdio.h>
#include<locale.h>

int vetoridades[5];
int tamanhovetor = 5;
int topopilha = -1;

void empilhar(int idade, int*vetoridades){//aqui esta passando a idade inserida no main para a posição x do vetor
 		if(topopilha == tamanhovetor -1){
 			printf("Pilha cheia");// se o topo for igual ao tamanho do vetor -1 pilha cheia 
		 }
		 	else{
		 		topopilha = topopilha+1;//topo recebe ele mesmo +1 indo para a proxima posição
		 		vetoridades[topopilha] = idade;//vetoridades posição topopopilha recebe idade passada la em cima na função
		 		printf("Empilhado na posição: %i",topopilha);
			 }
}
void desempilhar()
{
	if(topopilha==-1){
		printf("Pilha vazia");
	}
		else{
			topopilha = topopilha-1;//mudo o valor do topo pilha, fazendo ele assumir uma posição menor no vetor,equivalendo remoção
			printf("Desempilhado posicao: %i \n", topopilha+1);// se não ele vai marcar desempilhado até a posição -1 para o usuario
		}
}
void imprimir_pilha(int *vetoridades)
{
	int teto=-1;//variavel para controlar o topo
	if(topopilha==-1){
		printf("Pilha vazia");
	}
	  else{
	  		for(teto=topopilha; teto>=0; teto--){
			  //jogo topo para a variavel teto enquanto teto for >= eu decremento para imprimir
	  		 //n posso mexer no valor do topo só quem pode é o empilhar e o desempilhar
	  		 	printf("Posicao: %i - valor: %i; \n", teto, vetoridades[teto]);
			  }
	  }
}
int main(int argc, char*argv[])
{
	setlocale(LC_ALL,"");
	int opc,idade;
	
	while (opc != 9) {
		printf(" \n\n");
		printf(":: PILHA DE IDADES :: \n");
		printf("1-) empilhar           \n");
		printf("2-) desempilhar        \n");
		printf("3-) imprimir           \n");
		printf("9-) Sair               \n");
		printf("Digite a opcao desejada: ");
		
		scanf("%d", &opc);
			
			if(opc==1){
				printf("Digite uma idade: ");	
				scanf("%i", &idade);
				empilhar(idade,vetoridades);
			}
			 else if(opc==2){
				desempilhar();
			}
					else if(opc==3){
						imprimir_pilha(vetoridades);
				}
		}
	return 0;
}


