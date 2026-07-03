#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    int *pNum1 = &num1;
    int *pNum2 = &num2;

    printf("Ingrese el primer numero: ");
    scanf("%d", pNum1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", pNum2);

    if (*pNum1 > *pNum2) {
        printf("El numero mayor es: %d\n", *pNum1);
    } else if (*pNum2 > *pNum1) {
        printf("El numero mayor es: %d\n", *pNum2);
    } else {
        printf("Ambos numeros son iguales.\n", *pNum1);
    }

    return 0;
}
