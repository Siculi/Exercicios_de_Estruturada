#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30], repetir;
	float salario, aumento_percentual, aumento_salarial, novo_salario;
	salario = aumento_percentual = aumento_salarial = novo_salario = 0.0;
	
	printf("2) Fa�a um programa que recebe o nome de um funcion�rio,");  
	printf("\n   seu sal�rio, e o percentual de aumento que ele ir� receber."); 
	printf("\n   Calcule e mostre o nome do funcion�rio, o valor do aumento e o novo sal�rio.\n\n");
	
	do{
		fflush(stdin);
		printf("*****************************************");
		printf("\nNome do funcion�rio: ");
		gets(nome);
		printf("Sal�rio: R$ ");
		scanf("%f", &salario);
		printf("Aumento percentual: ");
		scanf("%f", &aumento_percentual);
	
		aumento_salarial = salario * (aumento_percentual/100);
		novo_salario = salario + aumento_salarial;
	
		printf("\nNome:\t\t\t%s", nome);
		printf("\n-----------------------------------------");
		printf("\nAumento Salarial:\tR$ %.2f", aumento_salarial);
		printf("\n-----------------------------------------");
		printf("\nNOVO sal�rio:\t\tR$ %.2f", novo_salario);
		printf("\n*****************************************");
		printf("\n\n");	
		
		do{
			printf("Repetir [S/N]: ");			
			scanf(" %c", &repetir);
			if(repetir != 'S' && repetir != 's' && repetir != 'N' && repetir != 'n')
				{
					printf(">>> %c <<< � um caracter invalido. ", repetir);					
				}							
		}while(repetir != 'S' && repetir != 's' && repetir != 'N' && repetir != 'n');
		
		printf("\n");
				
	}while(repetir == 's' || repetir == 'S');
	
	return 0;
}
