//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex2 - lista 1

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	char nome[30];
	float salario;
     printf("Informe o seu nome:");
     	gets(nome);
	 printf("Informe o sal�rio:");
	 	scanf("%f",&salario);
	 salario=salario*1.1;
	 	printf("Seu sal�rio acrescido de 10pct � de %.2f!",salario);		 	
}
