#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float delta = 0, a, b, c, x = 0, x1 = 0, x2 = 0;

    printf("Digite o valor do primeiro termo: \n");
    scanf("%f", &a);

    printf("Digite o valor do segundo termo: \n");
    scanf("%f", &b);

    printf("Digite o valor do terceiro termo: \n");
    scanf("%f", &c);

    delta = (b * b) - 4 * a*c;
    printf("DELTA: %f\n", delta);

    if ((a == 0)) {
        printf("Erro, variavel 'a' diferente de zero;\n");
    } else if ((delta < 0)) {
        printf("Não existe raiz real\n");
    } else if ((delta == 0)) {
        printf("Existe uma raiz real\n");
    } else {
        printf("existem duas raízes reais\n");
    }

    x = (b * (-1)) / (2 * a);
    //x1 = (b * (-1) +(pow(delta, 1.0 / 2.0)) / (2 * a));
    x1 = (b * (-1) +sqrt(delta)) / (2 * a);
    x2 = (b * (-1) -sqrt(delta)) / (2 * a);
    //x2 = (b * (-1) -(pow(delta, 1.0 / 2.0)) / (2 * a));

    printf("X1 = %f , X2 = %f", x1, x2);

    return 0;
}