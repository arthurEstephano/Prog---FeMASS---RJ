#include <stdio.h> 
#include <stdlib.h>
#include "lista1_questao7.h"

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
	int rg[50], valor, t, arqt, arqrg;
	Cadastro nome[50][30], cpf[50][11], end[50][40];
	char conteudo[200];
	FILE *arq;
	
	printf("Digite um valor para:\n1-Cadastrar numero;\n2-Exibir numero(s) cadastrados;\n3-Exibir quantidade de numeros cadastrados;\n4-Remover ultimo numero cadastrado;\n5-Sair.\n6-Carregar  base  de  dados do arquivo\n");
	scanf("%d", &valor);
	while(valor >= 1)
	{
		switch (valor)
		{
			case 1:
				printf("Escreva o nome que deseja cadastrar: ");
					scanf("%s", nome[c->i]);
					fflush(stdin);
				printf("Escreva o RG que deseja cadastrar: ");
					scanf("%d", &rg[c->i]);
					c->x[c->i] = rg[c->i];
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
		  	
			case 5:
				printf("O programa foi encerrado.\n");
				arq = fopen ("cadastro.txt", "w");
					for(t=0;t<c->i;t++)
					{
						fprintf(arq, "%d - %s - %d - %s - %s\n", t+1, nome[t], rg[t], cpf[t], end[t]);
					}
				fclose (arq);	
				return 0;
			break;	
					
			case 6:
				arq = fopen ("cadastro.txt", "r");
   				if (arq == NULL) 
				{
      				printf ("\nArquivo não encontrado!\n");
      				fclose (arq);
  				}	
  				else
				{
  					fread(conteudo, sizeof(char), 200, arq); 
					printf("%s\n", conteudo);  	
  					fclose (arq);
				}
			break;	
					 		
			default:
    			printf ("Valor invalido!\n");	
			break;
		}
		printf("Digite um valor para:\n1-Cadastrar numero;\n2-Exibir numero(s) cadastrados;\n3-Exibir quantidade de numeros cadastrados;\n4-Remover ultimo numero cadastrado;\n5-Sair.\n6-Carregar  base  de  dados do arquivo\n");
		scanf("%d", &valor);	
	}
	free(c);
	return 0;
}
