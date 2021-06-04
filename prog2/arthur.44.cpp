//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex 5- lista ponteiro

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

typedef struct cadastro{
	char nome[30];
	int matricula;
	float notap,notat,notapart;
}cadastro;
float nota_final(float x,float a,float b,float c)
{
	float notaf=x, notap=a, notat=b, notapart=c;
	notaf=a+b+c;
	return(notaf);
}	
int cont(int f)
{
	f++;	
	return(f);		
}
main()
{
	int i,totr,totap,aprovados;
	float *pf,notaf,notafinal;
	setlocale(LC_ALL,"portuguese");
	cadastro aluno[2];
		for(i=0;i<2;i++)
		{
			printf("Digite o nome do aluno:");
				scanf("%s",&aluno[i].nome);
				fflush(stdin);
			printf("Digite a matricula do aluno:");
				scanf("%d",&aluno[i].matricula);
			printf("Digite a nota da prova (até 6):");
				scanf("%f",&aluno[i].notap);	
			printf("Digite a nota do trabalho (até 3):");
				scanf("%f",&aluno[i].notat);
			printf("Digite a nota de participação (até 1):");
				scanf("%f",&aluno[i].notapart);
			notafinal=nota_final(notaf,aluno[i].notap,aluno[i].notat,aluno[i].notapart);
				pf=&notaf;
			if(notafinal>=7)	
				aprovados=cont(totap);
				printf("A nota do final do aluno é:%.2f\n",notafinal);	
		}
		totr=i-aprovados;
	printf("O total de reprovados foi de %d enquanto o de aprovados foi de %d.\n",totr,aprovados);	
}
