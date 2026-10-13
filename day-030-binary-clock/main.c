/*
 * Day 30/100: Binary clock
 * Phase: Number crunchers
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: time(), localtime(), bitwise operators
 *
 * STEPS:
 *   1. time_t t = time(NULL); struct tm *tm = localtime(&t);
 *   2. For hours, minutes, seconds: print each bit with (value >> i) & 1
 *   3. Loop with sleep(1) and \r (or clear the screen) to refresh
 *
 * STRETCH GOAL: Draw lit bits as '#' and unlit as '.' in columns like a real binary clock
 */

#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
