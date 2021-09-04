#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float raio, area;
	char repetir;
		
	do{
		
		raio = area = 0;
			
		printf("4) Faça um programa que calcule e mostre a área de um círculo.");
		printf("\n   Sabe-se que: Área = Pi * R².\n\n");
		
		printf("Digite o raio do círculo: ");
		scanf("%f", &raio);
		area = M_PI * pow(raio,2);
		printf("A área do círculo é:      %f", area);
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
