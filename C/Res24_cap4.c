#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  float preco,tipo,refri,valor_adc=0,imposto=0,custo=0,desconto=0,novo_preco=0,class=0;

  printf("Digite o preço: \n");
  scanf("%f", &preco);

  printf("Digite o tipo do produto 1-- alimentação\n 2--limpeza \n 3--vestuário\n");
  scanf("%f", &tipo);
  
  printf("Digite a refrigeração: 1-- necessita refrigeração\n 2--não precisa de refrigeração\n");
  scanf("%f", &refri)
  

  return 0;
}