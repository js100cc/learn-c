/*
 * pipe inout to output, replace multiple continuous blanks with single blank
 */

#include <stdio.h>

int main(void)
{
    int c;
    int prev = -1;  /* placeholder for previous char */
    
    /*
     * Since this exercise is before introducing of break, continue, else, 
     * and logical operator and ...
     * this solution is not that elegant due if statement is the only control
     */

    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
        }
        if (c == ' ') {
            if (prev != ' ') {
                putchar(c);
            }
        }
        prev = c;
    }

    return 0;
}
