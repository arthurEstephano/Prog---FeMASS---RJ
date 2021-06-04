//Aula ED - prof. Irineu
#include "lista_simples_circular.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Lista* l; /* declara uma lista não inicializada */
 	l = inicializa(); /* inicializa lista como vazia */
 	l = insere_inicio(l, 23); /* insere_inicio na lista o elemento 23 */
 	l = insere_inicio(l, 45); /* insere_inicio na lista o elemento 45 */
 	l = insere_fim(l, 50); /* insere_fim na lista o elemento 50 */
 	l = insere_fim(l, 51); /* insere_fim na lista o elemento 50 */
	printf("Lista original...\n");
 	imprime(l);
 	printf("Retira 100...\n");
  	l = retira(l, 100);
 	imprime(l);
 	printf("Retira 45...\n");
 	l = retira(l, 45);
	imprime(l);
	printf("Retira 50...\n");
 	l = retira(l, 50);
	imprime(l);
	printf("Retira 51...\n");
 	l = retira(l, 51);
	imprime(l);
	printf("Retira 23...\n");
 	l = retira(l, 23);
	imprime(l);
	printf("Retira 1...\n");
 	l = retira(l, 1);
	imprime(l);
	system("pause");  
	return 0;
}
