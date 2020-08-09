/*
 * use goto statement to mimic loop
 *
 * NOTE: Although this is interesting, but this code is Non-structrued
 *       and it's logic is hard to understand and maintain when more and more
 *       goto exists. Code like this is called Spaghetti code.
 *       goto is popular before C like BASIC and Assembly. Don't use it in C
 *       if not absolute necessary.
 */

#include <stdio.h>
#include <unistd.h>

/*
 * Please use sleep function, especially if you want to redirect the output
 * to a file. Without sleep this program will output lines about billion times
 * per second or occupy about 1GB/second || max-disk-speed/second disk storage
 * if redirection.
 */

int main(void)
{
    int i, result;
    i = result = 0;
loop:
    if (i < 10) {
        result += i;
        i++;
        goto loop;
    }
    printf("result is %d\n", result);

A:
    printf("A\n");
    sleep(1);
    goto B;
B:
    printf("B\n");
    sleep(1);
    goto A;

    return 0;
}
