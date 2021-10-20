#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int i;
	int time[5][6];
	printf ("\n\n\tEsse programa determina quem ganhou em um torneio de basquete\n\n");
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	fflush(stdin);
	for (i = 0; i < 5; i++) {
		fflush(stdin);
		printf ("\n\n\tDigite");
		printf ("\n\nDigite as vitorias do time %dº: ", i+1);
		scanf ("%d", & time[i][0]);
		fflush(stdin);
		printf ("\n\nDigite a quantidade empatesdo time %dº: ", i+1);
		scanf ("%d", & time[i][1]);
		fflush(stdin);
		time[i][2] = time[i][0] * 3 ;
		time[i][3] = time[i][1] * 1 ;
		time[i][4] = time[i][2] + time[i][3];
		time[i][5] = time[i][0] + time[i][1];
		system ("cls");
}  
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
  	printf ("\n\n\tTABELA DO SALDO DE PONTO E DE NUEMRO DE VITORIAS E EMPATES\n");
  	printf ("TIMES   SOLDO   V+E");
  	for(i = 0; i < 5; i++){
  	printf ("\ntime %d: -", i+1);
	printf (" %d - %d", time[i][4], time[i][5]);

	}
int aux [1][5], lSup, bolha, aux2, aux3;
	lSup = 5;
	while (lSup > 0) {
		bolha = 0;
		fflush(stdin);
		for (i = 0; i < lSup; i++) {
			if (time[i][4] > time[i+1][4]) { //Deve-se realizar a troca de posição
				aux[1][4] = time[i][4];
				time[i][4] = time[i+1][4];
				time[i+1][4] = aux[1][4];
				bolha = i;				
			}
		}
		lSup = bolha;
	}
	//imprimir de forma crecente 
	//fflush(stdin);
    //printf ("\n\n\n\n");
	//for(i = 0; i < 5; i++){
	//printf (" %d", time[i][4]);
	//}
	if (time[3][4] ==  time[4][4]){
		printf ("\n\nexiste dois time com o saldo de pontos igual");
		printf ("\n\nUse o V+E para ver quem venceu ");
		 }
		 
	
	else
	  printf ("\n\nTime vencedor e oque tem: %d ", time[4][4]);

	
printf ("\n\nObrigado por utlizar nosso programa!!\n\n");
system ("Pause");
return 0;
}



