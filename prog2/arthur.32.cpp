//disciplina:  prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex8.4 - lista funcoes

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

void equipamentos()
{
	char tipo[128][4];
	float p[128],mp=1;
	int i,cod[128],j,totr;
	for(i=0;i<3;i++)
	{
		printf("Digite o codigo do equipamento: ");
			scanf("%d",&cod[i]);
		printf("Digite o tipo do equipamento: ");
			scanf("%s",&tipo[i]);
			fflush(stdin);
				if(strcmp(tipo[i],"Ter")==0)
					totr++;
			fflush(stdin);	
		printf("Digite o valor do equipamento: ");
			scanf("%f",&p[i]);
		if(p[i]>mp)
		{
			mp=p[i];
			j=i;
		}	
	}
	printf("O equipamento mais caro foi o %d com o valor de %.2f.\n",cod[j],mp);
		printf("O total de equipamentos Terrestres foi de %d.\n",totr);
	
}

main()
{
    setlocale(LC_ALL,"Portuguese");
    equipamentos();
}
