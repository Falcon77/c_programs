#include <stdio.h>
#include <stdlib.h>



int temp2() 
{
    CountWords();
}

CountWords()
{
#define IN 1     /* inside a word */
#define OUT 0    /* outside a word */
    
    int c, nl, nw, nc, state;
    
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c =='\n')
            ++nl;
        if (c ==' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}

CountLines()
{
    /* count lines in input */
    
    int c, nl;
    
    nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n'){
            ++nl;
        }
    }
    printf("%d\n", nl);
        
}

CountChars2()
{
    /* count characters in input; 2nd version */
    
    double nc;
    
    for (nc = 0; getchar() != EOF; ++nc)
        ;
        printf("%.0f\n", nc);
}

CountChars1()
{
    /* count characters in input; 1st version*/
    long nc;
    
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%1d\n", nc);
}

CopyVer2()
{
    /* copy input to output; 2nd version*/
    int c;
    
    while((c=getchar()) != EOF)
        putchar(c);
}

CopyVer1()
{
    /* copy input to output; 1st version */
    int c;
    
    c = getchar();
    while (c!= EOF)
    {   
        putchar(c);
        c = getchar();
    }
}
