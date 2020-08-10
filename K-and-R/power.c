/*
 * K&R page 25
 */

#include <stdio.h>

int power(int base, int n);

int main(void)
{
    int i;
    for (i = 0; i < 10; i += 1) {
        printf("%d %d %d\n", i, power(i, 2), power(2, i));
    }
    
    return 0;
}

int power(int base, int n)
{
    return n == 0 ? 1 : base * power(base, n - 1);
}
