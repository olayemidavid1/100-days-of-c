/*
 * Day 67/100: LRU cache
 * Phase: Algorithms in action
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: caches, eviction policy, timestamps
 *
 * STEPS:
 *   1. Simple version: arrays of key, value, last_used for capacity N
 *   2. get(key) updates last_used = ++clock; put(key, value) evicts the entry with the smallest last_used when full
 *   3. Print hits and misses for a sequence of requests
 *
 * STRETCH GOAL: O(1) version: hash table + doubly linked list
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
