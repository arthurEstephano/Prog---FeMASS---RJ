//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex8.7 - lista funcoes

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

int conv(int real)
{
	return(real/3.54);
}
	
main()
{
	float sal,totr,totd;
    setlocale(LC_ALL,"Portuguese");
    do
    {
    	printf("Informe o sal�rio do funcion�rio:");
    		scanf("%f",&sal);
    	totr=totr+sal;
    	totd=conv(totr);
	}
	while(sal!=0);
	printf("O total dos sal�rios em reais � de R$%.2f \nEnquanto o total em d�lar � de U$%.2f\n",totr,totd);
}
