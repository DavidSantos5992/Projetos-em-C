#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "");
	
	if (argc==3)
	{
		if (strcmp(argv[1], "cesar")==0)
		{
			if (strcmp(argv[2], "123")==0)
			{
				printf("User e senha corretas\n");
			}	
			else
			{
				printf("Senha inválida.\n");
			}
		}
		else
		{
			printf("Username inválido.\n");
		}
	}
	else
	{
		printf("Parâmetros incorretos.\n");
	}
	
	getchar();
	return 0;
}
