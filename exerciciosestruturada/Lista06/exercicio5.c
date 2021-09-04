#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

int  main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int fatorial, num, i;
	
	fatorial = num = i = 0;
	
	printf("Digite um número inteiro para saber seu fatorial: ");
	scanf("%i", &num);
	
	fatorial = num;
	
	for(i=num-1;i>=2;i=i-1)
		{
			fatorial = fatorial * i;
		}
	
	printf("\n%i!= %i", num, fatorial);
	
	return 0;
}
