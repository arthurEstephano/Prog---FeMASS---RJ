//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex4 - struct

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<locale.h>

typedef struct cadastro{
	char nome[30]; 
	int  nota1;
	int  nota2;
	int  nota3;
	int  nota4;
	int  nota5;
	char cpf[11];
	int  idade;
	char sexo[1]; 
}cadastro;

main()
{
	int i;
	float totn1,totn2,totn3,totn4,totn5,totn,mnotas,maiornota=1;
	char nomebanda[25];
	setlocale(LC_ALL,"portuguese");
	cadastro concurso[150];
	i=0;
		printf("Digite seu nome: ");
			scanf("%s",concurso[i].nome);
			fflush(stdin);
		while((strcmp(concurso[i].nome,"SAIR")==1))
		{
				printf("Digite seu cpf: ");
					scanf("%s",&concurso[i].cpf);
					fflush(stdin);
				printf("Digite sua idade: ");
					scanf("%d",&concurso[i].idade);
				printf("Digite seu sexo (M para masculino e F para Feminino)");
					scanf("%s",&concurso[i].sexo);
					fflush(stdin);				
				printf("Digite a nota para a banda Thunderstruck: ");
					scanf("%d",&concurso[i].nota1);
				printf("Digite a nota para a banda COVID-21: ");
					scanf("%d",&concurso[i].nota2);
				printf("Digite a nota para a banda Transgressão: ");
					scanf("%d",&concurso[i].nota3);
				printf("Digite a nota para a banda Epic: ");
					scanf("%d",&concurso[i].nota4);
				printf("Digite a nota para a banda Overdrive: ");
					scanf("%d",&concurso[i].nota5);			
				totn1=totn1+concurso[i].nota1;
					totn2=totn2+concurso[i].nota2;
				totn3=totn3+concurso[i].nota3;
					totn4=totn4+concurso[i].nota4;
				totn5=totn5+concurso[i].nota5;
					totn=totn1+totn2+totn3+totn4+totn5;			
				i++;	
				printf("Digite seu nome: ");
					scanf("%s",concurso[i].nome);		
		}
				mnotas=totn/i;
				if(totn1>maiornota)
				{
					maiornota=totn1;
					strcpy(nomebanda,"Thunderstruck");
				}
				else if(totn2>maiornota)
				{
					maiornota=totn2;
					strcpy(nomebanda,"COVID-21");
				}
				else if(totn3>maiornota)
				{
					maiornota=totn3;
					strcpy(nomebanda,"Transgressão");
				}
				else if(totn4>maiornota)
				{
					maiornota=totn4;
					strcpy(nomebanda,"Epic");
				}
				else if(totn5>maiornota)
				{
					maiornota=totn5;
					strcpy(nomebanda,"Overdrive");
				}
				printf("A média de avaliação das 5 bandas é de: %.2f\n",mnotas);
				printf("A quantidade de pessoas votantes foi de: %d\n",i);
				printf("O nome da banda vencedora é %s!\n",nomebanda);
				
}
