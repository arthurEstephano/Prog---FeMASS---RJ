//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// n2 

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

typedef struct {
int cod,mat;
char nome[25],curso[17],sob[3];
float valor,totvalor;

} controle;
controle cantina;
controle *p = &cantina;
float calcular_valor(float preco)
{
		return(preco+5);		
}
void calcular_tot(float *ptotfatu, float *pfatu)
{
	*ptotfatu=*ptotfatu+*pfatu;
}
main()
{
int totcarne, totfra=0, totmacarao;
setlocale(LC_ALL,"portuguese");
	printf("Digite sua matrícula:");
		scanf("%d",&p->mat);
	while(p->mat!=0)
	{
		printf("Digite seu nome:");
			scanf("%s",&p->nome);
		printf("Digite seu curso:");
			scanf("%s",&p->curso);
		printf("Digite o codigo do prato (10,20 ou 30):");
			scanf("%d",&p->cod);
	if(p->cod==10)
	{
	p->valor=15;
	totcarne++;
	}
	else
	if(p->cod==20)
	{
	p->valor=12;
	totfra++;
	}
	else
	if(p->cod==30)
	{
	p->valor=10;
	totmacarao++;
	}	
		printf("Deseja sobremesa (Pudim de Leite ou Gelatina), sim ou não?:");
			scanf("%s",&p->sob);
	if((strcmp(p->sob,"sim"))==0)			
		p->valor=calcular_valor(p->valor);						
	calcular_tot(&p->totvalor, &p->valor);
		if(p->cod==10)	
			printf("O aluno de matrícula %d que escolheu o prato Picadinho de Carne pagou R$%.2f.\n",p->mat,p->valor);
		if(p->cod==20)	
			printf("O aluno de matrícula %d que escolheu o prato Frango à Parmegiana pagou R$%.2f.\n",p->mat,p->valor);
		if(p->cod==30)	
			printf("O aluno de matrícula %d que escolheu o prato Espaguete à Bolonhesa pagou R$%.2f.\n",p->mat,p->valor);		
	printf("Digite sua matrícula:");
		scanf("%d",&p->mat);	
	}	
	printf("Total prato Picadinho de Carne: %d \nTotal prato Frango à Parmegiana: %d \nTotal prato Espaguete à Bolonhesa:%d \n",totcarne,totfra,totmacarao);
	printf("O total de faturamento foi de R$%.2f\n",p->totvalor);	
}	
