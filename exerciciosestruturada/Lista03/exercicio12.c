#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float dist, temp, vel_med;
	vel_med = dist = temp = 0;
	
	printf("Dist�ncia percorrida em km: ");
	scanf("%f", &dist);
	printf("Tempo para percorrer os %.2fkm em horas: ", dist);
	scanf("%f", &temp);
	printf("\n");
	
	vel_med = dist/temp;
	
	if(vel_med>90)
		{
			printf("Limite de velocidade EXCEDIDO. M�dia de %.2f km/h. ", vel_med);	
		}else
			{
				printf("Limite de velocidade N�O excedido. M�dia de %.2f km/h.", vel_med);
			}	
	
	return 0;
	
	/*
		Esta forma de medir n�o � acurado para dist�ncias muito grandes. 
		
		Uma vez que por exemplo em 100km sendo percorridos em 2 horas.
		
		O m�vel pode percorres os primeiros 50km na primeira meia hora o que daria uma m�dia "local" de 100km/h excedendo aqui o limite. 
		E o restante do trajeto, ou seja os outros 50km em 1,5 horas , o que daria uma m�dia "local" de aproximandamente 33.33km/h
		
		 O que no entando daria uma m�dia "global" total de 50km/h.
	*/
}
