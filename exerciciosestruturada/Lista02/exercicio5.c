#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float num, quadrado, cubo, raiz_2, raiz_3;
	char repetir;
	
	do{
		
		num = quadrado = cubo = raiz_2 = raiz_3	= 0.0;	
		
		printf("5) Faça um programa que solicite um número positivo e maior que zero, calcule e mostre:\n");
		printf("\n   a) o número digitado ao quadrado;");
		printf("\n   b) o número digitado ao cubo;");
		printf("\n   c) a raiz quadrada do número digitado;");
		printf("\n   d) a raiz cúbica do número digitado.\n\n");
		
		do{
			printf(">> Digite um número MAIOR do que ZERO: ");
			scanf("%f", &num);
		
			if(num<=0)
			{
				system("cls");
				printf("\t\t!!! Atenção !!!\n\n>>> %.2f <<< não é MAIOR do que ZERO.\n\n", num);
			}
		
		}while(num<=0);
	
		system("cls");
	
		quadrado = pow(num,2);
		cubo = pow(num,3);
		raiz_2 = sqrt(num);
		raiz_3 = cbrt(num);
	
		printf("5) Faça um programa que solicite um número positivo e maior que zero, calcule e mostre:\n");
		printf("\n   a) o número digitado ao quadrado;");
		printf("\n   b) o número digitado ao cubo;");
		printf("\n   c) a raiz quadrada do número digitado;");
		printf("\n   d) a raiz cúbica do número digitado.\n\n");
		
		printf(">> Digite um número MAIOR do que ZERO: %.2f", num);
		printf("\n\n   a) %.2f ao quadrado é %.2f.", num, quadrado);
		printf("\n   b) %.2f ao cubo é %.2f.", num, cubo);
		printf("\n   c) A raiz quadrada de %.2f é %.2f.", num, raiz_2);
		printf("\n   d) A raiz cubica de %.2f é %.2f.", num, raiz_3);
	
		printf("\n\n");
	
		do{
			printf("Repetir [S/N]: ");			
			scanf(" %c", &repetir);
			if(repetir != 'S' && repetir != 's' && repetir != 'N' && repetir != 'n')
				{
					system("cls");
					printf("\t\t!!! Atenção !!!\n\n>>> %c <<< é um caracter inválido. ", repetir);										
				}							
		}while(repetir != 'S' && repetir != 's' && repetir != 'N' && repetir != 'n');
		
		system("cls");
	
	}while(repetir == 's' || repetir == 'S');
	
	return 0;
}
