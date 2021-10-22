#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  char texto[128], palavra[80], substituir[80];

  printf("\nDigite um texto: ");
  fflush(stdin);
  gets(texto);

  printf("\nDigite uma palavra do texto para substituir com outra: ");
  fflush(stdin);
  gets(palavra);

  int tamPalavra = strlen(palavra);

  printf("\nDigite a palavra que você quer substituir que tenha %d letras: ", tamPalavra);
  fflush(stdin);
  gets(substituir);

  int tamSubstituir = strlen(substituir);

  printf("\n================================\n\n");
  system("Pause");
  system("cls");

  if (tamPalavra != tamSubstituir)
  {
    printf("Não é possivel fazer a substuicao!\n\n");
  }
  else
  {
    for (int i = 0; i <= strlen(texto) - 1; i++)
    {
      if (texto[i] == palavra[0])
      {
        char aux[tamPalavra - 1];
        for (int j = 0; j <= tamPalavra - 1; j++)
        {
          aux[j] = texto[i + j];
        }

        if (strcmp(aux, palavra) == 0)
        {
          for (int j = 0; j <= tamPalavra - 1; j++)
          {
            texto[i + j] = substituir[j];
          }
        }
      }
    }
  }

  printf("\n%s\n\n", texto);

  system("Pause");
  return 0;
}
