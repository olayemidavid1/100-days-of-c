/*
 * Day 85/100: Tiny stack-based virtual machine
 * Phase: Systems and parsing
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: enums, switch dispatch, stack machines
 *
 * STEPS:
 *   1. enum { PUSH, ADD, SUB, MUL, PRINT, JMP, JZ, HALT };
 *   2. int program[] = { PUSH, 2, PUSH, 3, ADD, PRINT, HALT };
 *   3. Loop with pc: switch (program[pc++]) and a stack array with sp
 *   4. Write a program that counts from 5 to 0 using JMP/JZ
 *
 * STRETCH GOAL: Write a tiny assembler that reads text like 'PUSH 2' into the int array
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
