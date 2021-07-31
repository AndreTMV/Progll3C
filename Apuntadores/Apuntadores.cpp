#include "Apuntador.h"

#include <stdio.h>

void Apuntador::EjemploApuntadores()
{
    int i = 10, j = 20, k = 3;
    int* p, * q, * r;
    int** u, ** v;
    p = &j;     // p apunta a j
    q = &i;     // q apunta a i
    r = p;      // r apunta a donde apunta p
    *p = *q + k; // q a donde apunta más k
    u = &q;     // u apunta a q
    **u = *p + 1;
    v = u; //v apunta a donde apunta u
    q = &k; // q apunta a k o q tome la direccion de k
    **v = **u + *p;
    printf("i: %d j: %d k: %d", i, j, k);
    printf("\nLas direcciones de i, j y k son: %x, %x, %x", &i, &j, &k);
    printf("\nLos valores de p, q, r son: %x, %x, %x", p, q, r);
    printf("\nLas direcciones de p, q, r son: %x %x %x", &p, &q, &r);
    printf("\nLos valores de u y v son: %x %x", u, v);
    printf("\nLas direcciones de u y v son: %x %x", &u, &v);
}

void Apuntador::UsarApuntadores()
{
    Apuntador ap;
    ap.EjemploApuntadores();
}