#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char repetir;
	float notas[3], media;
	int i; repetir = 'S';
	
	do{
		i=0; 
		for(i=0;i<3;i++){notas[i]=0;}
		media = 0.0;
		i=0; 
				
		printf("1) Fa�a um programa que receba tr�s notas,");
		printf("\n   calcule e mostre a m�dia aritm�tica entre elas.\n\n");
		
		for(i=0;i<3;i++)
			{
				printf("Digite a %i� nota: ", (i+1));
				scanf("%f", &notas[i]);
				media = media + notas[i];
			}
	
		media = media/3;
	
		printf("\nA m�dia �: %.2f\n\n", media);
		
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
