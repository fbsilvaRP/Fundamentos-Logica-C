/*O número pi pode ser calculado por meio da séria infinita: pi = 4 x (1 - 1/3 + 1/5 - 1/7 + 1/9 - ...). Elabore um programa em C que calcule e exiba o valor do número pi utilizando a série anterior, até que o valor absoluto da diferença entre o número calculado em uma iteração e o da anterior seja menor ou igual a 0.00000000005.   */
#include <stdio.h>
#include <math.h> 	// Biblioteca para incluir a função fabs(), que retorna o módulo do valor inserido;
#include <stdlib.h>	// Biblio. para incluir a função system("cls"), para limpar o console
int main()
{
	system("cls");
	double i = 0; 			//Iterador
	double acum = 0; 		//Acumulará a série: (1 - 1/3 + ...)
	double aux = -1; 		//aux representa o numerador das sucessivas divisões (ora positivo, ora negativo);
	double pi = 0; 			//var p/ armazenar o valor intermediário de pi, obtido da iteração anterior
	double pi_aux = 5;		//var p/ armazenar o valor obtido de pi na iteração
	double calc = 0;		//var p/ receber o módulo da diferença entre os valores calculados
	
	do
	{
		pi = pi_aux; 				//a var. pi recebe o valor da iteração anterior
		aux *= (-1);				//a var. aux recebe o seu valor multiplicado por -1: (-1)^i, para tornar o result. + ou -
		acum = acum + aux /( 2 * i + 1);	//cálculo de um elemento da série, acumulado em acum
		pi_aux = 4 * acum; 			//cálculo de pi na iteração atual 
		calc = fabs(pi_aux - pi);		//calc: valor absoluto da diferença entre o numero calculado na iteração atual e o da anterior
		printf("\nValor intermediario de pi: %f", pi_aux);	//Exibe o valor calculado na iteração atual
		i++;   	 //incrementa o iterador
	}
	while(calc > 0.0005);	//condição para manter o loop em funcionamento (o valor foi aumentado p/ tornar possível encerrar o programa)
	return 0;  
}