//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex8.8 - lista funcoes

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

void maratona()
{
	char nome[30],maiorn[30];
    int idade,s,toth,totf,maior=1,i;
	for(i=0;i<3;i++)
    {
		printf("Digite o nome:\n");
        	scanf("%s",&nome);
        	fflush(stdin);
        printf("Digite sua idade:\n");
        	scanf("%d",&idade);
        printf("Digite seu sexo(1 para masculino e 0 para feminino):\n");
			scanf("%d",&s);
			if(s==1)
				toth++;
			else
				totf++;
		if(idade>maior)
		{
			maior=idade;
			strcpy(maiorn,nome);	
		}					
    }
    printf("A pessoa mais velha inscrita foi %s com um total de %d anos.\n",maiorn,maior);
    printf("O total de homens foi de %d, enquanto o total de mulheres foi de %d.\n",toth,totf);
}

main()
{
	setlocale(LC_ALL,"portuguese");
		maratona();
}
