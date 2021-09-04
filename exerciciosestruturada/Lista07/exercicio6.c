#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, max, min, soma, vetor[100];
	float media, fsoma, cont_par;
	
	soma = 0;
	cont_par = 0.0;
	
	for(i=0;i<100;i++)
		{
			printf("Digite o numero: ");
			scanf("%i", &vetor[i]);
			soma = soma + vetor[i];
			if(vetor[i]%2==0){cont_par++;}			
		}
	
	fsoma = (float)soma;
	media = fsoma/100;
	max = vetor[0];
	min = vetor[0];
		
	for(i=0;i<100;i++)
		{
			if(vetor[i]>max){max=vetor[i];}
			if(vetor[i]<min){min=vetor[i];}
		}
				
	printf("\nMaior Numero: %i", max);
	printf("\nMenor Numero: %i", min);
	printf("\nPercentual de Pares: %.2f%%", cont_par);
	printf("\nMedia: %.4f", media);
	
	system("pause");		
	return 0;
}
