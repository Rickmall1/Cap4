#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  // Inicio das variaveis de apoio
  int num1;

  // Entradas do usu�rio
  printf("Digite um n�mero inteiro:");
  scanf("%d", &num1);

  if ((num1 % 2 == 0))
  {
    printf("O n�mero � par");
  }
  else
  {
    printf("O n�mero � impar");
  }

  return 0;
}