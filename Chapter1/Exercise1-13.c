/*
Write a program to print a histogram of the lengths of words in 
its input. It is easy to draw
the histogram with the bars horizontal;
a vertical orientation is more challenging.
*/
#include <stdio.h>

int main()
{
    int c,i,count,j;
    int wordlength[45];
    for (i = 0; i < 45; ++i)
    {
        wordlength[i] = 0;
    }
    count = 0;
    while((c = getchar())!=EOF)
    {
        if(c != ' ' && c != '\n' && c != '\t')
        {
            count++;
        }
        else
        {
            wordlength[count] += 1;
            count = 0;
        }
    }
    for (i=0;i < 45; ++i)
    {
        printf("%d ",i);
        for(j = 0; j<wordlength[i];++j)
            putchar('*');
        printf("\n");
    }
       
}