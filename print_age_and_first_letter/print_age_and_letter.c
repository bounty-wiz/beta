/*
 * @file print_age.c
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
    printf("please enter your age and first letter of your name:\n");
    scanf("%u %c", &age, &letter);
    printf("your age is: %u and first letter is %c\n", age, letter);
    
    return 0;
}
