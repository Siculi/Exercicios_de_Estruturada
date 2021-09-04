#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float A, soma;
	int i, j, B, resto;
		
	soma = 0.0;
	
	printf("Digite um número REAL: ");
	scanf("%f", &A);
		
	printf("Digite um número INTEIRO: ");
	scanf("%i", &B);
		
	for(i=0;i<B;i++)
		{
			soma = soma + A;
		}
	
	printf("\n%.2f X %i = %.2f", A, B, soma);
	printf("\n");
	
	system("pause");
	return 0;
}
