#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float num[4], maior, menor;
	
	for(i=0;i<=3;i++)
		{
			printf("Digite o %i� n�mero: ", i+1);
			scanf("%f", &num[i]);
		}
	
	maior = num[1];
	menor = num[2];
	
	for(i=0;i<=3;i++)
		{
			if(num[i]>maior){maior = num[i];}
			if(num[i]<menor){menor = num[i];}								
		}
	
	printf("\nO maior n�mero � %f", maior);
	printf("\nO menor n�mero � %f", menor);
		
	return 0;	
}
