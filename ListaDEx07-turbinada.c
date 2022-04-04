#include<stdio.h>
#include<locale.h>

#define QTD 3

typedef struct
{
	int ra;
	float nota;
} aluno;

aluno ObterAluno()
{
	aluno davez;// tipo aluno variavel = davez
	
	printf("Entre com o RA do aluno: ");
	scanf("%i", &davez.ra);// chamando o typedef de ra
	
	printf("Entre com a nota do aluno: ");
	scanf("%f", &davez.nota);// chamando o typedef de nota
	
	return davez;// retornando 
}

aluno PesquisarAlunoPorRA(aluno v[], int tam, int rapesq)
{
	aluno davez;
	
	davez.nota = -1; // vai significar que não achou
	
	int i;
	for(i=0;i<tam;i++)
	{
		if (v[i].ra==rapesq)
		{
			davez = v[i]; // achei aluno!
		}
	}
	return davez;
}

void ImprimirAluno(aluno a)
{
//	printf("RA: %i\n", a.ra);
//	printf("Nota: %.2f\n", a.nota);
}

int main()
{
	setlocale(LC_ALL,"");
	
	int i, rapesq;
	aluno turma[QTD], alunopesq;
	
	// popular vetor de alunos
	for(i=0;i<QTD;i++)
	{
		turma[i] = ObterAluno();
	}
	
	printf("Entre com o RA que deseja consultar: ");
	scanf("%i", &rapesq);
	
	alunopesq = PesquisarAlunoPorRA(turma, QTD, rapesq);
	
	if (alunopesq.nota!=-1)
		ImprimirAluno(alunopesq);
	else
		printf("RA não encontrado\n");
	
	return 0;
}
