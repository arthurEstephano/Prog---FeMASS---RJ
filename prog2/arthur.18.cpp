//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex3.4 - lista 1

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

main()
{
		setlocale(LC_ALL,"portuguese");
		int n;
			printf("Digite um número entre 1 e 4:");
				scanf("%d",&n);
					do
					{
						printf("Digite um número entre 1 e 4:");
							scanf("%d",&n);
								}while((n<1)or(n>4));	
			printf("%d",n);				
}
