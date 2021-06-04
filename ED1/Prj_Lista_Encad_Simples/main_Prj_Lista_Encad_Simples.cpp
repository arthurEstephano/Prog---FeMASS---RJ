#include "lista_simples.h"


main() 
{
	setlocale(LC_ALL, "Portuguese");
	int valor, op, vz, tam;
	Lista* l; 
 	l = inicializa(); 
 	printf("Escolha uma opção abaixo para utilizar as funções da biblioteca de manipulação da lista.\n");
 	printf("1)insere_inicio\n2)imprime\n3)vazia\n4)busca\n5)retira\n6)libera\n7)mostraInicio\n8)mostraFim\n9)tamanho\n10)ocorrencias\n11)insereFim\n12)removeInicio\n13)removeFim\n14)imprime_recursiva\n15)retira_recursiva\n16)libera_recursiva\n17)Sair\n");
 	printf("Sua escolha eh: ");	
		 scanf("%d",&op);
 	while(op != 17)
 	{
 		switch(op)
 		{
 			case 1:
				printf("Digite um valor para ser inserido no início:");
					scanf("%d",&valor);
				l = insere_inicio(l,valor);	
			break; 	
			
			case 2:
			 	imprime(l);
			break; 
			
			case 3:
			 	vz = vazia(l);
			 	if(vz == 1)
			 		printf("A lista esta vazia.\n");
			 	else
					printf("A lista nao esta vazia.\n"); 		
			break; 
			
			case 4:
				printf("Digite um valor que deseja buscar:");
					scanf("%d",&valor);
				l = busca(l, valor); 
			break; 
			
			case 5:
				printf("Digite um valor que deseja retirar:");
					scanf("%d",&valor);
				l = retira(l, valor); 
			break; 
			
			case 6:
			 	libera(l);
			break; 
				
			case 7:
				mostraInicio(l); 	
			break; 
			
			case 8:
				mostraFim(l);
			break; 
			
			case 9:
				tam = tamanho(l); 
			break; 
			
			case 10:
				printf("Digite um valor que deseja retornar o número de ocorrências:");
					scanf("%d",&valor);
				ocorrencias(l, valor);
			break; 
			
			case 11:
				printf("Digite um valor para ser inserido no fim:");
					scanf("%d",&valor);
				l = insereFim(l, valor);
			break; 
			
			case 12:
				l = removeInicio(l); 
			break; 
			
			case 13:
			 	l = removeFim(l); 
			break;
			
			case 14:
				imprime_rec(l);
			break; 
			
			case 15:
				printf("Digite um valor que deseja retirar:");
					scanf("%d",&valor);
				l = retira_rec(l, valor);
			break; 
			
			case 16:
				libera_rec(l);
			break; 
			
			default:
    			printf ("Valor invalido!\n");
			break;	
		}
		printf("\n\n");
 		printf("1)insere_inicio\n2)imprime\n3)vazia\n4)busca\n5)retira\n6)libera\n7)mostraInicio\n8)mostraFim\n9)tamanho\n10)ocorrencias\n11)insereFim\n12)removeInicio\n13)removeFim\n14)imprime_recursiva\n15)retira_recursiva\n16)libera_recursiva\n17)Sair\n");
 			scanf("%d",&op);		
	}
	printf("\n\nObrigado por usar o programa!\n");
	free(l);
 	system("pause");
}
