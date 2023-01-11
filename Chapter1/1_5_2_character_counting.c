#include <stdio.h>
/*
Character counting program
*/
int main()
{
    long nc;
    nc = 0;
    while(getchar() != EOF)
        ++nc;
    printf("%1d\n",nc);

}