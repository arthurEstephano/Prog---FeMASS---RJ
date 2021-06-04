//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex2.2 - lista 1

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

main()
{
		setlocale(LC_ALL,"portuguese");
		char estado[2];
			printf("Digite a sigla do seu estado:");
				scanf("%s",&estado);
					strupr(estado);
						if(strcmp(estado,"RJ")==0)
							 	printf("Você é Carioca.");
						else
						if(strcmp(estado,"SP")==0)
							 	printf("Você é Paulista.");	 	
						else
						if(strcmp(estado,"MG")==0)
							 	printf("Você é Mineiro.");	 	
						else
								printf("Você é de Outros estados.");	 	
}
