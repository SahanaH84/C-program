#include <stdio.h>

int main()
{
    int size, i;
    printf("Enter the size of digit:");
    scanf("%d", &size);
    int arr[size + 1];
    arr[0] = 0;
    for (i = 1; i < size + 1; i++)
    {
        printf("Enter digit from left to right:");
        scanf("%d", &arr[i]);
    }
    if (arr[0] == 0)
    {
        printf("[");
        for (i = 1; i < size; i++)
        {
            printf("%d,", arr[i]);
        }
        printf("%d]", arr[size]);
    }
    if (arr[size] == 9)
    {
        arr[size] = 0;
        for (i = size - 1; i >= 0; i--)
        {
            if (arr[i] == 9)
            {
                arr[i] = 0;
            }
            else
            {
                arr[i] += 1;
                break;
            }
        }
    }
    else
    {
        arr[size] += 1;
    }
    printf("\n");
    if (arr[0] == 0)
    {
        printf("[");
        for (i = 1; i < size; i++)
        {
            printf("%d,", arr[i]);
        }
        printf("%d]", arr[size]);
    }
    else
    {
        printf("[");
        for (i = 0; i < size; i++)
        {
            printf("%d,", arr[i]);
        }
        printf("%d]", arr[size]);
    }
    return 0;
}