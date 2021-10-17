#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int hanoi(int discos, char origem, char destino, char aux)
{
  if (discos == 1)
  {
    printf("\nSalve\n");
  }
  else
  {
    printf("\nSalve\n");

    hanoi(discos - 1, origem, aux, destino);
    hanoi(discos - 1, aux, destino, origem);
  }
}

int main(int argc, char **argv)
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int quantDisc;

  printf("\nDigite a quantidades de disco que tem nesta torra de Hanoi: ");
  scanf("%d", &quantDisc);

  hanoi(quantDisc, 'f', 't', 'w');

  system("Pause");
  return 0;
}
