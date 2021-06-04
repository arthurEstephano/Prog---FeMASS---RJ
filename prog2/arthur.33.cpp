//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex8.5 - lista funcoes

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

void peso()
{ 
	int i,j;
    float matriz[3][4];
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
        	printf("Informe o peso em kg do produto: ");
        		scanf("%f",&matriz[i][j]);
		}	
    }
    printf("\n\n");
    for(i=0;i<3;i++)
    	{
			for(j=0;j<4;j++)
        		{
					printf("%.2f\t\t",matriz[i][j]);			
    			}
    		printf("\n");
		}    	
    printf("\n\n");
	for(i=0;i<3;i++)
    	{
			for(j=0;j<4;j++)
        		{
        			matriz[i][j]=matriz[i][j]/0.454;
					printf("%.3f\t\t",matriz[i][j]);			
    			}
    		printf("\n");
		}    	
    printf("\n\n");
    printf("Peso em libras:\n")
}
main()
{
    setlocale(LC_ALL,"Portuguese");
    peso();
}
