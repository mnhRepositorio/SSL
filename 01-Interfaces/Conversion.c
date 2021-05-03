#include <stdio.h>
#include "Conversion.h"
#include "TablasDeConversion.h"

const int LOWER = 0; /* límite inferior de la tabla */
const int UPPER = 300; /* límite superior */
const int STEP = 20; /* tamaño del incremento */

int main(void)
{
    /*imprime la tabla Fahrenheit-Celsius */
    ImprimirTitulo("Fahrenheit", "Celsius");
    ImprimirTituloTabla("Fahrenheit", "Celsius");
    int fahrenheit;
    for (fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit = fahrenheit + STEP)
    printf("%3d \t\t %6.1f\n", fahrenheit, Farenheit(fahrenheit));

    /*imprime la tabla Celsius-Fahrenheit */
    ImprimirTitulo("Celsius", "Fahrenheit");
    ImprimirTituloTabla("Celsius", "Fahrenheit");
    int celsius;
    for (celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP)
    printf("%3d \t\t %6.1f\n", celsius, Celsius(celsius));
}