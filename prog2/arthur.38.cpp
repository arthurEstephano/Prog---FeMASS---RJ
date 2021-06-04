//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex3 - struct

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<locale.h>

typedef struct cadastro{
	char nome[30]; 
	float peso;
	float altura;
	char sexo[1]; 
}cadastro;
float MASSA(float h, float p,float imc)
{
	imc=p/(h*h);
	return(imc);
}
main()
{
	int i,j;
	float imc;
	setlocale(LC_ALL,"portuguese");
	cadastro medico[150];
	i=0;
		printf("Digite seu nome: ");
			scanf("%s",medico[i].nome);
			fflush(stdin);
		while((strcmp(medico[i].nome,"SAIR")==1))
		{
				printf("Digite sua altura: ");
					scanf("%f",&medico[i].altura);
				printf("Digite seu peso: ");
					scanf("%f",&medico[i].peso);	
				printf("Digite seu sexo (M para masculino e F para Feminino)");
					scanf("%s",&medico[i].sexo);
					fflush(stdin);		
				imc=MASSA(medico[i].altura,medico[i].peso,imc);	
					if(imc<18.5)
						printf("O paciente está abaixo do peso ideal.\n");
					else if((imc>18.5)&&(imc<24.9))		
						printf("O paciente está no peso ideal(parabéns).\n");	
					else if((imc>24.9)&&(imc<30))	
						printf("O paciente está levemente acima do peso.\n");
					else if((imc>30)&&(imc<34.9))	
						printf("O paciente está com obesidade grau I.\n");
					else if((imc>34.9)&&(imc<39.9))	
						printf("O paciente está com obesidade grau II(Severa).\n");
					else if(imc>39.9)
						printf("O paciente está com obesidade grau III(Mórbida).\n");	
				i++;	
				printf("Digite seu nome: ");
					scanf("%s",medico[i].nome);				
		}	
		for(j=0;j<i;j++)
		{
			if((imc<18.5)or(imc>34.9))
			printf("NOME:%s\nPESO:%.2f\n",medico[j].nome,medico[j].peso);
		}
}
