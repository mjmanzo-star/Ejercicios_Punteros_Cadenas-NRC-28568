#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char cadena[100];
    printf("Ingrese una palabra en minusculas: ");
    scanf("%s", cadena);

    char *p = cadena; 
    if (*p >= 'a' && *p <= 'z') {
        *p = *p - 32; 
    }
    printf("Palabra corregida con mayuscula inicial: %s\n", cadena);
    return 0;
}
