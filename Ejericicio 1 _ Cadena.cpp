#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {

    char numeroUnoTexto[20];
    char numeroDosTexto[20];

    float numeroUno;
    float numeroDos;

    printf("Ingrese el primer numero: ");
    scanf("%s", numeroUnoTexto);

    printf("Ingrese el segundo numero: ");
    scanf("%s", numeroDosTexto);

    numeroUno = atof(numeroUnoTexto);
    numeroDos = atof(numeroDosTexto);

    printf("\nSuma: %.2f\n", numeroUno + numeroDos);
    printf("Producto: %.2f\n", numeroUno * numeroDos);
    printf("Diferencia: %.2f\n", numeroUno - numeroDos);

    if (numeroDos != 0) {

        printf("Cociente: %.2f\n", numeroUno / numeroDos);
        printf("Residuo: %d\n", (int)numeroUno % (int)numeroDos);

    } else {

        printf("No se puede dividir para cero.\n");

    }

    return 0;
}
