#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    int *pNumero = &numero;

    printf("Ingrese un numero entero: ");
    scanf("%d", pNumero);

    if ((*pNumero) % 2 == 0) {
        printf("El numero %d es PAR.\n", *pNumero);
    } else {
        printf("El numero %d es IMPAR.\n", *pNumero);
    }

    return 0;
}
