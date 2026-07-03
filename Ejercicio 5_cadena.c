#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char cadena[100];
    printf("Ingrese una palabra: ");
    scanf("%s", cadena);

    char *p = cadena;
    
    while (*p != '\0') {
        p++;
    }
    p--; 

    printf("La palabra invertida es: ");
    while (p >= cadena) {
        printf("%c", *p);
        p--;
    }
    printf("\n");

    return 0;
}
