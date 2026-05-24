#include <stdio.h>

int nstrlen(char s[]);

int main()
{
    printf("%d", nstrlen("Road"));
}

int nstrlen(const char s[])
{
    int i = 0;
    while (s[i] != '\0')
        ++i;

    return i;
}