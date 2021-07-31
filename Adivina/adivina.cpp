#include "adivina.h"
#include <stdio.h>
#include<time.h>
#include <math.h>
#include <stdlib.h>

void adivina::Adivina()
{
    int numn1, numn2, n1, n2;
    srand(time(NULL));
    numn1 = (int)((rand() % 100) + 1);
    numn2 = (int)((rand() % 100) + 1);
    //for(;;)ciclo infinito
    while (true) {
        printf("\nNiño 1: tu intento: ");
        fflush(stdout);
        scanf("%d", &n1);
        if (n1 < numn2)
            printf("\n El numero del niño del 2 es mayor");
        else
            if (n1 > numn2)
                printf("\n El numero del niño del 2 es menor");
            else
            {
                printf("\n¡Feliciades! Encontraste al numero %d", numn2);
                break;
            }
        printf("\nNiño 2: tu intento: ");
        fflush(stdout);
        scanf("%d", &n2);
        if (n2 < numn1)
            printf("\n El numero del niño del 1 es mayor");
        else
            if (n2 > numn1)
                printf("\n El numero del niño del 1 es menor");
            else
            {
                printf("\n¡Feliciades! Encontraste al numero %d\n", numn1);
                break;
            }
    } //ciclo infinito del cual se sale con un break
}

void adivina::UsarAdivina() {
    adivina ad;
    ad.Adivina();
}