#include <iostream>
#include "lista_dupla.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	Lista2* l;
	int op;
	l = inicializa();
	int valor;
	printf("Escolha uma opcao abaixo para utilizar as funcoes da biblioteca de Lista duplamente encadeada de insercao ordenada.\n");
 	printf("1)Insere_ordenado\n2)Remove_inicio\n3)Remove_fim\n4)Remove_elemento\n5)Imprime_inicio_fim\n6)Imprime_fim_inicio\n7)Busca_elemento\n8)Sair\n");
 	printf("Sua escolha eh: ");	
		 scanf("%d",&op);
	while(op > 0)
 	{
 		switch(op)
 		{
 			case 1:
 				printf("Digite um valor para ser inserido ordenado:");
					scanf("%d",&valor);
 				l = Insere_ordenado (l, valor);		
			break; 
			
			case 2:
 				l = Remove_inicio (l);
			break; 
			
			case 3:
				l = Remove_fim (l);
			break; 
			
			case 4:
				printf("Digite um valor para ser removido:");
					scanf("%d",&valor);
				l = Remove_elemento (l, valor);
			break; 
			
			case 5:
				Imprime_inicio_fim (l);
			break; 
			
			case 6:
 				Imprime_fim_inicio (l);
			break; 
			
			case 7:
				printf("Digite um valor para buscar:");
					scanf("%d",&valor);
 				l = Busca_elemento (l, valor);
			break; 
			
			case 8:
				system("PAUSE");
			break;	
			
			default:
    			printf ("Valor invalido!\n");
			break;
		}
		printf("\n\nEscolha uma opcao abaixo para utilizar as funcoes da biblioteca de Lista duplamente encadeada de insercao ordenada.\n");;
 		printf("1)Insere_ordenado\n2)Remove_inicio\n3)Remove_fim\n4)Remove_elemento\n5)Imprime_inicio_fim\n6)Imprime_fim_inicio\n7)Busca_elemento\n8)Sair\n");
 		printf("Sua escolha eh: ");	
			scanf("%d",&op);
	}system("PAUSE");
}

