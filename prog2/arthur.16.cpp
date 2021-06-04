//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex3.3 - lista 1

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	int n[10],menor=9999999,i;
		for(i=0;i<10;i++)
		{
			printf("Digite um número:");
				scanf("%d",&n[i]);
					if(n[i]<menor)
						menor=n[i];		
		}
		printf("O menor número é %d.",menor);
}
