/*
 * Day 2/100: Simple calculator (+ - * / with a menu)
 * Phase: Mini tools
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: switch statement, char input, operators
 *
 * STEPS:
 *   1. Read two doubles and an operator char (note the space in scanf(" %c", &op))
 *   2. switch (op) with a case for + - * /
 *   3. Guard against dividing by zero before you divide
 *
 * STRETCH GOAL: Wrap it in a loop so the user can keep calculating until they type q
 */

#include <stdio.h>
#include <stdlib.h>

double calculate(double num1, double num2, char operator);

int main(int argc, char *argv[])
{
    double num1, num2, calc;
    char operator;

    if (argc != 4)
    {printf("Wrong amount of arguments, please try again:");
        return 1;
    }
    num1 = atof(argv[1]);
    operator = (argv[2][0]);
    num2 = atof(argv[3]);


calc  = calculate(num1, num2, operator);
    printf("%f\n", calc);



    return 0;
}


double calculate(double num1, double num2, char operator)
{
   if (operator == '+')
       return num1+num2;
   else if (operator == '-')
       return num1 - num2;

   else if (operator == '/' && num2 != 0)
       return num1 / num2;

   else if (operator == '*')
       return num1 * num2;

   else
   {
       printf("Please enter a correct operator:");
       return 1;
   }


}
