#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int limite;
    int *pLimite = &limite;

    printf("Ingrese el numero limite: ");
    scanf("%d", pLimite);

    int suma = 0;
    int *pSuma = &suma;

    int i;
    int *pI = &i;

    for (*pI = 1; *pI <= *pLimite; (*pI)++) {
        *pSuma = *pSuma + *pI;
    }

    printf("La suma total desde 1 hasta %d es: %d\n", *pLimite, *pSuma);
    return 0;
}
