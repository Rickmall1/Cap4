#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

    float hire,grat,imposto;

    printf("Digite o salário bruto: \n");
    scanf("%f", &hire);

    imposto = hire*0.07;

    if((sal<=350)){
        grat = 100;
        hire = hire+grat-imposto;
        printf("Salário a receber: %.2f", hire);
    }else if((sal>350 && sal<600)){
        grat = 75;
        hire = hire+grat-imposto;
        printf("Salário a receber: %.2f", hire);
    }else if((sal>=600 sal<=900)){
        grat = 50;
        hire = hire+grat-imposto;
        printf("Salário a receber: %.2f", hire);
    }else{
        grat = 35;
        hire = hire+grat-imposto;
        printf("Salário a receber: %.2f", hire);
    }

  return 0;
}