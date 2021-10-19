#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (void) {
	
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int mLinhas, nColunas, i, j, soma = 0;
	printf ("\n\nEste programa alimenta uma matriz com números aleatórios, imprime seus elementos e o resultado da soma dos elementos com índice j par.");
	printf ("\n\nDigite a quantidade de linhas da matriz A: ");
	scanf ("%d", &mLinhas);
	printf ("\n\nDigite a quantidade de colunas da matriz A: ");
	scanf ("%d", &nColunas);
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	if (mLinhas > 0 && nColunas > 0) {
		int A[mLinhas][nColunas];
		for (i = 0; i < mLinhas; i++) {
			for (j = 0; j < nColunas; j++) {
				A[i][j] = (rand() % 101) + (-50); 
			}
		}
		printf ("\n\nA = \n");
		for (i = 0; i < mLinhas; i++) {
			printf ("\n");
			for (j = 0; j < nColunas; j++) {
				printf (" \t%d", A[i][j]);
				if (j % 2 == 0) 
					soma += A[i][j];
			}
		}
		printf ("\n\nO valor da soma dos elementos j par é %d: ", soma);	
	}
	else 
		printf ("\n\nDigite valores válidos, por favor!"); 
	
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;

}
