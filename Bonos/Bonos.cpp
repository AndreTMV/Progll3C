#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Bonos.h"
struct EMPLEADO {
    char nombre[40];
    int anios;
    int hijos;
	int sueldo;
};

#define NUMERO_EMPLEADOS 10

struct EMPLEADO lista[NUMERO_EMPLEADOS] = { {"Andre",4,1,10000},{"Fulano",15, 3,11000},{"Sutano",5,0,20000},{"Angel",6,0,15000},{"David",7,0,25000},{"Regina",6,2,30000},{"Leonel",3,2,10000},{"Leo",10,3,50000}, {"Fer",14,4},{"Ana",8,1}};

float Bonificacion[NUMERO_EMPLEADOS];
float bonificacion_total_por_antiguedad = 0.0;

int Bonos::Pedir_Datos()
{
	int cantidad_de_pinos = 0;
	printf("¿Cuantos pinos derribaste? ");
	fflush(stdout);
	scanf("%d", &cantidad_de_pinos);
	return cantidad_de_pinos;
}

void Bonos::Numero_E(int limite)
{
	float e = 1.0;
	for (int i = 1; i < limite; i++)
	{
		e += 1.0 / Factorial(i);
	}
	printf("Con el limite ingresado(%d) e = %f", limite, e);
}

int Bonos::Factorial(int numero)
{
	if (numero == 0) 
		return 1;
	else 
		return numero * Factorial(numero - 1); 
}

bool Bonos::Numero_Bueno(int numero)
{
	int numero1 = numero;
	float suma_de_digitos = 0, suma_de_factores = 0;
    while (numero > 0)
    {
        suma_de_digitos += numero % 10;
        numero = numero / 10;
    }
	printf("La suma de sus digitos es: %.0f \n", suma_de_digitos);
	for (int i = 2; i < numero1; i++) {
		if (numero1 % i == 0)
		{
			if (i >= 10)
			{
				int y = i;
				while (y > 0)
				{
					suma_de_factores += y % 10;
					y = y / 10;
				}
			}
			else
				suma_de_factores += i;
		}
    }
	printf("La suma de sus factores es: %.0f \n", suma_de_factores);
	if (suma_de_digitos == suma_de_factores)
		return true;
	else
		return false;
}

int Bonos::Balero()
{
	int oportunidades = 0, puntos = 0;
	while (oportunidades < 20)
	{
		printf("\nEsta es tu %d oportunidad", oportunidades+1);
		int tipo = 0;
		char exito, enter;
		printf("\n¿Que tipo de ensarte hiciste? ");
		fflush(stdout);
		scanf("%d%c", &tipo, &enter);
		if (tipo == 0 || tipo > 8)
		{
			printf("\nEse no es un ensarte valido, ingresa otro");
		}
		else
		{
			printf("\n¿El tiro fue exitoso (S/N)?");
			fflush(stdout);
			scanf("%c%c", &exito, &enter);
			if (exito == 'S' || exito == 's')
				switch (tipo)
				{
				case 1:
					puntos += 1;
					oportunidades++;
					break;
				case 2:
					puntos += 5;
					oportunidades++;
					break;
				case 3:
					puntos += 10;
					oportunidades++;
					break;
				case 4:
					puntos += 10;
					oportunidades++;
					break;
				case 5:
					puntos += 50;
					oportunidades++;
					break;
				case 6:
					puntos += 100;
					oportunidades++;
					break;
				case 7:
					puntos += 250;
					oportunidades++;
					break;
				case 8:
					puntos += 500;
					oportunidades++;
					break;
				}
			else
			{
				oportunidades++;
				puntos += 0;
			}
		}
	}
	return puntos;
}

int Bonos::Boliche()
{
	int puntos = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("Esta es tu %d entrada \n", i + 1);
		int cantidad_de_pinos = 0;
		cantidad_de_pinos = Pedir_Datos();
		if (cantidad_de_pinos > 10)
		{
			printf("Es no es una entrada valida, vuelve a registrar tu entrada profavor \n");
			i--;
		}
		
		else if (cantidad_de_pinos == 10)
		{
			printf("Wow, hiciste chuza! \n");
			puntos += cantidad_de_pinos;
		}

		else if (cantidad_de_pinos < 10)
		{
			puntos += cantidad_de_pinos;
			printf("Segunda intento: \n");
			cantidad_de_pinos = Pedir_Datos();
			puntos += cantidad_de_pinos;
		}
	}
	return puntos;
}
void Bonos::bonificacion(void)
{
    int i, bonificacion_por_hijos,bonificacion_por_anios;
    for (i = 0; i < NUMERO_EMPLEADOS; i++) {
		bonificacion_por_hijos = lista[i].hijos;
		bonificacion_por_anios = lista[i].anios;
		if (bonificacion_por_hijos == 0)
			bonificacion_por_hijos = 0;
		else
		{
			if (bonificacion_por_hijos == 1)
				bonificacion_por_hijos = 50000;
			else if (bonificacion_por_hijos == 2)
				bonificacion_por_hijos = 100000;
			else if (bonificacion_por_hijos == 3)
				bonificacion_por_hijos = 150000;
			else
				bonificacion_por_hijos = 200000;
		}
		if (bonificacion_por_anios < 5)
			bonificacion_por_anios = 0;
		else
		{
			if (bonificacion_por_anios >= 6 || bonificacion_por_anios <= 10)
			{
				bonificacion_por_anios = lista[i].sueldo * .05;
				bonificacion_total_por_antiguedad += bonificacion_por_anios;
			}
			else
			{
				bonificacion_por_anios = lista[i].sueldo * .10;
				bonificacion_total_por_antiguedad += bonificacion_por_anios;
			}
		}
        Bonificacion[i] = bonificacion_por_anios + bonificacion_por_hijos;
    }
}

void Bonos::ImprimeBonificaciones() {
    int i, empleados_con_mas_de_3_hijos = 0;
    for (i = 0; i < NUMERO_EMPLEADOS; i++) {
        printf("Nombre del empleado: %s\n", lista[i].nombre);
        printf("Numero de hijos: %d\n", lista[i].hijos);
        printf("Total de anios: %d\n", lista[i].anios);
        printf("Boniificacion total del empleado %.2f\n", Bonificacion[i]);
		if (lista[i].hijos >= 3)
			empleados_con_mas_de_3_hijos++;
    }
	printf("%.2f es el total a pagar por las bonificaciones de todos los empleados por antiguedad \n", bonificacion_total_por_antiguedad);
	printf("Hay %d empleados con 3 o mas hijos", empleados_con_mas_de_3_hijos);
}
