//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
//ex 1 lista funções

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

float calcmedia(float nota1, float nota2, float nota3)
{
	return((nota1+nota2+nota3)/3);
}

main()
{
	setlocale(LC_ALL,"portuguese");
		float n1,n2,n3,media;
		int i;
			printf("Digite a nota 1:");
				scanf("%f",&n1);
			printf("Digite a nota 2:");
				scanf("%f",&n2);
			printf("Digite a nota 3:");
				scanf("%f",&n3);		
					media=calcmedia(n1,n2,n3);
			printf("A média final do aluno é de:%.2f",media);
}
