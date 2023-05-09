#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  // Variaveis de apoio
  int d1, d2, m1, m2, a1, a2;

  // Inicio dos inputs
  printf("Digite as informações das datas a seguir, a maior há de ser exibida\n");
  printf("Digite os valores a seguir respectivamente dia/mes/ano: ");
  scanf("%d %d %d", &d1, &m1, &a1);

  printf("Digite os valores a seguir respectivamente dia/mes/ano: ");
  scanf("%d %d %d", &d2, &m2, &a2);

  // Inicio das condicionais
  if ((a1 > a2))
  {
    printf("%d %d %d", d1, m1, a1);
  }
  else if ((a2 > a1))
  {
    printf("%d %d %d", d2, m2, a2);
  }
  else if ((m1 > m2))
  {
    printf("%d %d %d", d1, m1, a1);
  }
  else if ((m1 < m2))
  {
    printf("%d %d %d", d2, m2, a2);
  }
  else if ((d1 < d2))
  {
    printf("%d %d %d", d2, m2, a2);
  }
  else if ((d1 > d2))
  {
    printf("%d %d %d", d1, m1, a1);
  }
  else
  {
    printf("Datas iguais");
  }

  return 0;
}