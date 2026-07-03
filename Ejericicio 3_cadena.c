#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char cadena[100];
    printf("Ingrese una palabra: ");
    scanf("%s", cadena);

    char *p = cadena;
    int contadorA = 0;
    int *pContador = &contadorA;

    while (*p != '\0') {
        if (*p == 'a' || *p == 'A') {
            (*pContador)++;
        }
        p++;
    }

    printf("La palabra tiene %d letras 'a'.\n", *pContador);
    return 0;
}
