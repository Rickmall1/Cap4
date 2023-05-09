#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  // Variaveis de apoio

  int num1, num2, num3, num4;

  // Entradas do usuário
  printf("Digite 3 números em ordem crescente\n");

  printf("Digite o primeiro:");
  scanf("%d", &num1);

  printf("Digite o segundo:");
  scanf("%d", &num2);

  printf("Digite o terceiro:");
  scanf("%d", &num3);

  printf("Agora, digite qualquer número a sua escolha:");
  scanf("%d", &num4);

  // Inicio das condicionais

  if ((num4 < num1))
  {
    printf("A ordem decrescente é: %d %d %d %d", num3, num2, num1, num4);
  }
  else if ((num4 > num3))
  {
    printf("A ordem decrescente é: %d %d %d %d", num4, num3, num2, num1);
  }
  else if ((num4 > num2))
  {
    printf("A ordem decrescente é: %d %d %d %d", num3, num4, num2, num1);
  }
  else if ((num4 < num2))
  {
    printf("A ordem decrescente é: %d %d %d %d", num3, num2, num4, num1);
  }

  // Perceba que em todos os casos num4 começa sendo a primeira valoração, pois a partir dessa variável podemos arquitetar o restante.

  return 0;
}