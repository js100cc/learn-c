/*
 * file copying revised
 * K&R page 17
 * assignment is expression and evaluate a value as the value of left-hand
 */

#include <stdio.h>

int main(void)
{
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}

/*
 * NOTE: this feature applys to many c-like languages but not necessary for 
 *       other languages like Python
 */
