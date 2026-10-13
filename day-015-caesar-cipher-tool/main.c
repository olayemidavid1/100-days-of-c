/*
 * Day 15/100: Caesar cipher tool
 * Phase: Text and simple games
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: char arithmetic, modulo, ctype.h
 *
 * STEPS:
 *   1. Read the text and a shift number
 *   2. For each letter: base = isupper(c) ? 'A' : 'a';  c = (c - base + shift) % 26 + base;
 *   3. Leave non-letters unchanged. Decrypt = encrypt with 26 - shift
 *
 * STRETCH GOAL: Brute-force: print the text for all 25 shifts
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
