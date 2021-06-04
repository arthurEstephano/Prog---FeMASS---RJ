//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex4 - nivelamento

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

struct cadastro{
	char nome[17]; float preco;
};
main()
{
	char maiornome[17];
	float maior=0,total,media;
	int i,j;
	setlocale(LC_ALL,"portuguese");
	cadastro cantina[150];
		for(i=0;i<150;i++)
			{
				fflush(stdin);
				printf("Diga o nome do produto:");
					gets(cantina[i].nome);
						fflush(stdin);
				printf("Digite o preço do produto:");
					scanf("%f",&cantina[i].preco);
				total=total+cantina[i].preco;
					if(cantina[i].preco>maior)
					{
						maior=cantina[i].preco;		
						j=i;
					}
			}
	media=total/150;
	printf("o produto mais caro é %s que custa %.2f.\n",cantina[j].nome,maior);
	printf("O valor total dos produtos é de:%.2f\n",total);
	printf("A media de preço dos produtos é de:%.2f",media);
}
