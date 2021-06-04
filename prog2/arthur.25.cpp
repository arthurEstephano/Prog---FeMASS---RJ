//disciplina:  prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex3.4 - lista funcoes

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

void idades()
{
    int idade, total21=0, total50=0;
    do
    {
        printf("Digite a idade, ou 0 para sair:\n");
        scanf("%d",&idade);
        if(idade<21&&idade>0)
        {
            total21++;
        }
        if(idade>50)
        {
            total50++;
        }
    }
    while(idade>0);
    printf("Menores de 21: %d \nMaiores de 50: %d", total21, total50);
}

main()
{
	setlocale(LC_ALL,"portuguese");
		idades();
}
