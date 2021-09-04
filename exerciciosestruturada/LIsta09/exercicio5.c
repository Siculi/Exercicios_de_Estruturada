#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int contador (int x, int y);

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, aux;
	
	do{
		printf("Insira o PRIMEIRO numero: "); scanf("%i", &a);
		if(a<=0){system("cls"); printf(">> %i << NÃO é POSITIVO. ",a);}
	}while(a<=0); system("cls");
	
	do{
		printf("Insira o ULTIMO numero: "); scanf("%i", &b);
		if(b<=0){system("cls"); printf(">> %i << NÃO é POSITIVO. ",b);}
	}while(b<=0); system("cls");
	
	if(a>b){aux=a; a=b; b=aux;}
	
	printf("Soma de todos os inteiror inclusos %i e %i: %i", a,b, contador(a,b));
	printf("\nSoma de todos os inteiror exclusos %i e %i: %i", a,b, contador(a,b)-a-b);
		
	return 0;
}

int contador (int x, int y)
{
	int i, soma; soma = 0;		
	
	for(i=x;i<=y;i++)
		{
			soma = soma + i;
		}
	
	return soma;
}
