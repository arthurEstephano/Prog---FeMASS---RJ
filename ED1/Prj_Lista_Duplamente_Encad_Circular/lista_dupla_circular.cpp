#include "lista_dupla_circular.h"

Lista2* inicializa()
{
	return NULL;
}

/* inser��o no in�cio */
Lista2* Insere_inicio (Lista2* l, int v)
{
 Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
 novo->info = v;
 if (l == NULL){/* verifica se lista n�o est� vazia */
 	novo->ant = novo;
 	novo->prox = novo;
 	
 	return novo;
 }
 else{
 	novo->prox = l->ant;
 	novo->ant = l->prox;
 	l->ant = novo;
 	l->prox = novo;
 
	return novo;
}
}

/* inser��o no fim */
 Lista2* Insere_fim (Lista2* l, int v)
{
 Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
 novo->info = v;
 if (l == NULL){/* verifica se lista n�o est� vazia */
 	novo->ant = novo;
 	novo->prox = novo;
 	
 	return novo;
 }
 else{
 	novo->prox = l;
 	l->ant->prox = novo;
 	novo->ant = l->ant;
 	l->ant = novo;
 
	return l;
}
}

/* remove o in�cio */
Lista2* Remove_inicio (Lista2* l)
{
 if (l == NULL)/* verifica se lista n�o est� vazia */
 	return l;
 if ( (l->ant == l) && (l->prox == l) ) {
 	free(l);
 	return NULL;
}
 Lista2* p = l->prox;
 p->ant = l->ant;
 l->ant->prox = p;
 l = p;
 
 return l;
}

/* remove o fim */
Lista2* Remove_fim (Lista2* l)
{
 if (l == NULL)/* verifica se lista n�o est� vazia */
 	return l;
 if ( (l->ant == l) && (l->prox == l) ) {
 	free(l);
 	return NULL;
}
 Lista2* p = l->ant;
 p->ant->prox = l;
 l->ant = p->ant;
 free(p);
 
 return l;
}

void Imprime_frente_fim (Lista2* l)
{
 Lista2* p = l; /* faz p apontar para o n� inicial */
 /* testa se lista n�o � vazia */
 if (l == NULL){/* verifica se lista n�o est� vazia */
 	printf("A lista esta vazia.\n");
	system("PAUSE");	
 }
 /* percorre os elementos at� alcan�ar novamente o in�cio */
 do {
 printf("%d\n", p->info); /* imprime informa��o do n� */
 p = p->prox; /* "avan�a" para o n� anterior */
 } while (p != l);
}

void Imprime_reverso (Lista2* l)
{
 Lista2* p = l->ant; /* faz p apontar para o n� inicial */
 /* testa se lista n�o � vazia */
 if (l == NULL){/* verifica se lista n�o est� vazia */
 	printf("A lista esta vazia.\n");
	system("PAUSE");	
 }
 /* percorre os elementos at� alcan�ar novamente o in�cio */
 do {
 printf("%d\n", p->info); /* imprime informa��o do n� */
 p = p->ant; /* "avan�a" para o n� anterior */
 } while (p != l->ant);
}

Lista2* Remove_valor (Lista2* l, int v)
{
 if (l == NULL)/* verifica se lista n�o est� vazia */
 	return l;
 Lista2* p = l;
 do {
 	if(p->info == v){
 		p->ant->prox = p->prox;
		p->prox->ant = p->ant;
		free(p);
		return l;	 	 				
 	}	
 p = p->prox; /* "avan�a" para o n� anterior */
 } while (p != l);	 
 return l;	
}
