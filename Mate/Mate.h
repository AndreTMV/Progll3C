#ifndef MATE_H
#define MATE_H

class Mate {
public:
    long FactorialFor(int num);
    long FactorialWhile2(int num);
    long FactorialDoWhile(int num);
    long FactoriaWhile(int num);
    void UsarFactoriales();
    bool FormulaGeneral(double cA, double cB, double cC, double* r1, double* r2);
    void UsarFormulaGeneral();
    bool AreaTriangulo(double lA, double lB, double lC, double* Area);
    void UsarAreaTriangulo();
    int TresNumeros(double a, double b, double c);
    void UsarTresNumeros();
    int TipoTriangulo(int ladoA, int ladoB, int ladoC);
    void UsarTipoTriangulo();
    bool EsMultiplo(int Num1, int Num2);
    void UsarEsMultiplo();
    bool Inverso(double* Num);
    void UsarInverso();
    int MenorYMayorDe5(int num1, int num2, int* mayor, int* menor);
    void UsarMenorYMayorDe5();
    double Abs(double Num);
    void UsarAbs();
    void Suma3A99();
    void UsarSuma3A99();
    long SumaImpares(int* n);
    void UsarSumaImpares();
    void UsarOrdenInverso();
    void OrdenInverso(long* numero_a_invertir);
    double SeriePi();
    double Serie100();
    int NumerosPositivos();
    void UsarNumerosPositivos();
    void FactoresPrimos(int* num);
    void UsarFactoresPrimos();
    int    CuantosPrimosFuerzaBruta();
    int    CuantosPrimosFuerzaBrutaEuclides();
    int    CuantosPrimosProgramacionDinamica();
};

#endif /* MATE_H */

