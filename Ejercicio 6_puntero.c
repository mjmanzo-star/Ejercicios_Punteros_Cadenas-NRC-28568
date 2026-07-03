#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int inicio;
    int *pInicio = &inicio;

    printf("Ingrese el numero para iniciar el conteo regresivo: ");
    scanf("%d", pInicio);

    printf("Iniciando cuenta atras:\n");
    
    while (*pInicio >= 0) {
        printf("%d\n", *pInicio);
        (*pInicio)--;
    }

    printf("¡Tiempo cumplido!\n");
    return 0;
}
