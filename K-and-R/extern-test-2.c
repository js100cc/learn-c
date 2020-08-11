#include <stdio.h>

/*
 * Definition is also a declaration in it's own scope.
 * But declaration is not necessary a definition.
 * Definition means allocate memory for a variable.
 * Declaration just means telling compiler there is a variable to use and
 * no memory allocated except this declaration is a by-product of definition.
 *
 * Normally, definition and declaration is interchangeable, except situations
 * like extern, it's just declaration and not definition.
 *
 * The definition must be occured somewhere in this file or other file.
 *
 * This program thorw a linking error. And a funny thing happens, previous
 * a.out would be delete after trying compile this program.
 */

int main(void)
{
    extern int a;
    printf("%d\n", a);

    return 0;
}

/*
 * Note for JS programmer, C is a compiling static strong-type language, 
 * variable in c need a type and it's memory need to be pre-allocated and fixed.
 * JS and many other interpreted language NOT as this, i.e. values has type but
 * variable don't, also, variable just a reference to value of which address is
 * dynamic allocated.
 */
