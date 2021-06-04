//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex5.6 - lista funcoes

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

char nome[30];
void letras()
{
	printf("Digite seu nome: ");
		gets(nome);
	printf("O nome possui %d letras.\n",strlen(nome));	
}
main()
{		
setlocale(LC_ALL,"portuguese");
	letras();
	system("PAUSE");			
}
