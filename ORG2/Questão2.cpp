#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL,"portuguese");
	float sal, saldisc, disc;
		printf("Informe seu Sal�rio para o INSS c�lcular o valor do desconto.\n");
			printf("Sal�rios de Contribui��o\t\t\tAl�quotas\n");
			printf("A partir de R$ 1.100,01 at� R$ 2.203,45\t\t9%\nA partir de R$ 2.203,49 at� R$ 3.305,22\t\t12%\nA partir de R$ 3.305,23 at� R$ 6.433,57\t\t14%\n");
		printf("Sal�rio:");
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
			printf("Valor inv�lido, o valor m�ximo do INSS do segurado empregado � R$ 6.433,57.\n");
			return 0;
		}
		printf("O desconto aplicado foi de %.2f%.\n",disc*10);
		printf("O valor com desconto aplicado � de: R$%.2f.\n",saldisc);
	system("pause");
	return 0;
}
