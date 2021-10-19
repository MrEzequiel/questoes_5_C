#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void)
{
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int i, posic, repet, x, n;
	repet = 0;
	posic = 10;
	printf ("\n\n\tEsse programa lê e armazene n palavras");
	printf ("\n\nDigite o numero de palavras que serão digitadas:  ");
	scanf ("%d", &n);
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	fflush(stdin);
	char palavras[n][30], busca[30];
	fflush(stdin);
	for (i = 0; i < n; i++) {
	printf ("\n\nDigite a palavra na linha %d: ", i+1);
	gets (palavras[i]);
}
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");

printf ("\n\nDigite a palavra para realização de busca na:  ");
gets (busca);
	
printf ("\n\n\n");
system ("Pause");
system ("cls");

for (i = 0; i < n; i++) {
		x = strcmp (palavras[i], busca);
		if (x == 0) {
			posic = i; //Salva a última posição
			repet++;
		}
	}
	
	printf ("\n\nPalavras armazenadas na: ");
	for (i = 0; i < n; i++)
		printf ("\n%s", palavras[i]);
	
	if (posic != n) { 
		printf ("\n\nA palavra %s foi localizada no sistema!\n", busca);
		printf ("\n\nÚltima posição de localização da palavra foi na linha: %d!\n", posic+1);
		printf ("\n\n\nQuantidade de repetições da palavra na matriz: %d!\n", repet);
	}
	
printf ("\n\nObrigado por utlizar nosso programa!!\n\n");
system ("Pause");
return 0;
}
