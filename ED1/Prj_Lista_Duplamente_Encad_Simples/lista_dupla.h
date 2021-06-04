#include <iostream>
#include <stdlib.h>
#include <stdio.h>

struct lista2 {
 int info;
 struct lista2* ant;
 struct lista2* prox;
};
typedef struct lista2 Lista2;

void Imprime_fim_inicio (Lista2* l);

void Imprime_inicio_fim (Lista2* l);

Lista2* Remove_fim (Lista2* l);

Lista2* Remove_inicio (Lista2* l);

Lista2* Remove_elemento (Lista2* l, int v);

Lista2* Busca_elemento (Lista2* l, int v);

Lista2* Insere_ordenado (Lista2* l, int v);

Lista2* inicializa();
