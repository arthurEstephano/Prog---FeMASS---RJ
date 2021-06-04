//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex6 - nivelamento

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
		int i,j,matriz[3][3];
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					printf("Informe o elemento %d,%d:",i+1,j+1);
						scanf("%d",&matriz[i][j]);
				printf("\n");	
				}	 	
			}
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					printf("%d\t",matriz[i][j]);
				}
				printf("\n");	
			}	 
				printf("\n\n");
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					matriz[i][j]=matriz[i][j]*5;
					printf("%d\t",matriz[i][j]);
				}
				printf("\n");	
			}	 
}
