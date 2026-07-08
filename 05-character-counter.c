#include <stdio.h>

// character counting in input line 

int main(void)
{
    long nc = 0; 
    int c;   // must be int to hold EOF

    while ((c = getchar()) != EOF)
    {
        nc++;
    }

    printf("Total characters: %ld\n", nc);

    return 0;
}
