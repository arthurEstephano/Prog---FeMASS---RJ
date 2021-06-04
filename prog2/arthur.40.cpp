//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex 1- lista ponteiro

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

void calc_area()
{
    float l,c,a,*larg,*comp,*area;
		printf("Digite a largura do terreno em metros:\n");
        	scanf("%f",&l);
        printf("Digite o comprimento do terreno em metros:\n");
        	scanf("%f",&c);
        a=l*c;
        larg=&l;
        comp=&c;
        area=&a;
        	printf("O terreno de largura %.2f e comprimento %.2f possui área de %.2f metros quadrados.\n",*larg,*comp,*area);
}

main()
{
	setlocale(LC_ALL,"portuguese");
		calc_area();
}
