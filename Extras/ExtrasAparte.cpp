#include "Extras.h"
#include <math.h>
#include <stdio.h>

void Extras::Fibonacci()
{
    int serie[30] = { 0,1 };
    printf("Los primeros numeros de la serie de Fibonacci son 0,1,");  // Ponemos los primeros 2 numeros porque existen dos 
    for (int i = 2; i < 31; i++) {                                           // condiciones de la serie de fibonacci, la primera es 
        serie[i] = serie[i - 2] + serie[i - 1];                              //  que F[0] = 0 y que F[1] = 1
        printf("%d,", serie[i]);
    }
}

void Extras::FactoresPrimos(int* Numero_a_descomponer)
{
    int descompositor = 2;
    int i = 1;
    printf("%d(1", *Numero_a_descomponer);
    while (descompositor <= *Numero_a_descomponer)
    {
        if (*Numero_a_descomponer == 1 || Numero_a_descomponer == 0)
            break;

        else if (*Numero_a_descomponer % descompositor == 0) {
            *Numero_a_descomponer = *Numero_a_descomponer / descompositor;
            printf(",%d", descompositor);
            i++;
        }

        else
            descompositor++;
    }
    printf(")");
}

int Extras::FastMCD(int i, int j)
{
    int mcd, menor, mayor;
    if (i > j) {
        menor = j;
        mayor = i;
    }
    else {
        menor = i;
        mayor = j;
    }
    float verificador;
    do {
        verificador = mayor % menor;
        if (verificador == 0) {
            mcd = menor;
            break;
        }
        else {
            mayor = menor;
            menor = (int)verificador;
        }
    } while (verificador != 0);
    return mcd;
}
void Extras::DiezNumeros()
{
    int numerospareseimpares[10];
    int almacena;
    printf("Dame 10 numeros\n");
    for (int i = 0; i < 10; i++) {
        printf(":");
        fflush(stdout);
        scanf("%d,", &almacena);
        numerospareseimpares[i] = almacena;
    }
    int s = 0;
    printf("Los numeros pares son: ");
    while (s < 10) {
        if (numerospareseimpares[s] % 2 == 0)
            printf("%d,", numerospareseimpares[s]);
        s++;
    }int f = 0;
    printf("\nY los numeros impares son:");
    while (f < 10) {
        if (numerospareseimpares[f] % 2 != 0)
            printf("%d,", numerospareseimpares[f]);
        f++;
    }
} void Extras::Cifras(long* numeroc)
{
    long cuenta = *numeroc;
    int i = 0;
    while (*numeroc > 0) {
        *numeroc = *numeroc / 10;
        i++;
    }
    printf("El numero %ld tiene %d cifras", cuenta, i);
}
void Extras::CuadradoMagico()
{
    bool comprueba;
    int matriz[3][3], filas, columnas, sumadelineas = 0, ArregloDeSumaDeLineas[8];
    printf("Dame los numeros de una matriz 3x3\n");
    for (filas = 0; filas < 3; filas++) {
        for (columnas = 0; columnas < 3; columnas++) {
            printf("elemento - [%d],[%d] : ", filas + 1, columnas + 1);
            scanf("%d", &matriz[filas][columnas]);
        }
    }
    columnas = 0;
    for (filas = 0; filas < 3; filas++) {
        while (columnas < 3) {
            sumadelineas += matriz[filas][columnas];
            columnas++;
            printf("suma: %d\n", sumadelineas);
        }
        ArregloDeSumaDeLineas[filas] = sumadelineas;
        sumadelineas = 0;
        columnas = 0;
    }
    filas = 0;
    for (columnas = 0; columnas < 3; columnas++) {
        while (filas < 3) {
            sumadelineas += matriz[filas][columnas];
            filas++;
        }
        ArregloDeSumaDeLineas[columnas + 3] = sumadelineas;
        sumadelineas = 0;
        filas = 0;
    }
    ArregloDeSumaDeLineas[6] = matriz[0][0] + matriz[1][1] + matriz[2][2];
    ArregloDeSumaDeLineas[7] = matriz[0][2] + matriz[1][1] + matriz[2][0];
    for (int z = 0; z < 7; z++) {
        comprueba = (ArregloDeSumaDeLineas[z] == ArregloDeSumaDeLineas[z + 1]) ? true : false;
        if (comprueba == false) {
            printf("La matriz no cumple las condiciones para ser un cuadrado magico\n");
            break;
        }
    }
    (comprueba == true) ? printf("La matriz si es un cuadrado magico\n") : 0;
}

void Extras::PrimerosNumerosPares()
{
    int numerospares[20];
    int almacenador;
    printf("Dame 20 numeros\n");
    for (int i = 0; i < 20; i++) {
        printf(":");
        fflush(stdout);
        scanf("%d", &almacenador);
        numerospares[i] = almacenador;
    }
    int s = 0;
    printf("De los numeros introducidos los que son pares son: ");
    while (s < 20) {
        if (numerospares[s] % 2 == 0)
            printf("%d,", numerospares[s]);
        s++;
    }
}


