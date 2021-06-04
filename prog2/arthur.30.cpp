//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex8.1 - lista funcoes

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

void tenis()
{
	char nome[30]="";
    int idade, totalj, totala,totalm;
	while(true)
    {
		if(strcmp(nome,"Sair")!=0)
		{
			printf("Digite o nome, ou ""Sair"" para sair:\n");
        		scanf("%s",&nome);
        		fflush(stdin);
        printf("Digite a idade: ");	
        	scanf("%d",&idade);
        if(idade<=17&&idade>=10)
        {
            totalj++;
        }
        else if(idade>40)
        {
            totalm++;
        }
        else if(idade=<40&&idade>=18)
        {
        	totala++;
		}
		}
		else
			break;
    }
    printf("Jogadores Juvenil: %d \nJogadores Adulto: %d \nJogadores Master: %d\n", totalj, totala,totalm);
}

main()
{
	setlocale(LC_ALL,"portuguese");
		tenis();
}
