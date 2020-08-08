/*
 * File: hello.c
 * Compile: cc hello.c
 * Run: ./a.out
 */

#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
    return 0;
}

/*
 * Mimic K&R command style
 * 1. Arch Linux /usr/bin/cc comand is already automtically symbolic linked
 *    to /usr/bin/gcc.
 * 2. For directly `a.out` without `./` like K&R, put or symlink a.out to
 *    a path in $PATH, like, `export PATH=~/bin:$PATH`. Since a compiled C
 *    program is already an executable, no need to `chmod +x`
 */

/*
 * K&R exercise 1-1, do some changes, like:
 * 1. omit preprocessor directive notation #
 * 2. mismatch () or {} or ""
 * 3. omit ;
 * 4. print some other text
 * 5. printf typo as print
 * ...
 *
 * use gcc and clang both, since one or other may show useful info.
 */
