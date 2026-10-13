/*
 * Day 94/100: Perceptron that learns AND/OR
 * Phase: Data science flavour and capstone
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: machine learning basics, loops, weights
 *
 * STEPS:
 *   1. Weights w1, w2, bias b start at 0. output = (w1*x1 + w2*x2 + b > 0) ? 1 : 0
 *   2. Training: error = target - output; w1 += lr*error*x1; w2 += lr*error*x2; b += lr*error
 *   3. Train on the AND truth table for ~20 epochs and print the weights
 *   4. Try OR, then try XOR and see why a single perceptron cannot learn it
 *
 * STRETCH GOAL: Print the error per epoch to watch it converge
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
