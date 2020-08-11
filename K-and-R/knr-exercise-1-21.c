/*
 * Write a program entab that relaces strings of blanks by the minimum number
 * of tabs and blanks to achieve the same spacing. Use the same tab stops
 * as for detab. When either a tab or a single blank would suffice to reach
 * a tab stop, which should be given preference?
 */

#include <stdio.h>

int main(void)
{
    int c, i, tabstop, nspaces;
    i = nspaces = 0;
    tabstop = 4;

    while ((c = getchar()) != EOF) {

        /* if i reach next tab start, replace remaining spaces with a tab */
        if (i == tabstop) {
            if (nspaces) {
                putchar('\t');
            }
            nspaces = 0;
            i = 0;
        }

        if (c == ' ') {
            nspaces++;
        } else {
            if (nspaces) {
                for (int j = 0; j < nspaces; j++) {
                    putchar(' ');
                }
            }
            putchar(c);
            nspaces = 0;
        }

        if (c == '\n') {
            i = 0;
        } else {
            i++;
        }
    }

    return 0;
}
