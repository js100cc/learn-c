/*
 * count characters in input
 */

#include <stdio.h>

int main(void)
{
    long nc;

    while (getchar() != EOF) {
        ++nc;
    }
    printf("%ld\n", nc);

    return 0;
}
