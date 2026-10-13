/*
 * Day 86/100: Tiny shell (fork/exec)
 * Phase: Systems and parsing
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: processes: fork, execvp, waitpid
 *
 * STEPS:
 *   1. Loop: print a prompt, fgets a line, strip the newline
 *   2. Split into args with strtok and end with a NULL pointer
 *   3. Built-ins first: exit and cd (chdir)
 *   4. Otherwise pid = fork(); child calls execvp(args[0], args); parent calls waitpid(pid, NULL, 0)
 *
 * STRETCH GOAL: Support one pipe: ls | wc using pipe() and dup2()
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
    // TODO: write your code here, following the steps above
    return 0;
}
