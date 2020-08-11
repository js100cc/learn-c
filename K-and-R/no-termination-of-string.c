#include <stdio.h>

int main(void)
{
    /*
     * When use array to store string, the array's size should be
     * larger than or equal to string length + 1, 1 for '\0'.
     * If not, this program may print something like this:
     * 0x7fff11c1960a, hihello world
     * 0x7fff11c1960c, hello world
     *
     * This is another funny thing of C
     */

    char str1[2] = "hi";    /* no '\0', i.e. null character stored in str1 */
    char str2[] = "hello world";
    printf("%p, %s\n", str1, str1);
    printf("%p, %s\n", str2, str2);

    return 0;
}
