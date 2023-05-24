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

    if((hire<500)){
        float soma = hire + (hire*0.3);
    }

  return 0;
}