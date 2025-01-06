/*escreva a expansão da expressão (a+b)^n para um valor n lido. Os termos da expansão são os valores da n-ésima linha do triângulo de Pascal*/

#include <stdio.h>
#include <stdlib.h>										//Biblioteca para usar a função system("cls"), a qual limpa o console
int main()
{
	system("cls"); 										//Clear screen
	int op = 1; 										//Var. para controlar a repetição do programa
	while(op == 1)			
	{
		int n;
		printf("\n* * * Calculo de (a + b)^n * * * ");
		printf("\nDigite o valor de n: "); 
		scanf("%d", &n);
		int expA = n, expB = 0;								//expA: expoente de A recebe o valor digitado pelo usuário, e expB: expoente de B, inicia no zero
		printf("(a + b)^%d = ", n);							
		for(int coluna = 0; coluna <= n; coluna++)
		{
			int nfat = 1, rfat = 1, nrfat = 1, c;					//Var. declaradas para o cálculo da combinação (nfat = n!, rfat = r! e nrfat = (n - r)!
			
			//Cálculo da combinação de cada elemento
			for(int k = 1; k <= n; k++)
				nfat *= k; 
			for(int k = 1; k <= coluna; k++)
				rfat *= k; 
			for(int k = 1; k <= n - coluna; k++)
				nrfat *= k;
			c = nfat / (rfat * nrfat);						//C = n! / (r! * (n-r)!) n é o numero da linha decidido pelo usuário, r é o número da coluna em cálculo	
		 
			printf("%d ", c);							//Exibe o valor coeficiente calculado (resultado da combinação)
			if(expA > 0)								
				printf("A ^ %d ", expA);					//Se o expoente de A for maior que zero, a letra A é exibida após o coeficiente 
			if(expB > 0)
				printf("B ^ %d ", expB);					//Se o expoente de B for maior que zero, a letra B é exibida após o coeficiente
			expA--; 								//A cada coeficiente exibido, o expoente de A é reduzido em uma unidade
			expB++;									//A cada coeficiente exibido, o expoente de B é acrescido em uma unidade
			if (coluna < n)								//O operador de adição será exibido até o penúltimo coeficiente calculado
				printf(" + ");
			
		}
		printf("\nDeseja fazer novamente? SIM[1] ou NAO[0] \nR: ");		
		scanf("%d", &op);								//Recebe a decisão do usuário se continuará ou não o programa
		system("cls");									//Clear screen
	}
}
