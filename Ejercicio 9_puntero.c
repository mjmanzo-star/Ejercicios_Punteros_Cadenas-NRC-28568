#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int cantidad;
    int *pCantidad = &cantidad;

    printf("¿Cuantos numeros desea multiplicar?: ");
    scanf("%d", pCantidad);

    int producto = 1;
    int *pProducto = &producto;

    int numeroActual;
    int *pNumActual = &numeroActual;

    int i;
    int *pI = &i;

    for (*pI = 1; *pI <= *pCantidad; (*pI)++) {
        printf("Ingrese el numero %d: ", *pI);
        scanf("%d", pNumActual); 
        
        *pProducto = (*pProducto) * (*pNumActual);
    }

    printf("El producto total de los numeros ingresados es: %d\n", *pProducto);
    return 0;
}
