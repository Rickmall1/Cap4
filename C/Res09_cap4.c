#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  // Inicio da lib <time.h>
  struct tm *data_hora_atual;

  time_t segundos;
  time(&segundos);

  data_hora_atual = localtime(&segundos);

  // Variaveis de apoio da lib
  int realDay = data_hora_atual->tm_mday;
  int month = data_hora_atual->tm_mon + 1;
  int realYear = data_hora_atual->tm_year;

  printf("%d/", realDay);
  printf("%d/", month);
  printf("%d \n", realYear + 1900);

  // Inicio das condicionais
  if ((month == 1))
  {
    printf("janeiro");
  }
  else if ((month == 2))
  {
    printf("fevereiro");
  }
  else if ((month == 3))
  {
    printf("março");
  }
  else if ((month == 4))
  {
    printf("abril");
  }
  else if ((month == 5))
  {
    printf("maio");
  }
  else if ((month == 6))
  {
    printf("junho");
  }
  else if ((month == 7))
  {
    printf("julho");
  }
  else if ((month == 8))
  {
    printf("agosto");
  }
  else if ((month == 9))
  {
    printf("setembro");
  }
  else if ((month == 10))
  {
    printf("outubro");
  }
  else if ((month == 11))
  {
    printf("novembro");
  }
  else if ((month == 12))
  {
    printf("dezembro");
  }

  // Variaveis de apoio hora e minuto
  int hour, min;

  hour = data_hora_atual->tm_hour;
  min = data_hora_atual->tm_min;

  printf("\n%d:", hour);
  printf("%d", min);

  return 0;
}