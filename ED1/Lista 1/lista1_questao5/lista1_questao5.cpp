#include <stdio.h> 
#include <stdlib.h>
#include "lista1_questao5.h"

struct cadastro {
	int i;
 	int x[50];
	};
	
Cadastro* cria_cadastro (void)
{
 	Cadastro* c = (Cadastro*) malloc(sizeof(Cadastro));
	c->i = 0;  
 	return c;
}

int registro(Cadastro* c)
{
	int rg, valor, t;
	char nome[50][30], cpf[50][11], end[50][40];
	
	printf("Digite um valor para:\n1-Cadastrar numero;\n2-Exibir numero(s) cadastrados;\n3-Exibir quantidade de numeros cadastrados;\n4-Remover ultimo numero cadastrado;\n5-Sair.\n");
	scanf("%d", &valor);
	while(valor != 5)
	{
		switch (valor)
		{
			case 1:
				printf("Escreva o nome que deseja cadastrar: ");
					scanf("%s", nome[c->i]);
					fflush(stdin);
				printf("Escreva o RG que deseja cadastrar: ");
					scanf("%d", &rg);
					c->x[c->i] = rg;
				printf("Escreva o cpf que deseja cadastrar: ");
					scanf("%s", cpf[c->i]);
					fflush(stdin);
				printf("Escreva o endereco que deseja cadastrar: ");
					scanf("%s", end[c->i]);
					fflush(stdin);		
  				printf("\n");
  				c->i++;
  			break;
  			
  			case 2:
  				int k;
					for(k=0; k<c->i; k++)
					{
						printf("Dados do cliente de num. %d - %s - %d - %s - %s\n", k+1, nome[k], c->x[k], cpf[k], end[k]);		
					}
					printf("\n");
  			break;		
  			
			case 3:
				printf("Existem %d numeros cadastrados.\n", c->i);
			
			case 4:
					if(c->i == NULL)
					{
						printf("ERROR\n");
					}
					else
					{
						c->x[c->i] = NULL;
						c->i--;
					}	 	
  			break;
		  			
			default:
    			printf ("Valor invalido!\n");	
		}
		printf("Digite um valor para:\n1-Cadastrar numeros;\n2-Exibir numero(s) cadastrados;\n3-Exibir quantidade de numeros cadastrados;\n4-Remover ultimo numero cadastrado;\n5-Sair.\n");
		scanf("%d", &valor);	
	}
	free(c);
	return 0;
}
