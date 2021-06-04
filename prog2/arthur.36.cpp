//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex1 - struct

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<locale.h>

typedef struct cadastro{
	char nome[30];
	char cpf[11]; 
	int idade;
	char prof[17];
	float valor;
	char sexo[1]; 
}cadastro;
main()
{
	int toth = 0,totm = 0,tot60 = 0,totd = 0,i;
	float totvalor;	
	setlocale(LC_ALL,"portuguese");
	cadastro evento[150];
	i=0;
		printf("Digite seu cpf: ");
			scanf("%s",evento[i].cpf);
		while((strcmp(evento[i].cpf,"0")==1)){
				printf("Digite seu nome: ");
					scanf("%s",evento[i].nome);
					fflush(stdin);
				printf("Digite o valor a ser doado ");
					scanf("%f",&evento[i].valor);	
				printf("Digite sua profissão: ");	
					scanf("%s",evento[i].prof);
					fflush(stdin);
				printf("Digite sua idade: ");
					scanf("%d",&evento[i].idade);
          fflush(stdin);
				printf("Digite seu sexo (M para masculino e F para Feminino)");
					scanf("%s",evento[i].sexo);
					fflush(stdin);		
				if((strcmp(evento[i].sexo,"M")==0))
						toth++;
				else
					totm++;	
				if(evento[i].idade>60)
					tot60++;
				totvalor=totvalor+evento[i].valor;	
				if(evento[i].valor>1000)
				{
					totd++;
				}
				i++;	
				printf("Digite seu cpf: ");
					scanf("%d",&evento[i].cpf);						
		}	
		printf("Quantidade de homens e mulheres inscritos são respectivamente: %d e %d\n",toth,totm);
		printf("Quantidade de pessoas acima de 60 anos: %d\n",tot60);
		printf("Quantidade de pessoas que doaram acima de 1000 reais: %.2f\n",totd);
		printf("O valor total arrecadado foi de: %.2f\n",totvalor);	
}
