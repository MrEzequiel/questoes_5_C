// Desenvolva um programa de some duas matrizes A e B quaisquer, caso possível, determine
// a transposta da matriz resultante e a soma de seus elementos. O programa deve imprimir todas as matrizes.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char **argv)
{
  system("cls");
  setlocale("LC_ALL", "Portuguese");

  int sizeARow, sizeAColumn, sizeBRow, sizeBColumn;
  printf("Digite quantas linhas e colunas tem na matriz A: ");
  scanf("%d%d", &sizeARow, &sizeAColumn);

  printf("\nDigite quantas linhas e colunas tem na matriz B: ");
  scanf("%d%d", &sizeBRow, &sizeBColumn);

  int A[sizeARow - 1][sizeAColumn - 1], B[sizeBRow - 1][sizeBColumn - 1];

  printf("\n\n");
  system("pause");
  system("cls");

  for (int i = 0; i < sizeARow; i++)
  {
    for (int j = 0; j < sizeAColumn; j++)
    {
      printf("A[%d][%d] = ", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  printf("\n\n");
  system("pause");
  system("cls");

  for (int i = 0; i < sizeBRow; i++)
  {
    for (int j = 0; j < sizeBColumn; j++)
    {
      printf("B[%d][%d] = ", i, j);
      scanf("%d", &B[i][j]);
    }
  }

  printf("\n\n");
  system("pause");
  system("cls");

  int C[sizeARow - 1][sizeAColumn - 1];

  if (sizeAColumn == sizeBColumn && sizeARow == sizeBRow)
  {

    for (int i = 0; i < sizeARow; i++)
    {
      for (int j = 0; j < sizeAColumn; j++)
      {
        C[i][j] = A[i][j] + B[i][j];
      }
    }
  }

  printf("C (A + B) = \n");

  for (int i = 0; i < sizeARow; i++)
  {
    {
      for (int j = 0; j < sizeAColumn; j++)
      {
        printf("%d ", C[i][j]);
      }
    }
    printf("\n");
  }

  system("pause");
  return 0;
}
