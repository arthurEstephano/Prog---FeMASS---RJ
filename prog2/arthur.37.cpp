//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex2 - struct

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

struct cadastro{
	char nomep[30]; char categoria[8]; float valor; int b; char tipo[6]; 
	char placa[8];
};
float totva(float v, float totv)
{
	totv=totv+v;
	return(totv);
}	
main()
{
	int totl, totg,i;
	float totvalor;	
	setlocale(LC_ALL,"portuguese");
	i=0;
	cadastro ljato[150];
		printf("Digite a placa do veículo: ");
			scanf("%s",&ljato[i].placa);
			fflush(stdin);
		while((strcmp(ljato[i].placa,"SAIR")!=0))	
		{
			printf("Digite o nome do propietário: ");
				scanf("%s",&ljato[i].nomep);
				fflush(stdin);
			printf("Digite a categoria do veículo: ");
				scanf("%s",&ljato[i].categoria);
				fflush(stdin);
			printf("Digite o tipo de lavagem ");
				scanf("%s",&ljato[i].tipo);
				fflush(stdin);	
			if((strcmp(ljato[i].categoria,"MOTO")==0))	
			{
				if((strcmp(ljato[i].tipo,"BÁSICA")==0))	
				{
					ljato[i].valor=10;							
				}
				else
				{
					totg++;
					ljato[i].valor=15;	
				}
			}	
			if((strcmp(ljato[i].categoria,"CARRO")==0))	
			{
				if((strcmp(ljato[i].tipo,"BÁSICA")==0))	
				{
					ljato[i].valor=30;							
				}
				else
				{
					totg++;
					ljato[i].valor=45;	
				}
			}
			if((strcmp(ljato[i].categoria,"CAMINHÃO")==0))	
			{
				if((strcmp(ljato[i].tipo,"BÁSICA")==0))	
				{
					ljato[i].valor=70;							
				}
				else
				{
					totg++;
					ljato[i].valor=100;	
				}
			}	
			totvalor=totva(ljato[i].valor,totvalor);
			printf("PLACA: %s\nCATEGORIA: %s\nTIPO LAVAGEM: %s\nVALOR A PAGAR: %.2f\n",ljato[i].placa,ljato[i].categoria,ljato[i].tipo,ljato[i].valor);	
			i++;
			printf("Digite a placa do veículo: ");
			scanf("%s",&ljato[i].placa);
			fflush(stdin);
		}			
		printf("A quantidade de lavagem efetuada é de %d.\n",i);
		printf("O total de carros que fizeram lavagem geral é de %d.\n",totg);
}	
