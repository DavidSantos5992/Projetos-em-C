#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {//* é um tipo
	int A;   /* variável do tipo inteira */
	int *P;  /* ponteiro para inteiro    */
	
	A = 125;
	P = &A;//passando o endereço de memoria de A (agr ambos apontam para o msm endereço)
	
	printf("Valor    A: %i \n", A);
	printf("Endereco A: %x \n", &A);//endereço de memoria da variavel A o endereço que P recebeu
	
	printf(" \n");
	printf("Conteudo P: %x \n", P);//conteudo de P é o endereço de A 
	printf("Endereco P: %x \n", &P);//endereço de P é alocado em outro lugar
	printf("Valor    P: %i \n", *P);// P recebeu o valor contido em A
	
	printf(" \n");
	*P = 10; //P e A apontam para o mesmo endereço
	printf("Valor    A: %i \n", A);
	printf("Endereco A: %i \n", &A);
	
	
	
	
	
	return 0;
}
