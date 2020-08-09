/*
 * print input one word per line.
 *
 */

#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
    int c, state;
    state = OUT;

    /*
     * reverse the logic compared to wc.c
     * i.e. print newline when char leave a word not enter a word
     */
    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            putchar(c);
            state = IN;
        } else if (state == IN) {
            putchar('\n');
            state = OUT;
        }
    }

    return 0;
}
