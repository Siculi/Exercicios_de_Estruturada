#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	fflush(stdin);
	
	char nome[40];
	int tam;
	
	printf("Digite um nome: ");
	gets(nome);
	tam = strlen(nome);
	
	if(tam<10)
		{
			printf("%s --> Nome Curto", nome);
		}else
			{
				printf("%s --> Não é um nome curto.", nome);
			}
	
	return 0;
}

