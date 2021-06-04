#include "lista_dupla.h"

Lista2* inicializa()
{
	return NULL;
}

/* inserção no início */
Lista2* Insere_ordenado (Lista2* l, int v)
{
 Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
 novo->info = v;
 /* verifica se lista não está vazia */
 if (l != NULL){
 	if(novo->info <= l->info){
 		l->ant = novo;
 		novo->ant = NULL;
 		novo->prox = l;
 	}
 	else{
 		if(l->prox == NULL)
 			l->prox = novo;
 		else
 			while(l->prox != NULL){
 				l = l->prox;
			}	l->prox = novo;
			novo->prox = NULL;
			novo->ant = l; 
		}
	 return novo;		
 }
 return novo;
}

/* função busca: busca um elemento na lista */
Lista2* Busca_elemento (Lista2* l, int v)
{
 Lista2* p;
 for (p=l; p!=NULL; p=p->prox)
 if (p->info == v)
 return p;
 return NULL; /* não achou o elemento */
}

/* função retira: retira elemento da lista */
 Lista2* Remove_elemento (Lista2* l, int v) {
 Lista2* p = Busca_elemento(l,v);
 if (p == NULL)
 return l; /* não achou o elemento: retorna lista inalterada */
 /* retira elemento do encadeamento */
 if (l == p)
 l = p->prox;
 else
 p->ant->prox = p->prox;
 if (p->prox != NULL)
 p->prox->ant = p->ant;
 free(p);
 return l;
}

 Lista2* Remove_inicio (Lista2* l){
 if (l == NULL)
 return l; /* lista vazia: retorna lista inalterada */
 Lista2* p;
 p = l->prox;
 p->ant = NULL;
 return p;
}

 Lista2* Remove_fim (Lista2* l){
 if (l == NULL)
 return l; /* lista vazia: retorna lista inalterada */
 Lista2* p;
 p = l;
 while(p->prox != NULL){
 	p = p->prox;
 }
 p->ant->prox = p->prox;
 free(p);
 return l;
}

void Imprime_inicio_fim (Lista2* l){
 if (l == NULL){
 	printf("Lista vazia.\n");
 	return;
 } 
 else{
 printf("O inicio eh:%d.\n",l->info);
 Lista2* p = l;
 do{
 	p = p->prox;
 } while (p->prox != NULL);
 printf("O fim eh:%d.\n",p->info);
 return;
}
}

void Imprime_fim_inicio (Lista2* l){
 if (l == NULL){
 	printf("Lista vazia.\n");
 	return;
 }
 else{ 
 int v = l->info;
 Lista2* p = l;
 do{
 	p = p->prox;
 } while(p->prox != NULL);
 printf("O fim eh:%d.\n",p->info);
 printf("O inicio eh:%d.\n",v);
 return;
}
}




