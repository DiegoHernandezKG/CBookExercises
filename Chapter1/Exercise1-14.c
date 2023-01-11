#include <stdio.h>

int main()
{
    int c,i;
    char letters[26];
    char Cletters[26];
    for (i=0;i<26;++i)
    {
        Cletters[i] = 'A' + i;
        letters[i] = 'a' + i;
    }
    for (i=0;i<26;++i)
    {
        printf("%c",letters[i]);
    }
    putchar('\n');
    for (i=0;i<26;++i)
    {
        printf("%c",Cletters[i]);
    }
    return 0;
}