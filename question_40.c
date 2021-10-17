#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float total = 0.0;

calcParale()
{
  system("cls");
  float h, l, c, volume;

  printf("Digite altura, a largura e o comprimento do paralelepípedo: ");
  scanf("%f%f%f", &h, &l, &c);

  volume = h * l * c;
  total += volume;

  printf("\nO volume do paralelepípedo é de: %.2f\n\n", volume);
  system("pause");
  menu();
}

calcEsfera()
{
  system("cls");
  float raio, volume;

  printf("Digite o raio da esfera: ");
  scanf("%f", &raio);

  volume = (4 * 3.14 * (raio * raio * raio)) / 3;
  total += volume;

  printf("\nO volume da esfera é de: %.2f\n\n", volume);
  system("pause");
  menu();
}

calcCone()
{
  system("cls");
  float altura, raio, volume;

  printf("Digite o altura e o raio do cone: ");
  scanf("%f%f", &altura, &raio);

  volume = (3.14 * (raio * raio) * altura) / 3;
  total += volume;

  printf("\nO volume do cone é de: %.2f\n\n", volume);
  system("pause");
  menu();
}

calcCilindro()
{
  system("cls");
  float raio, altura, volume;

  printf("Digite o raio e a altura do cilindro: ");
  scanf("%f%f", &raio, &altura);

  volume = 3.14 * (raio * raio) * altura;
  total += volume;

  printf("\nO volume do cilindro é de: %.2f\n\n", volume);

  system("pause");
  menu();
}

calcPrima()
{
  system("cls");
  float areaBase, altura, volume;

  printf("Digite a área da base e a altura do prisma reto: ");
  scanf("%f%f", &areaBase, &altura);

  volume = areaBase * altura;
  total += volume;

  printf("\nO volume do prisma reto é de: %.2f\n\n", volume);

  system("pause");
  menu();
}

calcPira()
{
  system("cls");
  float areaBase, altura, volume;

  printf("Digite a área da base e a altura da pirâmide: ");
  scanf("%f%f", &areaBase, &altura);

  volume = (areaBase * altura) / 3;
  total += volume;

  printf("O volume da pirâmide é de: %.2f\n\n", volume);

  system("pause");
  menu();
}

int switchEscolha(int escolha)
{
  switch (escolha)
  {
  case 1:
    calcParale();
    break;

  case 2:
    calcEsfera();
    break;

  case 3:
    calcCone();
    break;

  case 4:
    calcCilindro();
    break;

  case 5:
    calcPrima();
    break;

  case 6:
    calcPira();
    break;

  case 0:
    return 0;
    break;

  default:
    printf("\nDigite uma opção válida!\n");
    system("pause");
    menu();
    break;
  }
}

menu()
{
  system("cls");
  int escolha;
  printf("Digite um número da forma para calcular seu volume:\n\n");
  printf("1) \tparalelepípedo\n");
  printf("2) \tesfera\n");
  printf("3) \tcone\n");
  printf("4) \tcilindro\n");
  printf("5) \tprisma reto\n");
  printf("6) \tpirâmide quadrangular\n");
  printf("0) \tsair\n");
  printf("\t\t\tTotal volumes: %.2f\n\n", total);
  printf("Digite: ");
  scanf("%d", &escolha);
  switchEscolha(escolha);
}

int main(int argc, char **argv)
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  menu();

  system("Pause");
  return 0;
}
