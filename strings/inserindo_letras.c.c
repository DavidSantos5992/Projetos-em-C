#include<stdio.h>
#include<locale.h>
#define QTD 3
int main()
{
	setlocale(LC_ALL,"");
	
	int c;
	char letra[QTD];
		
	
	for(c=0; c<QTD; c++)
	{
		printf("Digite uma letra: ");
		scanf("%c",&letra[c]);
		getchar();
	}
		
	for(c=0; c<QTD; c++){
		printf("%c",letra[c]);
	}
		
return 0;	
}
	

