/*
 * Day 43/100: Sudoku solver (backtracking)
 * Phase: Classic games and puzzles
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: recursion, backtracking
 *
 * STEPS:
 *   1. Find the next empty cell (0). If none, you have solved it: return 1
 *   2. Try numbers 1 to 9: if is_valid(row, col, num), place it and recurse
 *   3. If the recursive call fails, undo (set back to 0) and try the next number
 *
 * STRETCH GOAL: Count how many guesses/backtracks your solver needed
 */

#include <stdio.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
