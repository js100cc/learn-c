/*
 * Write a program to count blanks, tabs, and newlines.
 *
 * In theoretical, this program can handle about 2GB input.
 * Use long type if necessary.
 */

#include <stdio.h>

int main(void)
{
    int c;
    int nblanks, ntabs, nlines;
    /* Assume: blank is ' ', tab is '\t' and newline is '\n' */

    nblanks = ntabs = nlines = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            nblanks++;
        }
        if (c == '\t') {
            ntabs++;
        }
        if (c == '\n') {
            nlines++;
        }
    }

    printf("%d blanks, %d tabs, %d lines.\n", nblanks, ntabs, nlines);

    return 0;
}
