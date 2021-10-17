#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

ordemCrescente(int num1, int num2, int num3)
{
  int aux;

  if (num1 > num3)
  {
    aux = num1;
    num1 = num3;
    num3 = aux;
  }
  if (num1 > num2)
  {
    aux = num1;
    num1 = num2;
    num2 = aux;
  }
  if (num2 > num3)
  {
    aux = num2;
    num2 = num3;
    num3 = aux;
  }

  printf("\nValores dobrados em orderm crescente: \n%d %d %d\n\n", num1, num2, num3);
}

int main(int argc, char **argv)
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");
  int num1, num2, num3;

  printf("\nDigite 3 números inteiros: ");
  scanf("%d%d%d", &num1, &num2, &num3);

  ordemCrescente(num1 * 2, num2 * 2, num3 * 2);

  system("Pause");
  return 0;
}
