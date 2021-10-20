#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main (void)
{
	system ("cls");
	setlocale (LC_ALL, "Portuguese"); 
	char str[80];
	int i, somaVogal, somaConsoante, somaOutros, somaNum, somaEspa;
	somaVogal = 0;
	somaConsoante = 0;
	somaOutros = 0;
	somaNum = 0;
	somaEspa = 0;
	printf ("\n\nEste programa determina a quantidade de vogais e consoantes, espaços, números e outros símbolos!");
	fflush(stdin);
	printf ("\n\nDigite a string: ");
	gets (str);
	for (i = 0; str[i]; i++) {
		printf ("\n\nResultado de isalpha: %d ", isalpha(str[i]));
		if ((isalpha(str[i])) > 0) { 
			str[i] = toupper(str[i]); 
			switch (str[i]) {
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
					somaVogal++;
					break;
				default:
					somaConsoante++; 
			}
		}
		else if (str[i] >='0' && str[i] <= '9')
			somaNum++;
		else if (str[i] ==' ')
			somaEspa++;
		else 
			somaOutros++;		
	}	
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	printf ("\n\nString digitada: %s", str);
	printf ("\n\nTamanho da string: %d", strlen(str));
	printf ("\n\nQuantidade de letras na string: %d", somaVogal + somaConsoante);
	printf ("\n\nQuantidade de vogais na string: %d", somaVogal);
	printf ("\n\nQuantidade de consoantes na string: %d", somaConsoante);
	printf ("\n\nQuantidade de números na string: %d", somaNum);
	printf ("\n\nQuantidade de espaços na string: %d", somaEspa);
	printf ("\n\nQuantidade de outros símbolos na string: %d", somaOutros);
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}
