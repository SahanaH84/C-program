#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int even = 2, odd = 1, i, j, max = 5, row = 5;
    for (i = 0; i < max; i++)
    {
        for (j = 0; j < max; j++)
        {
            if (row <= j + 1 && i % 2 == 0)
            {
                printf("%d", odd);
                odd += 2;
            }
            else if (row <= j + 1 && i % 2 != 0)
            {
                printf("%d", even);
                even += 2;
            }
            else
            {
                printf("*"); // I included star instead of space for better representation
            }
        }
        printf("\n");
        row--;
    }
}