/*Algoritmo em C para escolher r, dentre n números, sem importar a ordem (Combinação) - Cn,p. Feito em 02/01/2025 */
#include <stdio.h>
int main()
{
	int op = 1; 
	while(op == 1)
	{
		int n, r, nfat = 1, rfat = 1, nrfat = 1, C; 			/*nfat: recebe n!, rfat: recebe r! e nrfat: recebe (n-r)! */
		printf("\n* * * Calculo da combinacao Cn,r * * * "); 
		printf("\nn: ");
		scanf("%d", &n); 						/*Recebe o valor de n */ 
		printf("r: ");
		scanf("%d", &r); 						/*Recebe o valor de r*/
		printf("Valores digitados n: %d \t r: %d", n, r);		/*Apresenta os valores inseridos*/
		printf("\n* * * * * * * * * * * * * * * * * * * \n");
		for(int i = 2; i <= n; i++)					/*Cálculo de n!*/
			nfat *= i; 
		for(int i = 2; i <= r; i++)					/*Cálculo de r!*/
			rfat *= i;
		for(int i = 2; i <= n - r; i++)					/*Cálculo de (n-r)!*/
			nrfat *= i;
		C = nfat / (rfat * nrfat);					//Calcula n! / r! * (n - r)!
		printf("Cn,r: %d \n", C);					//Apresenta o resulado
		printf("* * * * * * * * * * * * * * * * * * * * \n");   
		printf("Deseja refazer? Sim(1)\nR:");				/*Verificação p/ continuar rodando o programa*/ 
		scanf("%d", &op);
		
	}
	
	return 0; 
}
