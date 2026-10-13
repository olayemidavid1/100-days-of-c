/*
 * Day 76/100: CSV to JSON converter
 * Phase: Files and command-line tools
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: string handling, careful output formatting
 *
 * STEPS:
 *   1. First line gives the keys
 *   2. Print [ then one {...} object per row: "key": value
 *   3. No trailing comma after the last item (print the comma BEFORE every item except the first)
 *   4. Numbers unquoted, text in quotes (check with strtod)
 *
 * STRETCH GOAL: Escape quotes and backslashes inside strings
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    (void)argc; (void)argv;  // remove these once you use them
    // TODO: write your code here, following the steps above
    return 0;
}
