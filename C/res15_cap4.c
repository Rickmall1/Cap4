#include <stdio.h>
#include <math.h>
#include <locale.h>>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  float sal_bruto, sal_min, horas_trab, horas_trab_val, dependente, dependente_val, hora_extra, hora_extra_val, sal_mes;

  printf("insira o valor do salário minimo: ");
  scanf("%f", &sal_min);

  printf("insira a quantidade de horas trabalhadas: ");
  scanf("%f", &horas_trab);

  printf("insira o valor de dependentes: ");
  scanf("%f", &dependente_val);

  printf("insira a quantidade de horas extras trabalhadas: ");
  scanf("%f", &hora_extra);

  horas_trab_val = sal_min * 0.20;
  sal_mes = horas_trab * horas_trab_val;
  dependente = dependente_val * 32.0;
  hora_extra_val = hora_extra * (horas_trab_val + (horas_trab_val * 0.5));
  sal_bruto = sal_mes + dependente + hora_extra_val;

  float sal_liquido;
  float irrf;

  if ((sal_bruto < 200))
  {
    printf("Isento do imposto de renda, seu salário é: %.2f", sal_bruto);
  }
  else if ((sal_bruto >= 200) || (sal_bruto <= 500))
  {
    irrf = 0.1;
    sal_liquido = sal_bruto - (sal_bruto * irrf);
    printf("Imposto de 10%%, seu salário liquido é: %.2f\n", sal_liquido);
  }
  else
  {
    irrf = 0.2;
    sal_liquido = sal_bruto - (sal_bruto * irrf);
    printf("Imposto de 20%%, seu salário liquido é: %.2f \n", sal_liquido);
  }

  float sal_receber;

  if ((sal_liquido <= 350))
  {
    sal_receber = sal_liquido + 100;
    printf("Gratificação de R$100, seu novo salário: %.2f\n", sal_receber);
  }
  else
  {
    sal_receber = sal_liquido + 50;
    printf("Gratificação de R$50, seu novo salário: %.2f", sal_receber);
  }

  return 0;
}
