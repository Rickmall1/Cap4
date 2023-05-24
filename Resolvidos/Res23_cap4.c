#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float sal_min, horas, coef = 0, sal_bruto = 0, imposto = 0, grat = 0, aux_food = 0;
    char turno, categoria;

    //Inputs do usuário:
    printf("Digite o valor do salário minimo: \n");
    scanf("%f", &sal_min);
    
    //(M  matutino; V vespertino; ou N  noturno),
    setbuf(stdin, NULL);
    printf("Digite o turno de trabalho: \n");
    scanf("%c", &turno);
    getchar();
    
    //(O — operário; G — gerente)
    printf("Digite a categoria: \n");
    setbuf(stdin, NULL);
    scanf("%c", &categoria);
    getchar();

    printf("Digite o número de horas trabalhadas no mês: \n");
    scanf("%f", &horas);

    //Coeficiente do salário:
    if ((turno == 'M')) {
        coef = sal_min * 0.1;
        printf("Coeficiente do salário mínimo: %.2f\n", coef);
    } else if ((turno == 'V')) {
        coef = sal_min * 0.15;
        printf("Coeficiente do salário mínimo: %.2f\n", coef);
    } else if ((turno == 'N')) {
        coef = sal_min * 0.12;
        printf("Coeficiente do salário mínimo: %.2f\n", coef);
    } else {
        printf("Valor(es) incorreto(s)\n");
    }

    sal_bruto = horas*coef;

    //Imposto:
    if ((categoria == 'O')) {
        if (sal_bruto >= 300) {
            imposto = sal_bruto * 0.05;
            printf("Imposto sobre o salário bruto: %.2f \n", imposto);
        } else {
            imposto = sal_bruto * 0.03;
            printf("Imposto sobre o salário bruto:%.2f \n", imposto);
        }
    } else if ((categoria == 'G')) {
        if ((sal_bruto >= 400)) {
            imposto = sal_bruto * 0.06;
            printf("Imposto sobre o salário bruto:%.2f \n", imposto);
        }
    } else {
        imposto = sal_bruto * 0.04;
        printf("Imposto sobre o salário bruto:%.2f \n", imposto);
    }

    //Gratificação:
    if ((turno == 'N' && horas > 80)) {
        grat = 50;
        printf("Gratificação de : %.2f \n", grat);
    } else {
        grat = 30;
        printf("Gratificação de : %.2f \n", grat);
    }

    //auxílio alimentação:

    if ((categoria == 'O' || coef <= 25)) {
        aux_food = sal_bruto * (1.0/3.0);
        printf("Auxílio alimentação: %.2f\n", aux_food);
    } else {
        aux_food = sal_bruto * (1.0 / 2.0);
        printf("Auxílio alimentação: %.2f\n", aux_food);
    }

    float sal_liq;
    sal_liq = sal_bruto - imposto + grat + aux_food;
    printf("Salário líquido : %.2f\n", sal_liq);

    if ((sal_liq < 350)) {
        printf("Mal remunerado\n");
    } else if ((sal_liq >= 350 && sal_liq <= 600)) {
        printf("Normal");
    } else {
        printf("Bem remunerado\n");
    }


    return 0;
}