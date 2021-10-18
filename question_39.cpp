#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int hanoi(int height)
{
  if (height == 1)
  {
    return 1;
  }
  else
  {
    return 2 * hanoi(height - 1) + 1;
  }
}

int main(int argc, char **argv)
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int quantDisc;

  printf("\nDigite a quantidades de disco que tem nesta torra de Hanoi: ");
  scanf("%d", &quantDisc);

  printf("\nVocê precisa no mínimo %d movimentos para completar essa torre!\n\n", hanoi(quantDisc));

  system("Pause");
  return 0;
}
