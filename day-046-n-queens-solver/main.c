/*
 * Day 46/100: N-Queens solver
 * Phase: Classic games and puzzles
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: backtracking, diagonals
 *
 * STEPS:
 *   1. col[row] stores which column the queen in that row sits in
 *   2. is_safe(row, c): for every earlier row r, col[r] != c and abs(col[r]-c) != abs(r-row)
 *   3. place(row): try every column, recurse to row + 1, count a solution when row == n
 *
 * STRETCH GOAL: Print the first solution as a board. For n = 8 there are 92 solutions
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
