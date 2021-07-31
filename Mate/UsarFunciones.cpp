#include "Mate.h"
#include <math.h>
#include <stdio.h>

void Mate::UsarFormulaGeneral()
{
    Mate m;
    //FormulaGeneral
    double A, B, C, res1, res2;
    printf("dame el coeficiente del termino cuadratico:");
    fflush(stdout);
    scanf("%lf", &A);
    printf("dame el coeficiente del termino lineal:");
    fflush(stdout);
    scanf("%lf", &B);
    printf("dame el coeficiente de la constante:");
    fflush(stdout);
    scanf("%lf", &C);
    bool pudo = m.FormulaGeneral(A, B, C, &res1, &res2);
    if (pudo)
        printf("Las raices de la ecuacion son %lf y %lf", res1, res2);
    else
        printf("No fue posible encontrar las raices de una ecuacion cuadratica con esos coeficientes");

}

void Mate::UsarAreaTriangulo()
{
    //AreaTriangulo
    Mate m;
    double a, b, c, area;
    printf("Dame el lado a:");
    fflush(stdout);
    scanf("%lf", &a);
    printf("Dame el lado b:");
    fflush(stdout);
    scanf("%lf", &b);
    printf("Dame el lado c:");
    fflush(stdout);
    scanf("%lf", &c);
    bool real = m.AreaTriangulo(a, b, c, &area);
    if (real)
        printf("El area de tu triangulo es igual a %lf", area);
    else
        printf("El triangulo de dimensiones %.2lf, %.2lf y %.2lf no es real", a, b, c);


}

void Mate::UsarTresNumeros()
{
    //TresNumeros
    Mate m;
    double AT, BT, CT;
    printf("dame a:");
    fflush(stdout);
    scanf("%lf", &AT);
    printf("dame b:");
    fflush(stdout);
    scanf("%lf", &BT);
    printf("dame c:");
    fflush(stdout);
    scanf("%lf", &CT);
    m.TresNumeros(AT, BT, CT);

}

void Mate::UsarTipoTriangulo()
{
    Mate m;
    //TipoTriangulo
    int LadoA, LadoB, LadoC, tipo;
    printf("Dame el lado a:");
    fflush(stdout);
    scanf("%d", &LadoA);
    printf("Dame el lado b:");
    fflush(stdout);
    scanf("%d", &LadoB);
    printf("Dame el lado c:");
    fflush(stdout);
    scanf("%d", &LadoC);
    tipo = m.TipoTriangulo(LadoA, LadoB, LadoC);
    switch (tipo) {
    case 1:
        printf("El triangulo es equilatero");
        break;
    case 2:
        printf("El triangulo es isosceles");
        break;
    case 3:
        printf("El triangulo es escaleno");
        break;
    default:
        printf("Con los lados %d, %d y %d no se puede construir un triangulo", LadoA, LadoB, LadoC);
        break;
    }
}

void Mate::UsarEsMultiplo()
{
    //Es Multiplo
    Mate m;
    int num1, num2;
    printf("Dame el primer numero:");
    fflush(stdout);
    scanf("%d", &num1);
    printf("Dame el segundo numero:");
    fflush(stdout);
    scanf("%d", &num2);
    bool sison = m.EsMultiplo(num1, num2);
    if (sison)
        printf("El numero %d si es multiplo de %d", num1, num2);
    else
        printf("El numero %d no es multiplo de %d", num1, num2);


}

void Mate::UsarInverso()
{
    //Inverso
    Mate m;
    double inverso;
    printf("Dame el numero:");
    fflush(stdout);
    scanf("%lf", &inverso);
    bool noescero = m.Inverso(&inverso);
    if (noescero)
        printf("el inverso es %.2lf", inverso);
    else
        printf("No se puede calcular el inverso de 0");


}

void Mate::UsarMenorYMayorDe5()
{
    //MenorYMayorDe5
    Mate m;
    int numero1, numero2, numero3, numero4, numero5, mayor, menor, mayor1, menor1, test, test2, testmenor, testmayor, mayorV, mayorF, menorV, menorF, testfinal1, testfinal2, mayorF1, menorF1, menorV1, mayorV1;
    printf("Dame el primer numero:");
    fflush(stdout);
    scanf("%d", &numero1);
    printf("Dame el segundo numero:");
    fflush(stdout);
    scanf("%d", &numero2);
    printf("Dame el tercer numero:");
    fflush(stdout);
    scanf("%d", &numero3);
    printf("Dame el cuarto numero:");
    fflush(stdout);
    scanf("%d", &numero4);
    printf("Dame el quinto numero:");
    fflush(stdout);
    scanf("%d", &numero5);
    test = m.MenorYMayorDe5(numero1, numero2, &mayor, &menor);
    test2 = m.MenorYMayorDe5(numero3, numero4, &mayor1, &menor1);
    testmenor = m.MenorYMayorDe5(menor, menor1, &menorF, &menorV);
    testmayor = m.MenorYMayorDe5(mayor, mayor1, &mayorV, &mayorF);
    testfinal1 = m.MenorYMayorDe5(numero5, menorV, &menorF1, &menorV1);
    testfinal2 = m.MenorYMayorDe5(numero5, mayorV, &mayorV1, &mayorF1);
    printf("De los numero %d, %d, %d, %d y %d el mayor es %d y el menor es %d", numero1, numero2, numero3, numero4, numero5, mayorV1, menorV1);


}

void Mate::UsarAbs()
{
    //Abs
    Mate m;
    double num, numabso;
    printf("Dame el numero:");
    fflush(stdout);
    scanf("%lf", &num);
    numabso = m.Abs(num);
    printf("El valor absoluto de %lf es %lf", num, numabso);
}

void Mate::UsarFactoriales()
{
    //Factoriales(while,for y do while)
    Mate m;
    int numero;
    printf("Dame un numero: ");
    fflush(stdout);
    scanf("%d", &numero);
    long factorial = m.FactorialFor(numero);
    long factorial0 = m.FactorialWhile2(numero);
    long factorial1 = m.FactoriaWhile(numero);
    long factroial2 = m.FactorialDoWhile(numero);
    printf("El factorial de %d es %ld, %ld, %ld, %ld", numero, factorial, factorial0, factorial1, factroial2);


}

void Mate::UsarSuma3A99()
{
    //Suma3A99
    Mate m;
    m.Suma3A99();


}

void Mate::UsarSumaImpares()
{
    //SumaImpares
    Mate m;
    int numero_de_suma_impares;
    printf("Dame n: ");
    fflush(stdout);
    scanf("%d", &numero_de_suma_impares);
    m.SumaImpares(&numero_de_suma_impares);
}

void Mate::UsarOrdenInverso()
{
    Mate m;
    long numero_de_orden_inverso;
    printf("Dame el numero a invertir:");
    fflush(stdout);
    scanf("%ld", &numero_de_orden_inverso);
    m.OrdenInverso(&numero_de_orden_inverso);
    printf("\n");
}

void Mate::UsarNumerosPositivos()
{
    Mate m;
    int conto;
    conto = m.NumerosPositivos();
    printf("De los numeros introducidos, %d fueron positivos", conto);
}

void Mate::UsarFactoresPrimos()
{
    Mate m;
    int numero;
    printf("Dame un numero:");
    fflush(stdout);
    scanf("%d", &numero);
    m.FactoresPrimos(&numero);
}

