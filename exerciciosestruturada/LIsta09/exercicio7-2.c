#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int menor(int vetor[], int x);
int maior(int vetor[], int x);

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int tam, i, menor_v, maior_v;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%i", &tam); 
	
	int vetor[tam];
	
	for(i=0;i<tam;i++)
		{
			printf("Insira o valor: ");
			scanf("%i", &vetor[i]);
		}
	
	menor_v = menor(vetor, tam);
	maior_v = maior(vetor, tam);	
	
	printf("\nO MENOR valor é: %i", menor_v);
	printf("\nO MAIOR valor é: %i", maior_v);
	
	return 0;
}

int menor (int vetor[], int x)
{
	int i, min;
	
	for(i=0;i<x;i++)
		{
			if(i==0){min=vetor[0];} 
			if(vetor[i]<min){min=vetor[i];}								
		}	
	
	return min;
}

int maior (int vetor[], int x)
{
	int i, max;
	
	for(i=0;i<x;i++)
		{
			if(i==0){max=vetor[0];} 
			if(vetor[i]>max){max=vetor[i];}								
		}	
	
	return max;
}
