#include<stdio.h>
#include<stdlib.h>

int main()
{
	int vetor[20], num, i, quant;
	
	quant = 0;
	
	for(i=0;i<20;i++)
		{
			printf("Digite o valor: ");
			scanf("%i", &vetor[i]);
		}
	
	printf("\nBuscar o numero: ");
	scanf("%i", &num);
		
	for(i=0;i<20;i++)
		{
			if(num==vetor[i])
				{
					quant=quant+1;					
				}
		}
	
	printf("\nO numero %i foi encontrado %i vezes.", num, quant);
	
	system("pause");
	return 0;
}
