Lista* insere_ordenado (Lista* L, int X)
{
Lista* Q = (Lista*) malloc(sizeof(Lista));
Q->info = X;
 	
Lista* novo = Lista* Q; 
Lista* ant = NULL; 
Lista* P = L; 
 
while (P != NULL && P->info < X) 
{
	ant = P;
 	P = P->prox;
}
 
if (ant == NULL) 
{ 
	novo->prox = L;
 	L = novo;
}
else 
{ 
	novo->prox = ant->prox;
 	ant->prox = novo;
}
return L;
}


int Ocorrencia_rec (Lista* L, int X, int cont)
{		
if (L->info == X)
	cont++;
Ocorrencia_rec(L->prox, X, cont);
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
