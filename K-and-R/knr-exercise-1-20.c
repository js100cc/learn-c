/*
 * Write a program detab that replaces tabs in the input with the proper
 * number of blanks to space to the next tab stop. Assume a fixed set of 
 * tab stops, say every n columns. Should n be a variable or a symbolic
 * parameter?
 */

#include <stdio.h>

int padSpaces(int index, int tabstop);

int main(void)
{
    int c, i, tabstop;
    tabstop = 4;
    i = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            i += padSpaces(i, tabstop);
        } else {
            putchar(c);
            i++;
        }
    }
}

int padSpaces(int index, int tabstop)
{
    int i = 0;
    int nspaces_to_pad = tabstop - (index % tabstop);

    while (i < nspaces_to_pad) {
        putchar(' ');
        i++;
    }

    return nspaces_to_pad;
}
