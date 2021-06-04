//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex 3- lista ponteiro

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

int calc_50k(float v)
{
	int j;
    float valor=v;
    if(valor>50000)
    	j++;
    	return(j);
}
void calc_bonus(float v)
{
	float valor=v,bonus,*pt;
		if(valor<=5000)
			bonus=100;
		else
		if((valor>5000)&&(valor<=10000))
			bonus=300;
		else	
		if((valor>10000)&&(valor<=50000))		
			bonus=500;
		else
		if(valor>50000)
			bonus=1000;	
		pt=&bonus;	
}		
main()
{
	int j,matricula;
	float valor,bonus,salario,salariofinal,*pt;
	setlocale(LC_ALL,"portuguese");
		printf("Digite a matrícula do vendedor:");
			scanf("%d",&matricula);
		while(matricula!=0)
		{
			printf("Digite o salário do vendedor:");
				scanf("%f",&salario);
			printf("Digite o total de vendas realizadas no mês:");
				scanf("%f",&valor);	
			j=calc_50k(valor);
			calc_bonus(valor);
				salariofinal=salario+bonus;		
			printf("Digite a matrícula do vendedor:");
				scanf("%d",&matricula);		
		}
		printf("O total de vendedores que venderam acima de R$50.000 é de:%d\n",j);	
}
