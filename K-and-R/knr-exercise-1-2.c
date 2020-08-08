/*
 * File: knr-exercise-1-2.c
 * Compile: cc knr-exercise-1-2.c
 * Run: ./a.out
 */

#include <stdio.h>

int main(void)
{
    printf("An unknown escape sequence: \c.\n");
    return 0;
}

/*
 * Both gcc and clang show warning `unknown escape sequence \c`
 * But the compiling works, and the output is c and ignored the backslash
 * This is reasonable, for example, in JS, ES6 add additional `\u{...}` escape sequeces
 * which not in ES5. It's helpful for future addition to not regard unknown
 * escape sequences as error, just ignore the backslash.
 */
