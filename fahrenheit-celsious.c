#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* print Fahrenheit-Celsius table */
int main()
{
    // Table Header
    printf(" Fahrenheit\tCelsius\n");
    printf("-----------------------\n");

    float fahr = LOWER;
    while (fahr <= UPPER)
    {
        const float celsius = 5.0/9.0 * (fahr-32);
        printf("\t%3.0f\t %6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }
}