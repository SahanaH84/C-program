#include <stdio.h>
int main()
{
    int N, i, val = 0;
    printf("Enter the size of the array:");
    scanf("%d", &N);
    int arr[N], seen[N];
    for (i = 0; i < N; i++)
    {
        seen[i] = 0;
    }
    for (i = 0; i < N; i++)
    {
        printf("Enter the value of element %d:", i + 1);
        scanf("%d", &arr[i]);
        seen[arr[i]]++;
    }
    for (i = 0; i < N; i++)
    {
        if (seen[i] > 1)
        {
            printf("%d", i);
            val++;
        }
    }
    if (val == 0)
    {
        printf("-1");
    }
    return 0;
}