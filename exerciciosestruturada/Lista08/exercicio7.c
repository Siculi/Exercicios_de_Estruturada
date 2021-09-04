#include<stdio.h>
#include<stdlib.h>

int main()
{
	float matriz[5][3], maior_p2, arm_menor_estoq, custo_prod_x[3];
	float custo_armz[4] = {0.0, 0.0, 0.0};
	float total_p_x[3] = {0.0, 0.0, 0.0}; 
	float total_arm[4] = {0.0, 0.0, 0.0, 0.0};
	int i, j, armz_maior_p2, N_armz_menor_estoq;
				
	for(i=0;i<5;i++)
		{
			if(i==4)
				{
					printf("Custo dos Produtos");
				}else
					{
						printf("Quantidade no Armazem %i", i+1);
					}
			
			printf("\n\n");
			
			for(j=0;j<3;j++)
				{
					printf("Produto %i: ", j+1);				
					scanf("%f", &matriz[i][j]);
					if(i<5){total_arm[i] = matriz[i][j] + total_arm[i];}					
				}
			printf("=======================\n\n");			
		}

	total_p_x[0]=0.0;

	for(j=0;j<3;j++)
		{
			for(i=0;i<4;i++)
				{
					total_p_x[j] = matriz[i][j]	+ total_p_x[j];					
				}
			custo_prod_x[j] = total_p_x[j] * matriz[4][j];				
		}printf("\n");
	
	custo_armz[0]=0.0;
		
	for(i=0;i<4;i++)
		{
			for(j=0;j<3;j++)
				{
					custo_armz[i] = matriz[i][j]*matriz[4][j] + custo_armz[i];
				}
		}
	
	maior_p2 = matriz[0][1]; armz_maior_p2 = 1;
	arm_menor_estoq = total_arm[0]; N_armz_menor_estoq = 1;
	
	for(j=0;j<4;j++)
		{
			printf("Total de Produtor no Armazem %i: %.0f\n", j+1, total_arm[j]);
			
			if(matriz[j][1]>maior_p2)
				{
					maior_p2=matriz[j][1];
					armz_maior_p2=j+1;
				}
			
			if(total_arm[j]<arm_menor_estoq)
				{
					arm_menor_estoq=total_arm[j];
					N_armz_menor_estoq=j+1;
				}				
		}
		
	printf("\nMAIOR estoque do Produto 2: Armazem %i com %.0f produtor", armz_maior_p2, maior_p2);
	printf("\nMENOR estoque TOTAL: Armazem %i com %.0f produtor\n", N_armz_menor_estoq, arm_menor_estoq);
	
	for(i=0;i<3;i++)
		{
			printf("\nCusto do Produto %i: R$ %.2f", i+1, custo_prod_x[i]);
		}
	
	printf("\n");
	
		for(i=0;i<4;i++)
		{
			printf("\nCusto do Armazem %i: R$ %.2f", i+1, custo_armz[i]);
		}
	
	system("pause");	
	return 0;
}
