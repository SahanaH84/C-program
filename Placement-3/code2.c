#include <stdio.h>
int main()
{
    int i, num, start, count = 0;
    printf("Enter the size of array:");
    scanf("%d", &num);
    int arr[num];
    for (i = 0; i < num; i++)
    {
        printf("Enter the value of Element-%d:", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    start = arr[0];
    for (i = 0; i < num; i++)
    {
        if (start == arr[i])
        {
            count++;
        }
        else
        {
            if (count > 1)
            {
                printf("%d->%d,", start, count);
            }
            start = arr[i];
            count = 1;
        }
    }
    if (count > 1)
    {
        printf("%d->%d", start, count);
    }
    return 0;
}