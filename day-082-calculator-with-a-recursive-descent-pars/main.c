/*
 * Day 82/100: Calculator with a recursive-descent parser
 * Phase: Systems and parsing
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: recursive descent parsing, grammar thinking
 *
 * STEPS:
 *   1. Grammar: expr = term { (+|-) term }; term = factor { (*|/) factor }; factor = number | '(' expr ')' | '-' factor
 *   2. Write one function per rule; each returns a double
 *   3. Use your Day 81 tokenizer: keep a current token and an advance() function
 *
 * STRETCH GOAL: Add ^ (power, right-associative) and functions like sqrt(...)
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
