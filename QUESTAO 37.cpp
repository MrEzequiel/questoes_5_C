#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	char str1[80], str2[80];
	int i;
	printf ("\n\nEste programa concatena o conte�do de duas strings digitadas pelo usu�rio, determina o tamanho da string final, e a exibe em caracteres mai�sculos!");
	printf ("\n\nDigite a primeira string: ");
	gets (str1);
	printf ("\n\nDigite a segunda string: ");
	gets (str2);
	printf ("\n\nstr1 = %s", str1);
	printf ("\n\nstr2 = %s", str2);
	strcat (str1, str2);
	printf ("\n\nAp�s concatenar, fica da seguinte forma: %s ", str1);
	printf ("\n\nO tamanho da string � de %d caracteres!", strlen(str1));
	for (i = 0; str1[i]; i++) {
		str1[i] = toupper(str1[i]);
	} 
	printf ("\n\nCom os caracteres em mai�sculos fica da seguinte forma: %s", str1);
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");	
	system ("Pause");
	return 0;
}
