#include <stdio.h>
#include <math.h>
#include <locale.h>>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  //Variaveis de apoio
  float sal_bruto, sal_min, horas_trab, horas_trab_val, dependente, dependente_val, hora_extra, hora_extra_val, sal_mes;

  //Inputs do usuário
  printf("insira o valor do sal?rio minimo: ");
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
    printf("Isento do imposto de renda, seu sal?rio ?: %.2f", sal_bruto);
  }
  else if ((sal_bruto >= 200) && (sal_bruto <= 500))
  {
    irrf = 0.1;
    sal_liquido = sal_bruto - (sal_bruto * irrf);
    printf("Imposto de 10%%, seu sal?rio liquido ?: %.2f\n", sal_liquido);
  }
  else
  {
    irrf = 0.2;
    sal_liquido = sal_bruto - (sal_bruto * irrf);
    printf("Imposto de 20%%, seu sal?rio liquido ?: %.2f \n", sal_liquido);
  }

  float sal_receber;

  if ((sal_liquido <= 350))
  {
    sal_receber = sal_liquido + 100;
    printf("Gratifica??o de R$100, seu novo sal?rio: %.2f\n", sal_receber);
  }
  else
  {
    sal_receber = sal_liquido + 50;
    printf("Gratifica??o de R$50, seu novo sal?rio: %.2f", sal_receber);
  }

  return 0;
}
