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
    printf("please enter your age:\n");
    scanf("%u", &age);
    printf("your age is: %u\n", age);

    return 0;
}
