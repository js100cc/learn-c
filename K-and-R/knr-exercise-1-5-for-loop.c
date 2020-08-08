/*
 * Print Fahr-Celsius table in reverse order, i.e. from 300 to 0
 * Use for loop statement
 */

#include <stdio.h>

int main(void)
{
    int fahr;

    /* Heading */
    printf("Fahr\tCelsius\n");

    /* Table */
    for (fahr = 300; fahr >= 0; fahr -= 20) {
        printf("%3d\t%6.1f\n", fahr, 5.0 * (fahr - 32) / 9);
    }

    return 0;
}
