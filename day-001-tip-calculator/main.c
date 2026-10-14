/*
 * Day 1/100: Tip calculator
 * Phase: Mini tools
 *
 * Build: gcc -Wall -Wextra -o main main.c
 * Run:   ./main
 *
 * YOU WILL PRACTISE: variables, float/double, scanf, printf formatting
 *
 * STEPS:
 *   1. Ask for the bill amount and tip percentage (scanf with %lf)
 *   2. tip = bill * percent / 100;  total = bill + tip;
 *   3. Print both using %.2f so you get 2 decimal places
 *
 * STRETCH GOAL: Split the total between N people
 */

#include <stdio.h>


int main(void)
{
    double bill, tip, percentage, total;
    char answer;
    double N = 1;



    printf("Enter bill amount: ");
    scanf("%lf",&bill);


    printf("Enter tip percentage: ");
    scanf("%lf", &percentage);


            printf("Do you wish to split the bill?(Type Y/N):");
            scanf(" %c", &answer);

            if (answer == 'y' || answer == 'Y')
            {
                printf("How many people would you like to split with: \n");
                scanf("%lf", &N);
                bill = bill / N;
            }
            else if ( answer == 'n' || answer == 'N')
            {
                printf("Please pay amount below! \n");
            }
            else
            {
                printf("Please enter (Y/N): \n");
            }






    percentage = percentage / 100;
    tip = bill*percentage;


    total=bill+tip;

    printf("Your bill is %.2f, the total amount due is %.2f\n", bill, total);



    return 0;
}
