/*
 * Day 79/100: XOR file encryptor
 * Phase: Files and command-line tools
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: bitwise XOR, byte-level file I/O
 *
 * STEPS:
 *   1. Usage: ./xor key infile outfile
 *   2. For each byte c read with fgetc: out = c ^ key[i % keylen]; write with fputc
 *   3. XOR twice with the same key gives the original back. Test that
 *
 * STRETCH GOAL: Print the file as hex so you can see the scrambled bytes
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    (void)argc; (void)argv;  // remove these once you use them
    // TODO: write your code here, following the steps above
    return 0;
}
