#ifndef array_H
#define array_H
#define TAM 10

class arrays
{
private:
    int arrnum[TAM];
    float arrfloats[TAM];
    int* arrdin;
    float* ArrDinFloats;
    int TAMANIO;
    bool EsDinamico;
public:
    arrays(void);
    arrays(int tam);
    arrays(float val);
    arrays(double tam);
    ~arrays();
    void LlenaArregloFloat(void);
    int  BuscaArrDin(int elem);
    void DespliegaArregloDinamico(void);
    void DespliegaArregloFlotante(void);
    int  BuscaArr(int elem);
    int DiferenciaMayorConsecutivos(int arr[], int tamaño);
    void LlenaArregloNumerico(int arr[], int tamaño);
    void DespliegaArregloNumerico(int arr[], int tamaño);
    int BuscarArr(int arr[], int cuantos, int* elementos);
    //void UsarBuscar(void);
    void DespliegaArregloFlotanteDinamico(void);
    void DosElementosMasGrandes(void);
    float FloatsRandoms(void);
    void DosElementosMasGrandes(double tamaño);
    void UsarDin(void);
    float PromedioVector(void);
    void UsarPromedio(void);
};

#endif /* array_H */
