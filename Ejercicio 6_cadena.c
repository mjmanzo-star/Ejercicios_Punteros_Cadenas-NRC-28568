#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char cadena[100];
    printf("Ingrese una palabra en minusculas: ");
    scanf("%s", cadena);

    char *p = cadena;

    while (*p != '\0') {
        if (*p >= 'a' && *p <= 'z') {
            *p = *p - 32;
        }
        p++;
    }

    printf("Palabra convertida: %s\n", cadena);
    return 0;
}
