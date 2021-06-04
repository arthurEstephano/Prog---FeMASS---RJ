#include <stdio.h> 
#include <stdlib.h>
#define MAX 50

int cadastrolivro()
{
	int valor, i, cod[MAX], ano[MAX], j;
	char nome_livro[MAX][30];
	char autor[MAX][30];
	
	printf("Escolha um item do menu:\n");
		printf("1-Cadastrar livro\n2-Consultar todos os livros\n3-Sair\n");
		scanf("%d", &valor);
	while(valor >=1)	
	{
		switch (valor)
  		{
  			case 1:
  				printf("Informe nome:: ");
					scanf("%s", &nome_livro[i]);
					fflush(stdin);
				printf("Informe cod: ");
					scanf("%d", &cod[i]);
				printf("Informe autor: ");
					scanf("%s", &autor[i]);
					fflush(stdin);
				printf("Informe ano pub: ");
					scanf("%d", &ano[i]);
  				printf("\n");
  				printf("Cadastro  efetuado!\n");
  				i++;
  			break;
		  
			case 2:
				printf("Nomes Livros\t | \tCodigo\t | \tAutor\t | \tAno\n");
				for(j=0; j<i; j++)
					{
						printf("%s\t | \t%d\t | \t%s\t | \t%d\n", nome_livro[j], cod[j], autor[j], ano[j]);		
					}
					printf("\n");
  			break;			
		
			case 3:
				printf("O programa foi encerrado.\n");
				return 0;
			break;	
				
			default:
    			printf ("Valor invalido!\n");
			break;		
  		}
  		printf("1-Cadastrar livro\n2-Consultar todos os livros\n3-Sair\n");
		scanf("%d", &valor);
	}
  	return 0;
}
