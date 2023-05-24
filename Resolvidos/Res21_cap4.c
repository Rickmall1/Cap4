#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

    int state,carga;
    float ton;

    printf("Digite o codigo do estado entre 1 e 5: \n");
    scanf("%d", &state);

    printf("Digite a carga do caminhão em toneladas:\n");
    scanf("%d", &ton);

    printf("Digite o codigo da carga entre 10 e 40: \n");
    scanf("%d", &carga);    

    if((state==1)){
        carga = carga*1000;
        printf("O peso em quilos é de %.2f\n", carga);          
        if((carga>=10 && carga<=20)){
            int preco = 100;
            float resultado = carga*preco;
            float imposto = resultado*0.35;
            float valor_total = resultado+imposto;
            printf("O preço da carga é de: %.2f\n", resultado)
            printf("Imposto de: %.2f\n", imposto);
            printf("Valor total: %.2f", valor_total);
         }else if((carga>=21 && carga<=30)){
            int preco = 250;
            float resultado = carga*preco;
            float imposto = resultado*0.35;
            float valor_total = resultado+imposto;
            printf("O preço da carga é de: %.2f\n", resultado)
            printf("Imposto de: %.2f\n", imposto);
            printf("Valor total: %.2f", valor_total);
         }else if((carga>=21 && carga<=30)){
            int preco = 340;
            float resultado = carga*preco;
            float imposto = resultado*0.35;
            float valor_total = resultado+imposto;
            printf("O preço da carga é de: %.2f\n", resultado)
            printf("Imposto de: %.2f\n", imposto);
         }
    }else if((state==2)){
        
    }

  return 0;
}