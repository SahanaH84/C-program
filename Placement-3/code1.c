#include <stdio.h>
int main()
{
    char c;
    int value;
    printf("Select the Shape:\nS - Square\nC - Circle");
    scanf("%c", &c);
    if (c == 'S')
    {
        printf("Enter the edge length of Square:");
        scanf("%d", &value);
        printf("Area of Square = %d", value * value);
    }
    else if (c == = 'C')
    {
        printf("Enter the radius of Circle:");
        scanf("%d", &value);
        printf("Area of Circle = %d", 3.14 * value * value);
    }
    else
    {
        printf("Select wisely");
    }
    return 0;
}