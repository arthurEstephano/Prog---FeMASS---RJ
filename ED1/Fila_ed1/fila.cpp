#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

struct fila {
 int n;
 float x[5];
};

typedef struct fila Fila;

Fila* cria_fila (void)
{
 Fila* f = (Fila*) malloc(sizeof(Fila));
 f->n = 0; 
 return f;
}

void enqueue (Fila* f, float y)
{
	f->x[f->n] = y;
	f->n++;
}


float dequeue (Fila* f)
{
	float z;
	float h;
	int y;
	if(f->n == NULL)
	{
		printf("ERROR\n");
	}
	else
	{
	z = f->x[0];
	h = f->x[1];
	f->x[0] = h;
	for(y=1;y<4;y++)
		f->x[y] = f->x[y+1];
	f->n--;
	return z;
	}
}

void mostrar(Fila* f)
{
	int k;
	printf("Dados da fila:");
	for(k=0;k<5;k++)
	{
		if(f->x[k] != 0)
			printf("%.0f ", f->x[k]);
	}	
	printf("\n");
}

void front(Fila* f)
{
	printf("O primeiro dado da fila eh: %.0f\n", f->x[0]);
}

bool isEmpty (Fila* f)
{
	bool empty = false;
	if(f->x[0] == 0)
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

void size(Fila* f)
{
	int cont = 0;
	int l;
	for(l=0;l<5;l++)
	{
		if(f->x[l] != 0)
			cont++;
	}
	printf("O tamanho da fila eh de: %d.\n", cont);
}
