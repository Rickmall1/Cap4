#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  float sal, novosal, auxilio;

  printf("Digite seu salário: ");
  scanf("%f", &sal);

  if ((sal <= 500) && (sal <= 600))
  {
    auxilio = 150;
    novosal = sal + (sal * 0.05) + auxilio;
    printf("Seu novo salário é de: %.2f", novosal);
  }
  else if ((sal >= 500) && (sal <= 1200) && (sal > 600))
  {
    auxilio = 150;
    novosal = sal + (sal * 0.12) + auxilio;
    printf("Seu novo salário é de: %.2f", novosal);
  }
  else
  {
    printf("Seu salário não foi modificado");
  }

  return 0;
}