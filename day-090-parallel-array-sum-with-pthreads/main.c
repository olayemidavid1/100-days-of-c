/*
 * Day 90/100: Parallel array sum with pthreads
 * Phase: Systems and parsing
 *
 * Build: gcc -Wall -Wextra -o main main.c -pthread
 * Run:   ./main
 *
 * YOU WILL PRACTISE: threads: pthread_create/join, splitting work (compile with -pthread)
 *
 * STEPS:
 *   1. Make an array of 10 million ints and fill it
 *   2. struct Args { int *a; long start, end; long sum; };
 *   3. Create 4 threads, each summing a chunk, then join them and add the partial sums
 *   4. Time it against a single-threaded sum with clock_gettime
 *
 * STRETCH GOAL: Add a shared counter without a mutex to see a race condition, then fix it with pthread_mutex_t
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
