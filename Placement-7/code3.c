#include <stdio.h>
int main()
{
    int removeDuplicates(int arr[], int n)
    {
        if (n == 0 || n == 1)
        {
            return n;
        }
        int i, j = 0;
        for (i = 0; i < n - 1; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                arr[j++] = arr[i];
            }
        }
        arr[j++] = arr[n - 1];
        return j;
    }
    int n, m, i, j, k;
    printf("Enter the size of array-1:");
    scanf("%d", &n);
    int arr1[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the value for Element-%d:", i + 1);
        scanf("%d", &arr1[i]);
    }
    n = removeDuplicates(arr1, n);
    printf("Enter the size of array-2:");
    scanf("%d", &m);
    int arr2[m];
    for (i = 0; i < m; i++)
    {
        printf("Enter the value for Element-%d:", i + 1);
        scanf("%d", &arr2[i]);
    }
    m = removeDuplicates(arr2, m);
    i = 0;
    j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            printf("%d", arr1[i++]);
        }
        else if (arr2[j] < arr1[i])
        {
            printf("%d", arr2[j++]);
        }
        else if (arr1[i] == arr2[j])
        {
            printf("%d", arr1[i++]);
            j++;
        }
    }
    if (i < n)
    {
        for (k = i; k < n; k++)
        {
            printf("%d", arr1[k]);
        }
    }
    else if (j < m)
    {
        for (k = j; k < m; k++)
        {
            printf("%d", arr2[k]);
        }
    }
    return 0;
}