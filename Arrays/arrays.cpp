#include "array.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

arrays::arrays()
{
    srand(time(NULL));
    for (int i = 0; i < TAM; i++)
        arrnum[i] = (int)((rand() % 100) + 1);
    EsDinamico = false;
}


float arrays::FloatsRandoms()
{
    float random_float = ((float)rand()) / ((float)RAND_MAX) * TAM;
    return random_float;
}

arrays::arrays(float val)
{
    srand(time(NULL));
    for (int i = 0; i < TAM; i++)
    {
        arrfloats[i] = FloatsRandoms();
    }
    EsDinamico = false;
}

arrays::arrays(int tam)
{
    TAMANIO = tam;
    arrdin = (int*)malloc(sizeof(int) * TAMANIO);
    srand(time(NULL));
    for (int i = 0; i < TAMANIO; i++)
        arrdin[i] = (int)((rand() % 100) + 1);
    EsDinamico = true;
}

arrays::arrays(double tamaño)
{
    TAMANIO = tamaño;
    ArrDinFloats = (float*)malloc(sizeof(float) * TAMANIO);
    srand(time(NULL));
    for (int i = 0; i < TAMANIO; i++)
        ArrDinFloats[i] = FloatsRandoms();
    EsDinamico = true;
}

arrays::~arrays()
{
    if (EsDinamico)
    {
        free(arrdin);
        free(ArrDinFloats);
    }
}

int arrays::BuscaArr(int elem)
{
    for (int i = 0; i < TAM; i++)
        if (elem == arrnum[i])
            return i;
    return -1;
}

int arrays::BuscaArrDin(int elem)
{
    for (int i = 0; i < TAMANIO; i++)
        if (elem == arrdin[i])
            return i;
    return -1;
}

void arrays::DespliegaArregloDinamico()
{
    for (int i = 0; i < TAMANIO; i++)
        printf("%d.- %d\n", i + 1, arrdin[i]);
}

void arrays::DespliegaArregloFlotanteDinamico()
{
    for (int i = 0; i < TAMANIO; i++)
        printf("%d.- %.2f\n", i + 1, ArrDinFloats[i]);
}


int arrays::DiferenciaMayorConsecutivos(int arr[], int tamaño)
{
    int diferencia_mayor = 0;
    for (int i = 1; i < tamaño; i++)
    {
        if (abs(arr[i] - arr[i - 1]) > diferencia_mayor)
            diferencia_mayor = abs(arr[i] - arr[i - 1]);
    }
    return diferencia_mayor;
}

void arrays::LlenaArregloNumerico(int* arr, int tamaño)
{
    for (int i = 0; i < tamaño; i++)
    {
        printf("Dame el elemento %d del arreglo:", i);
        fflush(stdout);
        scanf("%d", &arr[i]);
    }
}

void arrays::DespliegaArregloNumerico(int* arr, int tamaño)
{
    for (int i = 0; i < tamaño; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int arrays::BuscarArr(int* arr, int cuantos, int* elemento)
{
    for (int i = 0; i < cuantos; i++)
    {
        if (arr[i] == *elemento)
        {
            return i;
            break;
        }
    }
    return -1;
}

void arrays::DespliegaArregloFlotante()
{
    for (int i = 0; i < TAM; i++)
    {
        printf("%.2f\t", arrfloats[i]);
    }
    printf("\n");
}

void arrays::DosElementosMasGrandes(void)
{
    int i = 0;
    float mayor1, mayor2;
    mayor1 = (arrfloats[i] > arrfloats[i + 1]) ? arrfloats[i] : arrfloats[i + 1];
    mayor2 = (arrfloats[i] > arrfloats[i + 1]) ? arrfloats[i + 1] : arrfloats[i];
    for (i = 2; i < TAM; i++)
    {
        if (mayor1 > arrfloats[i])
        {
            mayor1 = mayor1;
            mayor2 = (mayor2 > arrfloats[i]) ? mayor2 : arrfloats[i];
        }
        else
        {
            mayor2 = mayor1;
            mayor1 = arrfloats[i];
        }
    }
    printf("El mayor fue %.2f y el segundo mayor fue %.2f\n", mayor1, mayor2);
}

void arrays::DosElementosMasGrandes(double tamaño)
{
    float mayor1, mayor2;
    mayor1 = (ArrDinFloats[0] > ArrDinFloats[1]) ? ArrDinFloats[0] : ArrDinFloats[1];
    mayor2 = (ArrDinFloats[0] > ArrDinFloats[1]) ? ArrDinFloats[1] : ArrDinFloats[0];
    for (int i = 2; i < TAMANIO; i++)
    {
        if (mayor1 > ArrDinFloats[i])
        {
            mayor1 = mayor1;
            mayor2 = (mayor2 > ArrDinFloats[i]) ? mayor2 : ArrDinFloats[i];
        }
        else
        {
            mayor2 = mayor1;
            mayor1 = ArrDinFloats[i];
        }
    }
    printf("\nEl mayor fue %.2f y el segundo mayor fue %.2f\n", mayor1, mayor2);
}

float arrays::PromedioVector(void)
{
    float promedio = 0.0;
    for (int i = 0; i < TAMANIO; i++)
    {
        promedio += arrdin[i];
    }
    return (promedio / TAMANIO);
}

