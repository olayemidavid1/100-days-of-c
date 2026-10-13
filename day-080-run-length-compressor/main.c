/*
 * Day 80/100: Run-length compressor
 * Phase: Files and command-line tools
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: string processing, encode/decode
 *
 * STEPS:
 *   1. Encode "aaabcc" as "3a1b2c": loop, count repeats, write count then char
 *   2. Decode: read the number (could be more than 1 digit), then repeat the next char that many times
 *   3. Test on a text file and check decode(encode(x)) == x
 *
 * STRETCH GOAL: Make it work on binary files and measure the compression ratio
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
