#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Procedimento multMatriz
void multMatriz (int liA, int coA, int liB, int coB) 
{
	int A[liA][coA], B[liB][coB], i, j, k;
	
	printf ("\n\nDigite os elementos da matriz A!");
	for (i = 0; i < liA; i++) {
		for (j = 0; j < coA; j++) {
			printf ("\n\nDigite o elemento na posição A[%d][%d]: ", i, j);
			scanf ("%d", &A[i][j]);
		}
	}
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	printf ("\n\nDigite os elementos da matriz B!");
	for (i = 0; i < liB; i++) {
		for (j = 0; j < coB; j++) {
			printf ("\n\nDigite o elemento da posição B[%d][%d]: ", i, j);
			scanf ("%d", &B[i][j]);
		}
	}
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	printf ("\n\n\tMatrizes");
	
	printf ("\n\nA = \n");
	for (i = 0; i < liA; i++) {
		printf ("\n");
		for (j = 0; j < coA; j++)
			printf ("   %d", A[i][j]);
	}
	
	printf  ("\n\nB = \n");
	for (i = 0; i < liB; i++) {
		printf ("\n");
		for (j = 0; j < coB; j++) 
			printf ("   %d", B[i][j]);
	}
	
	if (coA == liB) {
		int C[liA][coB];
		int traco = 0;
		for (i = 0; i < liA; i++) {
			for (j = 0; j < coB; j++) {
				C[i][j] = 0;
				for (k = 0; k < coA; k++) {
					C[i][j] = (A[i][k] * B[k][j]) + C[i][j];
				}
			}
		}
		
		printf ("\n\nC = A * B = \n");
		for (i = 0; i < liA; i++) {
			printf ("\n");
			for (j = 0; j < coB; j++)
				printf ("   %d", C[i][j]);
		}
		
		//Verificando se C é quadrada
		if (liA == coB) {
			for (i = 0; i < liA; i++) {
				for (j = 0; j < coB; j++)
					if (i == j)
						traco += C[i][j];
			}
			
			printf ("\n\nO traço da matriz C = A * B é %d!", traco);
		}
		else
			printf ("\n\nA matriz C não é quadrada! Portanto, não possui diagonal principal e, consequentemente, traço!");
		
	}
	else
		printf ("\n\nNão é possível multiplicar as duas matrizes! A quantidade de colunas de A é diferente da quantidade de linhas de B!");
	
	
} //fim do procedimento multMatriz
 
int main (void) 
{
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int linhasA, colunasA, linhasB, colunasB;
	printf ("\n\nEste programa determina, caso possível, o traço de uma matriz C = A * B!");
	printf ("\n\nDigite a  quantidade de linhas de A: ");
	scanf ("%d", &linhasA);
	printf ("\n\nDigite a quantidade de colunas de A: ");
	scanf ("%d", &colunasA);
	printf ("\n\nDigite a quantidade de linhas de B: ");
	scanf ("%d", &linhasB);
	printf ("\n\nDigite a quantidade de colunas de B: ");
	scanf ("%d", &colunasB);
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	if (linhasA > 0 && colunasA > 0 && linhasB > 0 && colunasB > 0)
		multMatriz(linhasA, colunasA, linhasB, colunasB); //invocação	
	else
		printf ("\n\nDigite valores válidos para as quantidades de linhas e de colunas de A e de B!");
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	printf ("\n\n\n");
	return 0;	
}
