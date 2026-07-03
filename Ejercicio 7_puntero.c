#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    int *pNumero = &numero;

    printf("Ingrese un numero para calcular su factorial: ");
    scanf("%d", pNumero);

    int factorial = 1;
    int *pFactorial = &factorial;

    int i;
    int *pI = &i;

    for (*pI = 1; *pI <= *pNumero; (*pI)++) {
        *pFactorial = (*pFactorial) * (*pI);
    }

    printf("El factorial de %d es: %d\n", *pNumero, *pFactorial);
    return 0;
}
