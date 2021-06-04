#include <iostream>
#include "pilha.h"

int main() 
{
	float y;
	Pilha* P;
		P = cria_pilha();
		push(P, 5);
		push(P, 3);
		pop(P);
		push(P, 7);
		pop(P);
		top(P);
		pop(P);
		pop(P);
		isEmpty(P);
		push(P, 9);
		push(P, 7);
		push(P, 3);
		push(P, 5);
		size(P);
		pop(P);
		push(P, 8);
		pop(P);
		pop(P);
		mostrar(P);
	system("pause");
	return 0;
}
