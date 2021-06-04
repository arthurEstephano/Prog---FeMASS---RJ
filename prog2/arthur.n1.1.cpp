//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// Questão 1 - N1

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

float vp(char refrigerante, float valorpizza, float valorbebida, float valorpagar,char saborpizza[10])
{
		if(strcmp(saborpizza,"Muzzarela")==0)
				valorpizza=20;	
			else 
		if(strcmp(saborpizza,"Portuguesa")==0)	
				valorpizza=25;
			else
				valorpizza=35;
		if(refrigerante=='S')
				valorbebida=5;
			else
				valorbebida=0;
		valorpagar=valorbebida+valorpizza;
		return(valorpagar);			
}
float total(float i, float valortotalpagar, float valorpagar)
{
	i++;
	valortotalpagar = valortotalpagar+valorpagar;
	return(valortotalpagar);
}
main()
{
	int tel;
	float cp,cr,ct,totp,totf,va;
	char sabor[10], refri, end[35];
    setlocale(LC_ALL,"Portuguese");
    printf("Telefone com DDD (apenas números):");
    		scanf("%d",&tel);
	while(tel!=0)
    {
    	printf("Endereço de Entrega:");
    		scanf("%s",&end);
    		fflush(stdin);
    	printf("Sabor da Pizza [Muzzarela, Portuguesa ou Camarão]:");
			scanf("%s",&sabor);
			fflush(stdin);
		printf("Refrigerante? [S/N]:");
			scanf("%c",&refri);
			fflush(stdin);
		va = vp(refri,cp,cr,ct,sabor);
		total(totp,totf,va);
		totp++;	
		totf=totf+va;
			printf("O total pagar deste pedido foi de %.2f.\n",va);	
		printf("Telefone com DDD (apenas números):");
    		scanf("%d",&tel);						
	}
	printf("O total de pedidos foi de %.0f, enquanto o total de faturamento foi de %.2f.\n",totp,totf);
}
