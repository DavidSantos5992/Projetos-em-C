#include<stdio.h>
#include<locale.h>
#include<string.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	char texto[30];
	int i;
	
	printf("Insira um texto de 30 caracteres:");
	gets(texto);
	getchar();
	
	printf("Texto inserido: %s\n", texto);
	
	for (i=0; i<30; i++){
		if (texto[i]=='a' || texto[i]=='e' || texto[i]=='i' || texto[i]=='o' || texto[i]=='u'
		 || texto[i]=='A' || texto[i]=='E' || texto[i]=='I' || texto[i]=='O' || texto[i]=='U'){
		texto[i]=='?';
		}
	}
	printf("%s", texto);
	
	return 0;
}
