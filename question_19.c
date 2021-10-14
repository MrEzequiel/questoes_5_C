#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int linhasA, colunasA, i, j, somaLinha = 0, somaColuna = 0;

  printf("\n\nEsse programa le uma matriz de ordem n, e faz as soma de suas linhas e colunas");

  printf("\n\nDigite a quantidade de linhas da matriz: ");
  scanf("%d", &linhasA);
  printf("\n\nDigite a quantidade de colunas da matriz: ");
  scanf("%d", &colunasA);

  int A[linhasA][colunasA];

  printf("\n\n\n");
  system("cls");
  system("Pause");

  if ( linhasA > 0 && colunasA > 0 ) {
		printf ("\n\nDigite os elementos de A!");
		for (i = 0; i < linhasA; i++) {
			for (j = 0; j < colunasA; j++) {
				printf ("\n\nDigite o elemento A[%d][%d]: ", i, j);
				scanf ("%d", &A[i][j]);
			}
		}
	}
	else {
		printf ("\n\nDigite valores válidos para as quantidades de linhas e colunas de A!");
  }

  printf ("\n\n\n");
	system ("Pause");
	system ("cls");

  
  if (linhasA > 0 && colunasA > 0) {
		printf ("\n\nA = \n");
		for (i = 0; i < linhasA; i++) {
			printf ("\n");
			for (j = 0; j < colunasA; j++) {
				printf ("\t%d", A[i][j]);
			}
		}
	}

  printf("\n\nAgora faremos a soma de linhas e colunas dessa matriz!");

  printf("\n\n\n");
  system("Pause");
  system("cls");


  printf("\n\nA soma das linhas da matriz é igual a %d", somaLinha);
  printf("\n\nA soma das colunas da matriz é igual a %d", somaColuna);


  printf("\n\nObrigado por ultilizar nosso programa!")/
  system("Pause");
  return 0;
}