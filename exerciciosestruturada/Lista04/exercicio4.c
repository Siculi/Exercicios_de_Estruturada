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
	printf("\n1) À Vista em dinheiro – 10%% de desconto.");
	printf("\n2) À Vista no cartão – 5%% de desconto.");
	printf("\n3) Em 2 vezes, preço normal de etiqueta.");
	printf("\n4) Em 3 vezes, 10%% de acréscimo.");
	
	printf("\n\nOpção: ");
	scanf("%i", &num);
	printf("\n");
	
	switch(num)
		{
			case 1:
				printf("Preço de etiqueta: R$ ");
				scanf("%f", &preco);
				preco = preco * 0.9;
				break;
			case 2:
				printf("Preço de etiqueta: R$ ");
				scanf("%f", &preco);
				preco = preco * 0.95;
				break;
			case 3:
				printf("Preço de etiqueta: R$ ");
				scanf("%f", &preco);
				break;
			case 4:
				printf("Preço de etiqueta: R$ ");
				scanf("%f", &preco);
				preco = preco * 1.10;
				break;
		}
	
	printf("\nPreço final: R$ %.2f.", preco);
	
	return 0;
}
