#include<stdio.h>
#include<locale.h>
#define QTD 4

	int ra[QTD];
	
void adicionar(int ra[QTD])
{

	int c;
	
		for(c=0; c<QTD; c++){	
			printf("Digite o R.A da posi��o %i: ",c);
			scanf("%i",&ra[c]);
		}
}

void remover(int ra[QTD])
{
	int remove_ra,c,resp;
	
			do{
			printf("Digite o R.A que deseja remover: ");
			scanf("%i",&remove_ra);
			printf("\n");
			
				for(c=0; c<QTD; c++){
					if(ra[c]==remove_ra){
						ra[c]= -1;
				}	
			}
			printf("Deseja remover outro R.A ?");
			printf("\n1 = Sim 2 = N�o: ");
			scanf("%i",&resp);
			
		}while(resp == 1 );//se a resposta n�o for 1 ira sair do loop
}

void imprimir(int ra[QTD])
{
		int c;
		for(c=0; c<QTD; c++){	
			printf("R.A da posi��o %i �: %i\n",c+1,ra[c]);
		}
}
void imprimir_posicao(int ra[QTD])
{
	int	posicao,c;
	
	printf("Digite o R.A que deseja saber a posi��o: ");
	scanf("%i",&posicao);
	
	for(c=0; c<QTD; c++){
		if(ra[c]==posicao){//procurando ra dentro do vetor
			printf("a posi��o do R.A %i � %i",ra[c],c);
		}
	}
}
void contar(int ra[QTD])
{
	int excluido=0,c,total=0;
	
	//vendo quantos ras foram cadastrados 
	for(c=0; c<QTD; c++){
			if(ra[c]!=-1){	
			c+1;
		}
	}
	//-----------------------------------------vendo quantos ras foram excluidos
		for(c=0; c<QTD; c++){
			if(ra[c]==-1){	
			excluido++;
		}
	}
		
		total = c - excluido;
		printf("Quantidade de R.A cadastrados: %i\n",c);
		printf("Quantidade de R.A excluidos: %i\n",excluido);
		printf("Total de R.A no sistema : %i\n",total);
}
int main()
{
	setlocale(LC_ALL,"");
	int opc;
	
	while(opc!=99){
	printf("\n");
	printf("  Armazenar RA \n\n");
	printf("1-) Adicionar \n");
	printf("2-) Remover RA \n"); //tem que solicitar o ra que seja removido
	printf("3-) Imprimir posi��o RA \n"); //deve solicitar o ra e imprimir a posi��o que ele esta localizado
	printf("4-) Imprimir todos RA(s) \n");
	printf("5-) Contar \n");// deve contar o numero de RA's cadastrados
	printf("99-) Sair \n\n");
	printf("Digite a op��o desejada: ");
	scanf("%i",&opc);
	printf("\n");
	
	
	if(opc==1){
		adicionar(ra);
	}
		else if(opc==2){
			remover(ra);
		}
			else if(opc==3){
				imprimir_posicao(ra);
			}
				else if(opc==4){
				imprimir(ra);
			}
			
					else if(opc==5){
					contar(ra);
				}
				
				system("cls");
	}


}
