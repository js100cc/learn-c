/*
 * Add a heading for temperature table.
 * Based on ./knr-exercise-1-3.c
 */

#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -20;
    upper = 150;
    step = 10;

    celsius = lower;

    printf("Cels\tFahr\n");

    while (celsius <= upper) {
        fahr = celsius * 9.0 / 5 + 32;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}
