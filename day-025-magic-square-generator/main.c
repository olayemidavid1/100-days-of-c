/*
 * Day 25/100: Magic square generator
 * Phase: Number crunchers
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: 2D arrays, modular wrap-around, algorithm following
 *
 * STEPS:
 *   1. Only works for odd n. Start at the top middle cell with number 1
 *   2. Move up and right (wrap with % n). If the cell is taken, move down one instead
 *   3. Fill 1..n*n, then check every row, column and diagonal sums to n*(n*n+1)/2
 *
 * STRETCH GOAL: Print the magic constant and verify it automatically
 */

#include <stdio.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
