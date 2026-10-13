/*
 * Day 61/100: Hash table library
 * Phase: Algorithms in action
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: hashing, linked-list chaining
 *
 * STEPS:
 *   1. Node *table[101]; hash(str): h = h*33 + c (djb2) then % 101
 *   2. insert(key, value), get(key), remove(key). Collisions go into the bucket's linked list
 *   3. Test with 1000 random keys and print the longest chain length
 *
 * STRETCH GOAL: Resize and rehash when entries > 0.75 * buckets
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
