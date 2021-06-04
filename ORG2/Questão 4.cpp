#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL,"portuguese");
	int i,j;
	float salbruto, faixa[5], aliquota[5], valori[5], totvalori, totsal;
		printf("Digite seu salário bruto:");
			scanf("%f",&salbruto);
		for(i=0;i<5;i++)
		{
			
			if(i>0)
			{
				j = i-1;
				if(i==4)
					aliquota[i] = aliquota[j]+0.05;	
				else					
					aliquota[i] = aliquota[j]+0.075;
			}
		}	
		
		printf("Faixa da Base de Cálculo\t\t\tAlíquota\tValor do Imposto\n");
		
		if(salbruto>1903.98)
		{
			faixa[0] = 1903.98;
			valori[0] = faixa[0] * aliquota[0];
			printf("1ª Faixa\t\t%.2f\t\t\tIsento\t\t0\n",faixa[0]);
			totsal = salbruto-faixa[0];
			totvalori = totvalori + faixa[0];
		}
		else
		{
			printf("1ª Faixa\t\t%.2f\t\t\tIsento\t\t0\n",totsal);
			system("pause");
		return 0;
		}
		
		if(salbruto>2626.65)
		{
			faixa[1] = 922.67;
			valori[1] = faixa[1] * aliquota[1];
			printf("2ª Faixa\t\t%.2f\t\t\t7,5\t\t%.2f\n",faixa[1],valori[1]);
			totsal = totsal-faixa[1]; 
			totvalori = totvalori + faixa[1];
		}
		else
		{
			printf("2ª Faixa\t\t%.2f\t\t\t7,5\t\t%.2f\n",totsal,totsal*aliquota[1]);
			system("pause");
			return 0;
		}
		
		if(salbruto>3751.05)
		{
			faixa[2] = 924.40;
			valori[2] = faixa[2] * aliquota[2];
			printf("3ª Faixa\t\t%.2f\t\t\t15\t\t%.2f\n",faixa[2],valori[2]);
			totsal = totsal-faixa[2]; 
			totvalori = totvalori + faixa[2];
		}
		else
		{
			printf("3ª Faixa\t\t%.2f\t\t\t15\t\t%.2f\n",totsal,totsal*aliquota[2]);
			system("pause");
			return 0;
		}
		
		if(salbruto>4664.68)
		{
			faixa[3] = 913.63;
			valori[3] = faixa[3] * aliquota[3];
			printf("4ª Faixa\t\t%.2f\t\t\t22,5\t\t%.2f\n",faixa[3],valori[3]);
			totsal = totsal-faixa[3]; 
			totvalori = totvalori + faixa[3];
		}
		else
		{
			printf("4ª Faixa\t\t%.2f\t\t\t22,5\t\t%.2f\n",totsal,totsal*aliquota[3]);
			system("pause");
			return 0;
		}
		
		faixa[4] = salbruto - totvalori;
		valori[4] = faixa[4] * aliquota[4];
		printf("5ª Faixa\t\t%.2f\t\t\t27,5\t\t%.2f\n",faixa[4],valori[4]);
	system("pause");
	return 0;
}

