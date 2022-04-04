#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL,"");
	
	float nota, media, c=0, soma;
	
	printf("Este programa calcula a média da sala\nPara Interromper a conta e mostrar o resultado insira um número negativo\n");
	
	do
	{
		printf("Insira a Nota:");
		scanf("%f", &nota);
		
		c = c+1;
		
		if (nota>=0)
		{
			soma = soma + nota;
			media = soma / c;
		}
		
 	}while (nota>0);
	
	printf("A média é igual a: %.1f", media);
	
	return 0;
}
