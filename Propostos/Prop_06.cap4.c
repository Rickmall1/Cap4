#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  //VARIAVEIS DE APOIO
  float num1,num2;
  int state;
  
  //Inputs do usuario
  printf("Digite o primeiro número: \n");
  scanf("%f", &num1);

  printf("Digite o segundo número: \n");
  scanf("%f", &num2);

  printf("Digite 1 para o primeiro número elevado ao segundo número\nDigite 2 para raiz quadrada de cada um dos números\nDigite 3 para raiz cúbica de cada um dos números:\n");
  scanf("%d", &state);

  //Inicio das condicionais
  if((state<1 || state>3))
  {
    printf("Erro, opção invalida.");
  }
  else if((state==1))
  {
    float potencia = pow(num1,num2);
    printf("Primeiro número elevado ao segundo número: %.2f", potencia);
  }
  else if((state==2))
  {
   float raiz_1 = pow(num1,1/2.0);
   float raiz_2 = pow(num2,1/2.0);
    printf("Raiz do primeiro número: %.2f\nRaiz do segundo número: %.2f", raiz_1,raiz_2);
  }
  else
  {
    float cub_1 = pow(num1,1/3.0);
    float cub_2 = pow(num2,1/3.0);
    printf("Raiz cúbica do primeiro número: %.2f\nRaiz cúbica do segundo número: %.2f", cub_1,cub_2);
  }
  return 0;
}