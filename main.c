/* 
 * File:   main.c
 * Author: suerof
 *
 * Created on September 20, 2012, 1:57 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Main will run all exercises. 
 */
int main(int argc, char** argv) {

    temp2();
    //exercise1_10();
    return (EXIT_SUCCESS);
}

int temp() 
{
    // Copy input to output; 1st version
}

int exercise1_10()
{
    int c;
    
    while ((c = getchar()) != EOF)
    {
        if ((c != '\t') && (c != '\b') && (c != '\\'))
                putchar(c);
        
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        
        if (c == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        
        if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        
    }
}

int exercise1_9()
{
    int c, i;
    
    i = 0;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
        {
            putchar(c);
            i = 0;
        }
        else if (c == ' ')
        {
            ++i;
            if (i < 2)
            {
                putchar(c);
            }
        }
    }
}

int exercise1_8()
{
    int sp, nl, nt;
    int c;
    
    sp = 0;
    nl = 0;
    nt = 0;
    
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++sp;
        if (c == '\t')
            ++nt;
        if (c == '\n')
            ++nl;
    }
    printf("spaces: %d\ntabs: %d\nnew lines:%d", sp, nt, nl);
}

int exercise1_7()
{
    int i;
    i = EOF;
    printf("The value of EOF is %d", i);   
}

int exercise1_6()
{
    int c;
    while (c = getchar() != EOF)
        printf("current value is %d\n", c);
    
    printf("Value when EOF is %d", c);   
}

int exercise1_5()
{
    /* Excercise 1.5 */
#define LOWER 0         /* lower limit of table */
#define UPPER 300       /* upper limit */
#define STEP 20         /* step size */
    
    int fahr;
    
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
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