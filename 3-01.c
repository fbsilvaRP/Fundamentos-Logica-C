/*Enunciado: Elabore um algoritmo em C que calcule quantas notas de 50, 10 e 1 são necessárias para pagar uma conta cujo valor é fornecido.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int op = 1; 
	while (op == 1)					//Loop para manter o programa sendo repetido
	{
		system("cls");				//Clear screen
		int n50, n10, n1, valor; 
		printf("Digite o valor: R$ "); 
		scanf("%d", &valor);			//Recebe o valor do usuário
		n50 = valor / 50;			//O número de notas de 50 corresponde ao quociente da divisão do número por 50
		n10 = (valor % 50) / 10;		//O número de notas de 10 corresponde ao quociente do resto da divisão anterior por 10
		n1 = (valor % 50) % 10; 		//O número de moedas de 1 corresponde ao resto da divisão anterior
		 
		printf("\nQuantidade de notas de 50: %d", n50);
		printf("\nQuantidade de notas de 10: %d", n10);
		printf("\nQuantidade de moedas de 1: %d", n1); 
		printf("\nDeseja fazer novamente? SIM[1] ou NAO[0]\nR: ");
		scanf("%d", &op); 			//Entrada da decisao do usuário para rodar novamente o programa
	} 
	return 0; 
		 
}













/*Exercício adaptado do livro Algoritmos e Lógica de Programação: um texto introdutório para a engenharia / Marco Antonio Furlan De Souza -3.ed. - São Paulo, SP:Cengage*/
