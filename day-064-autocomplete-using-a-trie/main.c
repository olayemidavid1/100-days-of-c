/*
 * Day 64/100: Autocomplete using a trie
 * Phase: Algorithms in action
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: trie, recursion
 *
 * STEPS:
 *   1. typedef struct TrieNode { struct TrieNode *child[26]; int end; } TrieNode;
 *   2. insert(word) walks/creates one node per letter and sets end = 1 on the last
 *   3. search(word) and starts_with(prefix)
 *   4. Autocomplete: walk to the prefix node, then DFS to print every word below it
 *
 * STRETCH GOAL: Return only the 5 most common completions
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
