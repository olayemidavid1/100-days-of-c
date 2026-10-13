/*
 * Day 53/100: RPN (postfix) calculator using a stack
 * Phase: Build your own data structures
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: stack, parsing tokens, strtod
 *
 * STEPS:
 *   1. Stack of doubles in an array plus a top index
 *   2. Read tokens with scanf("%s"). If it is a number (strtod), push it
 *   3. If it is an operator, pop two, calculate, push the result
 *   4. Example: 3 4 + 2 *  ->  14
 *
 * STRETCH GOAL: Report an error on stack underflow or division by zero
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
