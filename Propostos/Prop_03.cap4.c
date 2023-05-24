#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");


    float num1,num2;

    //Inputs do usuário
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);


    //Operações para decidir o menor número
    if((num1>num2)){
        printf("O menor número é: %.2f", num2);
    }
    else{
        printf("O menor número é: %.2f", num1);
    }
       
  return 0;
}