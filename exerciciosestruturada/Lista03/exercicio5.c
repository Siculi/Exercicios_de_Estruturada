#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float num=0;	
	
	printf("Digite um n�mero REAL: ");
	scanf("%f", &num);
	printf("\n");
	
	if(num>0)
		{
			printf("O n�mero %.2f � POSITIVO",num);
		}else
			{
				if(num==0)
					{
						printf("O n�mero %.2f � NULO",num);
					}else
						{
							printf("O n�mero %.2f � NEGATIVO",num);
						}
			}
	
	return 0;
}
