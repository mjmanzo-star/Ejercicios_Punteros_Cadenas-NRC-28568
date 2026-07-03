#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    int *pA = &a;
    int *pB = &b;

    printf("Ingrese el valor para A: ");
    scanf("%d", pA);
    printf("Ingrese el valor para B: ");
    scanf("%d", pB);

    printf("\nValores originales: A = %d, B = %d\n", *pA, *pB);

    int aux;
    int *pAux = &aux;

    *pAux = *pA;  
    *pA = *pB;    
    *pB = *pAux;  

    printf("Valores intercambiados: A = %d, B = %d\n", *pA, *pB);
    return 0;
}
