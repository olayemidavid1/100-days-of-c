/*
 * Day 78/100: File diff tool
 * Phase: Files and command-line tools
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: reading two files in parallel
 *
 * STEPS:
 *   1. Open both files from argv
 *   2. Loop: fgets a line from each; if either returns NULL handle the shorter file
 *   3. Print 'line N:' then '< line from file 1' and '> line from file 2' for differences
 *
 * STRETCH GOAL: Implement a real diff with the longest common subsequence
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    (void)argc; (void)argv;  // remove these once you use them
    // TODO: write your code here, following the steps above
    return 0;
}
