#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float num, soma_num, cont_p, cont_n, cont_nulos;
	int i, resp;
	
	cont_p = cont_n = cont_nulos = num = soma_num = 0.0;
	i = resp = 0;
	
	do
		{
			printf("Para SAIR digite 0. Para continuar digite qualquer outro número: ");
			scanf("%i", &resp);
			
			if(resp!=0)
				{
					i=i+1;
					
					printf("Digite o %iº valor: ", i);
					scanf("%f", &num);
					soma_num = soma_num + num;
					
					if(num>0){cont_p=cont_p+1;}
					if(num==0){cont_nulos=cont_nulos+1;}
					if(num<0){cont_n=cont_n+1;}
				}
			
			printf("---------------------------------------------------------\n\n");
			
		}while(resp!=0);
		
	printf("Total de POSITIVOS: %.0f",cont_p);
	printf("\nTotal de NEGATIVOS: %.0f",cont_n);
	printf("\nTotal de NULOS: %.0f",cont_nulos);
	printf("\n\nPercentual de POSITIVOS: %.2f%%", (cont_p/(cont_p+cont_nulos+cont_n))*100);
	printf("\nPercentual de NEGATIVOS: %.2f%%", (cont_n/(cont_p+cont_nulos+cont_n))*100);
	printf("\nPercentual de NULOS: %.2f%%", (cont_nulos/(cont_p+cont_nulos+cont_n))*100);
	
	printf("\n\nMédia aritmética: %.2f", soma_num/(cont_p+cont_nulos+cont_n));
	printf("\n");
	
	system("pause");
	return 0;
}
