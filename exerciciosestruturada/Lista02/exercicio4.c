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
			
		printf("4) Fa�a um programa que calcule e mostre a �rea de um c�rculo.");
		printf("\n   Sabe-se que: �rea = Pi * R�.\n\n");
		
		printf("Digite o raio do c�rculo: ");
		scanf("%f", &raio);
		area = M_PI * pow(raio,2);
		printf("A �rea do c�rculo �:      %f", area);
		printf("\n\n");
		
		do{
			printf("Repetir [S/N]: ");			
			scanf(" %c", &repetir);
			if(repetir != 'S' && repetir != 's' && repetir != 'N' && repetir != 'n')
				{
					system("cls");
					printf(">>> %c <<< � um caracter invalido. ", repetir);										
				}							
		}while(repetir != 'S' && repetir != 's' && repetir != 'N' && repetir != 'n');
		
		system("cls");
		
	}while(repetir == 's' || repetir == 'S');
	
	return 0;
}
