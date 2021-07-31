#include <stdio.h>
#include "Fecha.h"

Fecha::Fecha()
{
    DiasMes[0] = DiasMes[2] = DiasMes[4] = DiasMes[6] = DiasMes[7] = DiasMes[9] = DiasMes[11] = 31;
    DiasMes[3] = DiasMes[5] = DiasMes[8] = DiasMes[10] = 30;
    DiasMes[1] = 29;
}

int Fecha::Anio(long fec)
{
    int anio = (int)(fec / 10000);
    return anio;
}

int Fecha::Mes(long fec) //Funcion para devolver mes
{
    int mes1 = (int)(fec % 10000);
    int mes = (int)(mes1 / 100);
    return mes;
}

int Fecha::Dia(long fec)
{
    int dia = (int)(fec % 100);
    return dia;
}

bool Fecha::bisiesto(int anio)
{
    //int anio1;
    //anio1=(int)anio%100;
    if ((anio % 100 != 0 && anio % 4 == 0) || (anio % 4 == 0 && anio % 400 == 0) || (anio <= 1582 && anio % 4 == 0))
        return true;
    else
        return false;
}

int Fecha::DiaSemana(int* Dia)
{
    int Semana[] = { 1,2,3,4,5,6,7 };
    bool verificador = false;
    int i = 0;
    do {
        i++;
        verificador = (*Dia == Semana[i]) ? true : false;
    } while (verificador == false);
    return Semana[i];
}

bool Fecha::FechaValida(long f)
{
    int a = Anio(f);
    int m = Mes(f);
    int d = Dia(f);
    if (m > 12 || m == 0)
        return false;
    if (d > DiasMes[m - 1])
        return false;
    if (!bisiesto(a) && m == 2 && d == 29)
        return false;
    return true;
}

long Fecha::FechaAyer(long f)
{
    int a = Anio(f);
    int m = Mes(f);
    int d = Dia(f);
    if (d > 1)
        d--;
    else
    {
        if (m > 1)
        {
            m--;
            d = (bisiesto(a)) ? DiasMes[m - 1] : 28;
        }
        else
        {
            a--;
            m = 12;
            d = 31;
        } // Estoy en el primer de enero
    }
    return (long)((a * 10000) + ((m * 100) + d));
}

long Fecha::FechaPosterior(long f)
{
    int a = Anio(f);
    int m = Mes(f);
    int d = Dia(f);
    if (m == 2)
    {
        if (d <= 27)
            d++;
        else if (bisiesto(a) && d == 28)
            d++;
        else
        {
            d = 1;
            m++;
        }
    }
    else if (DiasMes[m - 1] > d && m != 2)
        d++;
    else
    {
        if (m != 12)
        {
            m++;
            d = 1;
        }
        else
        {
            a++;
            m = 1;
            d = 1;
        } // Estoy en el 31 de Diciembre
    }
    return (long)((a * 10000) + ((m * 100) + d));
}

int Fecha::FechaADias(long f)
{
    int a = Anio(f);
    int m = Mes(f);
    int d = Dia(f);
    int numDias = 0;
    for (int i = 1900; i < a; i++)
        numDias += bisiesto(a) ? 366 : 365;
    for (int j = 1; j <= m; j++)
        if (j != 2)
            numDias += DiasMes[j - 1];
        else
            numDias += bisiesto(a) ? 29:28;
        numDias += d;
    return (numDias - 1);
}

int Fecha::DiasDif(long Fecha1, long Fecha2)
{
    Fecha1 = FechaADias(Fecha1);
    Fecha2 = FechaADias(Fecha2);
    if (Fecha1 > Fecha2)
        return (Fecha1 - Fecha2) + 1;
    else
        return(Fecha2 - Fecha1) + 1;
}
