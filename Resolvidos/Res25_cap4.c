#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

    float angulo;
    int voltas,resto;

    //Inputs do usuário
    printf("Digite o valor do �ngulo(em graus) e aperte Enter:");
    scanf("%f%*c",&angulo);


    //Angulos (condicionais)
    if(angulo > 360 || angulo < -360){
        voltas = angulo / 360;
        resto = angulo / 360;
    }
    else {
        voltas = 0;
    }
    if(angulo == 0 || angulo == 180 || angulo == 270 || angulo == 360 || angulo == -90 || angulo == -180 || angulo == -270 || angulo == -360){
        printf("Esta sobre um desse eixos:\n");
    }

    if(angulo > 0 && angulo < 90 || angulo < -270 && angulo > -360){
        printf("Primeiro Quadrante\n");

    } else if(angulo > 90 && angulo < 180 || angulo < -180 && angulo > -270){
        printf("Segundo Quadrante\n");

    } else if(angulo > 180 && angulo < 270 || angulo < -90 && angulo > -180){
        printf("Terceiro Quadrante\n");

    } else if(angulo > 270 && angulo < 360 || angulo < 0 && angulo > -90){
        printf("Quarto Quadrante\n");
    }
    printf("Foram dadas %d voltas no sentido ",voltas);

    if(angulo < 0){
        printf("hor�rio");

    } else if(angulo > 0){
        printf("anti-hor�rio");

    } else {
        printf("N�o foram dadas voltas");
    }
    return 0;
}