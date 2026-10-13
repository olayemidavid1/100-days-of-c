/*
 * Day 44/100: Conway's Game of Life
 * Phase: Classic games and puzzles
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: 2D arrays, neighbour counting, simulation
 *
 * STEPS:
 *   1. Grid 20x40 of 0/1. count_neighbours(r, c) checks the 8 surrounding cells (check the bounds!)
 *   2. Rules: alive with 2 or 3 neighbours survives; dead with exactly 3 comes alive
 *   3. Compute into a second grid, then copy it back
 *   4. Print each generation, clear the screen and usleep() between frames
 *
 * STRETCH GOAL: Start with a glider pattern and watch it move
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
