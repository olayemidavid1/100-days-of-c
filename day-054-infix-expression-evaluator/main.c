/*
 * Day 54/100: Infix expression evaluator
 * Phase: Build your own data structures
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: two stacks, operator precedence
 *
 * STEPS:
 *   1. One stack for numbers, one for operators (shunting-yard idea)
 *   2. Precedence: * and / beat + and -. Before pushing an operator, apply any stacked operator of equal or higher precedence
 *   3. Parentheses: push '(' and pop until you find it when you see ')'
 *   4. At the end, apply everything left on the operator stack
 *
 * STRETCH GOAL: Convert infix to postfix and evaluate with your Day 53 calculator
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
