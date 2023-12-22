#include <stdio.h>
#include <string.h>
int main()
{
    void func(char s[], int cons, int var)
    {
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] == ' ')
            {
                printf("*");
                for (int j = 0; j < cons; j++)
                {
                    printf("*");
                }
                if (var > 0)
                {
                    printf("*");
                    var--;
                }
            }
            else
            {
                printf("%c", s[i]);
            }
        }
    }
    char s[] = "Welcome to zoho corporation";
    int rem_length1, rem_length2, i, j, count = 0, cons, var;
    rem_length1 = 34 - strlen(s);
    rem_length2 = 36 - strlen(s);
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
        {
            count++;
        }
    }
    cons = rem_length1 / count;
    var = rem_length1 % count;
    func(s, cons, var);
    printf("\n");
    cons = rem_length2 / count;
    var = rem_length2 % count;
    func(s, cons, var);
    return 0;
}