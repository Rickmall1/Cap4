#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  // Variaveis de apoio
  int num1, num2, num3;

  // Entradas para o usu�rio
  printf("Digite o primeiro n�mero:\n");
  scanf("%d", &num1);

  printf("Digite o segundo n�mero:\n");
  scanf("%d", &num2);

  printf("Digite o terceiro n�mero:\n");
  scanf("%d", &num3);

  // Inicio das condicionais
  if ((num1 < num2) && (num2 < num3))
  {
    printf("A ordem crescente � de: %d\n%d\n%d", num1, num2, num3);
  }
  else if ((num2 < num1) && (num1 < num3))
  {
    printf("a ordem crescente � de:%d\n%d\n%d", num2, num1, num3);
  }
  else if ((num3 < num2) && (num2 < num1))
  {
    printf("a ordem crescente � de:%d\n%d\n%d", num3, num2, num1);
  }
  else if ((num3 < num1) && (num1 < num2))
  {
    printf("a ordem crescente � de:%d\n%d\n%d", num3, num1, num2);
  }
  else if ((num2 < num3) && (num3 < num1))
  {
    printf("a ordem crescente � de:%d\n%d\n%d", num2, num3, num1);
  }
  else if ((num1 < num3) && (num3 < num2))
  {
    printf("a ordem crescente � de:%d\n%d\n%d", num1, num3, num2);
  }
  else
  {
    printf("Comando invalido");
  }

  // Veja que existe um padr�o para esse algoritmo, onde a primeira variavel selecionada nas condicionais � sempre a primeira na sa�da;
  // O mesmo padr�o para a segunda e terceira vari�vel;

  return 0;
}