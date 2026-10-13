/*
 * Day 84/100: Brainfuck interpreter
 * Phase: Systems and parsing
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: interpreters, arrays, loops and bracket matching
 *
 * STEPS:
 *   1. unsigned char cells[30000] = {0}; int ptr = 0;
 *   2. Commands: > < move pointer, + - change cell, . prints char, , reads char
 *   3. [ jumps past matching ] if cell == 0; ] jumps back if cell != 0 (precompute matches or scan)
 *   4. Test: ++++++++[>++++++++<-]>+.  prints A
 *
 * STRETCH GOAL: Run a Hello World brainfuck program from a file
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
