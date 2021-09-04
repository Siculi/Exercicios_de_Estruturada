#include<stdio.h>  
#include<stdlib.h>

int cont; 
int menor (int x, int y);
int maior (int k, int w);

int main()
{
	int a, i, menorv, maiorv; cont=0;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%i", &a);
	
	int vetor[a];
	
	for(i=0;i<a;i++)
		{
			printf("Insira o valor: ");
			scanf("%i", &vetor[i]);				
		}
			
	for(i=0;i<a;i++)
		{
			menorv = menor(a, vetor[i]);
		}
	
	
	cont = 0;
		
	for(i=0;i<a;i++)
		{
			maiorv = maior(a, vetor[i]);
		}
	
	printf("\nO menor eh: %i", menorv);
	printf("\nO maior eh: %i", maiorv);
	
	return 0;
}

int menor (int x, int y)
{
	int min;
	if(cont==0){min=y;}
	if(min>y){min=y;}
	
	cont=cont+1;	
		
	return min;	
}

int maior (int k, int w)
{
	int max;
	if(cont==k){max=w;}
	if(max<w){max=w;}
	
	cont=cont+1;	
					
	return max;	
}
