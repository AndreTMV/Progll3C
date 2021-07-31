#include "Cadenas.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;

void cadenas::CadenasToAlta(char* cad)
{
    for (int i = 0; i < strlen(cad); i++)
    {
        if (cad[i] >= 'a' && cad[i] <= 'z')
            //if(cad[i] >= 97 && cad[i] <= 122)
            cad[i] -= 32;
    }
}

int cadenas::NumMinisculas(char* cad)
{
    int cantidad_de_minusculas = 0;
    for (int i = 0; i < strlen(cad); i++)
    {
        if (cad[i] >= 'a' && cad[i] <= 'z')
            cantidad_de_minusculas++;
    }
    return cantidad_de_minusculas;
}

int cadenas::NumVocales(char* cad)
{
    int vocales = 0;
    CadenasToAlta(cad);
    for (int i = 0; i < strlen(cad); i++)
    {
        if (cad[i] == 'A' || cad[i] == 'E' || cad[i] == 'I' || cad[i] == 'O' || cad[i] == 'U')
            vocales++;
    }
    return vocales;
}

int cadenas::STRLEN(char cad[])
{
    int longitud_de_la_cadena = 0, i = 0;
    while (cad[i] != '\n')
    {
        longitud_de_la_cadena++;
        i++;
    }
    return longitud_de_la_cadena;
}

void cadenas::InvierteCadena(char cad[], char cad2[])
{
    int i = 0;
    for (int longitud_de_la_cadena = (strlen(cad)-1); longitud_de_la_cadena >= 0; longitud_de_la_cadena--, i++)
            cad2[i] =  cad[longitud_de_la_cadena];
    cad2[i] = 0;
}

int cadenas::StrToI(char* cad)
{
    int numero = 0;
    for(int i = 0; i < (strlen(cad) - 1); i++)
    {
        numero = (numero * 10) + (cad[i] - 48);
    }
    return numero;
}

void cadenas::StrBase10ABase2(char* cad)
{
    int numero = StrToI(cad), i = 0;
    char casi_binario[70], binario[70];
    while (numero >= 1)
    {
        casi_binario[i] = (char)((numero % 2) + 48);
        numero = numero / 2;
        i++;
    }
    casi_binario[i] = 0;
    InvierteCadena(casi_binario, binario);
    printf("%s", binario);
}
