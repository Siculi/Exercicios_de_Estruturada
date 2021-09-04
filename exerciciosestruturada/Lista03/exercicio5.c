#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float num=0;	
	
	printf("Digite um número REAL: ");
	scanf("%f", &num);
	printf("\n");
	
	if(num>0)
		{
			printf("O número %.2f é POSITIVO",num);
		}else
			{
				if(num==0)
					{
						printf("O número %.2f é NULO",num);
					}else
						{
							printf("O número %.2f é NEGATIVO",num);
						}
			}
	
	return 0;
}
