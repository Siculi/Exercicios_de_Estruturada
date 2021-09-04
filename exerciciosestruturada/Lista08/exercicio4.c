#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

int main()
{
	int i,j, matriz[10][10], vetor_aux[10];
	
	// int num; // ative essa linha para gerar numeros aleatorios
	// srand(time(NULL)); // ative essa linha para gerar numeros aleatorios
	
	for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
				{
					printf("Valor de [%i][%i]: ", i+1, j+1);
					// num = rand()%100 + 1; // ative essa linha para gerar numeros aleatorios
					// printf("%i\n", num); // ative essa linha para gerar numeros aleatorios
					// matriz[i][j] = num; // ative essa linha para gerar numeros aleatorios
					scanf("%i", &matriz[i][j]); // desative essa linha para gerar numeros aleatorios					
				}
				printf("\n");
		}
	
	printf("\n\n"); 
	
	for(i=0;i<10;i++) 
		{				
			for(j=0;j<10;j++) 
				{				
					printf("|%3i |", matriz[i][j]); 				
				}				
			printf("\n"); 
		}				
	
	for(i=0;i<10;i++)  							// !!! começo do troca linha !!!
		{										//
			vetor_aux[i] = matriz[1][i];		//
		}										//
												//
	for(i=0;i<10;i++)							//
		{										//
			matriz[1][i] = matriz[7][i];		//
			matriz[7][i] = vetor_aux[i];		//
		}										// !!! fim do troca linha !!!
	
	printf("\n\n"); 
	for(i=0;i<10;i++) 
		{				
			for(j=0;j<10;j++) 
				{				
					printf("|%3i |", matriz[i][j]); 				
				}				
			printf("\n"); 
		}				
	
	for(i=0;i<10;i++)							// !!! começo do troca coluna !!!
		{										//
			vetor_aux[i] = matriz[i][5];		//
		}										//
												//	
	for(i=0;i<10;i++)							//	
		{										//
			matriz[i][5] = matriz[i][8];		//
			matriz[i][8] = vetor_aux[i];		//
		}										// !!! fim do troca coluna !!!
	
	printf("\n\n"); 
	
	for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
				{
					printf("|%3i |", matriz[i][j]);					
				}
			printf("\n");
		}	
	
	system("pause");	
	return 0;
}
