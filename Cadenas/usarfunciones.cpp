#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Cadenas.h"

void cadenas::USarCadenasToAlta()
{
    cadenas ca;
    char cadena[100];
    printf("Dame una cadena: ");
    fgets(cadena, 100, stdin);
    ca.CadenasToAlta(cadena);
    printf("La cadena en mayúsculas es %s", cadena);
}
void cadenas::UsarNumMinusculas(void)
{
    cadenas ca;
    char cadena[100];
    printf("Dame una cadena: ");
    fgets(cadena, 100, stdin);
    int minusculas = ca.NumMinisculas(cadena);
    printf("La cadena tiene %d minusculas\n", minusculas);
}

void cadenas::UsarNumVocales(void)
{
    cadenas ca;
    char cadena[100];
    printf("Dame una cadena: ");
    fgets(cadena, 100, stdin);
    int vocales = ca.NumVocales(cadena);
    printf("La cadena tiene %d vocales\n", vocales);
}
void cadenas::UsarInvierteCadena(void)
{
    cadenas ca;
    char cadena[10];
    printf("Dame una cadena de caracteres: ");
    fflush(stdout);
    fgets(cadena, 10, stdin);
    //ca.InvierteCadena(cadena);
}
