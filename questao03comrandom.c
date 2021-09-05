#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int i, num, cont_1, cont_2, cont_3, cont_4, cont_5, cont_6, cont_7, cont_8, cont_9, cont_ger; 
	float soma, cont_t1, cont_t2, cont_t3, cont_t4, cont_t5, cont_t6, cont_t7, cont_t8, cont_t9;
	
	soma = cont_t1 = cont_t2 = cont_t3 = cont_t4 = cont_t5 = cont_t6 = cont_t7 = cont_t8 = cont_t9 = 0.0;
		
	srand(time(NULL)); cont_ger = 0;
		
	do{
		
		i = num = cont_1 = cont_2 = cont_3 = cont_4 = cont_5 = cont_6 = cont_7 = cont_8 = cont_9 = 0; 
		
		system("cls");
		
		for(i=0;i<30;i++)
			{
				num = rand()%9 + 1;
						
				switch(num)
					{
						case 1: cont_1 = cont_1 + 1; 
						break;	
						case 2: cont_2 = cont_2 + 1; 
						break;	
						case 3: cont_3 = cont_3 + 1; 
						break;	
						case 4: cont_4 = cont_4 + 1; 
						break;	
						case 5: cont_5 = cont_5 + 1; 
						break;	
						case 6: cont_6 = cont_6 + 1; 
						break;	
						case 7: cont_7 = cont_7 + 1; 
						break;	
						case 8: cont_8 = cont_8 + 1; 
						break;	
						case 9: cont_9 = cont_9 + 1; 
						break;	
					}
				
				switch(num)
					{
						case 1: cont_t1 = cont_t1 + 1; 
						break;	
						case 2: cont_t2 = cont_t2 + 1; 
						break;	
						case 3: cont_t3 = cont_t3 + 1; 
						break;	
						case 4: cont_t4 = cont_t4 + 1; 
						break;	
						case 5: cont_t5 = cont_t5 + 1; 
						break;	
						case 6: cont_t6 = cont_t6 + 1; 
						break;	
						case 7: cont_t7 = cont_t7 + 1; 
						break;	
						case 8: cont_t8 = cont_t8 + 1; 
						break;	
						case 9: cont_t9 = cont_t9 + 1; 
						break;	
					}
			}
	
		printf("1: "); for(i=0;i<cont_1;i++){printf("*");} printf("\n\n2: "); for(i=0;i<cont_2;i++){printf("*");} printf("\n\n3: "); for(i=0;i<cont_3;i++){printf("*");} 
		printf("\n\n4: "); for(i=0;i<cont_4;i++){printf("*");} printf("\n\n5: "); for(i=0;i<cont_5;i++){printf("*");} printf("\n\n6: "); for(i=0;i<cont_6;i++){printf("*");}
		printf("\n\n7: "); for(i=0;i<cont_7;i++){printf("*");} printf("\n\n8: "); for(i=0;i<cont_8;i++){printf("*");} printf("\n\n9: "); for(i=0;i<cont_9;i++){printf("*");}
		
		cont_ger = cont_ger + 1;
		
	}while(cont_ger<1000);
	
	soma = cont_t1 + cont_t2 + cont_t3 + cont_t4 + cont_t5 + cont_t6 + cont_t7 + cont_t8 + cont_t9;
	
	printf("\n\nTotal de 1: %.0f - %f%%", cont_t1, (cont_t1/soma)*100); printf("\nTotal de 2: %.0f - %f%%", cont_t2, (cont_t2/soma)*100);
	printf("\nTotal de 3: %.0f - %f%%", cont_t3, (cont_t3/soma)*100); printf("\nTotal de 4: %.0f - %f%%", cont_t4, (cont_t4/soma)*100);
	printf("\nTotal de 5: %.0f - %f%%", cont_t5, (cont_t5/soma)*100); printf("\nTotal de 6: %.0f - %f%%", cont_t6, (cont_t6/soma)*100);
	printf("\nTotal de 7: %.0f - %f%%", cont_t7, (cont_t7/soma)*100); printf("\nTotal de 8: %.0f - %f%%", cont_t8, (cont_t8/soma)*100);
	printf("\nTotal de 9: %.0f - %f%%", cont_t9, (cont_t9/soma)*100); printf("\n\nTotal:      %.0f", soma);
	
	return 0; 
}
