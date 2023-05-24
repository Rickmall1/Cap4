#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

    int nota1,nota2;

    //Notas do aluno
    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);

    //Media aritmetica
    resultado = nota1+nota2/2;
    if((resultado>=0 && resultado<3)){
        printf("Reprovado");
    }
    else if((resultado>=3 && resultado<7))
    {
        printf("Exame");
    }
    else
    {
        printf("Aprovado");
    }

  return 0;
}