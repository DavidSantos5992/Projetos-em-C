#include<stdio.h>
#include<locale.h>
//entrar com numeros e apresentar eles invertidos
#define QTD 3//definindo uma constante

int main()
{
	setlocale(LC_ALL,"");
	
	int n[QTD],c;
	
	for(c=0; c<QTD; c++){//definindo c=0 c<que constante e incrementando 1 em c toda vez que passa pelo la�o
		printf("Entre com um numero: ");
		scanf("%i",&n[c]);
		}
		
	for(c=QTD-1; c>=0; c--){//para apresentar os valores ao contrario definimos c=QTD que � o maior valor
	//enquanto c for >= o la�o se repete e o c-- � para subtrairmos -1 do maior valor sempre que passar 
	// pelo la�o, esta c=QTD-1 QTD vale 3 ent�o no la�o fica representado 2 - 1 depois 1-1 e por fim chegando
	//em 0 dando assim os passos suficientes que queremos 
		printf("Numeros inversos: %i\n",n[c]);
		
		}
	return 0;
}
