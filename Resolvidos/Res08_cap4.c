#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  // Inicio das variaveiss de apoio
  int I;

  // Entradas do usu�rio
  printf("Digite 1 para realizar soma ou 2 para encontrar raiz quadrada: ");
  scanf("%d", &I);

  if ((I == 1))
  {
    // Variaveis de apoio
    float num1, num2, num3;

    // Entradas do usu�rio
    printf("Digite o primeiro n�mero da soma: ");
    scanf("%f", &num1);

    printf("Digite o segundo n�mero da soma: ");
    scanf("%f", &num2);

    // Variaveis apoio
    num3 = num1 + num2;

    printf("O resultado �: %.2f", num3);
  }
  else if ((I == 2))
  {
    // Variaveis de apoio
    int num1;

    // Entradas do usu�rio
    printf("Digite o n�mero para ser utilizado:");
    scanf("%d", &num1);

    printf("O resultado �: %2.f", sqrt(num1));
  }

  return 0;
}