#include <iostream>
#include "fila.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	Fila* F;
		F = cria_fila();
		enqueue (F,5);
		enqueue (F,3);
		dequeue (F);
		enqueue (F,7);
		dequeue (F);
		front (F);
		dequeue (F);
		dequeue (F);
		isEmpty (F);
		enqueue (F,9);
		enqueue (F,7);
		size (F);
		enqueue (F,3);
		enqueue (F,5);
		dequeue (F);
		mostrar (F);
	return 0;
}
