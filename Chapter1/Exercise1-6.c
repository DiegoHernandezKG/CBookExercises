#include <stdio.h>
int main()
{
    int c;
    c = (getchar() != EOF);
    printf("%d\n",c);
    if (c == 0)
        puts("0");
    else if(c == 1)
        puts("1");
    return 0;
}