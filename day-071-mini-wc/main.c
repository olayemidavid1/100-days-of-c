/*
 * Day 71/100: Mini `wc`
 * Phase: Files and command-line tools
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: command-line arguments, file reading, fgetc
 *
 * STEPS:
 *   1. int main(int argc, char *argv[]); if argc != 2 print usage and return 1
 *   2. Open argv[1] with fopen; check for NULL
 *   3. Read with fgetc: count characters, count '\n' as lines, count words with an in_word flag
 *   4. Print lines, words, chars and compare with the real wc
 *
 * STRETCH GOAL: Support several files and print a total
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
    (void)argc; (void)argv;  // remove these once you use them
    // TODO: write your code here, following the steps above
    return 0;
}
