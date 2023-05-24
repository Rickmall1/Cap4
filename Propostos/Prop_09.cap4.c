#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

    float saldo,cred=0;

    printf("Digite o saldo médio: \n");
    scanf("%f", &saldo);

    if((saldo>400)){
        cred= saldo*0.3;
        printf("Seu saldo médio é: %.2f", saldo);
        printf("Seu crédito é: %.2f", cred);
    }else if((saldo<=400 && saldo>300)){
        cred= saldo*0.25;
        printf("Seu saldo médio é: %.2f", saldo);
        printf("Seu crédito é: %.2f", cred);
    }else if((saldo<=300 && saldo>200)){
        cred= saldo*0.2;
        printf("Seu saldo médio é: %.2f", saldo);
        printf("Seu crédito é: %.2f", cred);
    }else{
        cred= saldo*0.1;
        printf("Seu saldo médio é: %.2f", saldo);
        printf("Seu crédito é: %.2f", cred);
    }

  return 0;
}