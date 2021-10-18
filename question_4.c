// Desenvolva um programa que determine o resultado de (3.A + 4.B) – C, para A, B e C vetores
// inteiros. Após ler, imprimir cada estrutura e, caso possível, determinar o resultado final, o programa deve
// imprimir cada vetor ordenado de maneira crescente.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ordernar(int arr[], int size)
{
  fflush(stdin);

  int aux, i, j;
  for (i = 0; i < size; i++)
    for (j = i + 1; j < size; j++)
    {
      if (arr[i] > arr[j])
      {
        aux = arr[i];
        arr[i] = arr[j];
        arr[j] = aux;
      }
    }

  for (i = 0; i <= size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main(int argc, char **argv)
{
  system("cls");
  setlocale("LC_ALL", "Portuguese");

  int sizeA, sizeB, sizeC;

  printf("\n\nDigite o tamanho do array A, B e C: ");
  scanf("%d%d%d", &sizeA, &sizeB, &sizeC);

  system("cls");
  int A[sizeA - 1], B[sizeB - 1], C[sizeC - 1];

  for (int i = 0; i < sizeA; i++)
  {
    printf("Digite o array A[%d]: ", i);
    scanf("%d", &A[i]);
  }

  system("cls");

  for (int i = 0; i < sizeB; i++)
  {
    printf("Digite o array B[%d]: ", i);
    scanf("%d", &B[i]);
  }

  system("cls");

  for (int i = 0; i < sizeC; i++)
  {
    printf("Digite o array C[%d]: ", i);
    scanf("%d", &C[i]);
  }

  system("cls");

  printf("\nA[%d] = ", sizeA - 1);
  for (int i = 0; i < sizeA; i++)
  {
    printf("%d ", A[i]);
  }

  printf("\nOrdem Crescente: \n");
  ordernar(A, sizeA - 1);

  printf("\nB[%d] = ", sizeB - 1);
  for (int i = 0; i < sizeB; i++)
  {
    printf("%d ", B[i]);
  }

  printf("\nOrdem Crescente: \n");
  ordernar(B, sizeB - 1);

  printf("\nC[%d] = ", sizeC - 1);
  for (int i = 0; i < sizeC; i++)
  {
    printf("%d ", C[i]);
  }

  printf("\nOrdem Crescente: \n");
  ordernar(C, sizeC - 1);

  if (sizeA == sizeB && sizeA == sizeC)
  {
    int total[sizeA - 1];
    for (int i = 0; i < sizeC; i++)
    {
      A[i] = A[i] * 3;
      B[i] = B[i] * 4;
      total[i] = (A[i] + B[i]) - C[i];
    }

    printf("\n\nTotal = ");
    for (int i = 0; i < sizeC; i++)
    {
      printf("%d ", total[i]);
    }
  }
  else
  {
    printf("\n\nNão é possível calcular o total!");
  }

  printf("\n\n");
  system("pause");
  return 0;
}
