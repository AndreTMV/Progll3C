#include "Extras.h"
#include <math.h>
#include <stdio.h>

void Extras::UsarEnteroPerfecto()
{
    Extras e;
    int numero;
    printf("Dame un numero:");
    scanf("%d", &numero);
    bool pudo = e.EnteroPerfecto(numero);
    if (pudo)
        printf("%d si es numero perfecto\n", numero);
    else
        printf("%d no es un entero perfecto\n", numero);
}

void Extras::UsarPrimerosEnterosPerfectos()
{
    Extras e;
    printf("Los primeros enteros perfectos son:");
    e.PrimerosEnterosPerfectos();
    printf("\n");
}

void Extras::UsarDivisibleNueve()
{
    Extras e;
    int Nueve;
    printf("Dame un numero entero:");
    fflush(stdout);
    scanf("%d", &Nueve);
    bool pudo = e.DivisbleNueve(Nueve);
    if (pudo)
        printf("%d si es divisble entre nueve\n", Nueve);
    else
        printf("%d no es divisble entre nueve\n", Nueve);
}

void Extras::UsarFibonacci()
{
    //Fibonaccio 
    Extras m;
    m.Fibonacci();
}

void Extras::UsarFactoresPrimos()
{
    //FactoresPrimos
    Extras m;
    int numero_de_factores_primos;
    printf("Dame el numero a descomponer: ");
    fflush(stdout);
    scanf("%d", &numero_de_factores_primos);
    m.FactoresPrimos(&numero_de_factores_primos);


}

void Extras::UsarFastMCD()
{
    Extras m;
    int s, k;
    printf("Dame i: ");
    fflush(stdout);
    scanf("%d", &s);
    printf("Dame j: ");
    fflush(stdout);
    scanf("%d", &k);
    int mcd = m.FastMCD(s, k);
    printf("El MCD de %d y %d es %d", s, k, mcd);
}

void Extras::UsarCifras()
{
    Extras m;
    long numerillo;
    printf("Dame un numero:");
    fflush(stdout);
    scanf("%ld", &numerillo);
    m.Cifras(&numerillo);
}

/*void Fibonacci();
void UsarFibonacci();
void UsarFactoresPrimos();
void FactoresPrimos(int *Numero_a_descomponer);
void UsarFastMCD();
int FastMCD(int i, int j);
void PrimerosNumerosPares();
void DiezNumeros();
void Cifras(long *numeroc);
void UsarCifras();
void CuadradoMagico();*/
