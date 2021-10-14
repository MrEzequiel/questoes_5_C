#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int TamV;

  printf("\n\nEste programa faz a multiplicacao de um vetor por uma matriz, se possivel");

  printf("\n\nDigite a quantidade de linhas que vetor tera: ");
  scanf("%d", &TamV);

  if( TamV > 0){

    int A[TamV];
    int LinhasA, ColunasA, i, j;

    printf("\n\nDigite os elementos de A!");
    for (i = 0; i < TamV; i++){
      printf("\n\nDigite o valor do elemento A[%d]: ", i);
      scanf("%d", &A[i]);
    }

    printf("\n\n\n");
    system("Pause");
    system("cls");

    printf("\n\nVetor A");
    printf("\n\nA = [ ");
    for (i = 0; i < TamV; i++){
      printf("%d  ", A[i]);
    }
    printf("]");


    printf("\n\nDigite a quantidade de linhas da matriz B: ");
    scanf("%d", &LinhasA);
    printf("\n\nDigite a quantidade de colunas da matriz B: ");
    scanf("%d", &ColunasA);


    int B[LinhasA][ColunasA];


    printf("\n\n\n");
    system("cls");
    system("Pause");

    if (LinhasA > 0 && ColunasA > 0) {
      printf ("\n\nDigite os elementos de A!");
      for (i = 0; i < LinhasA; i++) {
        for (j = 0; j < ColunasA; j++) {
          printf ("\n\nDigite o elemento A[%d][%d]: ", i, j);
          scanf ("%d", &B[i][j]);
        } 
      }
    }
    else {
      printf ("\n\nDigite valores válidos para as quantidades de linhas e colunas de A!");
    }

    printf ("\n\n\n");
    system ("Pause");
    system ("cls");

    
    printf ("\n\nA = \n");
    for (i = 0; i < LinhasA; i++) {
      printf ("\n");
      for (j = 0; j < ColunasA; j++) {
        printf ("\t%d", B[i][j]);
      }
    }
     

  } else {
    printf("\n\nO vetor não tem o tamanho o suficiente.");
  }

  printf("\n\nObrigado por ultilizar nosso programa");
  system("Pause");
  return 0;
}