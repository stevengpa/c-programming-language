#include <stdio.h>

int natoi(char s[]);

int main()
{
    printf("%d", natoi("150"));
}

int natoi(char s[])
{
    int n = 0;
    for (int i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}