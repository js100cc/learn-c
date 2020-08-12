/*
 * mimic atoi, parse string to number
 *
 * For JS, it's seems easy, Number(string)
 *
 */

/*
 * Personal Notes: It's time 22:00 PM, and this repo has not updated yet.
 * I can't promise myself I definitely commit every day.
 * My purpose is to learn programming, and JS is my intended main language.
 * Thus, in some days I probably learning JS or other languages.
 * Though, I will try my best keepig learning C.
 */

#include <stdio.h>

int atoi_mimic(char str[]);

int main(void)
{
    char str[] = "123";

    printf("%d\n", atoi_mimic(str));

    return 0;
}

int atoi_mimic(char str[])
{
    int i, num;
    i = num = 0;

    while (str[i] != '\0') {
        num = num * 10 + (str[i] - '0'); /* it's easy to forget it's ascii */
        i++;
    }

    return num;
}
