#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main (void) 
{
	system ("cls");
	setlocale(LC_ALL, "Portuguese");
	int i, valor = 0;
	char palavra[15], inversa[15];
	printf ("\n\nEste programa l� uma palavra e determina se a palavra � um pal�ndromo!");
	printf ("\n\nDigite uma palavra: ");
	gets(palavra);
	
	for(i = 0; palavra[i]; i++){
		palavra[i] = tolower(palavra[i]);
	}
	
	strcpy(inversa, palavra);
	strrev(inversa);
	valor = strcmp(palavra, inversa);
 	
	if (valor == 0)
		printf("\nA palavra %s � pal�ndroma!", palavra);
	else	
		printf("\nA palavra %s n�o � pal�ndroma!", palavra);

	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
} 

