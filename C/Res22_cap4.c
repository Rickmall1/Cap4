#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float sal_base, tempo, imposto = 0, grat = 0, sal_liq = 0, categoria = 0;

    printf("Digite seu salário base: \n");
    scanf("%f", &sal_base);

    printf("Digite o tempo de serviço: \n");
    scanf("%f", &tempo);

    if ((sal_base < 200)) {
        imposto = 0;
        printf("Imposto cobrado: %.2f \n", imposto);
    } else if ((sal_base >= 200 && sal_base <= 450)) {
        imposto = sal_base * 0.03;
        printf("Imposto cobrado: %.2f \n", imposto);
    } else if ((sal_base > 450 && sal_base < 700)) {
        imposto = sal_base * 0.08;
        printf("Imposto cobrado: %.2f \n", imposto);
    } else {
        imposto = sal_base * 0.12;
        printf("Imposto cobrado: %.2f \n", imposto);
    }

    if ((sal_base > 500)) {
        if ((tempo <= 3)) {
            grat = 20;
            printf("Sua gratificação é de: %.2f\n", grat);
        } else {
            grat = 30;
            printf("Sua gratificação é de: %.2f\n", grat);
        }
    } else {
        if ((tempo <= 3)) {
            grat = 23;
            printf("Sua gratificação é de: %.2f\n", grat);
        } else if ((tempo > 3 && tempo < 6)) {
            grat = 35;
            printf("Sua gratificação é de: %.2f\n", grat);
        } else {
            grat = 33;
            printf("Sua gratificação é de: %.2f\n", grat);
        }
    }

    sal_liq = sal_base - imposto + grat;
    printf("Salário liquido: %.2f \n", sal_liq);

    if ((sal_liq <= 350)) {
        printf("Categoria: A \n");
    } else if ((sal_liq > 350 && sal_liq < 650)) {
        printf("Categoria: B \n");
    } else {
        printf("Categoria: C \n");
    }

    return 0;
}