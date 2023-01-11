 #include <stdio.h>
 /* count lines in input */
 int main()
 {
    int c, nl, t, b;
    nl = 0;
    t = 0;
    b = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        else if (c== '\t')
            ++t;
        else if (c == ' ')
            ++b;
    printf("Spaces: %d Tabs: %d NewLines: %d\n",b,t,nl);
 } 
