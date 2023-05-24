#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Declaração das variáveis
    float trabalho_lab, aval_sem, exame_final, media;

    // Inputs
    printf("Digite a nota do trabalho:");
    scanf("%f", &trabalho_lab);

    printf("Digite a nota da avaliaÃ§Ã£o:");
    scanf("%f", &aval_sem);

    printf("Digite a nota do exame final:");
    scanf("%f", &exame_final);

    // Calculos ustilizados para mÃ©dia ponderada
    media = (trabalho_lab * 2 + aval_sem * 3 + exame_final * 5) / 10;

    // Inicio das condicionais
    if ((media > 8) && (media <= 10))
    {
        printf("Conceito A, pois sua nota foi de %.2f", media);
    }
    else if ((media <= 7) && (media < 8))
    {
        printf("Conceito B, pois sua nota foi de %.2f", media);
    }
    else if ((media <= 6) && (media < 7))
    {
        printf("Conceito C, pois sua nota foi de %.2f", media);
    }
    else if ((media <= 5) && (media < 6))
    {
        printf("Conceito D, pois sua nota foi de %.2f", media);
    }
    else if ((media <= 0) && (media < 5))
    {
        printf("Conceito E, pois sua nota foi de %.2f", media);
    }

    // Fim

    return 0;
}