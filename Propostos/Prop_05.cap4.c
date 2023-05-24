#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

    float num1,num2;
    int state;

    //Inputs do usuário (numeros)
    printf("Insira o primeiro número: \n");
    scanf("%f", &num1);

    printf("Insira o segundo número: \n");
    scanf("%f", &num2);

    printf("Digite 1 para média;\nDigite 2 para diferença do maior pelo menor;\nDigite 3 para produto entre os números digitados;\nDigite 5 para divisão do primeiro pelo segundo:\n");
    scanf("%d", &state);



    //Inicio do switch
    switch(state){
    case 1:
        float media = num1+num2/2.0;
        printf("A média é: %.2f", media);
        break;
    case 2:
        if((num1>num2)){
        float dif = num1-num2;
        printf("A divisão do maior pelo menor é: %.2f", div);
        }else{
        float dif = num2-num1;
        printf("A divisão do maior pelo menor é: %.2f", div);
        }
        break;
    case 3: 
        produto = num1*num2;
        printf("O produto entre os números é: %.2f", produto);   
        break;
    case 4:
      float div = num1/num2;
      if((div==0)){
        printf("Erro");
        break;
      }else{
      printf("A divisão do primeiro pelo segundo é: %.2f", div);
      }
    }
  return 0;
}