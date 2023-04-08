#include <stdio.h>
#include <locale.h>
#define QTD 3

int main()
{
	setlocale(LC_ALL,"");
	//variaveis para manipulação de fila
	int opc,RA,i;
	int vetorRas[QTD];
	int Vinicio = -1;
	int Vfinal = -1;
	int totalRA = 0;
	int tamanhoV = QTD;
	
		//inicioFilacializa o vetor.
	for (i = 0; i < tamanhoV; i++) {
		vetorRas[i] = -1;
	}
	
	while(opc!=99){
	printf("\n");
	printf("  :: FILA CIRCULAR RAs :: \n\n");
	printf("1-) enfileirar \n");
	printf("2-) desenfileirar\n"); //tem que solicitar o ra que seja removido
	printf("3-) exibir \n"); //deve solicitar o ra e imprimir a posição que ele esta localizado
	printf("4-)..... \n");
	printf("5-) ..... \n");// deve contar o numero de RA's cadastrados
	printf("99-) Sair \n\n");
	printf("Digite a opção desejada: ");
	scanf("%i",&opc);
	printf("\n");
	
	if(opc == 1){
		if(totalRA == tamanhoV){
			printf("Fila cheia! \n");
		} else {
			printf("Digite o ra: ");
			scanf("%i", &RA);
			
			if(Vfinal == -1){
			   Vfinal = 0;
			   Vinicio = 0;//ambos na sem posição no vetor
			} else {
				if(Vfinal == (tamanhoV-1)){//final estando na ultima posi
					Vfinal = 0;	 // entra +1 na fila e ele vai para a posi 0
				} else {//se não
			    	Vfinal = Vfinal+1;//final avança +1 posi
				}
			}
			
			vetorRas[Vfinal] = RA;
			totalRA = totalRA +1;//acressenta +1 no tamanho
			
			printf("RA enfileirado! \n");
		}
	}else if(opc==2){
			if(totalRA == 0){
				printf("Fila vazia! \n");
			} else {
				if(Vinicio == (tamanhoV -1)){
					Vinicio = 0;
				} else{
					Vinicio = Vinicio +1; // msm logica do que a de cima
				}
				
				totalRA = totalRA -1;//decrementa 1 na fila
				
				if (totalRA == 0) {//= a 0 volta ambos para o inicio
					Vinicio = -1;
					Vfinal = -1;
				}
				
				printf("RA desenfileirado! \n");
			}
		}else if(opc==3){
				if(totalRA==0){
					printf("Fila vazia! \n");
				}else{
					int p = Vinicio;//mando para P pois uso vivinio para verificação
					for (i = 0; i < tamanhoV; i++) {
					printf("POSICAO %d: VALOR: %d; \n", p, vetorRas[p]);//precisa verificar se o p esta no 0
					
					if(p == (tamanhoV -1)){
						p = 0;
					}else {
						p = p + 1;//vai mostrar todas posiçoes 
					}
				}
			}
		}
	}


}
