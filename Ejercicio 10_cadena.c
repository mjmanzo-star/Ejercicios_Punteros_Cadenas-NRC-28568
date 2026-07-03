#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char cadena[100];
    printf("Ingrese una palabra: ");
    scanf("%s", cadena); 
    char *p = cadena; 
    int tieneDobles = 0;
    int *pTieneDobles = &tieneDobles; 

    while (*p != '\0' && *(p + 1) != '\0') {
        
        if (*p == *(p + 1)) {
            *pTieneDobles = 1; 
            break;             
        }
        p++; 
    }

    if (*pTieneDobles == 1) {
        printf("La palabra '%s' SI contiene letras dobles seguidas.\n", cadena);
    } else {
        printf("La palabra '%s' NO contiene letras dobles seguidas.\n", cadena);
    }

    return 0;
}
