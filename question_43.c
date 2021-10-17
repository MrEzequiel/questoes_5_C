#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float celsiusToFahrenheit(float temp)
{
  return (temp * 9 / 5) + 32;
}

float celsiusToKelvin(float temp)
{
  return (temp + 273.15);
}

float fahrenheitToKelvin(float temp)
{
  return (temp - 32) * 5 / 9 + 273.15;
}

float kelvinToFahrenheit(float temp)
{
  return (temp - 273.15) * 9 / 5 + 32;
}

int main(int argc, char **argv)
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");
  int escolha;
  float temp;

  printf("Digite qual temperatura você quer converter: ");
  printf("\n1)\tCelsius para Fahrenheit");
  printf("\n2)\tCelsius para Kevin");
  printf("\n3)\tFahrenheit para Kevin");
  printf("\n4)\tKevin para Fahrenheit\n");
  scanf("%d", &escolha);

  system("pause");
  system("cls");

  switch (escolha)
  {
  case 1:
    printf("Digite a temperatura em celsius: ");
    scanf("%f", &temp);
    printf("\nA temperatura convertida em Fahrenheit: %.2f °F \n\n", celsiusToFahrenheit(temp));
    break;

  case 2:
    printf("Digite a temperatura em celsius: ");
    scanf("%f", &temp);
    printf("\nA temperatura convertida em Kevin: %.2f K \n\n", celsiusToKelvin(temp));
    break;

  case 3:
    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &temp);
    printf("\nA temperatura convertida em Kevin: %.2f K\n\n", fahrenheitToKelvin(temp));
    break;

  case 4:
    printf("Digite a temperatura em kevin: ");
    scanf("%f", &temp);
    printf("\nA temperatura convertida em Fahrenheit: %.2f °F \n\n", kelvinToFahrenheit(temp));
    break;

  default:
    printf("Opção inválida!\n\n");
    break;
  }

  system("Pause");
  return 0;
}
