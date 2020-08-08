/*
 * K&R: It's bad practice to bury "magic numbers" like 300 and 20 in a program;
 *      They convey little information to someone who might have to read the
 *      program later
 */

#include <stdio.h>

#define PI 3.1415F   /* use preprocessor directive define a macro PI */

/*
 * macro(PI) will be replaced by corresponding text(3.1415F) when matched 
 * by token in code when compiling reaching first phase, i.e. preprocessing.
 *
 * And #include <stdio.h> could be regard as insert the contents of stdio.h
 * into this file
 */

int main(void)
{
    int radius = 10;
    float area = PI * radius * radius;  /* macro PI match here */
    printf("Area of circle with radius 10 is: %6.2f\n", area);
    printf("This program defined a macro PI with 3.1415F\n");   /* Not here */
    printf("The upper statement shows that macro replace token\n");
    printf("And not replace part of token\n");

    return 0;
}
