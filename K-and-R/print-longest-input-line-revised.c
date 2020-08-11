/*
 * As a revision, i decide to write this version from scratch for practice.
 *
 * Note:
 * As a JS developer, it's naturally uncomfortable encounting revised version
 * of print-longest-input-line program in k&R 1.10 at first glance.
 * K&R later explains of course it's error-prone to heavily wiring external
 * variable and functions. Decoupling is always important.
 * So I just treat this revised version as a language feature practice and not
 * necessary a good coding style. And for simplicity, no redundant using
 * extern.
 */

#include <stdio.h>

#define MAX_LINE 1000

int get_line(void);
void copy(void);

char line[MAX_LINE];
char longest_line[MAX_LINE];

int main(void)
{
    int len, longest;
    len = longest = 0;

    while ((len = get_line()) > 0) {
        if (len > longest) {
            longest = len;
            copy();
        }
    }

    if (longest > 0) {
        printf("%d: %s", longest, longest_line);
    }

    return 0;
}

int get_line()
{
    int c, i;
    int limit = MAX_LINE;

    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }

    if (c == '\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';

    return i;
}

void copy(void)
{
    int i = 0;

    while ((longest_line[i] = line[i]) != '\0') {
        i++;
    }
}
