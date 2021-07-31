#include "array.h"
#include <stdio.h>

//void arrays::UsarBuscar()
//{
//    arrays ar;
//    int cuantos, elemento, arreglo[cuantos];
//    printf("Tamaño del arreglo: ");
//    fflush(stdout);
//    scanf("%d", &cuantos);
//    ar.LlenaArregloNumerico(arreglo, cuantos);
//    printf("Elemento que busca:");
//    fflush(stdout);
//    scanf("%d", &elemento);
//    cuantos = ar.BuscarArr(arreglo, cuantos, &elemento);
//    if (cuantos == -1)
//        printf("No se encontro el elemento %d\n", elemento);
//
//    else
//        printf("El elemento %d aparece por primera vez en el lugar %d\n", elemento, cuantos);
//
//}

void arrays::UsarDin(void)
{
    double tamaño;
    printf("Dame el largo del arreglo: ");
    scanf("%lf", &tamaño);
    arrays ar(tamaño);
    ar.DespliegaArregloFlotanteDinamico();
    ar.DosElementosMasGrandes(tamaño);
}

void arrays::UsarPromedio(void)
{
    int tamaño;
    float promedio = 0.0;
    printf("Dame el largo del arreglo: ");
    scanf("%d", &tamaño);
    arrays ar(tamaño);
    ar.DespliegaArregloDinamico();
    promedio = ar.PromedioVector();
    printf("El promedio de los elementos del arreglo es: %.2f\n", promedio);
}

// Implementacion con un arreglo dinamico
//void cadenas::StrBase10ABase2(char* cad)
//{
//    int numero = StrToI(cad), i = 0;
//    char casi_binario[70], binario[70];
//    while (numero >= 1)
//    {
//        casi_binario[i] = (char)((numero % 2) + 48);
//        numero = numero / 2;
//        i++;
//    }
//    casi_binario[i] = 0;
//    InvierteCadena(casi_binario, binario);
//    printf("%s", binario);
//    /*i += 1;
//    char* binario = (char*)(malloc(sizeof(char) * i));
//    int y = 0;
//    for (int j = (strlen(casi_binario)-1); j >= 0; j--)
//    {
//            binario[y] = casi_binario[j];
//            y++;
//    }
//    binario[y] = 0;
//    printf("%s", binario);
//    free(binario);*/
//}
