/*
 * Day 29/100: Terminal stopwatch/countdown timer
 * Phase: Number crunchers
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: sleep(), \r, fflush
 *
 * STEPS:
 *   1. Countdown: for (int s = N; s >= 0; s--) printf("\r%02d:%02d", s/60, s%60);
 *   2. Call fflush(stdout) after printf so it appears right away
 *   3. sleep(1); between updates
 *
 * STRETCH GOAL: Add a stopwatch mode that counts up until the user presses Enter
 */

#include <stdio.h>
#include <unistd.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
