#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  float sal, novosal, auxilio;


  //Input do usuário
  printf("Digite seu sal�rio: ");
  scanf("%f", &sal);


  //Inicio dsa condicionais
  if ((sal <= 500) && (sal <= 600))
  {
    auxilio = 150;
    novosal = sal + (sal * 0.05) + auxilio;
    printf("Seu novo sal�rio � de: %.2f", novosal);
  }
  else if ((sal >= 500) && (sal <= 1200) && (sal > 600))
  {
    auxilio = 150;
    novosal = sal + (sal * 0.12) + auxilio;
    printf("Seu novo sal�rio � de: %.2f", novosal);
  }
  else
  {
    printf("Seu sal�rio n�o foi modificado");
  }

  return 0;
}