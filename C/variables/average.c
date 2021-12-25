/**
 * @file <average>.c
 * @brief calculate average of kid.
 *
 * 
 *
 * version log
 * ------------
 * version 0.1.0 by <author>, 25.12.2021
 *
 */

#include <stdio.h>

#define NUM_OF_GRADES 5

int main()
{
    unsigned int grades[NUM_OF_GRADES] = {78, 84, 45, 97, 64};
    float average = 0;

    for (int i = 0; i< NUM_OF_GRADES; i++) {
        average += grades[i];
    }
    average /= NUM_OF_GRADES;
    printf("average grade is: %f \n", average);

    return 0;
}

