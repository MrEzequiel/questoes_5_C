
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int n, i, j;
	printf ("\n\nEste programa soma os valores de linhas e colunas de uma matriz A quadrada!");
	printf ("\n\nInforme a ordem da matriz A: ");
	scanf ("%d", &n);
	int A[n][n], sLinhas[n], sColunas[n];
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	printf ("\n\nInforme os elementos da matriz A de ordem %d!", n);
	for (i = 0; i < n; i++) {
		sLinhas[i] = 0;
		for (j = 0; j < n; j++) {			
			printf ("\n\nInforme o elemento na posição A[%d][%d]: ", i, j);
			scanf ("%d", &A[i][j]);
			sLinhas[i] += A[i][j];
		}
	}
	for (j = 0; j < n; j++) {
		sColunas[j] = 0;
		for (i = 0; i < n; i++) {
			sColunas[j] += A[i][j];
		}
	}
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	printf ("\n\nA = \n");
	for (i = 0; i < n; i++) {
		printf ("\n");
		for (j = 0; j < n; j++) {
			printf ("   %d", A[i][j]);
		}
	}
	
	printf ("\n\n\nSoma das linhas: ");
	for (i = 0; i < n; i++)
		printf ("\n\nSoma dos elementos da %dª linha: %d.", i+1, sLinhas[i]);
	
	printf ("\n\n\nSoma das colunas: ");
	for (j = 0; j < n; j++)
		printf ("\n\nSoma dos elementos da %dª coluna: %d.", j+1, sColunas[j]);
	
	printf ("\n\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}
