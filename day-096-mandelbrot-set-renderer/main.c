/*
 * Day 96/100: Mandelbrot set renderer
 * Phase: Data science flavour and capstone
 *
 * Build: gcc -Wall -Wextra -o main main.c -lm
 * Run:   ./main
 *
 * YOU WILL PRACTISE: complex-number iteration, image output (compile with -lm)
 *
 * STEPS:
 *   1. For each pixel (px, py) map to a point c = (x0, y0) in the range x -2..1, y -1..1
 *   2. x = y = 0; iterate: xt = x*x - y*y + x0; y = 2*x*y + y0; x = xt; until x*x + y*y > 4 or 100 iterations
 *   3. Colour the pixel by the iteration count
 *   4. Write it out as a PPM (Day 95)
 *
 * STRETCH GOAL: Add zoom parameters from argv
 */

#include <stdio.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
