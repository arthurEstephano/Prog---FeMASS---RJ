#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL,"portuguese");
	float sal, saldisc, disc;
		printf("Informe seu Salário para o INSS cálcular o valor do desconto.\n");
			printf("Salários de Contribuição\t\t\tAlíquotas\n");
			printf("A partir de R$ 1.100,01 até R$ 2.203,45\t\t9%\nA partir de R$ 2.203,49 até R$ 3.305,22\t\t12%\nA partir de R$ 3.305,23 até R$ 6.433,57\t\t14%\n");
		printf("Salário:");
			scanf("%f",&sal);
		if(sal<=1100)
		{
			disc = 0.075;
			saldisc = sal-(sal*disc);
		}
		else
		if(sal<=2203.45 && sal>1100)
		{
			disc = 0.09;
			saldisc = sal-(sal*disc);
		}
		else
		if(sal<=3305.22 && sal>2203.45)
		{
			disc = 0.12;
			saldisc = sal-(sal*disc);
		}
		else
		if(sal<=6433.57 && sal>3305.22)
		{
			disc = 0.14;
			saldisc = sal-(sal*disc);
		}
		else
		{
			printf("Valor inválido, o valor máximo do INSS do segurado empregado é R$ 6.433,57.\n");
			return 0;
		}
		printf("O desconto aplicado foi de %.2f%.\n",disc*10);
		printf("O valor com desconto aplicado é de: R$%.2f.\n",saldisc);
	system("pause");
	return 0;
}
