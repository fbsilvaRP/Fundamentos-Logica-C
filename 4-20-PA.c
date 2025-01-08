/*Elabore um algoritmo em C que leia um número n (número de termos de uma progressão aritmética), a1 (o primeiro termo da progressão), e r (razão), e escreva todos os termos dessa progressão, bem como a soma dos elementos.*/

#include <stdio.h>	//Biblio. para entrada e saída de dados	
#include <stdlib.h>	//Biblio. para usar a função system("cls")
int main()
{
	int op = 1;
	while(op == 1)
	{
		system("cls");
		printf("\n* * * Termos de uma PA * * * ");
		int n; 							//n: Número de termos desejado
		int a1;							//a1:Termo inicial da PA
		int r; 							//r: razão da PA
		int termo;							//termo: termo calculado na iteração
		int acum; 							//acum: acumula a soma dos termos
		printf("\nDigite o numero de termos desejado: ");
		scanf("%d", &n);
		printf("Digite o termo inicial da PA (a1): ");
		scanf("%d", &a1);
		printf("Digite a razao da PA: ");
		scanf("%d", &r);
		for(int i = 1; i <= n; i++)
		{
			termo = a1 + (i - 1) * r;	//Cálculo do termo da PA
			acum = acum + termo;		//Acumula o termo da PA calculado
			printf("[%d], ", termo);	//Exibe o termo da PA calculado
		}
		printf("\nSoma dos termos da PA: %d", acum);
		printf("\nDeseja fazer novamente? SIM[1] ou NAO[0] \nR: ");
		scanf("%d", &op);
	} 
}