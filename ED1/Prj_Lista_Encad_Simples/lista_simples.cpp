//lista_simples.cpp
#include "lista_simples.h"

//Desenvolver as funções modulares cujo protótipo/cabeçalho estão no .h

/* função de inicialização: retorna uma lista vazia */
Lista* inicializa(){
	return NULL;
}

/* inserção no início: retorna a lista atualizada */
Lista* insere_inicio(Lista* l, int i){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
	return novo;
}

/* função imprime: imprime valores dos elementos */
void imprime(Lista* l){
	printf("Info: ");
	Lista* p; /* variável auxiliar para percorrer a lista */
 	for (p = l; p != NULL; p = p->prox)
 		printf("%d - ", p->info);
 	printf("\n");	
}

/* função vazia: retorna 1 se vazia ou 0 se não vazia */
bool vazia(Lista* l)
{
	return (l == NULL);
}

/* função busca: busca um elemento na lista */
Lista* busca (Lista* l, int v){
	Lista* p;
	for (p=l; p!=NULL; p=p->prox)
		if (p->info == v)
			return p; /* achou elemento v na lista, em endereço p */
	printf("Elemento não encontrado.\n");		
	return NULL; /* não achou o elemento */
}

/* função retira: retira elemento da lista */
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
 		return l; /* não achou: retorna lista original */
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
 		Lista* t = p->prox; /* guarda referência para o próximo elemento*/
 		free(p); /* libera a memória apontada por p */
 		p = t; /* faz p apontar para o próximo */
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

