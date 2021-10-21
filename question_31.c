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

  char texto[128], letra;
  int repeticoes = 0;

  printf("Digite um texto: ");
  fflush(stdin);
  gets(texto);

  printf("\nDigite uma palavra para encontrar neste texto: ");
  scanf("%c", &letra);

  char vogais[4] = {'A', 'E', 'I', 'O', 'U'};

  for (int i = 0; i <= strlen(texto) - 1; i++)
  {
    char aux = toupper(texto[i]);
    char charAnt = toupper(texto[i - 1]);

    if (aux == toupper(letra))
    {
      if (charAnt != 'A' && charAnt != 'E' && charAnt != 'I' && charAnt != 'O' && charAnt != 'U')
        repeticoes++;
    }
  }

  system("Pause");
  system("cls");

  printf("\n%s\n\n", texto);
  printf("Este texto tem %d repeticoes do termo %c que nao precede vogal\n\n", repeticoes, letra);

  system("Pause");
  return 0;
}
