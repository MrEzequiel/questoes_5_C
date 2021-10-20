#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

  system("cls");
  setlocale(LC_ALL, "Portguese");

  int municipio[10][8], i, j, somaLi = 0;

  printf("\n\nEste programa ira ler 7 indicadores de 10 municipios e determinar a media de cada municipio");

  fflush(stdin);
  
  for(i = 0; i < 10; i++ ){
    printf("\n\nDigite o valor do primeiro indicador do %d municipio: ", i+1);
    scanf("%d", &municipio[i][0]);
    printf("\n\nDigite o valor do segundo indicador do %d &municipio: ", i+1);
    scanf("%d", &municipio[i][1]);
    printf("\n\nDigite o valor do terceiro indicador do %d &municipio: ", i+1);
    scanf("%d", &municipio[i][2]);
    printf("\n\nDigite o valor do quarto indicador do %d &municipio: ", i+1);
    scanf("%d", &municipio[i][3]);
    printf("\n\nDigite o valor do quinto indicador do %d &municipio: ", i+1);
    scanf("%d", &municipio[i][4]);
    printf("\n\nDigite o valor do sexto indicador do %d &municipio: ", i+1);
    scanf("%d", &municipio[i][5]);
    printf("\n\nDigite o valor do setimo indicador do %d &municipio: ", i+1);
    scanf("%d", &municipio[i][6]);
  }

  fflush(stdin);

  printf ("\n\nTabela de indicadores de cada estado = \n");
			for (i = 0; i < 10; i++) {
				printf ("\n");
        somaLi = 0;
				for (j = 0; j < 8; j++) {
					printf ("\t%d", municipio[i][j]);
          somaLi += municipio[i][j];
          municipio[i][7] = somaLi/7;
				}
			}


  printf("\n\nObrigado por ultilizar nosso programa\n\n");
  system("Pause");
  return 0;
}
