#include<locale.h>
#include<stdio.h>
//fun�oes  
int somar(int a, int b )// precisa colocar o tipo e o nome da variavel
{
	int c;
	c = a+b;
	return c; ///retornando o valor do reultado
}

int main()
{
	setlocale(LC_ALL,"");
	int resultado;
	//usando fun��o de 2 jeitos diferentes 
	printf("usando fun��o 1: %i\n", somar(1,1));
	
	resultado = somar(5,5)+10;
	
	printf("usando fun��o 2: %i",resultado);
	
	
	return 0;
}
