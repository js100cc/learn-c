/*
 * pipe input to output, make '\t', '\b', '\' visible
 */

#include <stdio.h>

int main(void)
{
    int c;

    /*
     * similar to 1-9, if statement is the only control ...
     *
     * Some keyboard shortcut in Linux shell readline
     * C-D if it's the first char means EOF
     * C-H means backspace, i.e. '\b'
     * Tab for tab, i.e. '\t'
     * Enter|Return for newline, i.e. '\n'
     *
     * for more, checkout man 3 readline
     */

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
        }
        if (c == '\b') {
            printf("\\b");
        }
        if (c == '\\') {
            printf("\\\\");
        }
        if (c != '\t') {
            if (c != '\b') {
                if (c != '\\') {
                    putchar(c);
                }
            }
        }
    }

    return 0;
}
