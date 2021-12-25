/**
  * @file celsius_to_kelvin.c
  * @brief converts celsius to kelvin
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
  * Converts celsius to Kelvin
  *
  * @param celsius - celsius degree
  *
  * @return float - converted celsius to kelvin
  */
 float convert_celsius_to_kelvin(float celsius)
 {
     float kelvin = celsius + 273.15;;

     return kelvin;
 }

 int main()
 {
     float celsius;
     printf("write celsius degrees you want to convert to kelvin\n");
     scanf("%f", &celsius);
     printf("%f in kelvin is: %f K\n", celsius, convert_celsius_to_kelvin(celsius));

     return 0;
 }
