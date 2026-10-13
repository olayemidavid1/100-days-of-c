/*
 * Day 75/100: CSV reader with column stats
 * Phase: Files and command-line tools
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: string parsing, strtok, atof, files
 *
 * STEPS:
 *   1. Make a sample.csv with a header row and numeric columns
 *   2. Read the header, then each line; split with strtok(line, ",\n")
 *   3. Convert fields with atof and keep sum, min, max per column
 *   4. Print count, mean, min and max per column
 *
 * STRETCH GOAL: Handle quoted fields that contain commas
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    (void)argc; (void)argv;  // remove these once you use them
    // TODO: write your code here, following the steps above
    return 0;
}
