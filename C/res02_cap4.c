#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Inicio das variaveis de apoio
    float nota1, nota2, nota3, media, nota_exame;

    // Inicio das entradas do usuário
    printf("digite sua primeira nota:");
    scanf("%f", &nota1);

    printf("digite sua segunda nota:");
    scanf("%f", &nota2);

    printf("digite sua terceira nota:");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Média aritmética:%.2f\n", media);

    // Inicio das condicionais
    if ((media >= 0) && (media < 3))
    {
        printf("Reprovado");
    }
    else if ((media >= 3) && (media < 7))
    {
        printf("Exame");
    }
    else if ((media >= 7) && (media <= 10))
    {
        printf("Aprovado");
    }

    // Algoritmo para receber valores e calcular média aritmética;

    return 0;
}