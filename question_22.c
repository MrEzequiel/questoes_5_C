#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (void)
{
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int linhasA, colunasA, linhasB, colunasB, i, j, k;
	printf ("\n\nEste programa o lucro anual de uma fabrica");
	printf ("\n\nDigite a quantidade de linhas de A: ");
	scanf("%d", &linhasA);
	printf ("\n\nDigite a quantidade de colunas de A: ");
	scanf ("%d", &colunasA);
	printf ("\n\nDigite a quantidade de linhas de B: ");
	scanf ("%d", &linhasB);
	printf ("\n\nDigite a quantidade de colunas de B: ");
	scanf ("%d", &colunasB);
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	int A[linhasA][colunasA], B[linhasB][colunasB];
	
	if (linhasA > 0 && colunasA > 0) {
		printf ("\n\nDigite a quantidade dos produtos");
		for (i = 0; i < linhasA; i++) {
			for (j = 0; j < colunasA; j++) {
				printf ("\n\nDigite o elemento A[%d][%d]: ", i, j);
				scanf ("%d", &A[i][j]);
			}
		}
	}
	else
		printf ("\n\nDigite valores válidos para as linhas e colunas de A!");
		
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	if (linhasB > 0 && colunasB > 0) {
		printf ("\n\nDigite os precos unitarios dos produtos");
		for (i = 0; i < linhasB; i++) {
			for (j = 0; j < colunasB; j++) {
				printf ("\n\nDigite o elemento B[%d][%d]: ", i, j);
				scanf ("%d", &B[i][j]);
			}
		}
	}
	else
		printf ("\n\nDigite valores válidos para as linhas e colunas de B!");
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	printf ("\n\n\tMatrizes");
	
	if (linhasA > 0 && colunasA> 0) {
		printf ("\n\nA = \n");
		for (i = 0; i < linhasA; i++) {
			printf ("\n");
			for (j = 0; j < colunasA; j++) {
				printf ("\t%d", A[i][j]);
			}
		}
	}
	else
		printf ("\n\nNão foi possível carregar a matriz A!");
		
	if (linhasB > 0 && colunasB > 0) {
		printf ("\n\nB = \n");
		for (i = 0; i < linhasB; i++) {
			printf("\n");
			for (j = 0; j < colunasB; j++) {
				printf ("\t%d", B[i][j]);
			}
		}
	}
	else
		printf ("\n\nNão foi possível carregar a matriz B!");
	
	if (linhasA > 0 && colunasA > 0 && linhasB > 0 && colunasB > 0)	{
		if (colunasA == linhasB) {
			int C[linhasA][colunasB];
			for (i = 0; i < linhasA; i++) {
				for (j = 0; j < colunasB; j++) {
					C[i][j] = 0;
					for (k = 0; k < colunasA; k++) {
						C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
					}
				}
			}
			printf ("\n\nLucro anual = \n");
			for (i = 0; i < linhasA; i++) {
				printf ("\n");
				for (j = 0;j < colunasB; j++) {
					printf ("\t%d", C[i][j]);
				}
			}
		}
		else
			printf ("\n\nNão é possível realizar a multiplicação de A por B!");
	}
	else
		printf ("\n\nNão é possível determina A * B! Ocorreu erro na definição das matrizes!");
	
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}
