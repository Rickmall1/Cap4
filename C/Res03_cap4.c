#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  // Inicio das variaveis da apoio
  float num1, num2;

  // Entradas para o usu�rio
  printf("Digite um n�mero:\n");
  scanf("%f", &num1);

  printf("Digite outro n�mero:\n");
  scanf("%f", &num2);

  // Inicio das condicionais
  if (num1 > num2)
  {
    printf("%.2f � maior que %.2f", num1, num2);
  }
  else
  {
    printf("%.2f � maior que %.2f", num2, num1);
  }

  // Algoritmo de n�vel "b�sico", num1>num2;

  return 0;
}