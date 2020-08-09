/*
 * file copying
 * K&R page 16
 * like cat, but without file support, can be used with redirection
 */

#include <stdio.h>

int main(void)
{
    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }

    return 0;
}
