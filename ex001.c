#include<stdio.h>
#include<locale.h>
/*
	Desenvolva um algoritmo capaz de informar qual � a �rea de um ret�ngulo,
	 o usu�rio dever� informar os valores de base e altura. 
*/
	float area_ret�ngulo, (float base, float altura) {
		
		float area = 0;
		area = base*altura;
		return area;
	}
	
int main()
{
	setlocale(LC_ALL,"");

	float va, vb, area;
	
	printf("Digite o valor da Base do ret�ngulo, : ");
	scanf("%f",&va);
	
	printf("Digite o valor da do ret�ngulo, : ");
	scanf("%f",&vb);
	
	area = areatriangulo(va,vb);
	printf("Valor da �rea do ret�ngulo, : %f",area);
	return 0;
}

