#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int tabla;
    int *pTabla = &tabla;

    printf("¿De que numero desea ver la tabla?: ");
    scanf("%d", pTabla);

    printf("\n--- Tabla del %d\n", *pTabla);

    int i;
    int *pI = &i;

    for (*pI = 1; *pI <= 10; (*pI)++) {
        printf("%d x %d = %d\n", *pTabla, *pI, (*pTabla) * (*pI));
    }

    return 0;
}
