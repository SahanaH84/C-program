#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[20], num[20], ch;
    int i, n = 1, j, k;
    printf("Enter the string:");
    scanf("%s", &str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= '0' && str[i] <= '9' && str[i + 1] >= 'a' && str[i + 1] <= 'z' || str[i] >= '0' && str[i] <= '9' && str[i + 1] == '\0')
        {
            num[j] = str[i];
            int n = atoi(num);
            memset(num, '\0', sizeof(num));
            for (k = 0; k < n; k++)
            {
                printf("%c", ch);
            }
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            ch = str[i];
            j = 0;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            num[j] = str[i];
            j++;
        }
    }
    return 0;
}