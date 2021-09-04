#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char nome_1[40], nome_2[40];
	int tam_1, tam_2;
	tam_1 = tam_2 = 0;
	
	printf("Digite o 1º nome: ");
	gets(nome_1);
	printf("Digite o 2º nome: ");
	gets(nome_2);
	printf("\n");
	
	tam_1 = strlen(nome_1);
	tam_2 = strlen(nome_2);
	
	if(tam_1==tam_2)
		{
			printf("%s e %s tem o mesmo tamanho.", nome_1, nome_2);
		}else
			{
				printf(">> %s << contém %i caracteres.\n", nome_1, tam_1);
				printf(">> %s << contém %i caracteres.\n", nome_2, tam_2);
				printf("\n%s e %s não têm o mesmo tamanho.", nome_1, nome_2);
			}
	
	return 0;
}
