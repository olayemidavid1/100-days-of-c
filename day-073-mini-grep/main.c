/*
 * Day 73/100: Mini `grep`
 * Phase: Files and command-line tools
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: strstr, argv, case-insensitive matching
 *
 * STEPS:
 *   1. Usage: ./mygrep pattern file
 *   2. Read each line with fgets; if strstr(line, pattern) print it with its line number
 *   3. Add -i by lowercasing copies of both strings before searching (tolower)
 *
 * STRETCH GOAL: Add -c (count only) and -v (invert match)
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    (void)argc; (void)argv;  // remove these once you use them
    // TODO: write your code here, following the steps above
    return 0;
}
