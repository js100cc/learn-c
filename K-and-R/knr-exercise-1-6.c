/*
 * Verify that the expression getchar() != EOF is 0 or 1.
 *
 * Same as file-copying, valid comparision in c is either 0 or 1
 */

#include <stdio.h>

int main(void)
{
    int c;
    while ((c = getchar()) != EOF) {
        printf("%d", c != EOF);
    }
    printf("%d", c != EOF);

    return 0;
}
