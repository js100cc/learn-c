/*
 * Write a program to print a histogram of the lengths fo words in its input.
 * It is easy to draw the histogram with the bars horizontal; a vertical
 * orientation is more challenging.
 */

#include <stdio.h>

#define MAX_WORD_LENGTH (100) /* Assume no word's length exceed 100 */
#define IN 1
#define OUT 0

/*
 * Much the same as 1-13, actually i first implemented this one
 */

int main(void)
{
    int i, j, c, length, state, word_length_array[MAX_WORD_LENGTH], max_length;

    length = 0;
    state = OUT;

    for (i = 0; i < MAX_WORD_LENGTH; i += 1) {
        word_length_array[i] = 0;
    }

    /* count words length */
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
            if (length != 0) {
                word_length_array[length] += 1;
            }
            length = 0;
        } else if (state == OUT) {
            length = 1;
            state = IN;
        } else {
            length += 1;
            state = IN;
        }
    }

    /* horizontal bar */
    for (i = 0; i < MAX_WORD_LENGTH; i += 1) {
        if (word_length_array[i] != 0) {
            printf("len %d (%d):\t", i, word_length_array[i]);
            for (j = 0; j < i; j += 1) {
                printf("*");
            }
            printf("\n");
        }
    }

    printf("----------------\n");

    /* get max words in all length */
    max_length = 0;
    for (i = 0; i < MAX_WORD_LENGTH; i += 1) {
        if (word_length_array[i] != 0) {
            max_length = i;
        }
    }

    /* vertical bar */
    for (i = 0; i < max_length; i += 1) {
        for (j = 0; j < MAX_WORD_LENGTH; j += 1) {
            if (word_length_array[j] == 0) continue;
            if (i + j < max_length) {
                printf("   ");
            } else {
                printf(" * ");
            }
        }
        printf("\n");
    }
    for (i = 0; i < MAX_WORD_LENGTH; i += 1) {
        if (word_length_array[i] != 0) {
            printf("%3d", i);
        }
    }
    printf("\n");

    return 0;
}

/*
 * test
 * ./a.out < knr-exercise-1-13.c
 */
