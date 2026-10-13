/*
 * Day 98/100: Snake game with ncurses
 * Phase: Data science flavour and capstone
 *
 * Build: gcc -Wall -Wextra -o main main.c -lncurses
 * Run:   ./main
 *
 * YOU WILL PRACTISE: ncurses (install libncurses-dev; compile with -lncurses), game loops
 *
 * STEPS:
 *   1. initscr(); noecho(); curs_set(0); nodelay(stdscr, TRUE); keypad(stdscr, TRUE);
 *   2. Snake = array of (x, y); each frame: read a key with getch(), update direction, move
 *   3. Eat food: grow and place new food at random. Die on wall or self-collision
 *   4. Draw with mvaddch; frame delay with usleep(100000); endwin() before exit
 *
 * STRETCH GOAL: Speed up as the score grows and keep a high-score file
 */

#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
