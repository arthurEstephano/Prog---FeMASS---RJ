//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex3.2 - lista 1

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	float salario, totals;
	 printf("Por favor informe o salário:");
	 	scanf("%f",&salario);
	 		while(salario!=0)
	 		{
	 			totals=totals+salario;	
	 			printf("Por favor informe o salário:");
	 			scanf("%f",&salario);	
			}
	 printf("A soma dos salários é de R$%.2f",totals);		 	
}
