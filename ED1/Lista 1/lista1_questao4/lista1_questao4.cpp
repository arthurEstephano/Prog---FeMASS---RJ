#include <iostream>
#include <conio.h> 
#include <stdio.h>
#define MAX 100

void codigo_decimal()
{
	char a[MAX];
	int b[MAX], i=0, j=0, x=0, y=0, mat;
	printf("Digite a tecla:");
		a[i] = getch();
		printf("%c  " , a[i]);
		b[j] = a[i];	
	while(b[j] != 27)
	{
		printf("Caractere: %c  ", a[i]);
		printf("|Dec. ASCII: %d\n", b[j]);
			i++;
			j++;
			printf("Digite a tecla: ");
				a[i] = getch();
				printf("%c  " , a[i]);
				b[j]=a[i];
	}
	printf("Fim de programa, tecla ESC foi pressionada!\n");
	printf("A matriz ASII relacionada a de caracter:\n");
	mat = i;
		for (x = 0; x < i; x ++)
		{
       		for (y = 0 ; y < j; y++)
       		{
       			printf("%c - %d\t", a[x],b[y]);
			}
			printf("\n");
		}
			
	system("pause");
}
