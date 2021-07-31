#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "Apuntadores/Apuntador.h"
#include "Nutricion/IMC.h"
#include "Mate/Mate.h"
#include "Juegos/juegos.h"
#include "Fecha/Fecha.h"
#include "Conversiones/Conversiones.h"
#include "Caracteres/caracteres.h"
#include "Trabajo/trabajo.h"
#include "Extras/Extras.h"
#include "Adivina/adivina.h"
#include "Arrays/array.h"
#include "Cadenas/Cadenas.h"
#include "Bonos/Bonos.h"

using namespace std;
extern const char tipo_ensarte[8][50];
int main(int argc, char** arg)
{
    caracteres c;
    Mate m;
    Apuntador a;
    IMC i;
    trabajo t;
    juegos j;
    Conversiones co;
    Extras e;
    cadenas ca;
    arrays ar;
    Fecha f;
    Bonos b;
    //int puntos = b.Boliche();
    //printf("Obtuviste %d puntos en total \n", puntos);
    /*int limite = 0;
    printf("Dame un limite para calcular e: ");
    fflush(stdout);
    scanf("%d", &limite);
    b.Numero_E(limite);*/
    //int numero = 0;
    //printf("Dame un numero: ");
    //fflush(stdout);
    //scanf("%d", &numero);
    //bool pudo = b.Numero_Bueno(numero);
    //if (pudo)
    //    printf("Como puedes observar, el numero %d si es un numero bueno", numero);
    //else
    //    printf("Como puedes observar, el numero %d no es un numero bueno", numero);
    //printf("Estos son los tipos de ensarte: \n");
    //printf("\n1. Ensarte sencillo");
    //printf("\n2. Ensarte capirucho");
    //printf("\n3. Ensarte clasico");
    //printf("\n4. Ensarte capirucho complicado");
    //printf("\n5. Ensarte cruzado");
    //printf("\n6. Ensarte reves");
    //printf("\n7. Ensarte jalon");
    //printf("\n8. Ensarte invertido\n");
    //int puntos = b.Balero();
    //printf("Tu puntuacion fue de %d puntos \n",puntos);
    b.bonificacion();
    b.ImprimeBonificaciones();
}

