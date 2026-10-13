/*
 * Day 66/100: CPU scheduler simulator (FCFS, round robin)
 * Phase: Algorithms in action
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: structs, queues, simulation
 *
 * STEPS:
 *   1. struct Process { int pid, arrival, burst, remaining; };
 *   2. FCFS: sort by arrival; waiting = start - arrival; turnaround = finish - arrival
 *   3. Round robin: queue + time quantum (e.g. 2); run each for min(quantum, remaining)
 *   4. Print each process and the average waiting time for both methods
 *
 * STRETCH GOAL: Add Shortest Job First and compare
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
