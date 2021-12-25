/**
 * @file celsius_to_fahrenheit.c
 * @brief converts celsius to fahrenheit
 *
 * 
 *
 * version log
 * ------------
 * version 0.1.0 by bounty_wiz, 25.12.2021
 *
 */

#include <stdio.h>

/**
 * Converts celsius to Fahrenheit
 *
 * @param celsius - celsius degree
 *
 * @return float - converted celsius to fahrenheit
 */
float convert_celsius_to_fahrenheit(float celsius)
{
    float fahrenheit = (celsius * 1.8) + 32;

    return fahrenheit;
}

int main()
{
    float celsius;
    printf("write celsius degrees you want to convert to fahrenheit\n");
    scanf("%f", &celsius);
    printf("%f in fahrenheit is: %f\n", celsius, convert_celsius_to_fahrenheit(celsius));

    return 0;
}
