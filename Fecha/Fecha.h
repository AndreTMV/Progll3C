#ifndef FECHA_H
#define FECHA_H

class Fecha
{
private:
    int DiasMes[12];
public:
    Fecha();  // Constructor
    int Anio(long fec);
    int Dia(long fec);
    int Mes(long fec);
    bool bisiesto(int anio);
    int DiaSemana(int* Dia);
    void UsarFechaMetodoAnioFechaDia();
    void UsarFechaBisiesto();
    void UsarDiaSemana();
    bool FechaValida(long f);
    long FechaAyer(long f);
    long FechaPosterior(long f);
    int FechaADias(long f);
    void UsarFecha(void);
    int DiasDif(long Fecha1, long Fecha2);
    void UsarDiasDif(void);
};

#endif /* FECHA_H */
