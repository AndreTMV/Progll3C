#include "Extras.h"
#include <math.h>
#include <stdio.h>

bool Extras::EnteroPerfecto(int Num)
{
    int suma = 0;
    for (int i = 1; i < Num; i++) {
        if (Num % i == 0)
            suma += i;
    }
    if (suma == Num)
        return true;
    else
        return false;
}

void Extras::PrimerosEnterosPerfectos()
{
    long Num = 1, i = 0;
    do {
        int suma = 0;
        for (int z = 1; z < Num; z++) {
            if (Num % z == 0)
                suma += z;
        }
        if (suma == Num) {
            printf("%ld,", Num);
            i++;
            Num++;
        }
        else
            Num++;
    } while (i < 4);
}

void Extras::TriplePitagorico()
{
    int ladoA = 0, ladoB = 0, ladoC = 0, i = 0;
    for (ladoA = 0; ladoA < 500; ladoA++) {
        for (ladoB = 0; ladoB < 500; ladoB++) {
            for (ladoC = 0; ladoC < 500; ladoC++) {
                if (((ladoA * ladoA) + (ladoB * ladoB)) == (ladoC * ladoC))
                    i++;
            }
        }
    }
    printf("Existen %d posibilades\n", i);
}

bool Extras::DivisbleNueve(int Numero)
{
    int suma = 0;
    while (Numero != 0) {
        suma += Numero % 10;
        Numero = Numero / 10;
    }
    if (suma % 9 == 0)
        return true;
    else
        return false;
}

