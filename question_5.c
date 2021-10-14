#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) 
{
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int n, i, num, posic = 0;
	printf ("\n\nEste programa verifica se um numero digitado pelo usuario faz parte de um vetor A!");
	printf ("\n\nInforme o tamanho do vetor A: ");
	scanf ("%d", &n);
	if (n > 0) {
		int A[n];
		
		printf ("\n\n\n");
		system ("Pause");
		system ("cls");
		
		printf ("\n\nInforme os elementos do vetor A!");
		for (i = 0; i < n; i++) {
			printf ("\n\nDigite o elemento A[%d]: ", i);
			scanf ("%d", &A[i]);
		}
		
		printf ("\n\n\n");
		system ("Pause");
		system ("cls");
		
		printf ("\n\nDigite o numero para busca no vetor A: ");
		scanf ("%d", &num);
		
		printf ("\n\n\n");
		system ("Pause");
		system ("cls");
		
    int busca = 0;

		printf ("\n\nVetor A = [ ");
		for (i = 0; i < n; i++) {
			printf("%d ", A[i]);
      if(num == A[i]){
        busca = 1;
      }
      if(num == A[i]){
        posic = i;
      }
		}
		printf ("]");
		
		if ( busca == 1) {
			printf ("\n\nO numero %d foi localizado no vetor A!", num);
		}
		else
			printf ("\n\nO numero %d nao foi localizado no vetor A!", num);		

    printf("\n\nO numero %d, foi encontrado no vetor, na posicao %d", num, posic+1);

	}
	else
  printf ("\n\nDigite um tamanho do vetor maior que 0!");

  
  printf ("\n\nObrigado por utilizar nosso programa!\n\n");
  system ("Pause");
	return 0;	
}
