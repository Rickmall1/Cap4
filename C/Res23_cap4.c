#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");


    float sal_min,horas,coef=0,sal_bruto=0,imposto=0,grat=0,aux_food=0;
    char turno,categoria;

    //Inputs do usuário:
    printf("Digite o valor do salário minimo: \n");
    scanf("%f", &sal_min);

    printf("Digite o turno de trabalho: \n");
    scanf("%f", &turno);

    printf("Digite a categoria: \n");
    scanf("%f", &categoria);

    printf("Digite o número de horas trabalhadas no mês: \n");
    scanf("%f", &horas);

    //Coeficiente do salário:
    if((turno==M)){
        coef = sal_min*0.1;
        printf("Coeficiente do salário mínimo: %.2f", coef);
    }



  return 0;
}