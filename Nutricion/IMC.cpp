#include "IMC.h"
#include <stdio.h>

float IMC::imc(float kg, float altura)
{
    float imc;
    imc = (kg / (altura * altura));
    if (imc <= 18.5)
        printf("Tiene un peso bajo");
    else if (imc >= 18.5 && imc <= 24.9)
        printf("Su peso es normal");
    else if (imc >= 25 && imc <= 29.9)
        printf("Tiene sobre peso");
    else if (imc >= 30)
        printf("Usted tiene obesidad");
    return imc;
}

void IMC::UsarNutricion()
{
    IMC c;
    float kilos, alturas;
    printf("Dame tu peso en kg: ");
    fflush(stdout);
    scanf("%f", &kilos);
    printf("Dame tu altura en metros: ");
    fflush(stdout);
    scanf("%f", &alturas);
    c.imc(kilos, alturas);
}
