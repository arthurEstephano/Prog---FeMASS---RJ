//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex3 - lista 1

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	char cod[30];
	float preco;
     printf("Informe o codigo do produto:");
     	gets(cod);
	 printf("Informe o preço:");
	 	scanf("%f",&preco);
	 preco=preco*0.75;
	 	printf("O preço do produto acrescido do desconto é de %.2f!",preco);		 	
}
