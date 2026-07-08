#include <stdio.h>

int main(void)
{
    int n;

    //Keep asking until the user enters a non negative number
    do
    {
        printf("What's n? \n");
        scanf("%d",&n);
    }
        
    while(n<0);

    // Print "Mooo" n times
     for (int i = 0;i<n;i++)
    {
        printf("Mooo\n");
    }

    return 0;
}
