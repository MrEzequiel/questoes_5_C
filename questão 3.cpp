#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	int C, i, n;
	printf("\n\nEste programa determina o resultado de (3.A + 4.B) � C, para A, B e C vetores inteiros. Ap�s ler, imprimir cada estrutura e, caso poss�vel, determina o resultado final");
	printf("\n\nDigite o tamanho do vetor A: ");
	scanf("%d", &n);
	if (n > 0)
	{
		printf("\n\n\n");
		system("Pause");
		system("cls");
		int A[n], B[n], C[n];

		printf("\n\nDigite os elementos de A!");
		for (i = 0; i < n; i++)
		{
			printf("\n\nDigite o elemento A[%d]: ", i);
			scanf("%d", &A[i]);
		}
		printf("\n\nA = 3 * A = [ ");
		for (i = 0; i < n; i++)
		{
			A[i] = 3 * A[i];
			printf("%d ", A[i]);
		}
		printf("]");

		printf("\n\n\n");
		system("Pause");
		system("cls");

		printf("\n\nDigite os elementos de B!");
		for (i = 0; i < n; i++)
		{
			printf("\n\nDigite o elemento B[%d]: ", i);
			scanf("%d", &B[i]);
		}
		printf("\n\nB = 4 * B = [ ");
		for (i = 0; i < n; i++)
		{
			B[i] = 4 * B[i];
			printf("%d ", B[i]);
		}
		printf("]");

		printf("\n\n\n");
		system("Pause");
		system("cls");

		fflush(stdin);
		int somaAB[n];
		printf("\n\nA soma dos elementos de A + B = [ ");
		for (i = 0; i < n; i++)
		{
			somaAB[i] = A[i] + B[i]; //Adi��o
			printf("%d ", somaAB[i]);
		}
		printf("]");

		printf("\n\n\n");
		system("Pause");
		system("cls");

		fflush(stdin);
		printf("\n\nDigite os elementos de C!");
		for (i = 0; i < n; i++)
		{
			printf("\n\nDigite o elemento C[%d]: ", i);
			scanf("%d", &C[i]);
		}

		printf("\n\n\n");
		system("Pause");
		system("cls");

		printf("\n\nA subtra��o dos elementos de A + B - C = [ ");
		for (i = 0; i < n; i++)
		{
			somaAB[i] = somaAB[i] - C[i]; //Subtra��o
			printf("%d ", C[i]);
		}
		printf("]");

		printf("\n\nVetores");
		printf("\n\nA = [ ");
		for (i = 0; i < n; i++)
		{
			printf("%d ", A[i]);
		}
		printf("]");

		printf("\n\nB = [ ");
		for (i = 0; i < n; i++)
		{
			printf("%d ", B[i]);
		}
		printf("]");

		printf("\n\nC = [ ");
		for (i = 0; i < n; i++)
		{
			printf("%d ", C[i]);
		}
		printf("]");
	}
	else
		printf("\n\nDigite n > 0!");
	printf("\n\nObrigado por utilizar nosso programa!!\n\n");
	system("Pause");
	return 0;
}
