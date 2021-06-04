//lista_simples.cpp
#include "lista_simples.h"

//Desenvolver as fun��es modulares cujo prot�tipo/cabe�alho est�o no .h

/* fun��o de inicializa��o: retorna uma lista vazia */
Lista* inicializa(){
	return NULL;
}

/* inser��o no in�cio: retorna a lista atualizada */
Lista* insere_inicio(Lista* l, int i){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
	return novo;
}

/* fun��o imprime: imprime valores dos elementos */
void imprime(Lista* l){
	printf("Info: ");
	Lista* p; /* vari�vel auxiliar para percorrer a lista */
 	for (p = l; p != NULL; p = p->prox)
 		printf("%d - ", p->info);
 	printf("\n");	
}

/* fun��o vazia: retorna 1 se vazia ou 0 se n�o vazia */
bool vazia(Lista* l)
{
	return (l == NULL);
}

/* fun��o busca: busca um elemento na lista */
Lista* busca (Lista* l, int v){
	Lista* p;
	for (p=l; p!=NULL; p=p->prox)
		if (p->info == v)
			return p; /* achou elemento v na lista, em endere�o p */
	printf("Elemento n�o encontrado.\n");		
	return NULL; /* n�o achou o elemento */
}

/* fun��o retira: retira elemento da lista */
Lista* retira(Lista* l, int v){
	Lista* ant = NULL; /* ponteiro para elemento anterior */
	Lista* p = l; /* ponteiro para percorrer a lista*/
 	/* procura elemento na lista, guardando anterior */
 	while (p != NULL && p->info != v) {
 		ant = p;
 		p = p->prox;
 	}
 	/* verifica se achou elemento */
 	if (p == NULL)
 		return l; /* n�o achou: retorna lista original */
 	/* retira elemento */
 	if (ant == NULL) {
 		/* retira elemento do inicio */
 		l = p->prox;
	}
 	else {
 		/* retira elemento do meio da lista */
 		ant->prox = p->prox;
 	}
 	free(p);
	return l;
}

void libera(Lista* l){
	Lista* p = l;
 	while (p != NULL) {
 		Lista* t = p->prox; /* guarda refer�ncia para o pr�ximo elemento*/
 		free(p); /* libera a mem�ria apontada por p */
 		p = t; /* faz p apontar para o pr�ximo */
 	}
}

void mostraInicio(Lista* l)
{
	Lista* ant = NULL; 
	Lista* p = l;
	if (ant == NULL) 
	{
 		printf("O inicio eh %d.\n", p->info);
	}
}

void mostraFim(Lista* l)
{
	Lista* p = l;
		while (p->prox != NULL) 
		{
 		p = p->prox;
 		}
 		printf("O fim eh %d.\n", p->info);
}

int tamanho(Lista* l)
{
	int cont;
	Lista* p; 
 	for (p = l; p != NULL; p = p->prox)
 		cont++;	
 	printf("A lista possui %d nos.\n",cont);
 	free(p);
 	return cont;
}

void ocorrencias(Lista* l, int v)
{
	int cont=0;
	Lista* ant = NULL; 
	Lista* p = l;
		while (p!= NULL)
		{
			if (p->info == v)
				cont++;
			ant = p;
 			p = p->prox;
		}
		printf("O numero de ocorrencias do valor %d eh de %d.\n", v, cont); 
}

Lista* insereFim(Lista* l, int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	Lista* p = l;
 	while (p->prox != NULL) 
	{
 		Lista* t = p->prox; 
 		p = t;
	}
	p->prox = novo;
	return l;
}

Lista* removeInicio(Lista* l)
{
	Lista* p = l; 
 		l = l->prox;
	free(p);
	return l;
}

Lista* removeFim(Lista* l)
{
	Lista* ant = NULL; 
	Lista* p = l;
 	while (p->prox != NULL) 
	{
		ant = p;
		p = p->prox; 
	}
	ant->prox = NULL;
	free(p);
	return l;
}

void imprime_rec (Lista* l)
{
 if (vazia(l))
	{
		return;
	}
 printf("info: %d\n", l->info);
 imprime_rec(l->prox);
}

Lista* retira_rec (Lista* l, int v)
{
 if (vazia(l))
 	return l;
 if (l->info == v) 
 {
 	Lista* t = l; 
 	l = l->prox;
 	free(t);
 }
 else 
 {
 	l->prox = retira_rec(l->prox,v);
 }
 return l;
}

void libera_rec (Lista* l)
{
 if (!vazia(l))
 {
 libera_rec(l->prox);
 free(l);
 }
}

