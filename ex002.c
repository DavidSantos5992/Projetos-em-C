#include<stdio.h>
#include<locale.h>

	float area_retangulo(float vb, float va){
		float area=0;
		area = vb*va;
		
		return area;
	}
int main()
{
	setlocale(LC_ALL,"");

	float va, vb, area;
	
	printf("Digite o valor da Base do retangulo, : ");
	scanf("%f",&vb);
	
	printf("Digite o valor da do retangulo, : ");
	scanf("%f",&va);
	
	area = area_retangulo(va,vb);
	printf("Valor da área do retangulo, : %.2f",area);
	return 0;
}
