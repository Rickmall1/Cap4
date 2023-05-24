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

    //Salário reajustado
    if((hire<=300))
    {
       float soma = hire*0.35;
       newhire = soma+hire;
       printf("Seu novo salário é de: %.2f\n", newhire);
    }
    else
    {
       float soma = hire*0.15;
       newhire = soma+hire;
       printf("Seu novo salário é de: %.2f\n", newhire);
    }
  return 0;
}