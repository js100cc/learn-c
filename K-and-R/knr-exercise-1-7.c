/*
 * Write a program to print the value of EOF
 *
 * shell: grep '#define EOF' $(whereis stdio.h) 2> /dev/null
 */

#include <stdio.h>

int main(void)
{
    printf("%d\n", EOF);    // normally, it's -1

    return 0;
}
