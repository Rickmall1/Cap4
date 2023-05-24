#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  // Inicio das variaveis da apoio
  float num1, num2;

  // Entradas para o usuário
  printf("Digite um número:\n");
  scanf("%f", &num1);

  printf("Digite outro número:\n");
  scanf("%f", &num2);

  // Inicio das condicionais
  if (num1 > num2)
  {
    printf("%.2f é maior que %.2f", num1, num2);
  }
  else
  {
    printf("%.2f é maior que %.2f", num2, num1);
  }

  // Algoritmo de nível "básico", num1>num2;

  return 0;
}