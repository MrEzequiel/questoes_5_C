#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void) 
{
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	char palavras[50][70], busca[70];
	int i, posic, repet, x;
	repet = 0;
	posic = 10;
	printf ("\n\nEste programa lê varias frases e determina se a frase faz parte do conjunto de frases lidas anteriormente!");
	printf ("\n\nDigite as frases para armazenamento!");
	for (i = 0; i < 10; i++) {
		printf ("\n\nDigite a palavra na linha %d: ", i);
		gets (palavras[i]);
	}
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	printf ("\n\nDigite a frase para realização de busca: ");
	gets (busca);
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	for (i = 0; i < 10; i++) {
		x = strcmp (palavras[i], busca);
		if (x == 0) {
			posic = i; 
			repet++;
		}
	}
	
	printf ("\n\nFrases armazenadas: ");
	for (i = 0; i < 10; i++)
		printf ("\n%s", palavras[i]);
	
	if (posic != 10) { 
		printf ("\n\nA frase %s foi localizada e faz parte do conjunto!", busca);
	}
	else 
		printf ("\n\nFrase não encontrada"); 
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}


