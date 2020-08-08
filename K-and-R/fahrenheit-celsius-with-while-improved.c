/*
 * K&R page 12
 * print Fahrenheit-Celsius table with while statement, improved
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
    while (fahr <= upper) {
        celsius = 5.0 / 9 * (fahr - 32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}

/*
 * Improvement:
 * 1. use float instead of int
 * 2. right-justified output by printf specifiers
 */
