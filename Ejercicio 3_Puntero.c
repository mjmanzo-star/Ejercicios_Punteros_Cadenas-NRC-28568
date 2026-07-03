#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, n3;
    float *pN1 = &n1, *pN2 = &n2, *pN3 = &n3;

    printf("Ingrese la nota 1: ");
    scanf("%f", pN1);
    printf("Ingrese la nota 2: ");
    scanf("%f", pN2);
    printf("Ingrese la nota 3: ");
    scanf("%f", pN3);

    float promedio;
    float *pPromedio = &promedio;

    *pPromedio = (*pN1 + *pN2 + *pN3) / 3.0;

    printf("El promedio final es: %.2f\n", *pPromedio);
    return 0;
}
