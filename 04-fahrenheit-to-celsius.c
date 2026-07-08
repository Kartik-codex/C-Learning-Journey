#include <stdio.h>

int main(void)
{
    int fahr, celsius;
    int upper = 400, lower = 0, step = 15;

    fahr = lower;

     printf("Fahrenheit\tCelsius\n");

    while(fahr<= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n ", fahr, celsius);
        fahr = fahr + step ;

    }

    return 0;
}
