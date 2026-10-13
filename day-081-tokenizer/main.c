/*
 * Day 81/100: Tokenizer
 * Phase: Systems and parsing
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: enums, structs, scanning characters
 *
 * STEPS:
 *   1. enum TokenType { NUM, PLUS, MINUS, STAR, SLASH, LPAREN, RPAREN, END };
 *   2. struct Token { enum TokenType type; double value; };
 *   3. Token next_token(const char **p): skip spaces, then read a number with strtod or one operator char
 *   4. Loop printing every token of "3 + 4*(2-1)"
 *
 * STRETCH GOAL: Report an error with the character position for unknown symbols
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
