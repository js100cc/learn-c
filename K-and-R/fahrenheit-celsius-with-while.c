/*
 * K&R page 9
 * print Fahrenheit-Celsius table with while statement
 */

#include <stdio.h>

int main(void)
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}

/*
 * Not much specials here for JS programmer or other c-like languages.
 * Only one, `5/9`, some languages like python2 and c, evaluate it as 0,
 * the fraction part is truncated or floor-divided respectively for c
 * and python2, python3 changed this feature and use `//` to do floor-division
 *
 * This example may better implemented by a for loop later,
 * as it's more compact and clear.
 */
