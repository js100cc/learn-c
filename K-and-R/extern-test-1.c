#include <stdio.h>

int a = 10;

int main(void)
{
    extern int b;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);  /* comment this line and compilation will be ok */

    return 0;
}

int b = 20;
int c = 30;
