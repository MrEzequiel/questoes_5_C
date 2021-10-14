#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

  setlocale(LC_ALL, "Portuguese");

  int n = 0 , tamX, i, p = 0;
 

  printf("\n\nEste programa faz a soma de quantos vetores o usuario querer!");
  printf("\n\nDigite a quantidade de vetores: ");
  scanf("%d", &n);
  printf("\n\nDigite a quantidade de linhas dos vetores: ");
  scanf("%d", &tamX);

  int A[tamX], D[tamX];

  system("Pause");
  system("cls");

  if (n > 0){

    for(p = 0; p < n; p++){
      printf("\n\nDigite os elementos do vetor %d!", p+1);
      for (i = 0; i < tamX; i++){
      printf("\n\nDigite o valor do elemento A[%d]: ", i);
      scanf("%d", &A[i]);
    }

      printf("\n\nVetor %d", p+1);
      printf("\n\nA = [ ");
      for (i = 0; i < tamX; i++){
        D[i] = 0; 
        printf("%d  ", A[i]);
        D[i] +=  A[i];
      }
      printf("]\n\n");

      system("Pause");


    }
  }else {
    printf("\n\nDigite uma quantidade valida.");
  }

  printf("\n\nD = [ ");
  for (i = 0; i < tamX; i++){
    printf("%d  ", D[i]);
  }
  printf("]\n\n");

  printf("\n\nObrigado por ultilizar esse programa!\n\n");
  system("Pause");
  return 0;
}