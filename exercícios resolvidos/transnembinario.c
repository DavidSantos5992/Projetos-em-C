#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"");
		
		int res[100],num,i,bin,x=0,y=0;
		
		printf("Digite um numero inteiro: ");
		scanf("%i", &num);
		
		i = num;
			
			while(i != 0){// faça enquanto o numero é diferente de 0
				
				bin = i % 2;//resto da divisão 1 e 0 
				i = i / 2; //limite de vezes que o numero sera dividido "controlador de divisão"
				printf("divisoes feitas para chegar em binario\n");
				printf("%i \n",i);
				res[x] = bin;
				x++;// controladora
			}
				
				printf("O valor do binario é: \n");
				
				/* se não tiver o -1 aparece outros n na frente do bin*/
				
				for(x=x -1; x>=0; x--)//vai pegar a maior posiçao de x e ir diminuindo
				{
					printf("%i ", res[x]);
				}
	return 0;
}
