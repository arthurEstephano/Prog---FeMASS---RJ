//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex3 - lista fun��es

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

float calcpreco(float preco)
{
	return(preco*0.75);
}

main()
{
	setlocale(LC_ALL,"portuguese");
	int cod;
	float p,pf;
		printf("Por favor informe o c�digo do produto:");	
			scanf("%d",&cod);
				printf("Por favor informe o pre�o do produto:");
	 				scanf("%f",&p);
	 					pf=calcpreco(p);
		printf("O produto %d com desconto de 25pp custa agora R$%.2f",cod,pf);		 	
}
