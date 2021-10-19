#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int A[5][5], i, j, controleDiag = 1, controleTriSup = 1, controleTriInf = 1, controleDiagPrinc = 1;
	printf ("\n\nEste programa classifica um matriz A quadrada de ordem 5!");
	printf ("\n\nInforme os elementos de A!");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf ("\n\nInforme os elementos na posição A[%d][%d]: ", i, j);
			scanf ("%d", &A[i][j]);
		}
	}
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	printf ("\n\nA = \n");
	for (i = 0; i < 5; i++) {
		printf ("\n");
		for (j = 0; j < 5; j++) {
			printf ("   %d", A[i][j]);
			if ((i != j) && (A[i][j] != 0)) { //Matriz Diagonal
				controleDiag = 0;
			}
			if ((i > j) && (A[i][j]) != 0) { //Triangular Superior
				controleTriSup = 0;
			}
			if ((i < j) && (A[i][j]) != 0) { //Triangulo Inferior
				controleTriInf = 0;
			}
			if ((i == j) && (A[i][j]) != 0) { //Elementos da Diagonal Principal;
				controleDiagPrinc = 0;			
			}
		}
	}
	
	if (controleDiag == 1 && controleDiagPrinc == 0) 
		printf ("\n\nA matriz A é diagonal!");
	else if (controleTriSup == 1 && controleDiagPrinc == 0)
		printf ("\n\nA matriz A é triangular superior!");
	else if (controleTriInf == 1 && controleDiagPrinc == 0)
		printf ("\n\nA matriz A é triangular inferior!");
	else if (controleDiag == 1 && controleDiagPrinc == 1)
		printf ("\n\nA matriz A é nula!");
	else
		printf ("\n\nA matriz A não é diagonal e nem triangular!");
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}
