#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num, i;
	float val, max_val, min_val;
	
	printf("Quanto números deseja adicionar: ");
	scanf("%i", &num);
	printf("\n");
	
	for(i=0;i<num;i++)
		{
			printf("%iº número: ", i+1);
			scanf("%f", &val);
			
			if(val>0)
			{			
				if(i==0)
					{
						max_val = val;
						min_val = val;
					}
				
				if(val>max_val)
					{
						max_val = val;
					}
				
				if(val<min_val)
					{
						min_val = val;
					}
					
				printf("\n");
				
			}else
				{
					printf("Apenas POSITIVOS são aceitos.\n\n");
					i = i-1;					
				}
		}
		
	if(min_val==max_val)
		{
			printf("\nNÃO existe MAIOR ou MENOR valor o único número foi: %.2f", max_val);
		}else
			{
				printf("\nMAIOR valor: %.2f", max_val);
				printf("\nMENOR valor: %.2f", min_val);
			}
	
	printf("\n");
	
	system("pause");
	return 0;
}
