#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char cadena[100];
    char buscar;
    char *pBuscar = &buscar;

    printf("Ingrese una palabra: ");
    scanf("%s", cadena);

    printf("Ingrese la letra que desea censurar: ");
    scanf(" %c", pBuscar); 

    char *p = cadena;

    while (*p != '\0') {
        if (*p == *pBuscar) {
            *p = '*'; 
        }
        p++;
    }

    printf("Resultado: %s\n", cadena);
    return 0;
}
