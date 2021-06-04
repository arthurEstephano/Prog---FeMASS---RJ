//lista_simples.h
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <locale>
using namespace std;

//Define tipo adequado para alocação do nó-dado
struct lista {
	int info;
	struct lista* prox;
};
typedef struct lista Lista;

//Abaixo, prevendo cabeçalhos de funções moduladas
Lista* inicializa();
Lista* insere_inicio(Lista* l, int i);
void imprime(Lista* l);
bool vazia(Lista* l);
Lista* busca (Lista* l, int v);
Lista* retira(Lista* l, int v);
void libera(Lista* l);
void mostraInicio(Lista* l);
void mostraFim(Lista* l);
int tamanho(Lista* l);
void ocorrencias(Lista* l, int v);
Lista* insereFim(Lista* l, int i);
Lista* removeInicio(Lista* l);
Lista* removeFim(Lista* l);
void imprime_rec(Lista* l);
Lista* retira_rec(Lista* l, int v);
void libera_rec(Lista* l);
