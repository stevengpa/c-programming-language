#include <stdio.h>

int main()
{
    // Solution A
    // long nc = 0;
    // while (getchar() != EOF)
    //     ++nc;

    // Solution B
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;

    printf("%.0f\n", nc);
}