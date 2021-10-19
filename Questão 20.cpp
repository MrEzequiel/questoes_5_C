#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	char string[90], caracter;
	int i, somaCaracter = 0;
	printf ("\n\nEsse programa o programa localiza uma letra, e determinando a quantidade de repetições da letra.\n");
	printf ("\n\n\tATENÇÃO DIGITE APENAS COM LETRAS MAIÚSCULO");
	printf ("\n\nDigite a Palavra: ");
	gets (string);

printf ("\n\n\n");
system ("Pause");
system ("cls");
	
	printf ("\n\nDigite o letra para busca: ");
	scanf ("%c", &caracter);
	printf ("\n\nPalavra digitada foi: %s", string);
	printf ("\n\nA letra buscada e: %c", caracter);
	
	for (i = 0; i < strlen(string); i++) {
	 if (caracter == string[i])
	 somaCaracter++;
}
	if (somaCaracter != 0) {
	 printf ("\n\nO letra foi localizado na palavra!");
	 printf ("\nQuantidade de repetições: %d!", somaCaracter);
}
	else
	 printf ("\n\nO letra não foi localizado na palavra!");
	
printf ("\n\nObrigado por utlizar nosso programa!!\n\n");
system ("Pause");
return 0;
}



