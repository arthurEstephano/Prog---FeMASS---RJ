//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex2 - nivelamento

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

main()
{
	char nome[30];
	int sexo,idade;
	setlocale(LC_ALL,"portuguese");
	srand(time(NULL));
	printf("Olá, por favor informe os seguintes dados:\n");
	printf("Nome: ");
		gets(nome);
	printf("Sexo(digite 1 para feminino e 2 para masculino): ");
		scanf("%d",&sexo);
	printf("Idade: ");
		scanf("%d",&idade);
			if((sexo==1)and(idade<25))
				printf("ACEITA!\n");
			else
			printf("NÃO ACEITA");			
}
