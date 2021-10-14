#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void){

  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int linhasA, colunasA, linhasB, colunasB, i,j, t, n, controle = 0;

  printf("\n\nEsse programa fará a multiplicação de duas matrizes");

  printf("\n\nDigite a quantidade de linhas da matriz A: ");
  scanf("%d", &linhasA);
  printf("\n\nDigite a quantidade de colunas da matriz A: ");
  scanf("%d", &colunasA);
  printf("\n\nDigite a quantidade de linhas da matriz B: ");
  scanf("%d", &linhasB);
  printf("\n\nDigite a quantidade de colunas da matriz B: ");
  scanf("%d", &colunasB);


  float A[linhasA][colunasA];
  float B[linhasB][colunasB];
	float traco = 0;

  printf("\n\n\n");
  system("cls");
  system("Pause");

  if (linhasA > 0 && colunasA > 0) {
		printf ("\n\nDigite os elementos de A!");
		for (i = 0; i < linhasA; i++) {
			for (j = 0; j < colunasA; j++) {
				printf ("\n\nDigite o elemento A[%d][%d]: ", i, j);
				scanf ("%f", &A[i][j]);
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
				scanf ("%f", &B[i][j]);
			}
		}
	}
	else {
		printf ("\n\nDigite valores válidos para as quantidades de linhas e colunas de B!");
  }

  printf ("\n\n\n");
	system ("Pause");
	system ("cls");

  
  if (linhasA > 0 && colunasA > 0) {
		printf ("\n\nA = \n");
		for (i = 0; i < linhasA; i++) {
			printf ("\n");
			for (j = 0; j < colunasA; j++) {
				printf ("\t%.2f", A[i][j]);
			}
		}
	}
	
	if (linhasB > 0 && colunasB > 0) {
		printf ("\n\nB = \n");
		for (i = 0; i < linhasB; i++) {
			printf ("\n");
			for (j = 0; j < colunasB; j++) {
				printf ("\t%.2f", B[i][j]);
			}
		}
	}

  if (linhasA > 0 && colunasA > 0 && linhasB > 0 && colunasB > 0)	{
		if (colunasA == linhasB) {

			printf("\n\n\n");
			system("Pause");
			system("cls");

			printf("\n\nAgora, com o resultado da multiplicacao, multiplicaremos o seu resultado por um numero.");
			printf("\n\nDigite um numero: ");
			scanf("%d", &n);

			float C[linhasA][colunasB];
			float D[linhasA][colunasB];
			for (i = 0; i < linhasA; i++) {
				for (j = 0; j < colunasB; j++) {
					C[i][j] = 0;
					for (t = 0; t < colunasA; t++) {
						C[i][j] = (A[i][t] * B[t][j]);
						D[i][j] = C[i][j] * n;
					}
				}
			}

			printf ("\n\nC = A * B = \n");
			for (i = 0; i < linhasA; i++) {
				printf ("\n");
				for (j = 0;j < colunasB; j++) {
					printf ("\t%.2f", C[i][j]);
				}
			}

			if(n > 0){
				printf ("\n\nD = C * O Numero digitado \n");
				for (i = 0; i < linhasA; i++) {
				printf ("\n");
				for (j = 0;j < colunasA; j++) {
					printf ("\t%.2f", D[i][j]);
					if (linhasA == colunasA) {
					controle = 1;
					if (i == j) {
						traco += D[i][j];
					}
				}
				}

			}
			} else{
				printf("\n\nNão foi possivel realizar a multiplicacao, valor invalido.");
			}

			if(controle == 1){
				printf("\n\nA matriz e quadrada, portanto ela possui traco, o mesmo tem o valor de %.2f!", traco);
			}else {
				printf("\n\nNao é quadrada, logo nao tem traco!");
			}

			printf("\n\n\n");
			system("Pause");
			system("cls");

		}
		else
			printf ("\n\nNão é possível realizar a multiplicação de A por B!");
	}


  printf("\n\nObrigado por ultilizar nosso programa!\n\n");
  system("Pause");
  return 0;
}