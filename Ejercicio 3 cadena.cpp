#include <iostream>
#include <stdio.h>

int main() {

    char cadenaUno[100];
    char cadenaDos[100];

    char *p;
    char *q;

    printf("Ingrese la primera cadena: ");
    scanf("%s", cadenaUno);

    printf("Ingrese la segunda cadena: ");
    scanf("%s", cadenaDos);

    p = cadenaUno;
    q = cadenaDos;

    while (*p != '\0' && *q != '\0' && *p == *q) {

        p++;
        q++;

    }

    if (*p == '\0' && *q == '\0') {

        printf("\nLas cadenas son iguales.");

    } else {

        printf("\nLas cadenas son diferentes.");

    }

    return 0;
}
