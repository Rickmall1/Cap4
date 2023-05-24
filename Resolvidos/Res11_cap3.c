#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");


  int h_i, min_i, h_f, min_f, durac_h = 0, durac_m = 0;


  //Inicio dos inputs do usuário
  printf("Digite a hora de inicio do jogo: ");
  scanf("%d %d", &h_i, &min_i);

  printf("Digite a hora do fim do jogo: ");
  scanf("%d %d", &h_f, &min_f);

  //Inicio das condicionais
  if ((min_i > min_f))
  {
    min_f = min_f + 60;
    h_f = h_f - 1;
    durac_m = min_f - min_i;
  }
  else
  {
    durac_m = min_f - min_i;
  }

  if ((h_i > h_f))
  {
    durac_h = 24 - h_i;
    durac_h = durac_h + h_f;
  }
  else
  {
    durac_h = h_f - h_i;
  }

  printf("A dura��o foi de %d:%d,", durac_h, durac_m);

  return 0;
}