#include<locale.h>
#include<stdio.h>

/*float pois a função retorna valor se n retornasse seria void*/ 
float calcular(int operacao, float n1, float n2)
{
	float resultado;
	
	switch(operacao){
		//Soma
		case 1:
			resultado = n1+n2;
			
		break;
		//Subtração
		case 2:
			resultado = n1-n2;
		break;
		//Divisão
		case 3:   
			resultado = n1/n2;
		break;
		//Multiplicação
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
	
	printf("Menu de operaçoes\n\n");
	printf("Escolha a operação que sera realizada\n");
	
	printf("1-) Soma\n");
	printf("2-) Subtração\n");
	printf("3-) Divisão\n");
	printf("4-) Multiplicação\n\n");
	
	printf("Digite a operação: ");
	scanf("%i",&operacao);
	printf("\n");
	
	printf("Numero a ser calculado: ");
	scanf("%f",&n1);
	printf("Numero a ser calculado: ");
	scanf("%f",&n2);
	printf("\n");

	resultado=calcular(operacao,n1,n2);//a ordem aqui é muito importante
	//primeiro ele ira entrar com a operação e depois com os numeros na ordem
	
	
	printf("%.2f", resultado);
	
	return 0;
}
