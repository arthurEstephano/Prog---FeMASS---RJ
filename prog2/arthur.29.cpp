//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex6.3 - lista funcoes

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

void basquetin()
{ 
	char nome[16][30], menorn[30], maiorn[30];
    int i, j,q=0;
    float menorh=3,maiorh=1,matriz[4][4],toth,media;
    for(q=0;q<16;q++)
	{
    printf("Informe o nome do jogador: ");
				gets(nome[q]);
				fflush(stdin);
	}
	q=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
        	printf("Informe a altura do jogador %d em metros: ",q+1);
        		scanf("%f",&matriz[i][j]);
						if(matriz[i][j]>maiorh)
						{
							strcpy(maiorn,nome[q]);
							maiorh=matriz[i][j];
						}
						if(matriz[i][j]<menorh)
						{
							strcpy(menorn,nome[q]);
							menorh=matriz[i][j];
						}
			toth=toth+matriz[i][j];	
			q++;					
		}
    }
    for(i=0;i<4;i++)
    	{
			for(j=0;j<4;j++)
        		{
					printf("%.2f\t",matriz[i][j]);			
    			}
    		printf("\n");
		}    	
    printf("\n\n");
    media=toth/16;
    printf("O atleta %s possui a menor altura de %.2f metros.\n", menorn,menorh);
    printf("O atleta %s possui a maior altura de %.2f metros.\n", maiorn,maiorh);
    printf("A média de altura dos atletas é de %.2f metros.\n",media);

}
main()
{
    setlocale(LC_ALL,"Portuguese");
    basquetin();
}
