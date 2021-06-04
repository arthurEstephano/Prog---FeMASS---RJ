//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex3.1 - lista 1

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

main()
{
		setlocale(LC_ALL,"portuguese");
		char nome[20];
		int i;
			printf("Digite seu nome:");
				gets(nome);	
					fflush(stdin);	
						for(i=0;i<10;i++)
						{
							printf("%s\n",nome);
						}				
}
