#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float A, B, C, D, max, min;
	
	printf("1� n�mero: ");
	scanf("%f", &A);
	printf("2� n�mero: ");
	scanf("%f", &B);
	printf("3� n�mero: ");
	scanf("%f", &C);
	printf("4� n�mero: ");
	scanf("%f", &D);

		max = A; 
		min = A;

		if(B>max){max=B;}
		if(B<min){min=B;}

		if(C>max){max=C;}
		if(C<min){min=C;}
	
		if(D>max){max=D;}
		if(D<min){min=D;}
	
	printf("\nMAIOR: %.2f", max);
	printf("\nMENOR: %.2f", min);
		
	return 0;	
}
