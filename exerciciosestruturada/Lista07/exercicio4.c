#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, k, l, vetor[8], pos[8], neg[8], zero[8];
	
	j = k = l = 0;
	
	for(i=0;i<8;i++)
		{
			printf("Digite o numero: ");
			scanf("%i", &vetor[i]);
		}
		
	for(i=0;i<8;i++)
		{
			if(vetor[i]>0)
				{
					pos[k]=vetor[i];
					k++;
				}else
					{
						if(vetor[i]<0)
							{
								neg[j]=vetor[i];
								j++;
							}else
								{
									zero[l]=vetor[i];
									l++;
								}
					}
		}
	
	printf("\nPositivo: ");
		
	for(i=0;i<k;i++)
		{
			if(i==k-1)
				{
					printf("%i.", pos[i]);
				}else
					{
						printf("%i, ", pos[i]);
					}
		}
	
	printf("\nNegativos: ");
		
	for(i=0;i<j;i++)
		{
			if(i==j-1)
				{
					printf("%i.", neg[i]);
				}else
					{
						printf("%i, ", neg[i]);
					}
		}
	
	printf("\nZeros: ");
	
	for(i=0;i<l;i++)
		{
			if(i==l-1)
				{
					printf("%i.", zero[i]);
				}else
					{
						printf("%i, ", zero[i]);
					}
		}
	
	return 0;
}
