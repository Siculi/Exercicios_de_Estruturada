#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char repetir;
	float preco_final, preco_fabrica, lucro_distr, impostos, perct_distr, perct_impostos;
	
	do{
		preco_fabrica = lucro_distr = impostos = perct_distr = perct_impostos = 0;
		
		printf("\t\tCalculadora de preço final de veículos.\n\n");
		printf("Insira o preço de fábrica do veículo: R$ ");
		scanf("%f", &preco_fabrica);
		printf("Insira o percentual do distribuidor:\t ");
		scanf("%f", &perct_distr);
		printf("Insira o percentual dos impostos:\t ");
		scanf("%f", &perct_impostos);
		
		perct_distr = perct_distr/100;
		perct_impostos = perct_impostos/100;
		
		lucro_distr = preco_fabrica * perct_distr;
		impostos = 	preco_fabrica * perct_impostos;			
		
		preco_final = preco_fabrica + lucro_distr + impostos;
		
		printf("\nLucro do Distruidor:\t\t      R$ %.2f",lucro_distr);
		printf("\nImpostos:\t\t\t      R$ %.2f",impostos);
		printf("\n------------------------------------------------------");
		printf("\nPreço final:\t\t\t      R$ %.2f", preco_final);
		printf("\n\n");
		do{
			printf("Repetir [S/N]: ");			
			scanf(" %c", &repetir);
			if(repetir != 'S' && repetir != 's' && repetir != 'N' && repetir != 'n')
				{
					system("cls");
					printf(">>> %c <<< é um caracter invalido. ", repetir);										
				}							
		}while(repetir != 'S' && repetir != 's' && repetir != 'N' && repetir != 'n');
		
		system("cls");
	}while(repetir == 's' || repetir == 'S');
	
	return 0;
}
