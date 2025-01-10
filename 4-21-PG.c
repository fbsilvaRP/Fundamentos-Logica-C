/*Elabore um programa em C que leia um número n (numero de termos de uma PG), a1 (o primeiro termo da progressão), e r (razão), e escreva todos os termos da progressão, bem como a soma dos elementos.*/

#include <stdio.h>	//Biblioteca de entrada e saída de dados
#include <stdlib.h>	//Biblioteca para incluir o comando system("cls") 
int main()
{
	int op = 1;	//Var. de controle do loop 
	while(op == 1)
	{
		system("cls");	//Clear screen 
		int a1;	//termo inicial da PG (decidido pelo usuario)
		int razao;	//razão da PG
		int n;		//Numero de termos que o usuario deseja calcular
		int aux = 1;	//var aux para receber q^(n-1) do calculo do termo da PG  
		int termo = 1;
		int acum = 0; //Var para acumular a soma 	
		printf("\n* * * Progressao geometrica * * * ");
		printf("\nDigite o primeiro termo da pg (a1): ");
		scanf("%d", &a1);
		printf("Digite a quantidade de termos desejada: ");
		scanf("%d", &n);
		printf("Digite a razao da progressao geometrica: ");
		scanf("%d", &razao);	
		printf("(%d), ", a1);	//Exibe o primeiro termo (n precisa de calculo)
		for(int i = 0; i <= n - 2; i++)	
		{
			aux = aux * razao;	//calculo de q^(n-1)
			termo = a1 * aux;	//calculo de a1 * q^(n-1)
			printf("(%d), ", termo);	//Apresenta o termo calculado
		
		}
		printf("\nDeseja refazer? SIM[1] ou NAO[0]\nR: ");
		scanf("%d", &op);	//Entrada da decisão do usuário para repetir o loop
		
	}
	return 0; 	
	 	
}