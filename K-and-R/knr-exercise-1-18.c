/*
 * print lines and remove trailing blanks and tabs of each line. And delete
 * entirely blank lines.
 */

#include <stdio.h>

#define MAX_LINE 1000

int get_line(char line[], int limit);
void truncate_trailing_blanks_tabs(char line[]);

int main(void)
{
    char line[MAX_LINE];
    int len = 0;

    while ((len = get_line(line, MAX_LINE)) > 0) {
        if (len == 1) continue;
        truncate_trailing_blanks_tabs(line);
        printf("%s", line);
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

void truncate_trailing_blanks_tabs(char line[])
{
    int i, truncate_index;
    i = truncate_index = 0;

    while (line[i] != '\0') {
        if (line[i] != ' ' && line[i] != '\t' && line[i] != '\n') {
            truncate_index = i;
        }
        i++;
    }

    line[truncate_index + 1] = '\n';
    line[truncate_index + 2] = '\0';
}
