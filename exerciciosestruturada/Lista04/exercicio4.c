#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	float preco;
	num = 0;
	preco = 0.0;
		
	printf("Forma de pagamento:\n");
	printf("\n1) � Vista em dinheiro � 10%% de desconto.");
	printf("\n2) � Vista no cart�o � 5%% de desconto.");
	printf("\n3) Em 2 vezes, pre�o normal de etiqueta.");
	printf("\n4) Em 3 vezes, 10%% de acr�scimo.");
	
	printf("\n\nOp��o: ");
	scanf("%i", &num);
	printf("\n");
	
	switch(num)
		{
			case 1:
				printf("Pre�o de etiqueta: R$ ");
				scanf("%f", &preco);
				preco = preco * 0.9;
				break;
			case 2:
				printf("Pre�o de etiqueta: R$ ");
				scanf("%f", &preco);
				preco = preco * 0.95;
				break;
			case 3:
				printf("Pre�o de etiqueta: R$ ");
				scanf("%f", &preco);
				break;
			case 4:
				printf("Pre�o de etiqueta: R$ ");
				scanf("%f", &preco);
				preco = preco * 1.10;
				break;
		}
	
	printf("\nPre�o final: R$ %.2f.", preco);
	
	return 0;
}
