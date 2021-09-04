#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, k, l;
	char lojas[8][20], produtos[4][20];
	float precos [8][4];
		
	for(i=0;i<8;i++)
		{
			printf("Nome da loja: ");
			for(j=0;j<20;j++)
				{
					scanf("%c", &lojas[i][j]);
					if(lojas[i][j]=='\n'){break;}
				}
		}
	
	printf("\n");
	
	for(i=0;i<4;i++)
		{
			printf("Nome do Produto: ");
			for(j=0;j<20;j++)
				{
					scanf("%c", &produtos[i][j]);
					if(produtos[i][j]=='\n'){break;}
				}
		}
	
	printf("\n");
	
	for(k=0;k<8;k++)
		{
			for(i=k;i<8;i++)								// printa o nome da loja
				{											
					for(j=0;j<20;j++)						
						{									
							printf("%c", lojas[i][j]);		
							if(lojas[i][j]=='\n'){break;}	
						}									
					break;									
				}											// printa o nome da loja
			
			printf("\n");
							
			for(l=0;l<4;l++)
				{
					for(i=l;i<4;i++)										// printa o nome do produto	
							{												
								printf("Preco ");								
								for(j=0;j<20;j++)							
									{										
										printf("%c", produtos[i][j]);												
										if(produtos[i][j+1]=='\n')
											{
												printf(": ", produtos[i][j]);
												scanf("%f", &precos [k][l]);
												break;
											}											
									}																						
								break;										
							}												// printa o nome do produto														
				}
			printf("\n");	
		}	
	
	i = j = k = l = 0;
	
	printf("\nPreços Abaixo de R$ 120,00\n\n");
	
	for(k=0;k<8;k++)
		{
			for(l=0;l<4;l++)
				{
					if(precos [k][l]<=120.00)
						{
							for(j=0;j<20;j++)
								{
									printf("%c", lojas[k][j]);
									if(lojas[k][j+1]=='\n'){printf(" ");break;}
								}
							
							printf("-> ");
							
							for(j=0;j<20;j++)
								{
									printf("%c", produtos[l][j]);
									if(produtos[l][j+1]=='\n'){printf(" ");break;}
								}							
							printf("R$ %.2f\n", precos [k][l]);																																												
						}
				}			
		}
	
	system("pause");
	return 0;
}
