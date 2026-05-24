#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Char            \t%d-%d\n", CHAR_MIN, CHAR_MAX);
    printf("Unsigned Char   \t%u-%u\n", 0, UCHAR_MAX);
    printf("Short           \t%d-%d\n", SHRT_MIN, SHRT_MAX);
    printf("Unsigned Short  \t%u-%u\n", 0, USHRT_MAX);
    printf("Int             \t%d-%d\n", INT_MIN, INT_MAX);
    printf("Unsigned Int    \t%u-%u\n", 0, UINT_MAX);
    printf("Long            \t%ld-%ld\n", LONG_MIN, LONG_MAX);
    printf("Unsigned Long   \t%u-%lu\n", 0, ULONG_MAX);
}