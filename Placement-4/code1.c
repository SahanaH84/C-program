#include <stdio.h>

int main()
{
    int mat[3][3], i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nEnter the value for %d-row %d-column:", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n\nThe matrix is:\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}