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
		int i,total50,total21;
			do
			{
			printf("Por favor informe a idade:");
		 		scanf("%d",&i);
		 			if(i<21)
		 					total21++;
		 						else
		 							if(i>50)
		 								total50++;
		 	}while(i!=0);
			printf("O total de pessoas com mais de 50 anos é de:%d, enquanto o total de pessoas com menos de 21 é de:%d",total50,total21);		 	
}
