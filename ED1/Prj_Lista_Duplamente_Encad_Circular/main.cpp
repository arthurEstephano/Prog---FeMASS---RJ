#include "lista_dupla_circular.h"


int main() 
{
Lista2* l;
	int op;
	l = inicializa();
	int valor;
	printf("\n\nEscolha uma opcao abaixo para utilizar as funcoes da biblioteca de Lista circular duplamente encadeada de insercao ordenada.\n");
 	printf("1)Insere_inicio\n2)Insere_fim\n3)Remove_inicio\n4)Remove_fim\n5)Imprime_frente_fim\n6)Imprime_reverso\n7)Remove_valor\n8)Sair\n");
 	printf("Sua escolha eh: ");	
		 scanf("%d",&op);
	while(op > 0)
 	{
 		switch(op)
 		{
 			case 1:
 				printf("Digite um valor para ser inserido ordenado:");
					scanf("%d",&valor);
 				l = Insere_inicio (l, valor);		
			break; 
			
			case 2:
				printf("Digite um valor para ser inserido ordenado:");
					scanf("%d",&valor);
 				l = Insere_fim (l, valor);
			break; 
			
			case 3:
				l = Remove_inicio (l);
			break; 
			
			case 4:
				l = Remove_fim (l);
			break; 
			
			case 5:
				Imprime_frente_fim (l);
			break; 
			
			case 6:
 				Imprime_reverso (l);
			break; 
			
			case 7:
				printf("Digite um valor para buscar:");
					scanf("%d",&valor);
 				l = Remove_valor (l, valor);
			break; 
			
			case 8:
				system("PAUSE");
			break;	
			
			default:
    			printf ("Valor invalido!\n");
			break;
		}
		printf("\n\nEscolha uma opcao abaixo para utilizar as funcoes da biblioteca de Lista duplamente encadeada de insercao ordenada.\n");;
 		printf("1)Insere_inicio\n2)Insere_fim\n3)Remove_inicio\n4)Remove_fim\n5)Imprime_frente_fim\n6)Imprime_reverso\n7)Remove_valor\n8)Sair\n");
 		printf("Sua escolha eh: ");	
			scanf("%d",&op);
	}system("PAUSE");
}
