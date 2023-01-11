/*
Write a program to copy its input to its output,
replacing each string of one or more blanks by a single blanks
*/

#include <stdio.h>
#define IN 1
#define OUT 0

int main()
{
    int c;
    int state;
    state = OUT;
    while((c = getchar()) != EOF)
    {
        if(c != ' ')
        {
            state = IN;
            putchar(c);
        }
        else if (c == ' ')
        {   
            if(state != OUT)
                putchar(' ');
                state = OUT;
        }
    }
    return 0;
}