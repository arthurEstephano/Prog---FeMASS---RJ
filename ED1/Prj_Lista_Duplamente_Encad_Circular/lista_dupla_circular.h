#include <iostream>
#include <stdlib.h>
#include <stdio.h>

struct lista2 {
 int info;
 struct lista2* ant;
 struct lista2* prox;
};
typedef struct lista2 Lista2;

Lista2* Insere_inicio (Lista2* l, int v);

Lista2* Insere_fim (Lista2* l, int v);

Lista2* Remove_inicio (Lista2* l);

Lista2* Remove_fim (Lista2* l);

void Imprime_frente_fim (Lista2* l);

void Imprime_reverso (Lista2* l);

Lista2* Remove_valor (Lista2* l, int v);

Lista2* inicializa();
