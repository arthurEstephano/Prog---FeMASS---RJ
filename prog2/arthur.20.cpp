//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex2 - lista fun��es

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

float calcsal(float salario)
{
	return(salario*1.1);
}

main()
{
	setlocale(LC_ALL,"portuguese");
	float sal,salf;
	 printf("Por favor informe o sal�rio:");
	 	scanf("%f",&sal);
	 		salf=calcsal(sal);
	 printf("O sal�rio acrescido de 10pp � de R$%.2f",salf);		 	
}
