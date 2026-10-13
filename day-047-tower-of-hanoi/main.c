/*
 * Day 47/100: Tower of Hanoi (with move printout)
 * Phase: Classic games and puzzles
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: recursion
 *
 * STEPS:
 *   1. hanoi(n, from, to, via)
 *   2. If n == 0 return. Otherwise: hanoi(n-1, from, via, to); print 'move disk n from to'; hanoi(n-1, via, to, from);
 *   3. Count the moves, it should be 2^n - 1
 *
 * STRETCH GOAL: Ask the user for n and print the move count before the moves
 */

#include <stdio.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
