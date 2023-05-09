
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "Portuguese");

    float salario;
    int codigo;
    printf("Digite seu código:  ");
    scanf("%d", &codigo);

    printf("Digite seu salário:  ");
    scanf("%f", &salario);

    if ((codigo == 1))
    {
        float novosal = salario + (salario * 0.50);
        printf("Escriturário\n");
        printf("Novo salário com aumento de 50%: %.2f ", novosal);
    }
    else if ((codigo == 2))
    {
        float novosal = salario + (salario * 0.35);
        printf("Secretário\n");
        printf("Novo salário com aumento de 35%: %.2f", novosal);
    }
    else if ((codigo == 3))
    {
        float novosal = salario + (salario * 0.20);
        printf("Caixa\n");
        printf("Novo salário com aumento de 20%: %.2f", novosal);
    }
    else if ((codigo == 3))
    {
        float novosal = salario + (salario * 0.10);
        printf("Gerente\n");
        printf("Novo salário com aumento de 10%: %.2f", novosal);
    }
    else if ((codigo == 3))
    {
        float novosal = salario;
        printf("Diretor\n");
        printf("Salário não alterado: %.2f", novosal);
    }
    return 0;
}
