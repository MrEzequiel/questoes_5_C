#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	float somaTotal = 0;
	int mLinhas, nColunas, i, j;
	printf ("\n\nEste programa carrega e imprime uma matriz A mxn e soma a diagonal principal e os elementos abaixo dela!");
	printf ("\n\nDigite a quantidade de linhas de A: ");
	scanf ("%d", &mLinhas);
	printf ("\n\nDigite a quantidade de colunas de A: ");
	scanf ("%d", &nColunas);
	
	if (mLinhas > 0 && nColunas > 0) {
		double A[mLinhas][nColunas];
	
		printf ("\n\n\n");
		system ("Pause");
		system ("cls");
		
		printf ("\n\nDigite os elementos da matriz A!");
		for (i = 0; i < mLinhas; i++) {
			for (j = 0; j < nColunas; j++) {
				printf ("\n\nDigite o elemento A[%d][%d]: ", i, j);
				scanf ("%lf", &A[i][j]);
			}
		}
		
		printf ("\n\n\n");
		system ("Pause");
		system ("cls");
		
		printf ("\n\nMatriz A = \n");
		for (i = 0; i < mLinhas; i++) {
			printf ("\n");
			for (j = 0; j < nColunas; j++) {
				printf ("   %.2f", A[i][j]);
			}
		}
		printf ("\n\nDiagonal principal e elementos abaixo \n");
		for (i = 0; i < mLinhas; i++) {
			printf ("\n");
			for (j = 0; j < nColunas; j++) {
				if (i >= j ){
				printf ("   %.2f", A[i][j]);
				somaTotal = somaTotal + A[i][j];}
				else
				printf (" ");
			}
      }
      printf ("\n\nA soma total dos elementos e: %.2f", somaTotal);
}
	else
		printf ("\n\nDigite valores válidos para as quantidades de linhas e colunas!");
		
		
	
printf ("\n\nObrigado por utlizar nosso programa!!\n\n");
system ("Pause");
return 0;
}



