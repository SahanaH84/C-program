#include <stdio.h>
#include <limits.h>
void getSubArr(int *arr, int start, int end)
{
    int temp[100];
    int ind = 0;
    for (int i = start; i <= end; i++)
        printf(" %d ", arr[i]);
}
int findSum(int *arr, int start, int end)
{
    int sum = 0;
    for (int i = start; i <= end; i++)
        sum += arr[i];
    return sum;
}
int main()
{
    int i = 0, j = 0;
    int arr[100], size = 0;
    printf("Enter the size of arr : ");
    scanf("%d", &size);
    printf("\nEnter array elements : ");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    int max_found = INT_MIN;
    for (int start = 0; start < size; start++)
    {
        for (int end = start; end < size; end++)
        {
            int temp = findSum(arr, start, end);
            max_found = max_found > temp ? max_found : temp;
        }
    }
    for (int start = 0; start < size; start++)
    {
        for (int end = start; end < size; end++)
        {
            int temp = findSum(arr, start, end);
            if (temp == max_found)
                getSubArr(arr, start, end);
        }
    }
}