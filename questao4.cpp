#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		
		float alt[3];
		int i;
		for(i = 0;i<3;i++){
			printf("informe a Altura: \n");
			scanf("%f",&alt[i]);
		}
		printf("Altura 1: \n %f", alt[0], "Altura2: \n %f", alt[1], "Altura 3: \n %f", alt[2]);
		printf("\nAltura2: \n %f", alt[1]);
		printf("\nAltura 3: \n %f", alt[2]);
		printf("\n");
		
		if(alt[0] > alt[1] && alt[0] > alt[2])
			{
				printf("Maior altura: \n %f", alt[0]);
				printf("\n");
			}
		if(alt[1] > alt[0] && alt[1] > alt[2])
			{
				printf("Maior Altura: \n %f", alt[1]);
				printf("\n");
			}
		if(alt[2] > alt[0] && alt[2] > alt[1])
			{
				printf("Maior Altura: \n %f", alt[2]);
				printf("\n");
			}
			
		
			if(alt[0] < alt[1] && alt[0] < alt[2])
			{
			printf("Menor Altura: \n %f", alt[0]);
			printf("\n");
			}
			if(alt[1] < alt[0] && alt[1] < alt[2])
			{
			printf("Menor Altura: \n %f", alt[1]);
			printf("\n");
			}
			if(alt[2] < alt[0] && alt[2] < alt[1])
			{
			printf("Menor Altura: \n %f", alt[2]);
			}
	}
