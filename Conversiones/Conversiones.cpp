#include "Conversiones.h"
#include <stdio.h>

void Conversiones::LibrasAKilos()
{
    double libras, kilos;
    printf("Dame un peso en libras: ");
    fflush(stdout);                      //vacia el buffer de la salida estandar
    scanf("%lf", &libras);
    kilos = libras * 0.453592;
    printf("%lf libras equivalen a %lf kilogramos", libras, kilos);
    printf("\nLa dirección de libras es %x", &libras);
}

void Conversiones::MillasAKilometros()
{
    double millas, kilometros;
    printf("\nDame una distancia en millas: ");
    fflush(stdout);                      //vacia el buffer de la salida estandar
    scanf("%lf", &millas);
    kilometros = millas * 1.609;
    printf("%lf millas equivalen a %lf kilometros", millas, kilometros);
    printf("\nLa dirección de millas es %x", &millas);
}

void Conversiones::UsarConversiones()
{
    Conversiones con;
    con.LibrasAKilos();
    con.MillasAKilometros();
}

void Conversiones::Binario(int Numero_a_convertir)
{
    if (Numero_a_convertir) {
        Binario(Numero_a_convertir / 2);
        printf("%d", Numero_a_convertir % 2);
    }
}
