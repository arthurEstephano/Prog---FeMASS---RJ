//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex3.3 - lista funcoes

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

void numeros()
{
    int i, n, menor;
    for(i=0;i<10;i++)
    {
        printf("Digite um n�mero:\n");
        scanf("%d",&n);
        if(n<menor)
        {
            menor=n;
        }
    }
    printf("O menor n�mero � %d.", menor);
}
main()
{
    setlocale(LC_ALL,"Portuguese");
    numeros();
}
