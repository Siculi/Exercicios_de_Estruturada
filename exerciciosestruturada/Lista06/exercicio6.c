#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float media, max_media;
	int cont, i;
	char nome[35], nome_max_media[35];
	
	cont = 1;
	
	printf("Quantidade de médias: ");
	scanf("%i", &i);
	printf("\n");
	
	while(cont<=i)
		{
			fflush(stdin);
			
			printf("Nome do aluno: ");
			scanf("%[^\n]s", nome);
			printf("Média do aluno: ");
			scanf("%f", &media);
			printf("\n");
									
			if(cont==1)
				{
					max_media = media;
					strcpy(nome_max_media, nome);
				}
			
			if(media>max_media)
				{
					max_media = media;
					strcpy(nome_max_media, nome);
				}
				
			
			
			cont = cont + 1;
			
			
		}

	printf("Maior média: %.2f. Nome aluno: %s", max_media, nome_max_media);
	printf("\n");
	
	system("pause");
	return 0;
}
