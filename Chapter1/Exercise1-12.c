/*
Write a program that prints its input one word per line
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
        if (c != ' ' && c != '\n' && c != '\t')
        {
            state = IN;
            putchar(c);
        }
        else
        {
            if(state != OUT)
            {
                state = OUT;
                putchar('\n');
            }
        }
    }
}
