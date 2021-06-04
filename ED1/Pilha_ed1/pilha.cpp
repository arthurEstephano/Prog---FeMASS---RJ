#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

struct pilha {
 int n;
 float x[15];
};

typedef struct pilha Pilha;

Pilha* cria_pilha (void)
{
 Pilha* p = (Pilha*) malloc(sizeof(Pilha));
 p->n = 0; 
 return p;
}

void push (Pilha* p, float y)
{
	p->x[p->n] = y;
	p->n++;
}

bool isEmpty (Pilha* p)
{
	bool empty = false;
	if(p->n == 0)
	{
		empty = true;
		printf("True\n");	
	}
	else
	{
		printf("False\n");
	}
	return empty;
}

float pop (Pilha* p)
{
	float y;
	if(p->n == NULL)
	{
		printf("ERROR\n");
	}
	else
	{
		y = p->x[p->n-1];
		p->n--;
		return y;
	}
}

void top (Pilha* p)
{
	if(p->x == NULL)
	{
		printf("ERROR\n");
	}
	else
	{
		
		printf("%.0f\n", p->x[p->n-1]);
	}
}

void size (Pilha* p)
{
	printf("O tamanho da pilha eh de: %d.\n", p->n);
}

void mostrar(Pilha* p)
{
	int k;
	printf("Dados da pilha:");
	for(k=p->n-1; k>=0; k--)
		printf("%.0f ", p->x[k]);
	printf("\n");
}
