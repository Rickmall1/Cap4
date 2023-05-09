#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int option;
  float novosal, sal;

  //inputs do usuário
  printf("Menu de op��es\n");
  printf("1. Imposto\n");
  printf("2. Novo sal�rio\n");
  printf("3. Classifica��o\n");
  printf("Digite a op��o desejada\n");
  scanf("%d", &option);

  //Inicio das condicionais
  switch (option)
  {
  case 1:
    printf("Digite seu sal�rio: ");
    scanf("%f", &sal);
    if ((sal < 500))
    {
      novosal = sal - (sal * 0.05);
      printf("Seu novo sal�rio ap�s impostos descontados: %.2f", novosal);
    }
    else if ((sal >= 500) && (sal <= 850))
    {
      novosal = sal - (sal * 0.1);
      printf("Seu novo sal�rio ap�s impostos descontados: %.2f", novosal);
    }
    else
    {
      novosal = sal - (sal * 0.15);
      printf("Seu novo sal�rio ap�s impostos descontados: %.2f", novosal);
    }
    break;

    //*****************************

  case 2:
    printf("Digite seu sal�rio: ");
    scanf("%f", &sal);
    if ((sal > 1500))
    {
      novosal = sal + 25;
      printf("Seu novo sal�rio ap�s o aumento �: %.2f", novosal);
    }
    else if ((sal >= 750) && (sal <= 1500))
    {
      novosal = sal + 50;
      printf("Seu novo sal�rio ap�s o aumento �: %.2f", novosal);
    }
    else if ((sal >= 450) && (sal == 750))
    {
      novosal = sal + 75;
      printf("Seu novo sal�rio ap�s o aumento �: %.2f", novosal);
    }
    else
    {
      novosal = sal + 100;
      printf("Seu novo sal�rio ap�s o aumento �: %.2f", novosal);
    }
    break;

    //******************************

  case 3:
    printf("Digite seu sal�rio: ");
    scanf("%f", &sal);
    if ((sal <= 700))
    {
      printf("Mal remunerado");
    }
    else
    {
      printf("Bem remunerado");
    }
    break;
  }

  return 0;
}