#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  // Inicio das variaveis de apoio
  int num1;

  // Entradas do usuário
  printf("Digite um número inteiro:");
  scanf("%d", &num1);

  if ((num1 % 2 == 0))
  {
    printf("O número é par");
  }
  else
  {
    printf("O número é impar");
  }

  return 0;
}