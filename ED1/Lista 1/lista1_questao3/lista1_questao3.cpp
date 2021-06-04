#include <stdio.h> 
#include <stdlib.h>
#include "lista1_questao3.h"

struct cadastro {
	 int i;
 	float x[15];
	};
	
Cadastro* cria_cadastro (void)
{
 	Cadastro* c = (Cadastro*) malloc(sizeof(Cadastro));
	c->i = 0;  
 	return c;
}

int registro(Cadastro* c)
{
	int num, valor, j=0;
	
	printf("Digite um valor para:\n1-Cadastrar numero;\n2-Exibir numero(s) cadastrados;\n3-Exibir quantidade de numeros cadastrados;\n4-Remover �ltimo numero cadastrado;\n5-Sair.\n");
	scanf("%d", &valor);
	while(valor != 5)
	{
		switch (valor)
		{
			case 1:
				printf("Escreva o numero que deseja cadastrar: ");
					scanf("%d", &num);
					c->x[c->i] = num;
  					printf("\n");
  					c->i++;
  			break;
  			
  			case 2:
  				int k;
				printf("Dados cadastrados:");
					for(k=c->i-1; k>=0; k--)
						printf("%.0f ", c->x[k]);
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
		printf("Digite um valor para:\n1-Cadastrar n�mero;\n2-Exibir n�mero(s) cadastrados;\n3-Exibir quantidade de n�meros cadastrados;\n4-Remover �ltimo n�mero cadastrado;\n5-Sair.\n");
		scanf("%d", &valor);	
	}
	free(c);
	return 0;
}
