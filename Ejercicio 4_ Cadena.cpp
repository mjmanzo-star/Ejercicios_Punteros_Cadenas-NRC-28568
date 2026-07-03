#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char cadena[100];
    printf("Ingrese una palabra (sin espacios): ");
    scanf("%s", cadena); 

    char *p = cadena;
    int vocales = 0;
    int *pVocales = &vocales;

    while (*p != '\0') {
        if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' ||
            *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U') {
            (*pVocales)++;
        }
        p++; 
    }

    printf("El numero total de vocales es: %d\n", *pVocales);
    return 0;
}
