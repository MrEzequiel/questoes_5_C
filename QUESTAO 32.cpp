#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (void)
{
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int linhasA, colunasA, linhasB, colunasB, i, j, k, linhasC, colunasC, linhasD, colunasD, linhasG, colunasG; 
	printf ("\n\nEste programa determina caso possível a matriz de (A * B) + (C * D) ");
	printf ("\n\nDigite a quantidade de linhas de A: ");
	scanf("%d", &linhasA);
	printf ("\n\nDigite a quantidade de colunas de A: ");
	scanf ("%d", &colunasA);
	printf ("\n\nDigite a quantidade de linhas de B: ");
	scanf ("%d", &linhasB);
	printf ("\n\nDigite a quantidade de colunas de B: ");
	scanf ("%d", &colunasB);
	int E[linhasA][colunasB];
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	int A[linhasA][colunasA], B[linhasB][colunasB];
	
	if (linhasA > 0 && colunasA > 0) {
		printf ("\n\nDigite os elementos de A!");
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
		printf ("\n\nDigite os elementos de B!");
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
		//Teste de existência da multiplicação
		if (colunasA == linhasB) {
			for (i = 0; i < linhasA; i++) {
				for (j = 0; j < colunasB; j++) {
					E[i][j] = 0;
					for (k = 0; k < colunasA; k++) {
						E[i][j] = E[i][j] + (A[i][k] * B[k][j]);// A * B ARMAZENADO EM E
					}
				}
			}
			printf ("\n\n A * B = \n");
			for (i = 0; i < linhasA; i++) {
				printf ("\n");
				for (j = 0;j < colunasB; j++) {
					printf ("\t%d", E[i][j]);
				}
			}
		}
		else
			printf ("\n\nNão é possível realizar a multiplicação de A por B!");
	}
	else
		printf ("\n\nNão é possível determina A * B! Ocorreu erro na definição das matrizes!");
		
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");	
		
	printf ("\n\nDigite a quantidade de linhas de C: ");
	scanf("%d", &linhasC);
	printf ("\n\nDigite a quantidade de colunas de C: ");
	scanf ("%d", &colunasC);
	printf ("\n\nDigite a quantidade de linhas de D: ");
	scanf ("%d", &linhasD);
	printf ("\n\nDigite a quantidade de colunas de D: ");
	scanf ("%d", &colunasD);
	int F[linhasC][colunasD], G[linhasG][colunasG];
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	int C[linhasC][colunasC], D[linhasD][colunasD];
	
	if (linhasC > 0 && colunasC > 0) {
		printf ("\n\nDigite os elementos de C!");
		for (i = 0; i < linhasC; i++) {
			for (j = 0; j < colunasC; j++) {
				printf ("\n\nDigite o elemento C[%d][%d]: ", i, j);
				scanf ("%d", &C[i][j]);
			}
		}
	}
	else
		printf ("\n\nDigite valores válidos para as linhas e colunas de C!");
		
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	if (linhasD > 0 && colunasD > 0) {
		printf ("\n\nDigite os elementos de B!");
		for (i = 0; i < linhasD; i++) {
			for (j = 0; j < colunasD; j++) {
				printf ("\n\nDigite o elemento D[%d][%d]: ", i, j);
				scanf ("%d", &D[i][j]);
			}
		}
	}
	else
		printf ("\n\nDigite valores válidos para as linhas e colunas de D!");
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	printf ("\n\n\tMatrizes");
	
	if (linhasC > 0 && colunasC> 0) {
		printf ("\n\nC = \n");
		for (i = 0; i < linhasC; i++) {
			printf ("\n");
			for (j = 0; j < colunasC; j++) {
				printf ("\t%d", C[i][j]);
			}
		}
	}
	else
		printf ("\n\nNão foi possível carregar a matriz C!");
		
	if (linhasD > 0 && colunasD > 0) {
		printf ("\n\nD = \n");
		for (i = 0; i < linhasD; i++) {
			printf("\n");
			for (j = 0; j < colunasD; j++) {
				printf ("\t%d", D[i][j]);
			}
		}
	}
	else
		printf ("\n\nNão foi possível carregar a matriz D!");
	
	if (linhasC > 0 && colunasC > 0 && linhasD > 0 && colunasD > 0)	{
		//Teste de existência da multiplicação
		if (colunasC == linhasD) {
			for (i = 0; i < linhasC; i++) {
				for (j = 0; j < colunasD; j++) {
					F[i][j] = 0;
					for (k = 0; k < colunasC; k++) {
						F[i][j] = F[i][j] + (C[i][k] * D[k][j]);// C * D ARMAZENADO EM F
					}
				}
			}
			printf ("\n\n C * D = \n");
			for (i = 0; i < linhasC; i++) {
				printf ("\n");
				for (j = 0;j < colunasD; j++) {
					printf ("\t%d", F[i][j]);
				}
			}
		}
		else
			printf ("\n\nNão é possível realizar a multiplicação de C por D!");
	}
	else
		printf ("\n\nNão é possível determina C * D! Ocorreu erro na definição das matrizes!");	
		
	if(linhasA > 0 && colunasA > 0 && linhasB > 0 && colunasB > 0 && linhasC > 0 && colunasC > 0 && linhasD > 0 && colunasD > 0) {
        if(linhasA == linhasC && colunasB == colunasD) {
			printf("\n\n G = (A.B) + (C.D) =\n");
            for(i = 0; i < linhasA; i++) {
                printf("\n");
                for(j = 0; j < colunasB; j++) {
                    printf("   %d", E[i][j] + F[i][j]);
                }
            }
        }
        else
            printf("\n\n Não é possível calcular a adição entre as matrizes A e B!");
    }	

	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}
