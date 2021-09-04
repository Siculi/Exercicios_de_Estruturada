#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char resp = 'N';
	int ano_atual, ano_nasc, idade, escolha;
	char repetir;
	struct tm *data_hora_atual;	
	
	do{
		time_t segundos;time(&segundos); data_hora_atual = localtime(&segundos); 
		ano_atual = ano_nasc = idade = 0;
	
		printf("\t\t Cálculo de Idade");
		printf("\n\nEscolha uma da opções abaixo:\n");
		printf("\n1) Para inserir automaticamente o ano no programa");
		printf("\n2) Para inserir manualmente o ano no programa");
		printf("\n\nEscolha: ");
		scanf("%i", &escolha);
		
		switch(escolha)
			{
				case 1:
					ano_atual = data_hora_atual->tm_year+1900; 
					printf("\nEstamos no ano: %d\n", ano_atual);
					break;
			
				case 2:
					printf("\nDigite o ano atual: ");
					scanf("%i", &ano_atual);				
					break;
				default:
					ano_atual = data_hora_atual->tm_year+1900;
					printf("\nOpção inválida. Ajustado automaticamente para o ano do sistema: %i\n", ano_atual);				
			}
	
			printf("Digite seu ano de nascimento: ");
			scanf("%i", &ano_nasc);
	
		if(ano_nasc>ano_atual)
			{
				printf("\nViajante do tempo.\n");		
			}
			
		idade = ano_atual - ano_nasc;
		
		printf("\nSua idade é de %i anos.", idade);
		printf("\nSua idade em 2050 será de %i anos", 2050 - ano_nasc);
		printf("\n\n");
	
		do{
			printf("Repetir [S/N]: ");			
			scanf(" %c", &repetir);
			if(repetir != 'S' && repetir != 's' && repetir != 'N' && repetir != 'n')
				{
					system("cls");
					printf(">>> %c <<< é um caracter invalido. ", repetir);										
				}							
			}while(repetir != 'S' && repetir != 's' && repetir != 'N' && repetir != 'n');
		
			system("cls");
	
	}while(repetir == 's' || repetir == 'S');
	
	return 0;
}
