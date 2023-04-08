#include<stdio.h>
#include<locale.h>
#define QTD 10

float salario[QTD];

void AdicionarSalario(float salario[QTD])
{	
	int i;
	for (i=0; i<QTD; i++)
	{	
		printf("\nInforme o salario do funcionario %d: ",i );
		scanf("%f", &salario[i]);
	}
}

void RemoverSalario(float salario[QTD])
{
	int remove_salario,i;
	
	
	printf("Digite a posição que deseja remover: ");
	scanf("%i",&remove_salario);
	printf("\n");
			
		for(i=0; i<QTD; i++)
		{
			if(i == remove_salario)
			{ 
				salario[i]=0;	
			}
		}	
}

void ImprimirSalarios(float salario[QTD])
{
	int i;
	for (i=0; i<QTD; i++)
	{
		printf("\n%d- %.2f.", i, salario[i]);
	}
}

void PesquisarSalario(float salario[QTD])
{
	int i, pesquisa;
	printf("\nInforme a posição que deseja procurar: " );
	scanf("%i", &pesquisa);

			for(i=0; i<QTD; i++)
			{
					if(i== pesquisa)
				{	
					printf("\nO salario da posição %d é : %.2f", i, salario[i]);
				}
			}
	
}

void QuantidadeSalariosIguais(float salario[QTD])
{
	int  i,x=0;
	float XX;
	
	printf("Informe o valor de X, que deseja que seja impresso a quantidade de salarios iguais: ");
	scanf("%f", &XX);
	
	for(i=0; i<QTD; i++)
	{
		if(salario[i]==XX)
		{
		x=x+1;	
		}
	}
	printf("%d salarios iguais a %.2f", x, XX);

}

float SomaSalarios(float salario[QTD])
{
	int i;
	float total;
	
	for(i=0; i<QTD; i++)
	{
		total=total+salario[i];
	}
	printf("Total gasto em salario com todos os funcionarios: %.2f", total);
	
	return total;
	
}

float SomarSalariosX(float salario[QTD])
{
	int i;
	float x=0, total=0;
	
	printf("O salario informado, no final será somado todos iguais: ");
	scanf("%f", &x);
	
	for(i=0; i<QTD; i++)
	{
		if(salario[i]==x){
			total=total+salario[i];
		}	
	}
	printf("\nTotal dos salarios iguais :%.2f", total);
	
	return total;
}

void ContarSalariosMaioresX(float salario[QTD])
{
	int  i,x=0;
	float XX;
	
	printf("Informe o valor de X, que deseja que seja impresso a quantidade de salarios maiores : ");
	scanf("%f", &XX);
	
	for(i=0; i<QTD; i++)
	{
		if(salario[i]>XX)
		{
		x=x+1;	
		}
	}
	printf("%d salarios >= a %.2f", x, XX);
}

void MaiorSalario(float salario[QTD])
{
	
	int i;
	float maior=-9999999999999;
	
	for(i=0; i<QTD; i++)
	{
		if(salario[i]>maior)
		{
			maior=salario[i];
		}
	}
	printf("%.2f é o maior salario.", maior);
}
void MenorSalario(float salario[QTD])
{
	int i;
	float  menor =9999999999999;
	
	for(i=0; i<QTD; i++)
	{
		if(salario[i]< menor)
		{
			menor=salario[i];
		}
	}
	printf("\nO menor salario encontrado foi %.2f ", menor);
}

float MediaSalarial(float salario[QTD])
{

	float total=0;
	int i;
	
		for(i=0; i<QTD; i++)
		{	
			total = total+salario[i];
		}
		total=total/QTD;
	return total;
}
 void RemoverSalarioX(float salario[QTD])
 {
 	int i;
	 float x;	
 	
 	printf("Informe o valor dos salarios que deseja remover: ");
 	scanf("%f", &x);
 	
	 for(i=0; i<QTD; i++)
 	{
 		if(salario[i]==x)
 		{
 			salario[i]=0;
		 }
	 }
	 
	 printf(" Salario(s) removido(s)");

 }
void RemoverTodosSalarios(float salario[QTD])
{
	int i;
	
	for(i=0; i<QTD; i++)
	{
		salario[i]=0;
	}
	printf("Todos salarios removidos, se desejar adicionar mais, escolha a opção 1");
}

void ImprimirPosicaoY(float salario[QTD])
{
	int i, y;
	
	printf("Informe a posição que deseja imprimir: ");
	scanf("%i", &y);
	for (i=0; i<QTD; i++)
	{
		if(i==y)
		{
			printf("%.2f é o salario da posição %d", salario[i], i);
		}
	}
	
}

void ImprimirSalariosMenoresQueX(float salario[QTD])
{
	int i,x;

	printf("Informe valores menores que... você deseja imprimir: ");
	scanf("%i", &x);
	
	for(i=0; i<QTD; i++)
	{
		if(salario[i] < x)
		{
			printf("\n%.2f, salario menor que %d", salario[i], x);
			}	
	}
}

void ContarSalariosX(float salario[QTD])
{
	int i;
	int x=0;
	float XX=0;
	
	printf("Informe o o valor do salario que deseja saber quantos iguais possuem: ");
	scanf("%f", &XX);
		
	for(i=0;i<QTD;i++)
	{
		if(XX==salario[i])
		{
			x=x+1;
		}
	}
	printf("Existem %d salarios iguais a %.2f.", x, XX);
}

void ContarSalarios(float salario[QTD])
{
	int i;		
	printf("%i salalarios cadastrados", QTD);	
}

float AcrescimoZNosSalarios(float salario[QTD])
{
	int i;
	float z;
	float total=0;
	printf("Informe quantos %% deseja acrescentar nos salarios: ");
	scanf("%f", &z);
	
	for(i=0; i<QTD; i++)
	{
		total=salario[i]+(salario[i]*(z/100));
		printf("\n%.2f salario final do funcionario %d, com acrescimo", total, i);
	}
	
	return total;
}

float DescontoSalariosMaioresQueX(float salario[QTD])
{

	int i;
	float maiores, desconto=0, Total=0;
	
	printf("\nSalarios maiores que valores você deseja descontar: ");
	scanf("%f", &maiores);
	
	printf("\nDesconto de quantos %% deseja: ");
	scanf("%f", &desconto);
	
	for(i=0; i<QTD; i++)
	{
		if(salario[i]>maiores)
		{
			Total=salario[i]-(salario[i]*desconto/100);	
			printf("\n%.2f salario final do funcionario %d, com desconto", Total, i);
		}
	}
		return Total;

}
int main()
{
	setlocale(LC_ALL,"");
	int opc;
	float MS=0;
	while(opc!=99)
	{
		system("color f");
		
		printf("\n");
		printf("  \nMENU - SALÁRIOS \n\n");
		printf("1-) Adicionar  \n");
		printf("2-) Remover posição Y \n"); 
		printf("3-) Imprimir todos \n"); 
		printf("4-) Pesquisar salário X \n");
	//	printf("5-) Adicionar na posição \n");
		printf("6-) Pesquisar o quantidade salários X \n");
		printf("7-) Somar salários \n");
		printf("8-) Somar salários X \n");
		printf("9-) Contar salários \n");
		printf("10-)Contar salários X \n");
		printf("11-)Contar salários maiores que x \n"); 
		printf("12-)Maior salário  \n");
		printf("13-)Menor salário \n");
		printf("14-)Média salários  \n");
		printf("15-)Remover salários valor X  \n");
		printf("16-)Remover todos salários  \n");
		printf("17-)Imprimir salário posição Y  \n");
		printf("18-)Imprimir salários menores que X  \n");
		printf("19-)Aplicar acréscimo de Z%% em todos salários  \n");
		printf("20-)Aplicar desconto de Z%% em salários maiores que X  \n");
		printf("99-) sair \n");
	
		printf("\nDigite a opção desejada: ");
		scanf("%i",&opc);
		printf("\n");
	
		if(opc==1)
		{
			AdicionarSalario(salario);
		}
			
			if(opc==2)
			{
			RemoverSalario(salario);	
			}
				
				if(opc==3)
				{
					ImprimirSalarios(salario);
				}
				
						if(opc==4)
						{
							PesquisarSalario(salario);
						}
				
							if(opc ==5)
							{
							//NAO FEITA
							}
							
							if(opc==6)
							{
								QuantidadeSalariosIguais(salario);	
							}
				
								if (opc==7)
								{
									SomaSalarios(salario);
								}
								 		
										 if (opc==8)
										{
											SomarSalariosX(salario);
										}
										
												if (opc==9)
												{
												 ContarSalarios(salario);
												}
												 
												 
												 	if (opc==10)
													{
													ContarSalariosX(salario);
													}
													
														if(opc==11)
														{
															ContarSalariosMaioresX(salario);
														}
														
															if (opc==12)
															{
																MaiorSalario(salario);
															}
															
																if (opc==13)
															{
																MenorSalario(salario);
															}
																
																if(opc==14)
																{
																	MS=MediaSalarial(salario);
																		printf("Média salarial da empresa: %.2f", MS);	
																}
																	
																	if(opc==15)
																	{
																		RemoverSalarioX(salario);
																	}
																	
																		if(opc==16)
																		{
																			RemoverTodosSalarios(salario);
																		}
																		
																		if(opc==17)
																		{
																			ImprimirPosicaoY(salario);
																		}
		
																			if(opc==18)
																		{
																			ImprimirSalariosMenoresQueX(salario);
																		}
																
																			if(opc==19)
																			{
																			AcrescimoZNosSalarios(salario);
																			}
																			
																				if(opc==20)
																				{
																				DescontoSalariosMaioresQueX(salario);
																				}
		}
		return 0;
}


