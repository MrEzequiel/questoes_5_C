#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calcProvas(int provas)
{
  int maiorQueSete = 0;
  float total = 0, nota, media, menor = 0, maior = 0;

  for (int i = 0; i < provas; i++)
  {
    nota = 0;
    printf("\nDigite a nota da prova: ");
    scanf("%f", &nota);

    if (i == 0)
    {
      maior = nota;
      menor = nota;
    }

    if (nota > maior)
    {
      maior = nota;
    }
    if (nota < menor)
    {
      menor = nota;
    }
    if (nota > 7)
    {
      maiorQueSete++;
    }

    total += nota;
  }

  system("pause");
  system("cls");

  media = total / (provas * 1.0);
  printf("A médias das notas é de: %.2f\n", media);
  printf("A maior nota é: %.2f\n", maior);
  printf("A menor nota é: %.2f\n", menor);
  printf("Tem %d notas maiores que 7\n\n", maiorQueSete);
}

int main(int argc, char **argv)
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");
  int provas;

  printf("\nQuantas provas? ");
  scanf("%d", &provas);

  calcProvas(provas);

  system("Pause");
  return 0;
}
