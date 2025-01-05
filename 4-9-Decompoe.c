#include <stdio.h>								//Biblioteca de entrada e saída de dados
#include <stdlib.h>								//Biblioteca p/ inserir o comando system("cls")
int main()
{
	int op = 1;
	system("cls");								//cls: clear screen 
	while(op == 1)
	{
		int n; 								//n: variável que irá receber o número para ser decomposto
		int aux; 							//aux: var. para receber o numero do usuario, o qual sofrerá modificações
		printf("\n* * * * * * Apresentando os divisores * * * * * * ");
		printf("\nDigite o numero para decompor:");
		scanf("%d", &n);						//Entrada do numero (n)
		printf("n = ");
		if(n > 1)							//A decomposição só será feita se o número for maior que 1
		{
			aux = n;						//aux recebe o numero digitado 
			int c1 = 2; 						//c1: número a ser verificado se é ou não primo
			int R; 							//A variavel R recebera o resultado temporario
			while(c1 <= n)
			{
				int qtd = 0;					//qtd: var. para armazenar a quantidade de divisores de um numero temporario 
				int c2 = 1; 					//c2: var. para testar os numeros divisores de c1
				while(c2 <= c1)
				{
					int resto; 				//resto: armazenará o resto da div. inteira de c1 por c2
					resto = c1 % c2;
					if(resto == 0)				//se o resto for igual a zero, significa que c2 divide c1 
					{
						qtd++; 				//a cada divisor encontrado, a var. qtd é incrementada
					}
					c2++; 					//Incremento da var. c2	 
				}
				if(qtd == 2)					//Se qtd = 2, pode-se afirmar que c1 é um número primo
				{
					int exp = 0; 				//exp: armazena a quantidade de vezes que o numero digitado pode ser dividido por c1
					int dec = 1; 				//dec: var. para controlar o funcionamento da divisão abaixo
					while(dec == 1)
					{
						int res; 			//res: armazena o resto da divisão de numero (em aux) por c1
						res = aux % c1; 
						if(res == 0)
						{
							exp++; 				//caso o resto seja zero, a var. exp é incrementada
							aux = aux / c1; 		//aux recebe o quociente da div. inteira de aux por c1 
						}
						else
							dec = 0; 		//caso o resto não seja zero, a variável de controle recebe zero e o laço é encerrado
					}
					if(exp != 0)
						printf("%d(%d)", c1, exp);
				}
				c1++;
				
			}	
		}
		printf("\nDeseja fazer novamente? SIM[1] ou NAO[0]\nR: ");
		scanf("%d", &op);
		system("cls");  						//"cls" - Clear screen: Função para limpar o console
	}
	return 0; 
}
