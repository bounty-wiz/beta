/**
 * @file print_age_and_letter.c
 * @brief get person age as input and prints it
 *
 * 
 *
 * version log
 * ------------
 * version 0.1.0 by bounty_wiz, 25.12.2021
 *
 */

#include <stdio.h>

int main()
{
    unsigned int age;
    char letter;
    printf("please enter your age:\n");
    scanf("%u", &age);
    printf("please enter first letter of your name:\n");
    fflush(stdin);
    scanf("%c", &letter);
    printf("your age is: %u and first letter is %c\n", age, letter);

    return 0;
}
