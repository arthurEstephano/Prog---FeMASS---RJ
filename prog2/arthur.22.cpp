//disciplina: prog 2 - luciano	
//Arthur E. Lemos de Moura
// ex4 - lista fun��es

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <locale.h>

float calc_autonomia(float kilometro,float litro){
	return(kilometro/litro);
}

main()
{
	setlocale(LC_ALL,"portuguese");
	float l,km,at;
    	printf("Informe quantos km foram percorridos:");
    		scanf("%f",&km);
			printf("Informe quantos litros de gasolina foram gastos:");
	 			scanf("%f",&l);
	 				at=calc_autonomia(km,l);
	 	printf("A autonomia do autom�vel nessa viagem foi de %.2f!",at);		 	
}
