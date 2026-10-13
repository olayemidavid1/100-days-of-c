/*
 * Day 74/100: File copier with progress bar
 * Phase: Files and command-line tools
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: binary file I/O, fread/fwrite, progress output
 *
 * STEPS:
 *   1. Open the source "rb" and destination "wb"
 *   2. Get the size: fseek(f, 0, SEEK_END); size = ftell(f); rewind(f);
 *   3. Copy with fread into a 4096-byte buffer and fwrite what you read
 *   4. Print progress as a percentage using \r
 *
 * STRETCH GOAL: Compare the copy to the original byte by byte
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
    (void)argc; (void)argv;  // remove these once you use them
    // TODO: write your code here, following the steps above
    return 0;
}
