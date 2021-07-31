#include "juegos.h"
#include <stdio.h>
#include <string.h>

extern const char tipo_ensarte[8][50];
int juegos::Balero(char* tipo)
{
    if (strcmp(tipo_ensarte[0], tipo) == 0)
        printf("Obtuviste un punto");
    else if (strcmp(tipo_ensarte[1], tipo) == 0)
        printf("Obtuviste 5 puntos");
    else if (strcmp(tipo_ensarte[2], tipo) == 0)
        printf("Obtuviste 10 puntos");
    else if (strcmp(tipo_ensarte[3], tipo) == 0)
        printf("Obtuviste 10 puntos");
    else if (strcmp(tipo_ensarte[4], tipo) == 0)
        printf("Obtuviste 100 puntos");
    else if (strcmp(tipo_ensarte[5], tipo) == 0)
        printf("Obtuviste 250 puntos");
    else if (strcmp(tipo_ensarte[6], tipo) == 0)
        printf("Obtuviste 250 puntos");
    else if (strcmp(tipo_ensarte[7], tipo) == 0)
        printf("Obtuviste 500 puntos");
    else
        printf("%s no es un tipo de ensarte", tipo);
    return 0;
}

void juegos::UsarJuegos()
{
    juegos c;
    printf("Estos son los tipos de ensarte(compli = capirucho complicado):\n");
    int i = 0;
    int size = sizeof(tipo_ensarte) / sizeof(tipo_ensarte[0]);
    for (i = 0; i < size; i++) {
        printf("%s\n", tipo_ensarte[i]);
    }
    int quit = 1;
    char enter;
    int exitoso, tipo;
    while (quit == 1) {
        char tipos[50];
        printf("Que tipo de ensarte hiciste?(compli = capirucho complicado)");
        /*fflush(stdout);
        scanf("%s",&tipos[50]);*/
        fgets(tipos, 50, stdin);
        printf("Y el ensarte fue exitoso?(1-si,2-no)");
        fflush(stdout);
        scanf("%d", &exitoso);
        if (exitoso == 1)
            c.Balero(&tipos[50]);
        printf("\nQuieres volver a ingresar otro ensarte?(1-si,2-no)");
        fflush(stdout);
        scanf("%d", &quit);
        exitoso = 0;
        if (quit == 2)
            break;
        printf("\n");
    }
    printf("Ok que tenga un buen día\n");
}
