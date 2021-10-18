#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int divisao(int a, int b)
{
  int aux = a, divisoes = 0;

  while (aux % b == 0)
  {
    aux = aux / b;
    divisoes++;
  }

  return divisoes;
}

int main(int argc, char **argv)
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");
  int x, y;

  printf("Digite dois números: ");
  scanf("%d%d", &x, &y);

  printf("\nO primeiro valor é divisível %d vezes pelo o segundo valor!\n\n", divisao(x, y));

  system("Pause");
  return 0;
}
