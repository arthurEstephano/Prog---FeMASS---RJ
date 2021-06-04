//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// Questão 2 - N1

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

struct registro{
	char nome[17]; float valor; int sexo;
};
main()
{
	float total,media;
	int i,tot50;
	setlocale(LC_ALL,"portuguese");
	registro baile[150];
		for(i=0;i<150;i++)
			{
				fflush(stdin);
				printf("Diga o nome do participante:");
					gets(baile[i].nome);
						fflush(stdin);
				printf("Digite o valor da doação:");
					scanf("%f",&baile[i].valor);
				total=total+baile[i].valor;
					if(baile[i].valor>50)
						tot50++;
			}
	media=total/150;
	printf("A quantidade de pessoas que doaram acima de 50 reais foi de %d.\n",tot50);
	printf("A média do valor da doação por pessoa foi de %.2f.\n",media);
}
