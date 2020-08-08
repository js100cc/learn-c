/*
 * Add a heading for temperature table.
 * Based on ./fahrenheit-celsius-with-while-improved.c
 */

#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("Fahr\tCelsius\n");

    while (fahr <= upper) {
        celsius = 5.0 / 9 * (fahr - 32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
