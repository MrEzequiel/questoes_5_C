#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int mLinhas, nColunas, i, j;
	printf ("\n\nEste programa carrega e imprime uma matriz A mxn e depois localiza o elemento desejado!");
	printf ("\n\n\tATENÇÃO DIGITE NUMEROS MAIOR QUE 0 PARA CONTINUAR\n\n");
	printf ("\n\nDigite a quantidade de linhas da matriz: ");
	scanf ("%d", &mLinhas);
	printf ("\n\nDigite a quantidade de colunas de matriz: ");
	scanf ("%d", &nColunas);
	
		printf ("\n\n\n");
		system ("Pause");
		system ("cls");
		int A[mLinhas][nColunas];
		printf ("\n\nDigite os elementos da matriz A!");
		for (i = 0; i < mLinhas; i++) {
			for (j = 0; j < nColunas; j++) {
				printf ("\n\nDigite o elemento A[%d][%d]: ", i+1, j+1);
				scanf ("%d", &A[i][j]);
			}
		}
		
		printf ("\n\n\n");
		system ("Pause");
		system ("cls");
		
		printf ("\n\nMatriz A = \n");
		for (i = 0; i < mLinhas; i++) {
			printf ("\n");
			for (j = 0; j < nColunas; j++) {
				printf ("   %d", A[i][j]);
			}
		}
	
		
		
//busca
int num, rep = 0 ;
printf ("\n\nDigite o elemento para busca: ");
scanf ("%d", &num);
for (i = 0; i < mLinhas; i++){
	for (j = 0; j < nColunas; j++)
		if (A[i][j] == num){
			printf ("\n\n [%d][%d] =  [ %d ]", i+1, j+1, A[i][j]);
			rep++;
		}
}
printf ("\n\nrepetiram: %d ", rep);
printf ("\n\n\n\n");	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0; 
}
