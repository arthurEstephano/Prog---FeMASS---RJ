//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex5.8 - lista funcoes

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

void a()
{
    char nome[100];
    int i, a=0;
    printf("Digite o nome:\n");
    scanf("%s",&nome);
    for(i=0;i<strlen(nome);i++)
    {
        if(nome[i]=='a'||nome[i]=='A')
        {
            a++;
        }
    }
    printf("O nome %s tem a letra ""a"" %d vezes.",nome,a);
}
main()
{		
setlocale(LC_ALL,"portuguese");
	a();
	system("PAUSE");			
}
