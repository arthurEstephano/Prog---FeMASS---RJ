//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex5 - nivelamento

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
		float nota[3],total,media;
		int i;
			for(i=0;i<3;i++)
			{
				printf("Insira a nota %d:",i+1);
					scanf("%f",&nota[i]);
				total=total+nota[i];
			}	 	
			media=total/(i);
			printf("A média final do aluno é de:%.2f",media);	
}
