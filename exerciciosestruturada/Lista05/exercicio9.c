#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float alt, s_alt_m, s_alt_h, max_alt, min_alt, s_alt_t, media_m, media_t;
	int r, i, total_m, total_h;
	
	alt = s_alt_m = s_alt_h = max_alt = min_alt = s_alt_t = media_m = media_t = 0.0;
	r = i = total_m = total_h = 0;
		
	for(i=1;i<=50;i++)
		{
			printf("Digite a %iª altura: ", i);
			scanf("%f", &alt);
			
			printf("\nEscolha o sexo:");
			printf("\n\n1) masculino");
			printf("\n2) feminino");
			printf("\n\nOpção: ");
			scanf("%i", &r);
			printf("--------------------------------------------\n\n");
			
			if(i==1)
				{
					max_alt = alt;
					min_alt	= alt;		
				}
			
			if(alt>max_alt){max_alt=alt;}
			if(alt<min_alt){min_alt=alt;}
			
			if(r==1)
				{
					s_alt_h = s_alt_h + alt;
					total_h = total_h + 1;
				}
				
			if(r==2)
				{
					s_alt_m = s_alt_m + alt;
					total_m = total_m + 1;
				}
			
		}
	
	media_m = s_alt_m / total_m;
	media_t = (s_alt_m + s_alt_h)/(total_m + total_h);
		
	printf("MAIOR altura: %.2f", max_alt);
	printf("\nMENOR altura: %.2f", min_alt);
	printf("\n\nMédia de altura das mulheres: %.2f", media_m);
	printf("\nMédia de altura da turma: %.2f", media_t);
	printf("\n");
	
	system("pause");
	return 0;
}
