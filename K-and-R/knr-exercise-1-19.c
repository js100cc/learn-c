/*
 * print lines which reverse every character in each line.
 */

#include <stdio.h>

#define MAX_LINE 1000

int get_line(char line[], int limit);
int get_string_length(char str[]);
void reverse(char str[]);

int main(void)
{
    char line[MAX_LINE];
    int len = 0;

    while ((len = get_line(line, MAX_LINE)) > 0) {
		reverse(line);
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

int get_string_length(char str[])
{
	int i = 0;
	
	while (str[i] != '\0') {
		i++;
	}

	return i;
}

void reverse(char str[])
{
	int i;
	int str_length = get_string_length(str);
	char reversed_str[str_length];

	i = 0;
	while (str[i] != '\0') {
		reversed_str[str_length - 1 - i] = str[i];
		i++;
	}

	i = 0;
	while (str[i] != '\0') {
		str[i] = reversed_str[i];
		i++;
	}
}
