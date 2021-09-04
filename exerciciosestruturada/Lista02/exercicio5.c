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
		
		printf("5) Fa�a um programa que solicite um n�mero positivo e maior que zero, calcule e mostre:\n");
		printf("\n   a) o n�mero digitado ao quadrado;");
		printf("\n   b) o n�mero digitado ao cubo;");
		printf("\n   c) a raiz quadrada do n�mero digitado;");
		printf("\n   d) a raiz c�bica do n�mero digitado.\n\n");
		
		do{
			printf(">> Digite um n�mero MAIOR do que ZERO: ");
			scanf("%f", &num);
		
			if(num<=0)
			{
				system("cls");
				printf("\t\t!!! Aten��o !!!\n\n>>> %.2f <<< n�o � MAIOR do que ZERO.\n\n", num);
			}
		
		}while(num<=0);
	
		system("cls");
	
		quadrado = pow(num,2);
		cubo = pow(num,3);
		raiz_2 = sqrt(num);
		raiz_3 = cbrt(num);
	
		printf("5) Fa�a um programa que solicite um n�mero positivo e maior que zero, calcule e mostre:\n");
		printf("\n   a) o n�mero digitado ao quadrado;");
		printf("\n   b) o n�mero digitado ao cubo;");
		printf("\n   c) a raiz quadrada do n�mero digitado;");
		printf("\n   d) a raiz c�bica do n�mero digitado.\n\n");
		
		printf(">> Digite um n�mero MAIOR do que ZERO: %.2f", num);
		printf("\n\n   a) %.2f ao quadrado � %.2f.", num, quadrado);
		printf("\n   b) %.2f ao cubo � %.2f.", num, cubo);
		printf("\n   c) A raiz quadrada de %.2f � %.2f.", num, raiz_2);
		printf("\n   d) A raiz cubica de %.2f � %.2f.", num, raiz_3);
	
		printf("\n\n");
	
		do{
			printf("Repetir [S/N]: ");			
			scanf(" %c", &repetir);
			if(repetir != 'S' && repetir != 's' && repetir != 'N' && repetir != 'n')
				{
					system("cls");
					printf("\t\t!!! Aten��o !!!\n\n>>> %c <<< � um caracter inv�lido. ", repetir);										
				}							
		}while(repetir != 'S' && repetir != 's' && repetir != 'N' && repetir != 'n');
		
		system("cls");
	
	}while(repetir == 's' || repetir == 'S');
	
	return 0;
}
