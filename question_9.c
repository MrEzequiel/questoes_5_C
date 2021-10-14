#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void){ 

  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int linhasA, colunasA, linhasB, colunasB, linhasC, colunasC, i, j;

  printf("\n\nEsse programa faz a seguinte operação (A + B) - C");
  printf("\n\nDigite a quantidade de linhas da matriz A: ");
  scanf("%d", &linhasA);
  printf("\n\nDigite a quantidade de colunas da matriz A: ");
  scanf("%d", &colunasA);
  printf("\n\nDigite a quantidade de linhas da matriz B: ");
  scanf("%d", &linhasB);
  printf("\n\nDigite a quantidade de colunas da matriz B: ");
  scanf("%d", &colunasB);
  printf("\n\nDigite a quantidade de linhas da matriz C: ");
  scanf("%d", &linhasC);
  printf("\n\nDigite a quantidade de colunas da matriz C: ");
  scanf("%d", &colunasC);

  int A[linhasA][colunasA];
  int B[linhasB][colunasB];
  int C[linhasC][colunasC];

  printf("\n\n\n");
  system("cls");
  system("Pause");

  if (linhasA > 0 && colunasA > 0) {
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
	
	if (linhasB > 0 && colunasB > 0) {
		printf ("\n\nDigite os elementos de B!");
		for (i = 0; i < linhasB; i++) {
			for (j = 0; j < colunasB; j++) {
				printf ("\n\nDigite o elemento B[%d][%d]: ", i, j);
				scanf ("%d", &B[i][j]);
			}
		}
	}
	else {
		printf ("\n\nDigite valores válidos para as quantidades de linhas e colunas de B!");
  }


  if (linhasC > 0 && colunasC > 0) {
		printf ("\n\nDigite os elementos de C!");
		for (i = 0; i < linhasC; i++) {
			for (j = 0; j < colunasC; j++) {
				printf ("\n\nDigite o elemento C[%d][%d]: ", i, j);
				scanf ("%d", &C[i][j]);
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
	
	if (linhasB > 0 && colunasB > 0) {
		printf ("\n\nB = \n");
		for (i = 0; i < linhasB; i++) {
			printf ("\n");
			for (j = 0; j < colunasB; j++) {
				printf ("\t%d", B[i][j]);
			}
		}
	}

  if (linhasC > 0 && colunasC > 0) {
		printf ("\n\nC = \n");
		for (i = 0; i < linhasC; i++) {
			printf ("\n");
			for (j = 0; j < colunasC; j++) {
				printf ("\t%d", C[i][j]);
			}
		}
	}

  if (linhasA == linhasB && colunasA == colunasB) {
		int Soma[linhasA][colunasA], Sub[linhasA][colunasA];
		printf ("\n\nSoma de A + B = \n");
		for (i = 0; i < linhasA; i++) {
			printf ("\n");
			for (j = 0; j < colunasA; j++) {
				Soma[i][j] = A[i][j] + B[i][j]; 
				printf ("\t%d", Soma[i][j]);
			}
		}

    printf("\n\n (A + B) - C = ");
    for (i = 0; i < linhasA; i++){
      printf("\n");
      for (j = 0; j < colunasA; j++){
        Sub[i][j] = Soma[i][j] - C[i][j];
        printf("\t%d", Sub[i][j]);
      }
    }
	}
	else{
		printf ("\n\nNão é possível calcular a adição entre as matrizes A e B!");
  }

  printf("\n\nObrigado por ultilizar nosso programa!\n\n");
  system("Pause");
  return 0;
}