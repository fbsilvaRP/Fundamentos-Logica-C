/*Algoritmo em C para calcular o fatorial de um número n digitado. Feito em 02/01/2024*/

#include <stdio.h>
int main()
{	
	int op = 1; 
	while(op == 1)
	{
		int n, nfat = 1; 				//A variável nfat recebe n!	
		printf("\n* * * Calculo fatorial * * * ");
		printf("\nDigite o valor de n: ");
		scanf("%d", &n);				//Recebe o valor de n
		for(int i = 2; i <= n; i++)			//Cálculo de n!
			nfat *= i;			
		printf("* * * * * * * * * * * * * * * ");
		printf("\n%d! = %d", n, nfat);			//Apresenta o resultado de n!
		printf("\n* * * * * * * * * * * * * * ");
		printf("\nDeseja sair? Não(1) \nR: ");		
		scanf("%d", &op); 	
	}
	return 0; 
}
