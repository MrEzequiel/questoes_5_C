#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char **argv)
{
  system("cls");
  setlocale("LC_ALL", "Portuguese");

  int sizeArrayB, sizeArrayC;
  printf("Digite o tamanho do array B e C: ");
  scanf("%d%d", &sizeArrayB, &sizeArrayC);

  float B[sizeArrayB - 1], C[sizeArrayC - 1], A[sizeArrayB - 1];

  for (int i = 0; i < sizeArrayB; i++)
  {
    printf("\nDigite a o B[%d]: ", i);
    scanf("%f", &B[i]);
  }

  for (int i = 0; i < sizeArrayC; i++)
  {
    printf("\nDigite a o C[%d]: ", i);
    scanf("%f", &C[i]);
  }

  for (int i = 0; i < sizeArrayB; i++)
  {
    A[i] = B[i] - C[i];
  }

  printf("\nA = ");
  for (int i = 0; i < sizeArrayB; i++)
  {
    printf("%.2f ", A[i]);
  }

  printf("\n\nB = ");
  for (int i = 0; i < sizeArrayB; i++)
  {
    printf("%.2f ", B[i]);
  }

  printf("\n\nC = ");
  for (int i = 0; i < sizeArrayB; i++)
  {
    printf("%.2f ", C[i]);
  }

  printf("\n\n");

  system("pause");
  return 0;
}