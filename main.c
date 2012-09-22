/* 
 * File:   main.c
 * Author: suerof
 *
 * Created on September 20, 2012, 1:57 PM
 */

#include <stdio.h>
#include <stdlib.h>
//#include <fahr.c>

/*
 * Main will run all exercises. 
 */
int main(int argc, char** argv) {

    exercise1_5();
    return (EXIT_SUCCESS);
}

int temp() 
{
    //
}

int exercise1_5()
{
    /* Excercise 1.5 */
    int fahr;
    
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    
}
int exercise1_4()
{
    float fahr, celsius;
    float lower, upper, step;
    
    lower = 0;          /* lower limit of temp scale */
    upper = 100;        /* upper limit */
    step = 10;          /* step size */
    
    celsius = lower;
    printf("Celsius   Fahr\n-----------------\n");
    while (celsius < upper)
    {
        fahr = (celsius * 9.0 / 5.0) + 32;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    
}

int exercise1_3()
{
    float fahr, celsius;
    float lower, upper, step;
    
    lower = 0;          /* lower limit of temperature scale */
    upper = 300;        /* upper limit */
    step = 20;          /* step size */
    
    fahr = lower;
    printf("Fahr       Cel\n-----------------\n");
    
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

int exercise1_2()
{
    float fahr, celsius;
    float lower, upper, step;
    
    lower = 0;          /* lower limit of temperature scale */
    upper = 300;        /* upper limit */
    step = 20;          /* step size */
    
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

int exercise1_1()
{
    printf("hello, world!");
}