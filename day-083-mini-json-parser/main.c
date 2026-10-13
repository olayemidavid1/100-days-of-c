/*
 * Day 83/100: Mini JSON parser
 * Phase: Systems and parsing
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: recursion, tagged unions, parsing
 *
 * STEPS:
 *   1. Start small: parse numbers, strings, true/false/null and arrays
 *   2. struct Value { enum Type type; double num; char *str; struct Value **items; int count; };
 *   3. parse_value() looks at the next char and calls the right helper
 *   4. Write print_value() to print it back and compare
 *
 * STRETCH GOAL: Add objects { "key": value } and error messages with position
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
