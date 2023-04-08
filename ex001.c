#include<stdio.h>
#include<locale.h>
/*
	Desenvolva um algoritmo capaz de informar qual é a área de um retângulo,
	 o usuário deverá informar os valores de base e altura. 
*/
	float area_retângulo, (float base, float altura) {
		
		float area = 0;
		area = base*altura;
		return area;
	}
	
int main()
{
	setlocale(LC_ALL,"");

	float va, vb, area;
	
	printf("Digite o valor da Base do retângulo, : ");
	scanf("%f",&va);
	
	printf("Digite o valor da do retângulo, : ");
	scanf("%f",&vb);
	
	area = areatriangulo(va,vb);
	printf("Valor da área do retângulo, : %f",area);
	return 0;
}

