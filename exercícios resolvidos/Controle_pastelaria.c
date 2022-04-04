#include <stdio.h>
#include <locale.h>
#define QTD 3

struct Pedidos
{
    int Tamanho;
    int Quantidade;
    int Numero_pedido;
};

struct Pedidos pastel[3];

void inicializar(tamanho){//zerando todas posiçoes
    int c;

    for(c=0;c<QTD;c++)
    {

        pastel[c].Tamanho = 0;
        pastel[c].Quantidade = 0;
        pastel[c].Numero_pedido = 0;
    }
}
void Imprimir(pedidos)
{
	int c;
	
	printf("Pedido\tTamanho\tQuantidade\n");
	
	for(c=0;c<QTD;c++)
	{
		if(pastel[c].Tamanho!=0)//pq tudo que esta vazio(pago) esta 0
		{
			printf("%i\t%i\t%i\n\n", c +1, pastel[c].Tamanho, pastel[c].Quantidade);//    /t para infilerar
		}
	}
}

int main(int argc, char *argv[])
{
    int opc,c, x,sair,numeroPedido;
    setlocale(LC_ALL,"");

    while (opc != 99) {
   printf("::::Pastelaria do Marçal::::\n\n");
   printf("1-) Adicionar pedido \n");
   printf("2)Pedidos em Aberto\n");
   printf("3)Quantidades de Pedidos Aberto\n");
   printf("4)Pagamento\n");
   printf("99-) SAIR \n");
   scanf("%i", & opc);

  if (opc == 1) {
   sair = 2;
   printf("\nTamanhos \n");
   printf("1) Pequeno R$3.50 \n");
   printf("2) Médio R$4.50 \n");
   printf("3) Grande R$5.50 \n\n");

      for(c=0; c<QTD; c++){

   if(pastel[c].Tamanho==0 || pastel[c].Numero_pedido < QTD && pastel[c].Numero_pedido == 0){//só passa se a posi for menor que qtd
   if (sair == 2){//if for = 2 ele continua
              	
      pastel[c].Numero_pedido = c+1;
      printf("Pedido: %i \n", pastel[c].Numero_pedido);

      printf("Digite o Tamanho: ");
      scanf("%i", &pastel[c].Tamanho);

      printf("Informe a quantidade: ");
      scanf("%i", &pastel[c].Quantidade);
      printf("Dejesa Finalizar\n");
      printf("1) Sim\n");
      printf("2) Não\n");
      printf("Digite a opção - ");
      scanf("%i", &sair);
      printf("\n");
  }
 }
}

     }else if (opc == 2){ 
		Imprimir(pastel);
		
     }else if (opc == 3){

    	for(c=0;c<QTD;c++){
    		
		if(pastel[c].Tamanho!=0){//se o tamanho n for 0 o pedido esta em aberto
			x++;//vendo pedidos em aberto
	}
				}
				printf("\nExistem %i pedidos em aberto!\n\n",x);
     } else if(opc==4){
     	
			     	sair = 2;
		for(c=0; c<QTD; c++)
		{
			if(pastel[c].Numero_pedido == 0)
			{// significa que n tem pedido no sistema
				printf("\nNão tem pedido para cobrar\n\n");//sem pedidos no sistema
			}
			else 
			{	
			if(sair == 2)//manter no loop
			{
				printf("Informe o pedido que sera pago:"); 
				scanf("%i", &numeroPedido);
							
				numeroPedido = numeroPedido - 1;//serve para entrar no vetor certo sem ela pega o vetor da frente
				printf("Quantidade de Pasteis - %i\n", pastel[numeroPedido].Quantidade);//quantos pasteis vendeu no pedido
				
					
				pastel[numeroPedido].Tamanho = 0;//joguei zero para tirar o valor pago
				numeroPedido = 0;//para n dar problema de pegar o valor errado 
						
				printf("Pedido Pago!!\n");
				printf("Dejesa Finalizar\n");
				printf("1) Sim\n");
				printf("2) Não\n");
				printf("Digite a opção - ");
				scanf("%i", &sair);
				if (sair == 1)
				{
					break;
				}
			}
			}
		}
    }
}
}
