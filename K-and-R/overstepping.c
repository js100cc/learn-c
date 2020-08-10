#include <stdio.h>

void copy(char to[], char from[]);

/*
 * When array index overstepping happens, many unexpected things
 * may happen.
 */

int main(void)
{
    char a[3];
    char b[] = "hello";
    printf("%p\n", a);
    printf("%p\n", b);
    printf("%s\n", b);
    copy(a, b);
    printf("%s\n", a);
    printf("%s\n", b);

    return 0;
}

void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}
