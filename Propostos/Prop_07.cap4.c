#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

    //Hire = salário (inglês)
    float hire,newhire;

    printf("Digite seu salário: %.2f\n");
    scanf("%f", &hire);

    if((hire<500))
    {
       float soma = hire*0.3;
       newhire = soma+hire;
       printf("Seu novo salário é de: %.2f\n", newhire);
    }
    else
    {
       printf("Salário inalterado");
    }
  return 0;
}