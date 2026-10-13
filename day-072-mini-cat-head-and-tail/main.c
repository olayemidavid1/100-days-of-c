/*
 * Day 72/100: Mini `cat`, `head` and `tail`
 * Phase: Files and command-line tools
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: argv, fgets, circular buffer
 *
 * STEPS:
 *   1. Usage: ./tool cat|head|tail file
 *   2. cat: print every line. head: stop after 10 lines
 *   3. tail: keep the last 10 lines in a char lines[10][1024] ring buffer using count % 10, then print them in order
 *
 * STRETCH GOAL: Support -n 20 to change the number of lines
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    (void)argc; (void)argv;  // remove these once you use them
    // TODO: write your code here, following the steps above
    return 0;
}
