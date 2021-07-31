#include "Mate.h"
#include <math.h>
#include <stdio.h>
#include <time.h>

bool Mate::FormulaGeneral(double cA, double cB, double cC, double* r1, double* r2)
{
    double determinante;
    if (cA == 0.0)
        return false;
    determinante = (cB * cB) - (4.0 * cA * cC);
    if (determinante < 0.0)
        return false;
    *r1 = (-cB + sqrt(determinante)) / (2.0 * cA);
    *r2 = (-cB - sqrt(determinante)) / (2.0 * cA);
    return true;
}


bool Mate::AreaTriangulo(double lA, double lB, double lC, double* Area) {
    double p;
    if (lA + lB < lC || lB + lC < lA || lA + lC < lB) // Porbando si el triangulo es real(si cierra o no) 
        return false;
    p = (lA + lB + lC) / 2;
    *Area = sqrt(p * (p - lA) * (p - lB) * (p - lC));
    return 0;
}

int Mate::TresNumeros(double a, double b, double c)
{
    double menor, mayor, suma, promedio, producto;
    if (a > b && a > c)
        mayor = a;
    else if (b > a && b > c)
        mayor = b;
    else
        mayor = c;
    printf("El numero menor de %lf, %lf y %lf es %lf", a, b, c, mayor);
    if (a < b && a < c)
        menor = a;
    else if (b < a && b < c)
        menor = b;
    else
        menor = c;
    printf("El numero menor de %lf, %lf y %lf es %lf", a, b, c, menor);
    suma = a + b + c;
    printf("La suma de %lf, %lf y %lf es igual a:%lf", a, b, c, suma);
    producto = a * b * c;
    printf("\nEl producto de %lf, %lf y %lf es igual a:%lf", a, b, c, producto);
    promedio = (a + b + c) / 3;
    printf("\nEl promedio de %lf, %lf y %lf es igual a:%lf", a, b, c, promedio);
    return 0;

}

int Mate::TipoTriangulo(int ladoA, int ladoB, int ladoC)
{
    if (ladoA + ladoB <= ladoC || ladoB + ladoC <= ladoA || ladoA + ladoC <= ladoB || ladoA <= 0 || ladoB <= 0 || ladoC <= 0) // validaciones 
        return 0;
    else if (ladoA == ladoB && ladoB == ladoC && ladoA == ladoC)
        return 1;
    else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC)
        return 2;
    // else if (ladoA != ladoB && ladoA != ladoC && ladoB != ladoC) no es necesario incluir esto porque si ninguno se cumple entonces necesariamente va a ser escaleno
    return 3;
}

bool Mate::EsMultiplo(int Num1, int Num2)
{
    if (Num1 % Num2 == 0)
        return true;
    else
        return false;
}

bool Mate::Inverso(double* Num)
{
    if (Num != 0)
        return false;
    if ((*Num = 1 / *Num))
        return true;
    return 0;

}

int Mate::MenorYMayorDe5(int num1, int num2, int* mayor, int* menor)
{
    if (num1 < num2)
        *mayor = num2, * menor = num1;

    else
        *mayor = num1, * menor = num2;
    return 0;
}


double Mate::Abs(double Num)
{
    double numabs;
    numabs = (Num > 0) ? Num : Num * -1;
    return numabs;
}

// Uso el for cuando se de antemano el numero de veces que voy a iterar
long Mate::FactorialFor(int num) {
    long fact = 1;
    for (int i = 1; i <= num; i++)
        fact *= (long)i;
    return fact;
}
//Uso el while cuando no se de antemano el numero de veces que voy a iterar
long Mate::FactoriaWhile(int num) {
    long fact = 1;
    int i = 1;
    while (i <= num)
    {
        fact *= (long)i;
        i++;
    }
    return fact;
}

long Mate::FactorialWhile2(int num) {
    long fact = 1;
    while (num > 0)
    {
        fact *= num;
        num--;
    }
    return fact;
}
//Uso el do..while cuando no se de antemano el numero de veces que voy a iterar
//Y ademas necesito entrar al do...while por lo menos una vez
long Mate::FactorialDoWhile(int num) {
    long fact = 1;
    int i = 1;
    do {
        fact *= (long)i;
        i++;
    } while (i <= num);
    return fact;
}

void Mate::Suma3A99() {
    int numinicial = 3;
    long suma = 0;
    printf("La suma de los numeros:");
    for (int i = 0; i < 33; i++) {
        printf(" %d", numinicial);
        suma = (long)(suma + numinicial);
        numinicial = numinicial + 3;
    }
    printf(" es de %ld", suma);
}

long Mate::SumaImpares(int* n)
{
    long suma = 0;
    int i = 0;
    printf("La suma de los numeros impares del 0 al %d( ", *n);
    do {
        if (i % 2 != 0) {
            suma = suma + i;
            printf("%d ", i);
        }
        i++;
    } while (i <= *n);
    printf(") es de: %ld", suma);
    return suma;
}

int Mate::NumerosPositivos()
{
    int cuenta = 0;
    int numero;
    printf("Ingresa 20 numeros positivos o negativos\n");
    for (int i = 0; i < 20; i++) {
        printf("%d:", i + 1);
        fflush(stdout);
        scanf("%d", &numero);
        (numero > 0) ? cuenta += 1 : NULL;
    }
    return cuenta;
}

double Mate::SeriePi()
{
    double pi = 4.0;
    for (int i = 3; i < 10000; i += 4) {
        pi -= 4.0 / (double)i;
        pi += 4.0 / (double)(i + 2);
    }
    return pi;
}

double Mate::Serie100()
{
    int i;
    double serie = 1.0;
    for (i = 2; i < 200; i += 4) {
        serie -= 1.0 / (double)i;
        serie += 1.0 / (double)(i + 2);
    }
    return serie;
}

void Mate::OrdenInverso(long* numero_a_invertir)
{
    float imprime_numero;
    while (*numero_a_invertir > 0)
    {
        imprime_numero = *numero_a_invertir % 10;
        printf("%.0f", imprime_numero);
        *numero_a_invertir = *numero_a_invertir / 10;
    }
}

void Mate::FactoresPrimos(int* num)
{

    for (int i = 1; i <= *num; i++) {
        if (*num % i == 0)
            printf("%d,", i);
    }
    printf("\n");
}
int Mate::CuantosPrimosFuerzaBruta()
{
    int cuantos = 0;
    bool EsPrimo = true;
    for (int i = 1; i < 1000000; i++)
    {
        EsPrimo = true;
        for (int j = 2; j < i; j++)
            if (i % j == 0)
            {
                EsPrimo = false;
                break;
            }
        if (EsPrimo)
            cuantos++;
    }
    return cuantos;
}

int Mate::CuantosPrimosFuerzaBrutaEuclides()
{
    int cuantos = 0;
    bool EsPrimo = true;
    for (int i = 1; i <= 1000000; i++)
    {
        EsPrimo = true;
        for (int j = 2; j <= (int)(sqrt(i) + 1); j++)
            if (i % j == 0)
            {
                EsPrimo = false;
                break;
            }
        if (EsPrimo)
            cuantos++;
    }
    return cuantos;
}

int Mate::CuantosPrimosProgramacionDinamica()
{
    int Primos[100000];
    Primos[0] = 2;
    int cuantos = 1;
    int indiceprimos;
    bool EsPrimo = true;
    for (int i = 3; i <= 1000000; i++)
    {
        EsPrimo = true;
        for (indiceprimos = 0; Primos[indiceprimos] <= (int)(sqrt(i));
            indiceprimos++)
            if (indiceprimos <= cuantos)
                if (i % Primos[indiceprimos] == 0)
                {
                    EsPrimo = false;
                    break;
                }
        if (EsPrimo)
        {
            Primos[cuantos] = i;
            cuantos++;
        }
    }
    return cuantos;
}
