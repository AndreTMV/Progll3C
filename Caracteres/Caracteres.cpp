#include <stdio.h>
#include "Caracteres.h"
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

bool caracteres::CaracteresEnOrden(char c1, char c2)
{
    //if((c2 -c1)>1);
    if (c1 < c2)
        return true;
    else
        return false;
}

void caracteres::UsarCaracteresCaracteresenOrden()
{
    caracteres c;
    //CaracteresEnOrden
    char char1, char2, enter;
    printf("dame el primer caracter: ");
    fflush(stdout);
    scanf("%c%c", &char1, &enter);
    printf("dame el segundo caracter: ");
    fflush(stdout);
    scanf("%c", &char2);
    if (c.CaracteresEnOrden(char1, char2))
        printf("Los caracteres %c y %c estan en orden alfabetico", char1, char2);
    else
        printf("Los caracteres %c y %c no estan en orden alfabetico", char1, char2);
}

int caracteres::AntesdeM(char m)
{
    if (109 - m >= 1)
        return 1;
    else if (109 - m <= 1)
        return 2;
    else
        return 3;
}

void UsarCaracteresAntesdeM()
{
    //AntesdeM
    caracteres c;
    char m1, resultado;
    printf("Dame un caracter: ");
    fflush(stdout);
    scanf("%c", &m1);
    resultado = c.AntesdeM(m1);
    if (resultado == 1)
        printf("El caracter %c esta antes que m", m1);
    else if (resultado == 2)
        printf("El caracter %c esta despues que m", m1);
    else
        printf("El caracter es m");
}

void caracteres::AdivinaCaracterMinuscula()
{
    char randomc, c;
    srand(time(NULL));
    printf("Intenta adivinar el caracter(en minusculas y no hay ñ):");
    fflush(stdout);
    scanf(" %c", &c);
    randomc = 'a' + (rand() % 26);
    while (true) {
        if (c < randomc)
            printf("El caracter buscado es mayor\n");
        else
            if (c > randomc)
                printf("El caracter buscado es menor\n");
            else {
                printf("Felicidades, has adivinado el caracter!\n");
                break;
            }
        printf("Intenta con otro caracter(en minusculas y no hay ñ):");
        fflush(stdout);
        scanf(" %c", &c);
    }
}


