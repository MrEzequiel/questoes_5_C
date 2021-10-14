#include <stdio.h>
#include <stdlib.h>
#include <locale.h>




int main(void){ 

  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int linhasA, colunasA, linhasB, colunasB, i, j, soma = 0;

  printf("\n\nnEsse programa vai ler uma matriz e fazer a soma de numeros abaixo da diagonal principal e a propria.");

  printf("\n\nDigite a quantidade de linhas da matriz A: ");
  scanf("%d", &linhasA);
  printf("\n\nDigite a quantidade de colunas da matriz A: ");
  scanf("%d", &colunasA);

  int A[linhasA][colunasA];

  printf("\n\n\n");
  system("cls");
  system("Pause");

  if (linhasA > 0 && colunasA > 0) {
		printf ("\n\nDigite os elementos de A!");
		for (i = 0; i < linhasA; i++) {
			for (j = 0; j < colunasA; j++) {
				printf ("\n\nDigite o elemento A[%d][%d]: ", i, j);
				scanf ("%d", &A[i][j]);
        if(i == j){
          soma += A[i][j];
        }
        if(i > j){
          soma += A[i][j];
        }
			}
		}
	}
	else {
		printf ("\n\nDigite valores válidos para as quantidades de linhas e colunas de A!");
  }

  printf("\n\n\n");
  system("cls");
  system("Pause");

  
  if (linhasA > 0 && colunasA > 0) {
		printf ("\n\nA = \n");
		for (i = 0; i < linhasA; i++) {
			printf ("\n");
			for (j = 0; j < colunasA; j++) {
				printf ("\t%d", A[i][j]);
			}
		}
	}

  printf("\n\nFazendo a soma da diagonal principal e os numero abaixo dela, sua soma e %d", soma);


  printf("\n\nObrigado por ultilizar nosso programa!");
  system("Pause");
  return 0;
}