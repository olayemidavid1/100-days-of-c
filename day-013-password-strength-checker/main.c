/*
 * Day 13/100: Password strength checker
 * Phase: Text and simple games
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: strings, ctype.h functions
 *
 * STEPS:
 *   1. Read the password with fgets or scanf("%s")
 *   2. Loop over each char: isupper, islower, isdigit, ispunct set flags
 *   3. Score: length >= 8, plus one point per flag set. Print Weak / OK / Strong
 *
 * STRETCH GOAL: Reject passwords found in a small list of common ones
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
