#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");


    float num1,num2,num3;

    //Inputs do usuário (numeros)
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    //Operações para decidir o maior número
    if((num1>num2 && num2>num3))
    {
      printf("O menor número é: %.2f", num1);
    }
    else if((num2>num1 && num1>num3))
    {
      printf("O menor número é: %.2f", num2);
    }
    else
    {
      printf("O menor número é: %.2f", num3);
    }

  return 0;
}