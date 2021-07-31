#include <stdio.h>
#include "Fecha.h"

void Fecha::UsarFechaMetodoAnioFechaDia()
{
    Fecha f;
    //Anio;Mes;Dia
    long fe;
    int d, a, m;
    printf("dame una fecha (AAAAMMDD):");
    fflush(stdout);
    scanf("%ld", &fe);
    a = f.Anio(fe);
    d = f.Dia(fe);
    m = f.Mes(fe);
    printf("La fecha %ld tiene dia %d, mes %d y año %d", fe, d, m, a);
}

void Fecha::UsarFechaBisiesto()
{
    //Bisiesto
    Fecha f;
    int i = 0;
    while (i < 10) {
        int anio;
        printf("Dame el año:");
        fflush(stdout);
        scanf("%d", &anio);
        bool bisiesto = f.bisiesto(anio);
        if (bisiesto)
            printf("El año %d es bisiesto\n", anio);
        else
            printf("El año %d no es bisiesto\n", anio);
        i++;
    }
}

void Fecha::UsarDiaSemana()
{
    Fecha f;
    int dia;
    printf("Dame el dia en formato de numero:");
    fflush(stdout);
    scanf("%d", &dia);
    int semana_dia = f.DiaSemana(&dia);
    switch (semana_dia) {
    case 1:
        printf("%d = Lunes", dia);
        break;
    case 2:
        printf("%d = Martes", dia);
        break;
    case 3:
        printf("%d = Miercoles", dia);
        break;
    case 4:
        printf("%d = Jueves", dia);
        break;
    case 5:
        printf("%d = Viernes", dia);
        break;
    case 6:
        printf("%d = Sabado", dia);
        break;
    case 7:
        printf("%d = Domingo", dia);
        break;
    }
}

void Fecha::UsarFecha(void)
{
    Fecha f;
    long fecha;
    printf("Dame una fecha(AAAAMMDD):");
    fflush(stdout);
    scanf("%ld", &fecha);
    if (!f.FechaValida(fecha))
        printf("La fecha no es valida\n");
    else
    {
        long ayer = f.FechaPosterior(fecha);
        printf("La fecha del dia siguiente es: %ld\n", ayer);
    }
}

void Fecha::UsarDiasDif(void)
{
    Fecha f;
    long Fecha1, Fecha2;
    printf("Dame la primer fecha fecha (AAAAMMDD): ");
    fflush(stdout);
    scanf("%ld", &Fecha1);
    printf("Dame la primer fecha fecha (AAAAMMDD): ");
    fflush(stdout);
    scanf("%ld", &Fecha2);
    int NumeroDeDias = f.DiasDif(Fecha1, Fecha2);
    printf("\Han dias transcurridos %d dias desde %ld a %ld", NumeroDeDias, Fecha1, Fecha2);
}

