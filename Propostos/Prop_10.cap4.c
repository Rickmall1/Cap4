#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

    float custo,preco,imposto;

    printf("Digite o custo de fabrica: \n");
    scanf("%f", &custo);

    if((custo<=12000)){
        preco = custo*0.05;
        imposto = 0;
        custo = custo+preco+imposto;
        printf("Preço do carro: %.2f", custo);
    }else if((custo>12000 && custo<25000)){
        preco = custo*0.1;
        imposto = custo*0.15;
        custo = custo+preco+imposto;
        printf("Preço do carro: %.2f", custo);
    }else{
        preco = custo*0.15;
        imposto = custo*0.20;
        custo = custo+preco+imposto;
        printf("Preço do carro: %.2f", custo);
    }


  return 0;
}