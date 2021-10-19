#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
	fflush(stdin);
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int n, A[n];
	int aux, bolha, lSup, i;
	int somatorio = 0;
	printf ("\n\nEsse programa lê um vetor inteiro e ordena de forma crecente e ao final soma seus valores!!!");
	printf ("\n\nDigite o numero de elementos do vetor: ");
	scanf ("%d", &n);
	fflush(stdin);
	
	for (i = 0; i < n; i++) {
		printf ("\n\nDigite o elemento A[%d]: ", i);
		scanf ("%d", &A[i]);
	}
	
fflush(stdin);	
printf ("\n\n\n");
system ("Pause");
system ("cls");

 	fflush(stdin);
	printf ("\n\nVetores");
	printf ("\n\nA(ordem digitada) = [ ");
	for (i = 0; i < n; i++) {
		printf ("%d ", A[i]);
	}
	printf ("]");
	fflush(stdin);

    lSup = 5;
	while (lSup > 0) {
		bolha = 0;
		for (i = 0; i < lSup; i++) {
			if (A[i] > A[i + 1]) { //Deve-se realizar a troca de posição
				aux = A[i];
				A[i] = A[i+1];
				A[i + 1] = aux;
				bolha = i;				
			}
		}
		lSup = bolha;
	}
	fflush(stdin);
	printf ("\n\nA(ordem crescente) = [ ");
	for (i = 0; i < n; i++) {
		printf ("%d ", A[i]);
	}
	printf ("]");
	
	//soma
	for (i = 0; i < n; i++) {
        somatorio = somatorio + A[i];
    }
    printf("\n\nO SOMA dos elementos do vetor é = %d\n", somatorio);
    
    //par ou impa
    if (somatorio%2 == 0){
    	printf ("\nA somatoria dos elementos forma um numero PAR!");
	}
	else 
	printf ("\nA somatoria dos elementos forma um numero IMPA!");
    

printf ("\n\nObrigado por utlizar nosso programa!!\n\n");
system ("Pause");
return 0;
}



