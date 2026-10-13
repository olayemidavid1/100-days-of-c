/*
 * Day 97/100: Mini `malloc` allocator
 * Phase: Data science flavour and capstone
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: memory layout, pointers, headers
 *
 * STEPS:
 *   1. static char heap[1 << 16]; each block starts with a header {size_t size; int free; struct Header *next;}
 *   2. my_malloc(n): find the first free block big enough (first-fit); split it if much bigger
 *   3. my_free(p): mark the block free and merge with a free neighbour
 *   4. Write a dump_heap() that prints every block so you can see what happens
 *
 * STRETCH GOAL: Handle alignment (round sizes up to a multiple of 8)
 */

#include <stdio.h>
#include <stddef.h>
#include <stdint.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
