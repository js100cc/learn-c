/*
 * K&R page 22
 * count digits(0-9), whitespaces and others
 *
 * NOTE: This repo's code may not exactly the same as K&R,
 *       i normally read the code, and rewrite it base on my own
 *       memory and understanding.
 */

#include <stdio.h>

int main(void)
{
    int digits[10];
    int i, c, whitespaces, others;
    whitespaces = others = 0;

    for (i = 0; i < 10; i += 1) {
        digits[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            digits[c - '0'] += 1;
        } else if (c == ' ' || c == '\t' || c == '\n') {
            whitespaces += 1;
        } else {
            others += 1;
        }
    }

    for (i = 0; i < 10; i += 1) {
        printf("digit %d count: %d\n", i, digits[i]);
    }
    printf("%d whitespaces\n", whitespaces);
    printf("%d other characters\n", others);

    /* test array over-boundary.
     * this printf shows that C allow array index over-boundary.
     * pay attention when coding.
     */
    printf("%d\n", digits[100]);

    return 0;
}

/*
 * some testing digits:
 * 123456789
 * 345
 * ./a.out < count-digits.c
 */
