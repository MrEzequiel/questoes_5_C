// Desenvolva um programa que leia um vetor inteiro, busque um número na estrutura e diga a
// posição do número. Caso o número tenha repetições, determine a posição de cada repetição

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char **argv)
{
  system("cls");
  setlocale("LC_ALL", "Portuguese");

  int size;

  printf("\nDigite quantas posições há neste array: ");
  scanf("%d", &size);

  int arr[size - 1];
  system("cls");

  for (int i = 0; i < size; i++)
  {
    printf("A[%d] = ", i);
    scanf("%d", &arr[i]);
  }

  system("cls");
  int position;
  int itFound = 0;
  printf("Digite o termo que deseja procurar no array: ");
  scanf("%d", &position);

  for (int i = 0; i < size; i++)
  {
    if (arr[i] == position)
    {
      itFound = 1;
      printf("\nItem %d encontrado na posição: %d", position, i);
    }
  }

  if (itFound == 0)
  {
    printf("\nItem não encontrado!\n");
  }

  printf("\n\n");
  system("pause");
  return 0;
}
