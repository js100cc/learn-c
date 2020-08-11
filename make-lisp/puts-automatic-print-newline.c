#include <stdio.h>

int main(void)
{
    int n = puts("hello world");    /* puts automatic print '\n' */
    printf("%d\n", n);
    printf("hello world");

    return 0;
}
