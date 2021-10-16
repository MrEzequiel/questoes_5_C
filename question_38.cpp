// Desenvolva um programa que leia a posição de um número da
// Série de Fibonacci e imprima o número correspondente.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fibonacci(int position)
{
  if (position == 1)
  {
    return 0;
  }

  if (position == 2)
  {
    return 1;
  }

  return fibonacci(position - 1) + fibonacci(position - 2);
}

int main(int argc, char **argv)
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int position;

  printf("\nDigite a posição do número da Série de Fibonacci: ");
  scanf("%d", &position);

  int number = fibonacci(position);

  printf("\n\nO elemento de posição %d da Série de Fibonacci é: %d\n\n", position, number);

  system("Pause");
  return 0;
}
