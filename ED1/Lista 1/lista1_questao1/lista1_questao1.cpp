#include <iostream>
#include <conio.h> 
#include <stdio.h>

void codigo_decimal()
{
	int b;
	printf("Digite a tecla:");
		char a = getch();
		printf("%c  " , a);
		b = a;	
	do
	{
		printf("Caractere: %c  ", a);
		printf("|Dec. ASCII: %d\n", b);
			printf("Digite a tecla: ");
				char a = getch();
				printf("%c  " , a);
				b=a;
	}
	while(b != 27);
	printf("Fim de programa, tecla ESC foi pressionada!\n");
	system("pause");
}
