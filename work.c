#include <stdio.h>
#include <stdlib.h>



int temp2() 
{
    CopyVer2();
}

CopyVer2()
{
    /* copy input o output; 2nd version*/
    int c;
    
    while((c=getchar()) != EOF)
        putchar(c);
}

CopyVer1()
{
    /* copy input o output; 1st version */
    int c;
    
    c = getchar();
    while (c!= EOF)
    {   
        putchar(c);
        c = getchar();
    }
}
