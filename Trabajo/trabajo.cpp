//#include "trabajo.h"
//#include <stdio.h>
//struct EMPLEADO {
//    char nombre[40];
//    int horas;
//    int cobra_por_hora;
//};
//
//#define NUMERO_EMPLEADOS 3
//
//struct EMPLEADO lista[NUMERO_EMPLEADOS] = { {"Andre",41,100},{"Aquiles",40, 150},{"Tere",50,190} };
//
//float pagos[NUMERO_EMPLEADOS];
//
//void trabajo::CalculaSueldos(void)
//{
//    int i, horas_extras;
//    for (i = 0; i < NUMERO_EMPLEADOS; i++) {
//        horas_extras = lista[i].horas - 40;             // validando si el trabajador trabajo horas extras 
//        if (horas_extras < 0)
//            horas_extras = 0;
//        pagos[i] = lista[i].cobra_por_hora * lista[i].horas + horas_extras * lista[i].cobra_por_hora * 1.5;
//    }
//}
//
//void trabajo::ImprimeSueldos() {
//    int i, horas_extras;
//    for (i = 0; i < NUMERO_EMPLEADOS; i++) {
//        printf("Nombre del empleado: %s\n", lista[i].nombre);
//        printf("Horas trabajadas: %d\n", lista[i].horas);
//        printf("Cobro por hora: %d\n", lista[i].cobra_por_hora);
//        printf("El empleado gano %.2f\n", pagos[i]);
//
//    }
//}
