#include <stdio.h>
#include <stdlib.h>

void main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("@@\n");
        }
        else
        {
            printf("@\n");
        }
    }
}