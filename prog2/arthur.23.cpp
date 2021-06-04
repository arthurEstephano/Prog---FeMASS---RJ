//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex5 - lista funcoes

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

float calc_area(float largura, float comprimento){
	return(largura*comprimento);
}

main()
{
	float larg,comp,area;
	setlocale(LC_ALL,"portuguese");
	srand(time(NULL));
		printf("Olá, digite a largura do terreno em metros quadrados: ");
	 		scanf("%f",&larg);
				printf("Agora digite o comprimento do terreno em metros quadrados: ");
					scanf("%f",&comp);
						area=calc_area(larg,comp);
		printf("Seu terreno possui %.2f metros quadrados de área!",area);	
}
