#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

    float preco_atual= 0, venda_media = 0, preco_valor, venda_valor, precoTotal;

    printf("Digite o preço atual: \n");
    scanf("%f", &preco_atual);

    
    printf("Digite a venda média: \n");
    scanf("%f", &venda_media);

    
    if((venda_media<500)||(preco_atual<30)){
        precoTotal = preco_atual+(preco_atual*0.1);
        printf("Produto encarecido, 10%% de aumento: %f", precoTotal);
    }else if((venda_media>=500 && venda_media<1200)||(preco_atual>=30 && preco_atual<80)){
        precoTotal = preco_atual+(preco_atual*0.15);
        printf("Produto encarecido, 15%% de aumento: %f", precoTotal);
    }else{
        precoTotal = preco_atual-(preco_atual*0.2);
        printf("Produto barateado em 20%%: %f", precoTotal);
    }



  return 0;
}