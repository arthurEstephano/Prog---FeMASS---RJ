//disciplina:  prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex8.3 - lista funcoes

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

void alunos()
{
	char nome[28][30],s[28][10];
	float n1[28],n2[28],m[28];
	int i;
	for(i=0;i<28;i++)
	{
		printf("Digite o nome do aluno: ");
			gets(nome[i]);
			fflush(stdin);
		printf("Digite a n1 do aluno: ");
			scanf("%f",&n1[i]);	
		printf("Digite a n2 do aluno: ");
			scanf("%f",&n2[i]);
		m[i]=(n1[i]+n2[i])/2;
			if(m[i]>=7.0)
				strcpy(s[i],"Aprovado ");
			else
				strcpy(s[i],"Reprovado ");	
			fflush(stdin);
		printf("O aluno %s foi %s com a nota %.2f.\n",nome[i],s[i],m[i]);		
	}
	
}

main()
{
    setlocale(LC_ALL,"Portuguese");
    alunos();
}
