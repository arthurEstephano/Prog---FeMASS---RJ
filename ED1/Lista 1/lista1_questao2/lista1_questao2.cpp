#include <stdio.h> 
#include <stdlib.h>

int vetor()
{
	int valor, i, n, resto, *pr, num[10];
	pr = (int*)malloc(sizeof(int));
	
	for(i=0;i<10;i++)
	{
		printf("Digite um valor para o campo %d do vetor: ", i+1);
		scanf("%d", &num[i]);
	}
	printf("Escolha um item do menu:\n");
		printf("1)  Exibir  vetor  informado;  \n2)  Exibir  elementos impares armazenados no vetor; \n3)  Exibir elementos pares no vetor; \n4)  Encerrar o programa.\n");
	scanf("%d", &valor);
	printf("\n");
	switch (valor)
  	{
  		case 1:
  			printf("Escolha um vetor para ser informado: ");
  				scanf("%d", &n);
  				printf("\n");
  			printf("O vetor escolhido foi o: %d\n", num[n-1]);
  		break;
		  
		case 2:
			for(i=0;i<10;i++)
			{
				*pr = 0;
				*pr = num[i];
				resto = *pr%2;
				if(resto != 0)
					printf("%d ", num[i]);
			}
			printf("\n");
			break;	
		
		case 3:
			for(i=0;i<10;i++)
			{
				*pr = 0;
				*pr = num[i];
				resto = *pr%2;
				if(resto == 0)
					printf("%d ", *pr);
			}
			printf("\n");
			break;	
		
		case 4:
			printf("O programa foi encerrado.\n");
			return 0;
			break;	
		
		default:
    		printf ("Valor invalido!\n");
  	}
  	free(pr);
  	return 0;
}
