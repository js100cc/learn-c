/*
 * print longest input line
 */

#include <stdio.h>

#define MAX_LINE 1000

void copy(char to[], char from[]);
int get_line(char line[], int limit);

int main(void)
{
    char line[MAX_LINE];
    char longest[MAX_LINE];
    int len, max_len;
    max_len = 0;

    while ((len = get_line(line, MAX_LINE)) > 0) {
        if (len > max_len) {
            max_len = len;
            copy(longest, line);
        }
    }

    if (max_len > 0) {
        printf("longest line(length: %d): \n%s", max_len, longest);
    }

    return 0;
}

void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
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

/*
 * It's important to not overstepping array index boundary.
 * check overstepping.c
 */
