/*
 * print lines and their length
 */

#include <stdio.h>

#define MAX_LINE 1000

int get_line(char line[], int limit);

int main(void)
{
    char line[MAX_LINE];
    int len;

    while ((len = get_line(line, MAX_LINE)) > 0) {
        printf("%d: %s", len, line);
    }

    return 0;
}

int get_line(char line[], int limit)
{
    int c, i;

    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = '\n';
        i++;
    }
    line[i] = '\0';
    return i;
}
