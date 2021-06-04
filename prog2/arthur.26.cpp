//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex5.4 - lista funcoes

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>
int cpf;
char senha[10], conf[10], nome[30];
void valid_pass(char psenha[10], char pconfirma[10])
{
	if (strcmp(psenha,pconfirma)==0)
		printf("Validação bem sucedida!");
	else
		printf("Confirmação incorreta.");	
}
main()
{		
setlocale(LC_ALL,"portuguese");
	printf("Digite seu nome: ");
		gets(nome);
	printf("Digite seu cpf: ");
		scanf("%d",&cpf);
		fflush(stdin);
	printf("Digite sua senha de no máximo 10 caracters: ");
		gets(senha);
	printf("Confirme sua senha: ");
		gets(conf);
	valid_pass(senha,conf);
	printf("\n\n");
	system("PAUSE");			
}
