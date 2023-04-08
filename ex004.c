#include<stdio.h>
#include<locale.h>

soma_media(float p1,float p2, float tr)
{
		float media;
		
		media=p1*0.4+p2*0.4+tr*0.2;
		
		return media;
}
int main()
{
	setlocale(LC_ALL,"");
	//mf = p1 + p2 + tr,
	float p1,p2,tr,mf,nc;
	
	//p1 tem o peso de 40%
	printf("Digite o valor da p1: ");
	scanf("%f",&p1);
	
	//p2 tem o peso de 40%
	printf("Digite o valor da p2: ");
	scanf("%f",&p2);
	
	//tr tem o peso de 20%
	printf("Digite o valor da tr: ");
	scanf("%f",&tr);
	
	//media final 
	mf=soma_media(p1,p2,tr);
	
	//nota de corte
	nc=5;
	
	if(mf>nc){
		printf("Aluno aprovado");
	}
	else{
		printf("Aluno reprovado");
	}
	
	
	return 0;
}
