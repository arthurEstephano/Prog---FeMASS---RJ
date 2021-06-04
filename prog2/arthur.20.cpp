//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex2 - lista funções

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
	 printf("Por favor informe o salário:");
	 	scanf("%f",&sal);
	 		salf=calcsal(sal);
	 printf("O salário acrescido de 10pp é de R$%.2f",salf);		 	
}
