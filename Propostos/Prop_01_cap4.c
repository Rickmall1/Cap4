#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  return 0;

    int  nota1,nota2,nota3,nota4;

    //Notas do aluno
    printf("Digite a primeira nota: \n");
    scanf("%d",&nota1);

    printf("Digite a segunda nota: \n");
    scanf("%d",&nota2);

    printf("Digite a terceira nota: \n");
    scanf("%d",&nota3);

    printf("Digite a quarta nota: \n");
    scanf("%d",&nota4);

    //Média aritmetica
    int resultado = nota1+nota2+nota3+nota4/4;

    if((resultado>=7)){
        printf("Aprovado");
    }else{
        printf("Reprovado");
    }
}