#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float C_1, C_2, Hip;
	char repetir;
	
	do{
		C_1 = C_2 = Hip = 0.0;
	
		printf("3) Faça um programa que receba o valor dos catetos de um triângulo,"); 
		printf("\n   calcule e mostre o valor da hipotenusa. (h² = c1²+c2²).\n\n");
		
		printf("Valor do primeiro cateto: ");
		scanf("%f", &C_1);
		printf("Valor do segundo cateto:  ");
		scanf("%f", &C_2);
	
		Hip = pow(C_1,2) + pow(C_2,2);
		Hip = sqrt(Hip);
		printf("------------------------------------");
		printf("\nA hipotenusa vale:        %.4f", Hip);
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
