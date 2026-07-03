#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char cadena[100];
    char letra;
    char *pLetra = &letra;

    printf("Ingrese una palabra: ");
    scanf("%s", cadena);

    printf("¿Que letra quiere buscar?: ");
    scanf(" %c", pLetra);

    char *p = cadena;
    int encontrado = 0;
    int *pEncontrado = &encontrado;

    while (*p != '\0') {
        if (*p == *pLetra) {
            *pEncontrado = 1;
            break; 
        }
        p++;
    }

    if (*pEncontrado == 1) {
        printf("¡Si! La letra '%c' esta en la palabra.\n", *pLetra);
    } else {
        printf("No se encontro la letra '%c'.\n", *pLetra);
    }

    return 0;
}
