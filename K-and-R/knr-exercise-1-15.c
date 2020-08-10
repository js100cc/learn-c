/*
 * Rewrite the temperature conversion program, use a function for conversion
 */

#include <stdio.h>

float f2c(int fahr);

int main(void)
{
    printf("Fahr\tCelsius\n");
    for (int fahr = 0; fahr <= 300; fahr += 20) {
        printf("%3.0d\t%6.1f\n", fahr, f2c(fahr));
    }

    return 0;
}

/* convert fahrenheit to celsius */
float f2c(int fahr)
{
    return 5.0 / 9 * (fahr - 32);
}
