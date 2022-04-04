#include<locale.h>
#include<stdio.h>

/*float pois a fun��o retorna valor se n retornasse seria void*/ 
float calcular(int operacao, float n1, float n2)
{
	float resultado;
	
	switch(operacao){
		//Soma
		case 1:
			resultado = n1+n2;
			
		break;
		//Subtra��o
		case 2:
			resultado = n1-n2;
		break;
		//Divis�o
		case 3:   
			resultado = n1/n2;
		break;
		//Multiplica��o
		case 4:
			resultado = n1*n2;
		break;	
	}
	return resultado;
}
int main()
{
	setlocale(LC_ALL,"");
	
	int operacao;
	float resultado, n1,n2;
	
	printf("Calculadora\n\n");
	
	printf("Menu de opera�oes\n\n");
	printf("Escolha a opera��o que sera realizada\n");
	
	printf("1-) Soma\n");
	printf("2-) Subtra��o\n");
	printf("3-) Divis�o\n");
	printf("4-) Multiplica��o\n\n");
	
	printf("Digite a opera��o: ");
	scanf("%i",&operacao);
	printf("\n");
	
	printf("Numero a ser calculado: ");
	scanf("%f",&n1);
	printf("Numero a ser calculado: ");
	scanf("%f",&n2);
	printf("\n");

	resultado=calcular(operacao,n1,n2);//a ordem aqui � muito importante
	//primeiro ele ira entrar com a opera��o e depois com os numeros na ordem
	
	
	printf("%.2f", resultado);
	
	return 0;
}
