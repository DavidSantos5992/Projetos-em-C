#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {//* � um tipo
	int A;   /* vari�vel do tipo inteira */
	int *P;  /* ponteiro para inteiro    */
	
	A = 125;
	P = &A;//passando o endere�o de memoria de A (agr ambos apontam para o msm endere�o)
	
	printf("Valor    A: %i \n", A);
	printf("Endereco A: %x \n", &A);//endere�o de memoria da variavel A o endere�o que P recebeu
	
	printf(" \n");
	printf("Conteudo P: %x \n", P);//conteudo de P � o endere�o de A 
	printf("Endereco P: %x \n", &P);//endere�o de P � alocado em outro lugar
	printf("Valor    P: %i \n", *P);// P recebeu o valor contido em A
	
	printf(" \n");
	*P = 10; //P e A apontam para o mesmo endere�o
	printf("Valor    A: %i \n", A);
	printf("Endereco A: %i \n", &A);
	
	
	
	
	
	return 0;
}
