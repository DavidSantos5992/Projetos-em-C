#include <stdio.h>
#include <stdlib.h>
//pilha de idades 

// Tde: Defini��o do elemento que ser� empilhado.
struct tdeElemento {//tipo de dado estruturado

	int idade;
	
	//ponteiro liga��o
	struct tdeElemento *no;//n� entre o elemento tdeElemento
};

// Defini��o de tipos
typedef struct tdeElemento *tipoPilha; // ponteiro do tipo tde elemento (n�)
typedef tipoPilha pilha;               // Defini��o tipo: 'pilha' baseada em tipo Ponteiro.
int contidade=0;
//topoPilha do tipo pilha que tem n� com tdeElemento.
//tem como fun��o controlar quem esta no topo da pilha 
pilha topoPilha;

//inicializa��o
tipoPilha* criar(pilha p){//pilha que sera trabalhada
	p = NULL;//apontando para lugar nem um
	
	return p;//retorna o p que � ponteiro de null
}

//empilhar
tipoPilha* empilhar(int vidade, pilha vtopo){//passando idade e pilha que sera trabalhada

	pilha elemento;//elemento tipo pilha
	
	//malloc solicita memoria
	elemento = malloc(sizeof(tipoPilha));//sizeof-> do tamanho (tipoPilha)
	elemento->idade = vidade;//idade que sera armazenada
	elemento->no = vtopo;//n� de elemento aponta topo
	
	return elemento;//****//
}

// Tda: M�todo respons�vel por desempilhar um elemento da pilha. 
tipoPilha* desempilhar(pilha vtopo) {//quando esta assim ele retorna um ponteiro para o elemento 
	pilha aux;//aulxiliar para n mexer direto no topo
	
	if (vtopo == NULL)	 {
		printf("Pilha vazia! \n");
		
		return;
	} else {
		aux = vtopo;//aux = topo para limpar a memoria dela depois
		
		aux = vtopo->no;// aux = topo n�
		free(vtopo);//limpando topo
		
		return aux;//retornando aux
	}	
}

// Tda: M�todo respons�vel por exibir os valores da pilha.
void imprimir (pilha vtopo) {
	pilha aux;
	
	if (vtopo == NULL)	 {
		printf("Pilha vazia! \n");
	} else {
		aux = vtopo;//mexendo com a aux para n bagun�ar a variavel topo
		
		//enquando auxiliar for diferente de null imprimo na tela
		while (aux != NULL) {
				printf("%d \n", aux->idade);
				aux = aux->no;//aux=aux->endere�o do px elemento
				contidade=contidade+1;
		}
	}
}

// Tda: M�todo respons�vel por responder se a Pilha est� vazia.
int vazia (pilha vtopo) {
	{
	pilha aux;
	
	if (vtopo == NULL)	 {
		return 1;
	} else {
		return 0;
		}
	}
}

// Tda: M�todo respons�vel por exibir o elemento do topo.
void topo (pilha vtopo) {
	
		pilha aux;
	
	if (vtopo == NULL)	 {
		printf("Pilha vazia! \n");
	} else {
		aux = vtopo;//mexendo com a aux para n bagun�ar a variavel topo
		
		printf("presente no topo: %d \n", aux->idade);
		
	}
}

// Tda: M�todo respons�vel por exibir o n�mero de elementos da pilha.
int numeroElementos(pilha vtopo) {
	contidade=0; //toda vez que o metodo for chamado contidade � zerado
	
	pilha aux;
	
	if (vtopo == NULL)	 {
		printf("Pilha vazia! \n");
	} else {
		aux = vtopo;
		
		//enquando auxiliar for diferente de null conto na tela
		while (aux != NULL) {
				aux = aux->no;//aux=aux->endere�o do px elemento
				contidade=contidade+1;
		}
			printf("Quantidade de elementos na pilha: %i",contidade);
	}
}


int main(int argc, char *argv[]) {
	int opc = 0;
	
	topoPilha = criar(topoPilha);//inicializando
	
	while (opc != 9) {
		printf("\n");
		printf(":: PILHA IDADES :: \n");
		printf("1. Empilhar        \n");
		printf("2. Desempilhar     \n");
		printf("3. Imprimir        \n");
		printf("4. Vazia \n");
		printf("5. topo \n");
		printf("6. Numero de elementos na pilha \n");
		printf("9. Sair \n");
		printf("Digite a opcao desejada: ");
		
		scanf("%d", &opc);
		
		if (opc == 1) {
			int idade;
			printf("Digite uma idade:");
			scanf("%d", &idade);
			topoPilha = empilhar(idade, topoPilha);
			
		} else if (opc == 2) {
			topoPilha = desempilhar(topoPilha);	
			
		} else if (opc == 3) {			
			imprimir(topoPilha);
			
		} else if (opc == 4) {			
			vazia(topoPilha);

		}	else if (opc == 5) {			
			topo(topoPilha);

		} 	else if (opc == 6) {			
			numeroElementos(topoPilha);

		} 	
					
	}
		
	return 0;
}


