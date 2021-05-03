#include <stdio.h>
#include <assert.h>
#include "Conversion.h"

const int LOWER = 0; /* límite inferior de la tabla */
const int UPPER = 300; /* límite superior */
const int STEP = 20; /* tamaño del incremento */

int main(void)
{
    /*imprime la tabla Fahrenheit-Celsius */
    int fahrenheit;
    for (fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit = fahrenheit + STEP)
    assert(Farenheit(fahrenheit));
    //printf("%3d \t\t %6.1f\n", fahrenheit, Farenheit(fahrenheit));

    /*imprime la tabla Celsius-Fahrenheit*/
    int celsius;
    for (celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP)
    assert(Celsius(celsius));
    //printf("%3d %6.1f\n", celsius, Celsius(celsius));
}