//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex1 - nivelamento

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

main()
{
	float larg,comp,area;
	setlocale(LC_ALL,"portuguese");
	srand(time(NULL));
	 printf("Ol�, digite a largura do terreno em metros quadrados: ");
	 	scanf("%f",&larg);
	 printf("Agora digite o comprimento do terreno em metros quadrados: ");
	 	scanf("%f",&comp);
	 area=comp*larg;
	 printf("Parab�ns, seu terreno possui %.2f metros quadrados de �rea!",area);	
}
