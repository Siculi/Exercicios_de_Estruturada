#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float media;
	char conceito;
		
	printf("Digite a média do aluno: ");
	scanf("%f", &media);
	printf("Digite o conceito do aluno: ");
	scanf(" %c", &conceito);
	
	switch(conceito)
		{
			case 'A':
				media = media + 1;
				break;
			case 'B':
				media = media + 0.5;
				break;
			case 'D':
				media = media - 0.5;
				break;			
		}
	
	printf("\nMédia %.2f. ", media);
	if(media>=7)
		{
			printf("Aluno APROVADO.");
		}else
			{
				printf("Aluno REPROVADO.");
			}
				
	return 0;
}
