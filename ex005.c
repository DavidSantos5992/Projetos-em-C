#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
		int pera,laranja,alface;
		float soma;
		
		printf("Digite a quantidade de peras compradas");
		scanf("%i",&pera);
		printf("\n");
		
		printf("Digite a quantidade de alfaces comprados");
		scanf("%i",&alface);
		printf("\n");
		
		printf("Digite a quantidade de laranjas compradas");
		scanf("%i",&laranja);
		printf("\n");
		
		if(pera<=5){
			pera*1,5;
			}else if(pera>5){
				pera*1,2;
			}
			
				if(alface<=2){
					alface*2;
					}else if(alface>2){
						pera*1,5;
					}
					
						if(laranja<=6){
							laranja*0.5;
							}else if(laranja>6){
								pera*0.4;
							}
							
	soma=pera+alface+laranja;
	printf("Valor total da compra:%f",soma);
	
	return 0;
}
