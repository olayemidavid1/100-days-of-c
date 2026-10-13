/*
 * Day 93/100: Matrix library (determinant, inverse)
 * Phase: Data science flavour and capstone
 *
 * Build: gcc -Wall -Wextra -o main main.c -lm
 * Run:   ./main
 *
 * YOU WILL PRACTISE: structs, dynamic 2D data, linear algebra (compile with -lm)
 *
 * STEPS:
 *   1. typedef struct { int rows, cols; double *data; } Matrix; element (i, j) = data[i*cols + j]
 *   2. mat_create, mat_free, mat_multiply, mat_transpose
 *   3. Determinant by Gaussian elimination; inverse by Gauss-Jordan on [A | I]
 *   4. Check A * inverse(A) is the identity
 *
 * STRETCH GOAL: Solve Ax = b
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
