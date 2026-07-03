#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    float celsius;
    float *pCelsius = &celsius;

    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%f", pCelsius);

    float fahrenheit;
    float *pFahrenheit = &fahrenheit;
  
    *pFahrenheit = ((*pCelsius) * 9.0 / 5.0) + 32.0;

    printf("%.1f grados Celsius equivalen a %.1f grados Fahrenheit.\n", *pCelsius, *pFahrenheit);
    return 0;
}
