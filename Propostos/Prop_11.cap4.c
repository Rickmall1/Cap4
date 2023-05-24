#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

    float hire,aumento;

    printf("Digite seu salário atual: \n");
    scanf("%f", &hire);

    if((hire<=300)){
        aumento = hire*0.15;
        hire = hire+aumento;
        printf("Novo salário de: %.2f", hire);
    }else if((hire>300 && hire<600)){
        aumento = hire*0.1;
        hire = hire+aumento;
        printf("Novo salário de: %.2f", hire);
    }else if((hire>=600 && hire<=900)){
        aumento = hire*0.05;
        hire = hire+aumento;
        printf("Novo salário de: %.2f", hire);
    }else{
        printf("Salário inalterado");
    }

  return 0;
}