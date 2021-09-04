#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

int main()
{
	char nome[40], sexo;
		
	printf("Nome: ");
	gets(nome);	
	printf("Sexo [M/F]: ");
	scanf("%c", &sexo);
	
	printf("\nBom dia ");
	if(sexo == 'M' || sexo == 'm'){printf("Sr. %s", nome);}
	if(sexo == 'F' || sexo == 'f'){printf("Sra. %s", nome);}
	
	return 0;
}
