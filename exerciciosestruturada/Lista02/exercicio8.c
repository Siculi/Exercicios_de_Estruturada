#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char nome_1[20], nome_2[20], nome_3[20];
	float votos_1, votos_2, votos_3, total_votos, percent_1, percent_2, percent_3; 
	
	printf("Digite o nome do primeiro candidato: ");
	gets(nome_1);
	printf("Digite o nome do segundo candidato: ");
	gets(nome_2);
	printf("Digite o nome do terceiro candidato: ");
	gets(nome_3);
	
	printf("\n");
	printf("Quantidade de votos de %s: ",nome_1);
	scanf("%f", &votos_1);	
	printf("Quantidade de votos de %s: ",nome_2);	
	scanf("%f", &votos_2);
	printf("Quantidade de votos de %s: ",nome_3);
	scanf("%f", &votos_3);
	
	total_votos = votos_1 + votos_2 + votos_3;
	
	percent_1 = (votos_1/total_votos)*100;
	percent_2 = (votos_2/total_votos)*100;
	percent_3 = (votos_3/total_votos)*100;
	
	printf("\n");
	printf("___________________________________________________________________________");
	printf("\n%s %19s %s %8s %s" ,"Canditado", "|", "Número de votos", "|", "Percentual de Votos");
	printf("\n____________________________|________________________|_____________________");
	printf("\n%-20s %8s %-8.0f %15s %-4.2f %s", nome_1, "|", votos_1, "|", percent_1, "%");
	printf("\n%-20s %8s %-8.0f %15s %-4.2f %s", nome_2, "|", votos_2, "|", percent_2, "%");
	printf("\n%-20s %8s %-8.0f %15s %-4.2f %s", nome_3, "|", votos_3, "|", percent_3, "%");	
	printf("\n____________________________|________________________|_____________________");
	printf("\n\nTotal de votos: %.0f", total_votos);
	printf("\n\n");
	system("PAUSE");
	
	return 0;
}
