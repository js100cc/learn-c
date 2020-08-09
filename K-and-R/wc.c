/*
 * word counting, K&R page 20
 * count lines, words, chars
 * Assume: a word is delimited by whitespaces include ' ', '\t' and '\n'
 *
 * similar to wc
 */

#include <stdio.h>

#define IN 1    /* status code, char inside a word */
#define OUT 0   /* status code, char outside a word */

int main(void)
{
    int c, state;
    int nlines, nchars, nwords;

    nlines = nchars = nwords = 0;
    state = OUT;

    while ((c = getchar()) != EOF) {
        /* It's simple to count chars and lines */
        nchars++;
        if (c == '\n') {
            nlines++;
        }

        /* It's hard to count words since I'm a JS guy and could do it with
         * API or RegExp naturally.
         *
         * K&R show me a new thought about programming.
         */

        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            nwords++;
        }
    }

    printf("%d %d %d\n", nlines, nwords, nchars);

    return 0;
}
